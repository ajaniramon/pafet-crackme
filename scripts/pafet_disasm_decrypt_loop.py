#!/usr/bin/env python3
"""Disassemble the two decrypt loops of Pafet's VMs.

Script-VM decrypt loop: starts around VA 0x14038db81 (file offset 0x38cf81)
Cipher-VM decrypt loop:  starts around VA 0x1400c06c1 (file offset 0xbfac1)
"""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE_PATH, 'rb').read()

pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections = []
nsec = struct.unpack_from('<H', d, pe+6)[0]
for i in range(nsec):
    off = sec_tbl + 40*i
    name = d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs, va, rs, rp = struct.unpack_from('<IIII', d, off+8)
    sections.append((name, va, vs, rp, rs))

def va_to_fo(va):
    for name, sva, svs, rp, rs in sections:
        v0 = image_base + sva; v1 = v0 + max(svs, rs)
        if v0 <= va < v1: return rp + (va - v0)
    raise ValueError(va)

md = Cs(CS_ARCH_X86, CS_MODE_64)
md.detail = True

def dis_range(start_va, nbytes, label):
    print(f'\n{"="*70}')
    print(f'=== {label}: VA 0x{start_va:x} .. +{nbytes} bytes')
    print(f'{"="*70}')
    fo = va_to_fo(start_va)
    code = d[fo:fo+nbytes]
    for ins in md.disasm(code, start_va):
        # highlight likely XOR/MUL/MOV imm/mov [], etc.
        mark = ''
        if ins.mnemonic == 'xor': mark = '  <-- xor'
        if ins.mnemonic in ('imul','mul'): mark = '  <-- mul'
        if 'rip' in ins.op_str: mark += '  [rip-rel]'
        if ins.mnemonic.startswith('j') and ins.mnemonic != 'jmp': mark += '  <-- cond'
        imms = [str(op.imm) if op.type == 2 else '' for op in ins.operands]
        print(f'  0x{ins.address:x}: {ins.mnemonic:<7} {ins.op_str}{mark}')

# Context: start earlier so we see the prologue of the loop
# Script-VM decrypt: lea at 0x14038db81; back up ~24 to see initialization
dis_range(0x140002040, 80, 'mix() @ 0x140002040 — verify fmix64')
dis_range(0x14038db40, 240, 'SCRIPT-VM attestation + init (around 0x14038db81)')
# Also look later for an actual byte-read of the bytecode via dec[]/seg_apply
# Search for every CALL target from the script-VM function (helps identify helpers)
print("\n\n=== Script-VM calls dump (first 60 within 0x14038d9d0..+0x4000) ===")
md2 = Cs(CS_ARCH_X86, CS_MODE_64); md2.detail = True
fo = va_to_fo(0x14038d9d0)
blob = d[fo:fo+0x4000]
calls = {}
for ins in md2.disasm(blob, 0x14038d9d0):
    if ins.mnemonic == 'call' and ins.op_str.startswith('0x'):
        tgt = int(ins.op_str, 16)
        calls.setdefault(tgt, []).append(ins.address)
import operator
sorted_calls = sorted(calls.items(), key=lambda kv: len(kv[1]), reverse=True)
for tgt, sites in sorted_calls[:20]:
    print(f'   -> 0x{tgt:x}  ({len(sites)} calls)   first sites: {[hex(s) for s in sites[:3]]}')

# Dump the segment-decode helpers: look for cross-reference pattern used by seg_apply
# which typically does `byte[rdi+rbx] ^= k` -> opcode 30 ... or 32 r8, r/m8
# Scan a bigger range after attestation for the opcode fetch pattern:
# look for `movzx eax, byte ptr [rsi+rcx]` + `xor al, <imm8>` + `movzx eax, byte ptr [rip+disp]`
print("\n\n=== look for opcode-fetch pattern in script-VM (0f b6 ... 32 ... 0f b6 [rip+disp]) ===")
# Scan the whole script-VM function body for `0f b6 ?? ?? 32 ?? 0f b6` subsequences.
for i in range(len(blob)-16):
    if blob[i] == 0x0F and blob[i+1] == 0xB6:
        # movzx r, byte [...]  -> variable length; look for pattern of XOR with imm8 and another movzx [rip+disp32]
        snippet = blob[i:i+32]
        # heuristic: contains '0f b6 ... 32 ... 0f b6'
        if snippet.count(b'\x0f\xb6') >= 2 and b'\x80\xf1' in snippet[:16]:   # 80 f1 imm8 = xor cl, imm8
            va_here = 0x14038d9d0 + i
            print(f'   candidate @ VA 0x{va_here:x}: {snippet.hex()}')

# Also disasm around the end of the attestation prologue
print("\n\n=== Disasm continuation after attestation (0x14038dc30 .. +400) ===")
dis_range(0x14038dc30, 400, 'script-VM continuation')
