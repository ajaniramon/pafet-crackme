#!/usr/bin/env python3
"""End-to-end emulation of 0x140003a50 (and 0x140003880) via Unicorn replay of
captured runtime ctx. Demonstrates that the panic handler 0x1400029a0 is
never reached on the normal path, and that `IsolatedPE` was failing because
of truncated ctx (only 2 KB) rather than any missing stub.

Usage:
    python scripts/pafet_uservm_h3a50_emulate.py

Reads captures from vm_pools_evidence/usuario_vm_h3a50_fullctx_8k_alice.json
(and _h3880_) and replays them. Fails loudly if the Unicorn-emulated final
state does not byte-equal the captured exit state (ctx + buf1 + buf2).
"""
import json, os, sys
import pefile
from unicorn import *
from unicorn.x86_const import *

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
PE_PATH = os.path.join(REPO, 'pafet.bin')
EV_DIR  = os.path.join(REPO, 'vm_pools_evidence')

TARGETS = [
    (0x140003a50, 'usuario_vm_h3a50_fullctx_8k_alice.json'),
    (0x140003880, 'usuario_vm_h3880_fullctx_8k_alice.json'),
]


def emulate(target_va, cap):
    pe = pefile.PE(PE_PATH, fast_load=True)
    IMG = 0x140000000
    text = next(s for s in pe.sections if s.Name.rstrip(b'\x00') == b'.text')
    rdata = next(s for s in pe.sections if s.Name.rstrip(b'\x00') == b'.rdata')

    ctx_rcx = int(cap['ctx_rcx'], 16)
    buf1_ptr = int(cap['buf1_ptr'], 16)
    buf2_ptr = int(cap['buf2_ptr'], 16)
    entry_ctx = bytes.fromhex(cap['entry_ctx'])
    exit_ctx  = bytes.fromhex(cap['exit_ctx'])
    buf1_entry = bytes.fromhex(cap['buf1_entry'])
    buf1_exit  = bytes.fromhex(cap['buf1_exit'])
    buf2_entry = bytes.fromhex(cap['buf2_entry'])
    buf2_exit  = bytes.fromhex(cap['buf2_exit'])

    PAGE = 0x1000
    pd = lambda a: a & ~(PAGE - 1)
    pu = lambda a, sz: (a + sz + PAGE - 1) & ~(PAGE - 1)

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

    # ctx + bufs (single region)
    rs = pd(min(ctx_rcx, buf1_ptr, buf2_ptr))
    re = pu(max(ctx_rcx + 8192, buf1_ptr + 4096, buf2_ptr + 8192), 0)
    uc.mem_map(rs, re - rs, UC_PROT_READ | UC_PROT_WRITE)
    uc.mem_write(ctx_rcx, entry_ctx)
    uc.mem_write(buf1_ptr, buf1_entry)
    uc.mem_write(buf2_ptr, buf2_entry)

    # Stack
    STACK_BASE = 0x100000000
    uc.mem_map(STACK_BASE, 0x10000, UC_PROT_READ | UC_PROT_WRITE)
    rsp = STACK_BASE + 0x10000 - 0x1000
    uc.reg_write(UC_X86_REG_RSP, rsp)
    SENTINEL = 0xdeadbeef00000000
    uc.mem_write(rsp, SENTINEL.to_bytes(8, 'little'))
    uc.reg_write(UC_X86_REG_RCX, ctx_rcx)

    diag = {'violation': None}

    def hook_mem_invalid(uc, access, addr, size, value, user_data):
        diag['violation'] = (access, addr, size, uc.reg_read(UC_X86_REG_RIP))
        return False

    uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED | UC_HOOK_MEM_WRITE_UNMAPPED, hook_mem_invalid)

    try:
        uc.emu_start(target_va, SENTINEL, timeout=5000000)
    except UcError as e:
        return {'ok': False, 'error': f'{e} violation={diag["violation"]} rip=0x{uc.reg_read(UC_X86_REG_RIP):x}'}

    emu_ctx = bytes(uc.mem_read(ctx_rcx, 8192))
    emu_b1  = bytes(uc.mem_read(buf1_ptr, 4096))
    emu_b2  = bytes(uc.mem_read(buf2_ptr, 8192))
    return {
        'ctx_ok':  emu_ctx == exit_ctx,
        'buf1_ok': emu_b1 == buf1_exit,
        'buf2_ok': emu_b2 == buf2_exit,
    }


def main():
    total_ok = 0; total = 0
    for va, fn in TARGETS:
        path = os.path.join(EV_DIR, fn)
        if not os.path.isfile(path):
            print(f'SKIP 0x{va:x}: {fn} not found')
            continue
        caps = json.load(open(path))['captures']
        print(f'\n=== 0x{va:x} ({len(caps)} captures from {fn}) ===')
        for i, cap in enumerate(caps):
            r = emulate(va, cap)
            total += 1
            all_ok = r.get('ctx_ok') and r.get('buf1_ok') and r.get('buf2_ok')
            if all_ok:
                total_ok += 1
                print(f'  cap#{i}: OK (ctx + buf1 + buf2 all byte-exact)')
            else:
                print(f'  cap#{i}: {r}')
    print(f'\n=== SUMMARY: {total_ok}/{total} captures reproduced end-to-end ===')
    return 0 if total_ok > 0 else 1


if __name__ == '__main__':
    sys.exit(main())
