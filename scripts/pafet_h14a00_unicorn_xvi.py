#!/usr/bin/env python3
"""Jack XIII — Unicorn reemulation of 0x140014a00 with external buffers mapped.

Loads vectors from vm_pools_evidence/h14a00_vectors_xvi.json produced by
pafet_h14a00_capture_xiii.py. Each vector carries:
  before.{rcx..rsp}, before.ctx_hex (8 KB), before.stack_hex (2 KB),
  before.stack_below_hex (2 KB below rsp),
  extra: {addr -> {size, before_hex, after_hex, src}}

Byte-exact check:
  - final ctx == after.ctx_hex
  - For each extra buffer that was mutated, final content == after_hex
"""
import json, os, struct, sys
import pefile
from unicorn import *
from unicorn.x86_const import *

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(HERE)
PE_PATH = os.path.join(REPO, 'pafet.bin')
VEC_PATH = os.path.join(REPO, 'vm_pools_evidence', 'h14a00_vectors_xvi.json')

IMG = 0x140000000
SENTINEL = 0xdeadbeef00000000
PAGE = 0x1000
pd = lambda a: a & ~(PAGE - 1)
pu = lambda a, sz: (a + sz + PAGE - 1) & ~(PAGE - 1)


def to_int(s):
    return int(s, 16) if isinstance(s, str) and s.startswith('0x') else int(s)


