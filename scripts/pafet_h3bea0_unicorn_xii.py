#!/usr/bin/env python3
"""Jack XII — Unicorn reemulation attempt for 0x14003bea0 (byte-0 atomic writer).

Status: FAIL (fault in nested helpers reading unmapped external buffers).
Captures: vm_pools_evidence/h3bea0_vectors_xii.json (5 alice + 5 ramon).

Observed faults:
  - alice: UC_ERR_READ_UNMAPPED at rip=0x140005bee (inside 0x140005b50
    xor-mask writer helper); addr around 0x28DDCD1E2CF3 (heap).
  - ramon: UC_ERR_READ_UNMAPPED at rip=0x140003baa (inside state_tick
    helper, part of 0x140003a50); addr around 0xFD928E5390 (heap).

Both fault addresses are heap allocations that live OUTSIDE the 8 KB
ctx snapshot. Reproducing byte-exact emulation of 0x14003bea0 requires
capturing those additional buffers (as Jack III did for 0x140003a50 by
also capturing explicit buf1_ptr+buf2_ptr+contents).

Next step for byte-by-byte x64 port of 0x14003bea0:
  1. Pre-run Frida to enumerate all memory addresses this handler
     actually reads during the alice trace.
  2. Capture those buffers (addr + size + contents) and add them to
     the vector JSON.
  3. Rerun this script with the extra buffers mapped. Unicorn should
     then PASS 3/3 and allow building a C++ port.
"""
import json, os, struct, sys
import pefile
from unicorn import *
from unicorn.x86_const import *

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
PE_PATH = os.path.join(REPO, 'pafet.bin')
VEC_PATH = os.path.join(REPO, 'vm_pools_evidence', 'h3bea0_vectors_xii.json')

IMG = 0x140000000
SENTINEL = 0xdeadbeef00000000
PAGE = 0x1000
pd = lambda a: a & ~(PAGE - 1)
pu = lambda a, sz: (a + sz + PAGE - 1) & ~(PAGE - 1)


def to_int(s):
    return int(s, 16) if isinstance(s, str) and s.startswith('0x') else int(s)


def emulate_one(before, after, extra_bufs=None):
    pe = pefile.PE(PE_PATH, fast_load=True)
    uc = Uc(UC_ARCH_X86, UC_MODE_64)
    for sec in pe.sections:
        va = IMG + sec.VirtualAddress
        sz = sec.Misc_VirtualSize
        s, e = pd(va), pu(va, sz)
        try:
            uc.mem_map(s, e - s, UC_PROT_ALL)
        except UcError:
            pass
        uc.mem_write(va, sec.get_data()[:sz])

    ctx_rcx = to_int(before['rcx'])
    rsp_orig = to_int(before['rsp'])
    ctx_bytes = bytes.fromhex(before['ctx_8k'])
    stk_bytes = bytes.fromhex(before.get('stack_1k', '')) if before.get('stack_1k') else b''

    try:
        s = pd(ctx_rcx); e = pu(ctx_rcx + len(ctx_bytes), 0)
        uc.mem_map(s, e - s, UC_PROT_READ | UC_PROT_WRITE)
    except UcError:
        pass
    uc.mem_write(ctx_rcx, ctx_bytes)
    if stk_bytes:
        s2 = pd(min(rsp_orig, rsp_orig - 0x4000))
        e2 = pu(rsp_orig + 0x4000, 0)
        try:
            uc.mem_map(s2, e2 - s2, UC_PROT_READ | UC_PROT_WRITE)
        except UcError:
            pass
        uc.mem_write(rsp_orig, stk_bytes)
    for addr, blob in (extra_bufs or []):
        try:
            s3 = pd(addr); e3 = pu(addr + len(blob), 0)
            uc.mem_map(s3, e3 - s3, UC_PROT_READ | UC_PROT_WRITE)
        except UcError:
            pass
        uc.mem_write(addr, blob)

    new_rsp = rsp_orig - 8
    uc.mem_write(new_rsp, struct.pack('<Q', SENTINEL))
    uc.reg_write(UC_X86_REG_RCX, ctx_rcx)
    uc.reg_write(UC_X86_REG_RDX, to_int(before['rdx']))
    uc.reg_write(UC_X86_REG_R8,  to_int(before['r8']))
    uc.reg_write(UC_X86_REG_R9,  to_int(before['r9']))
    uc.reg_write(UC_X86_REG_RBP, to_int(before['rbp']))
    uc.reg_write(UC_X86_REG_RSI, to_int(before['rsi']))
    uc.reg_write(UC_X86_REG_RDI, to_int(before['rdi']))
    uc.reg_write(UC_X86_REG_RBX, to_int(before['rbx']))
    uc.reg_write(UC_X86_REG_RSP, new_rsp)

    diag = {'violation': None}

    def on_invalid(u, access, addr, size, value, ud):
        diag['violation'] = (access, addr, size, u.reg_read(UC_X86_REG_RIP))
        return False

    uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED | UC_HOOK_MEM_WRITE_UNMAPPED | UC_HOOK_MEM_FETCH_UNMAPPED, on_invalid)

    try:
        uc.emu_start(0x14003bea0, SENTINEL, timeout=10_000_000, count=500_000)
    except UcError as e:
        rip = uc.reg_read(UC_X86_REG_RIP)
        return False, f'uc_err rip=0x{rip:x} violation={diag["violation"]} {e}'
    if uc.reg_read(UC_X86_REG_RIP) != SENTINEL:
        return False, f'did not reach sentinel rip=0x{uc.reg_read(UC_X86_REG_RIP):x}'
    final = bytes(uc.mem_read(ctx_rcx, len(ctx_bytes)))
    expected = bytes.fromhex(after['ctx_8k'])
    if final == expected:
        return True, 'byte-exact ctx'
    diffs = sum(1 for a, b in zip(final, expected) if a != b)
    return False, f'ctx {diffs}/{len(final)} bytes differ'


def main():
    caps = json.load(open(VEC_PATH))
    for label in ('alice', 'ramon'):
        print(f'\n=== {label} ===')
        for i, c in enumerate(caps[label]['vectors']):
            ok, msg = emulate_one(c['before'], c['after'])
            print(f'  cap#{i}: {"PASS" if ok else "FAIL"} - {msg}')


if __name__ == '__main__':
    main()
