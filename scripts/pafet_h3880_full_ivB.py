#!/usr/bin/env python3
"""Jack IV-B: validate 0x140003880 end-to-end 5/5 by replaying with the
captured rdx/r8/r9 arguments (the earlier emulate script defaulted them to 0).

Reads vm_pools_evidence/h3880_fullctx_ext_ivB.json (produced by
pafet_h3880_capture_args_ivB.py) and reproduces each capture.
"""
import json, os, sys
import pefile
from unicorn import *
from unicorn.x86_const import *

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
PE_PATH = os.path.join(REPO, 'pafet.bin')
EV = os.path.join(REPO, 'vm_pools_evidence', 'h3880_fullctx_ext_ivB.json')

TARGET_VA = 0x140003880

def emulate(cap):
    pe = pefile.PE(PE_PATH, fast_load=True)
    IMG = 0x140000000
    text = next(s for s in pe.sections if s.Name.rstrip(b'\x00')==b'.text')
    rdata = next(s for s in pe.sections if s.Name.rstrip(b'\x00')==b'.rdata')

    ctx_rcx = int(cap['rcx'], 16)
    rdx = int(cap['rdx'], 16)
    r8  = int(cap['r8'], 16)
    r9  = int(cap['r9'], 16)
    buf2_ptr = int(cap['buf2_ptr'], 16) if cap.get('buf2_ptr') else None
    entry_ctx = bytes.fromhex(cap['entry_ctx'])
    exit_ctx  = bytes.fromhex(cap['exit_ctx'])
    entry_b2  = bytes.fromhex(cap['entry_buf2']) if cap.get('entry_buf2') else None
    exit_b2   = bytes.fromhex(cap['exit_buf2']) if cap.get('exit_buf2') else None

    PAGE = 0x1000
    pd = lambda a: a & ~(PAGE-1)
    pu = lambda a, sz: (a + sz + PAGE - 1) & ~(PAGE-1)

    uc = Uc(UC_ARCH_X86, UC_MODE_64)

    # .text
    text_va = IMG + text.VirtualAddress
    uc.mem_map(pd(text_va), pu(text_va, text.Misc_VirtualSize) - pd(text_va), UC_PROT_ALL)
    uc.mem_write(text_va, text.get_data()[:text.Misc_VirtualSize])

    # .rdata
    rdata_va = IMG + rdata.VirtualAddress
    uc.mem_map(pd(rdata_va), pu(rdata_va, rdata.Misc_VirtualSize) - pd(rdata_va),
               UC_PROT_READ | UC_PROT_WRITE)
    uc.mem_write(rdata_va, rdata.get_data()[:rdata.Misc_VirtualSize])

    # ctx + buf2 as single region if overlapping, else two
    region_start = pd(ctx_rcx)
    region_end = pu(ctx_rcx + 0x2000, 0)
    if buf2_ptr is not None:
        region_start = min(region_start, pd(buf2_ptr))
        region_end = max(region_end, pu(buf2_ptr + 0x4000, 0))
    uc.mem_map(region_start, region_end - region_start, UC_PROT_READ | UC_PROT_WRITE)
    uc.mem_write(ctx_rcx, entry_ctx)
    if buf2_ptr is not None and entry_b2:
        uc.mem_write(buf2_ptr, entry_b2)

    # Stack
    STACK = 0x100000000
    uc.mem_map(STACK, 0x10000, UC_PROT_READ | UC_PROT_WRITE)
    rsp = STACK + 0x10000 - 0x1000
    uc.reg_write(UC_X86_REG_RSP, rsp)
    SENTINEL = 0xdeadbeef00000000
    uc.mem_write(rsp, SENTINEL.to_bytes(8, 'little'))

    uc.reg_write(UC_X86_REG_RCX, ctx_rcx)
    uc.reg_write(UC_X86_REG_RDX, rdx)
    uc.reg_write(UC_X86_REG_R8, r8)
    uc.reg_write(UC_X86_REG_R9, r9)

    diag = {}
    def on_invalid(uc, access, addr, sz, val, _):
        diag['violation'] = (access, hex(addr), sz, hex(uc.reg_read(UC_X86_REG_RIP)))
        return False
    uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED | UC_HOOK_MEM_WRITE_UNMAPPED, on_invalid)

    try:
        uc.emu_start(TARGET_VA, SENTINEL, timeout=5000000)
    except UcError as e:
        return {'ok': False, 'err': str(e), 'diag': diag,
                'rip': hex(uc.reg_read(UC_X86_REG_RIP))}

    emu_ctx = bytes(uc.mem_read(ctx_rcx, 0x2000))
    r = {'ctx_ok': emu_ctx == exit_ctx}
    if buf2_ptr is not None and exit_b2:
        emu_b2 = bytes(uc.mem_read(buf2_ptr, 0x4000))
        r['buf2_ok'] = emu_b2 == exit_b2
        if not r['buf2_ok']:
            # diff summary
            diffs = [(i, emu_b2[i], exit_b2[i]) for i in range(len(emu_b2)) if emu_b2[i] != exit_b2[i]]
            r['buf2_diff_count'] = len(diffs)
            r['buf2_diff_first'] = diffs[:8]
    return r


def main():
    data = json.load(open(EV))
    caps = data['captures']
    print(f'=== Replaying {len(caps)} captures of 0x{TARGET_VA:x} with real rdx/r8/r9 ===\n')
    total = 0; ok = 0
    for i, cap in enumerate(caps):
        r = emulate(cap)
        total += 1
        all_ok = r.get('ctx_ok') and r.get('buf2_ok', True)
        if all_ok:
            ok += 1
            print(f'  cap#{i} rdx={cap["rdx"]:>20} r8={cap["r8"]:>6}  OK (ctx + buf2 byte-exact)')
        else:
            print(f'  cap#{i} rdx={cap["rdx"]} r8={cap["r8"]} r9={cap["r9"]}  {r}')
    print(f'\n=== SUMMARY: {ok}/{total} end-to-end reproduced ===')
    return 0 if ok == total else 1

if __name__ == '__main__':
    sys.exit(main())
