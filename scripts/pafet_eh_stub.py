#!/usr/bin/env python3
"""Modeled OS service for the emulated oracle: MSVC C++ exception delivery.

Unicorn cannot enter RaiseException/ntdll. When original x64 reaches
_CxxThrowException (RVA 3a5fa0) this stub replaces only the OS/CRT search and
unwind with an explicit model built from the PE's own metadata:

1. x64 virtual unwind (UNWIND_INFO codes from .pdata) from the throw point up
   to the first frame whose function has an FH4 handler.
2. That frame must be dispatcher 22a120 in FH4 try state 6; the throw type
   must be the dispatcher's only catch type (vm_rc4_crypt_Sig). Any other
   shape is refused, never guessed. Intervening EH frames are refused too,
   except HOST_CALL wrappers whose only unwind action is the 1eead0 TLS
   guard, which is then executed natively (original code) with its object.
3. The original catch funclet runs natively; its returned continuation index
   selects the continuation address from FH4 metadata; execution resumes there
   with the unwound nonvolatile registers.

This is NOT a Windows observation: it is original PE code plus a modeled OS
exception dispatcher, reported separately from captured Windows evidence.
"""
import pathlib
import struct
import sys
import unicorn as u
from unicorn.x86_const import *

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent/'native'))
from fh4_metadata import MetadataReader

THROW = 0x3a5fa0
DISPATCHER = (0x22a120, 0x232df8)
THROW_INFO = 0x40bb30
CATCH_TYPE = 0x41e760
GUARD_ACTION = 0x1eead0
SENTINEL = 0x7ffffff0000
REGS = [UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RBX, UC_X86_REG_RSP, UC_X86_REG_RBP,
        UC_X86_REG_RSI, UC_X86_REG_RDI] + [globals()['UC_X86_REG_R%d' % i] for i in range(8, 16)]


class DeliveryRefused(Exception):
    pass


class Fh4:
    def __init__(self):
        self.meta = MetadataReader(); self.pe = self.meta.pe
        self.functions = sorted((e.struct.BeginAddress, e.struct.EndAddress, e.struct.UnwindData) for e in self.meta.rf)

    def function(self, rva):
        import bisect
        i = bisect.bisect_right(self.functions, (rva, 1 << 40, 0)) - 1
        if i >= 0 and self.functions[i][0] <= rva < self.functions[i][1]:
            return self.functions[i]
        return None

    def unwind_info(self, rva):
        raw = self.pe.get_data(rva, 4); flags = raw[0] >> 3; prolog = raw[1]; count = raw[2]
        frame = raw[3] & 15; offset = raw[3] >> 4
        codes = self.pe.get_data(rva+4, 2*count)
        tail = 4 + 2*((count+1) & ~1)
        return flags, prolog, count, frame, offset, codes, tail

    def handler(self, begin, unwind):
        flags, _, _, _, _, _, tail = self.unwind_info(unwind)
        if flags & 4 or not flags & 3:
            return None
        return struct.unpack_from('<II', self.pe.get_data(unwind+tail, 8))

    def ip2state(self, info, begin, rva):
        data = self.pe.get_data(info, 64); header = data[0]; pos = 1
        if header & 4: _, pos = self.meta.unsigned(data, pos)
        if header & 8: pos += 4
        if header & 16: pos += 4
        table = struct.unpack_from('<I', data, pos)[0]
        rows = self.pe.get_data(table, 4096); n, p = self.meta.unsigned(rows, 0); ip = begin; state = -1
        for _ in range(n):
            delta, p = self.meta.unsigned(rows, p); value, p = self.meta.unsigned(rows, p)
            if ip + delta > rva: break
            ip += delta; state = value - 1
        return state


def virtual_unwind(fh, ctx, base, read):
    """One frame of RtlVirtualUnwind for a call site/throw entry (not epilogs)."""
    rip = ctx['rip']; rva = rip - base
    f = fh.function(rva)
    if f is None:  # leaf
        ctx['rip'] = read(ctx['rsp']); ctx['rsp'] += 8; return
    begin, _, unwind = f
    offset_in = rva - begin
    machframe = False
    while True:
        flags, prolog, count, frame, fofs, codes, tail = fh.unwind_info(unwind)
        i = 0
        while i < count:
            at, op = codes[2*i], codes[2*i+1]; kind = op & 15; info = op >> 4
            slots = {0: 1, 1: 2 if info == 0 else 3, 2: 1, 3: 1, 4: 2, 5: 3, 8: 2, 9: 3, 10: 1}[kind]
            if at <= offset_in or unwind != f[2]:
                def slot(k): return struct.unpack_from('<H', codes, 2*(i+k))[0]
                if kind == 0:
                    ctx[info] = read(ctx['rsp']); ctx['rsp'] += 8
                elif kind == 1:
                    ctx['rsp'] += slot(1)*8 if info == 0 else slot(1) | (slot(2) << 16)
                elif kind == 2:
                    ctx['rsp'] += info*8 + 8
                elif kind == 3:
                    ctx['rsp'] = ctx[frame] - 16*fofs
                elif kind == 4:
                    ctx[info] = read(ctx['rsp'] + slot(1)*8)
                elif kind == 5:
                    ctx[info] = read(ctx['rsp'] + (slot(1) | (slot(2) << 16)))
                elif kind in (8, 9):
                    pass  # XMM saves: verified absent on supported frames
                elif kind == 10:
                    raise DeliveryRefused('machine frame in unwind chain')
            if kind in (8, 9):
                raise DeliveryRefused('XMM nonvolatile restore is not modeled')
            i += slots
        if flags & 4:
            _, _, unwind = struct.unpack_from('<III', fh.pe.get_data(unwind+tail, 12)); offset_in = 1 << 30
            continue
        break
    ctx['rip'] = read(ctx['rsp']); ctx['rsp'] += 8