def emulate_one(vec, pe_runtime_base=None):
    before = vec['regs']
    after = vec['after']
    ctx_rcx = to_int(before['rcx'])
    rsp_orig = to_int(before['rsp'])
    ctx_bytes = bytes.fromhex(vec['ctx_hex'])
    stk_bytes = bytes.fromhex(vec['stack_hex']) if vec.get('stack_hex') else b''
    stk_below = bytes.fromhex(vec['stack_below_hex']) if vec.get('stack_below_hex') else b''

    pe = pefile.PE(PE_PATH, fast_load=True)
    uc = Uc(UC_ARCH_X86, UC_MODE_64)

    # Map PE sections at IMG (0x140000000) AND at runtime base so trampolines
    # that jmp to the runtime .text succeed.
    def map_pe_at(base_addr):
        for sec in pe.sections:
            va = base_addr + sec.VirtualAddress
            sz = sec.Misc_VirtualSize
            s, e = pd(va), pu(va, sz)
            try:
                uc.mem_map(s, e - s, UC_PROT_ALL)
            except UcError:
                pass
            uc.mem_write(va, sec.get_data()[:sz])

    map_pe_at(IMG)
    if pe_runtime_base and pe_runtime_base != IMG:
        map_pe_at(pe_runtime_base)

    # Map ctx (8 KB)
    try:
        uc.mem_map(pd(ctx_rcx), pu(ctx_rcx + 0x2000, 0) - pd(ctx_rcx),
                   UC_PROT_READ | UC_PROT_WRITE)
    except UcError:
        pass
    uc.mem_write(ctx_rcx, ctx_bytes)

    # Map stack: cover rsp-0x8000 .. rsp+0x8000 generously.
    # Must iterate page-by-page because overlap with other maps (ctx or extras)
    # would make a single mem_map call fail.
    def ensure_mapped(uc, lo, hi, prot):
        a = pd(lo)
        end = pu(hi, 0)
        while a < end:
            try:
                uc.mem_map(a, PAGE, prot)
            except UcError:
                pass  # already mapped
            a += PAGE

    ensure_mapped(uc, rsp_orig - 0x8000, rsp_orig + 0x8000,
                  UC_PROT_READ | UC_PROT_WRITE)
    if stk_bytes:
        uc.mem_write(rsp_orig, stk_bytes)
    if stk_below:
        uc.mem_write(rsp_orig - 0x800, stk_below)

    # Map extra buffers at their runtime addresses with captured contents.
    # Use PROT_ALL because some of these regions carry JIT-generated handler
    # trampolines (`mov rax, imm; jmp rax`) that must be executable.
    mapped = []
    for addr_s, info in vec.get('extra', {}).items():
        addr = to_int(addr_s)
        blob = bytes.fromhex(info['before_hex'])
        sz = info['size']
        ensure_mapped(uc, addr, addr + sz, UC_PROT_ALL)
        uc.mem_write(addr, blob)
        mapped.append((addr, sz, info.get('after_hex')))

    # Replace stack return address with sentinel
    new_rsp = rsp_orig - 8
    uc.mem_write(new_rsp, struct.pack('<Q', SENTINEL))

    # Set registers
    uc.reg_write(UC_X86_REG_RCX, ctx_rcx)
    uc.reg_write(UC_X86_REG_RDX, to_int(before['rdx']))
    uc.reg_write(UC_X86_REG_R8,  to_int(before['r8']))
    uc.reg_write(UC_X86_REG_R9,  to_int(before['r9']))
    uc.reg_write(UC_X86_REG_RBP, to_int(before['rbp']))
    uc.reg_write(UC_X86_REG_RSI, to_int(before['rsi']))
    uc.reg_write(UC_X86_REG_RDI, to_int(before['rdi']))
    uc.reg_write(UC_X86_REG_RBX, to_int(before['rbx']))
    uc.reg_write(UC_X86_REG_RSP, new_rsp)

    diag = {'violation': None, 'map_check': None}
    def on_invalid(u, access, addr, size, value, ud):
        # Check what regions are mapped and whether the fault addr is in one
        regions = list(u.mem_regions())
        in_region = None
        for r in regions:
            r_lo, r_hi, r_perms = r
            if r_lo <= addr <= r_hi:
                in_region = (r_lo, r_hi, r_perms)
                break
        diag['violation'] = (access, addr, size, u.reg_read(UC_X86_REG_RIP))
        diag['map_check'] = {
            'addr': hex(addr),
            'in_region': (hex(in_region[0]), hex(in_region[1]), in_region[2]) if in_region else None,
            'num_regions': len(regions),
        }
        return False

    uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED | UC_HOOK_MEM_WRITE_UNMAPPED | UC_HOOK_MEM_FETCH_UNMAPPED, on_invalid)

    try:
        uc.emu_start(0x140014a00, SENTINEL, timeout=10_000_000, count=500_000)
    except UcError as e:
        rip = uc.reg_read(UC_X86_REG_RIP)
        return {'ok': False, 'err': f'{e}', 'rip': f'0x{rip:x}',
                'viol': diag['violation'], 'map_check': diag['map_check']}

    if uc.reg_read(UC_X86_REG_RIP) != SENTINEL:
        return {'ok': False, 'err': 'did-not-reach-sentinel',
                'rip': f'0x{uc.reg_read(UC_X86_REG_RIP):x}'}

    # Compare ctx
    final_ctx = bytes(uc.mem_read(ctx_rcx, len(ctx_bytes)))
    expected_ctx = bytes.fromhex(after['ctx_hex'])
    ctx_ok = final_ctx == expected_ctx
    ctx_diff = sum(1 for a, b in zip(final_ctx, expected_ctx) if a != b)

    # Compare extra buffers (where after_hex was captured)
    extras = []
    for addr, sz, after_hex in mapped:
        if after_hex is None:
            extras.append((addr, 'no-after', None))
            continue
        final_b = bytes(uc.mem_read(addr, sz))
        exp_b = bytes.fromhex(after_hex)
        if final_b == exp_b:
            extras.append((addr, 'OK', 0))
        else:
            d = sum(1 for a, b in zip(final_b, exp_b) if a != b)
            extras.append((addr, 'DIFF', d))

    all_ok = ctx_ok and all(x[1] in ('OK', 'no-after') for x in extras)
    return {'ok': all_ok, 'ctx_ok': ctx_ok, 'ctx_diff': ctx_diff, 'extras': extras}


def main():
    caps = json.load(open(VEC_PATH))
    total = total_ok = 0
    for label in ('alice', 'ramon'):
        print(f'\n=== {label} ===')
        pe_runtime_base = None
        if caps[label].get('pe_base'):
            pe_runtime_base = to_int(caps[label]['pe_base'])
            print(f'  (PE runtime base: 0x{pe_runtime_base:x})')
        for i, v in enumerate(caps[label]['vectors']):
            r = emulate_one(v, pe_runtime_base=pe_runtime_base)
            total += 1
            if r['ok']:
                total_ok += 1
                extras_summary = ', '.join(f'0x{a:x}:{s}' for a, s, _ in r['extras'])
                print(f'  cap#{i}: PASS  ctx=OK  extras=[{extras_summary}]')
            else:
                if 'ctx_ok' in r:
                    extras_summary = ', '.join(f'0x{a:x}:{s}({d})' for a, s, d in r['extras'])
                    print(f'  cap#{i}: FAIL  ctx_diff={r["ctx_diff"]}  extras=[{extras_summary}]')
                else:
                    print(f'  cap#{i}: FAIL  {r}')
    print(f'\n=== SUMMARY: {total_ok}/{total} vectors byte-exact ===')
    return 0 if total_ok > 0 else 1


if __name__ == '__main__':
    sys.exit(main())