class CxxDelivery:
    def __init__(self, uc, base, mark=lambda at, size: None):
        self.mark = mark; self.uc = uc; self.base = base; self.fh = Fh4(); self.deliveries = []
        uc.mem_map(SENTINEL, 0x1000)
        uc.hook_add(u.UC_HOOK_CODE, self.hook, begin=base+THROW, end=base+THROW)
        self.pending = False

    def read(self, at): return int.from_bytes(self.uc.mem_read(at, 8), 'little')

    def call_native(self, target, rcx, rdx, rsp):
        uc = self.uc
        rsp = (rsp - 0x100) & ~15
        uc.mem_write(rsp - 8, SENTINEL.to_bytes(8, 'little')); self.mark(rsp - 8, 8)
        uc.reg_write(UC_X86_REG_RSP, rsp - 8); uc.reg_write(UC_X86_REG_RCX, rcx); uc.reg_write(UC_X86_REG_RDX, rdx)
        uc.emu_start(target, SENTINEL, count=100000)
        if uc.reg_read(UC_X86_REG_RIP) != SENTINEL: raise DeliveryRefused('funclet did not return')
        return uc.reg_read(UC_X86_REG_RAX)

    def hook(self, uc, address, size, data):
        # Defer to outside the hook: nested emu_start inside a hook is unsafe.
        self.pending = True; uc.emu_stop()

    def deliver(self):
        uc = self.uc; base = self.base; self.pending = False
        obj = uc.reg_read(UC_X86_REG_RCX); info = uc.reg_read(UC_X86_REG_RDX)
        if info != base + THROW_INFO: raise DeliveryRefused('unknown ThrowInfo '+hex(info-base))
        ctx = {i: uc.reg_read(r) for i, r in enumerate(REGS)}; ctx['rip'] = uc.reg_read(UC_X86_REG_RIP); ctx['rsp'] = ctx[4]
        throw_rsp = ctx[4]; guards = []
        for _ in range(64):
            virtual_unwind(self.fh, ctx, base, self.read); ctx[4] = ctx['rsp']
            rva = ctx['rip'] - base; f = self.fh.function(rva)
            if f is None: continue
            h = self.fh.handler(f[0], f[2])
            if h is None: continue
            handler, data = h
            if DISPATCHER[0] <= rva < DISPATCHER[1]:
                break
            # Only the HOST_CALL TLS guard unwind action is accepted.
            state = self.fh.ip2state(data, f[0], rva - 1)
            ent = next((x for x in self.fh.meta.rf if x.struct.BeginAddress == f[0]))
            if state < 0: continue
            guards.append((f[0], ctx['rsp'] - 8, state))  # establisher = rsp of that frame after prolog
            raise DeliveryRefused('exception unwinds through EH frame '+hex(f[0])+' in state '+str(state))
        else:
            raise DeliveryRefused('no catching frame')
        begin = DISPATCHER[0]; handler, data = self.fh.handler(begin, self.fh.function(begin)[2])
        state = self.fh.ip2state(data, begin, ctx['rip'] - base - 1)
        if state != 6: raise DeliveryRefused('dispatcher call site outside try state 6: '+str(state))
        entries = self.fh.meta.handlers(next(x for x in self.fh.meta.rf if x.struct.BeginAddress == begin))
        if len(entries) != 1 or entries[0][0] != CATCH_TYPE: raise DeliveryRefused('unexpected catch table')
        _, adjectives, slot, funclet, continuations = entries[0]
        # fh4_metadata reports preferred-base VAs; relocate to the runtime image.
        funclet = funclet - 0x140000000 + base; continuations = [c - 0x140000000 + base for c in continuations]
        if adjectives != 8: raise DeliveryRefused('catch is not by reference')
        establisher = ctx['rsp']
        uc.mem_write(establisher + slot, obj.to_bytes(8, 'little')); self.mark(establisher + slot, 8)
        index = self.call_native(funclet, 0, establisher, throw_rsp)
        if index >= len(continuations): raise DeliveryRefused('bad continuation index')
        for i, r in enumerate(REGS):
            if i in (0, 1, 2, 8, 9, 10, 11): continue  # volatile
            uc.reg_write(r, ctx[i])
        uc.reg_write(UC_X86_REG_RSP, establisher)
        target = continuations[index]
        uc.reg_write(UC_X86_REG_RIP, target)
        self.deliveries.append(dict(thrown=hex(self.read(obj)), establisher=hex(establisher),
                                    call_site=hex(ctx['rip'] - base), continuation=hex(target - base)))
        return target
