#!/usr/bin/env python3
"""Validate just the common state_tick prolog of 0x140003a50 and 0x140003880.
Both helpers start with identical ~34 instructions. We stop Unicorn exactly after
the prolog's writeback instructions (just before divergence) and compare ctx
fields _30, _28, _27a, _218 against the python model.
"""
import pefile, struct, sys, os, copy
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pafet_semantic_probe import IsolatedPE
import unicorn
from unicorn import UC_HOOK_CODE

pe = pefile.PE('pafet.bin', fast_load=True)
M64 = (1<<64)-1
PHI = 0x9e3779b97f4a7c15
RAND_C = 0x2545f4914f6cdd1d


def py_state_tick(ctx):
    """Common prolog of 0x140003a50 and 0x140003880.
    Semantics inferred from 0x140003a50 range 0x140003a6e..0x140003b13.
    Returns new ctx dict with _30, _28, _27a, _218 updated."""
    r11 = ctx['_218']
    rbx = ctx['_1f8']
    dl  = ctx['_27a']
    rax = ctx['_1f0']
    rbp = ctx['_1e8']
    r14b = ctx['_200']
    r10 = ctx['_28']
    rdi = ctx['_30']
    rsi = (rax * 3) & M64
    rdx = (dl * rbx) & M64
    rdx = (rdx ^ rbp) & M64
    rdx = (rdx ^ rsi) & M64
    rax2 = (r11 ^ rdx) & M64
    r11_sub = (r11 - rdx) & M64
    r11_mid = rax2 if r14b == 0 else r11_sub
    rdi = (rdi + 1) & M64
    r10 = (r10 * PHI + RAND_C) & M64
    byte_state_new = (r10 >> 0x1b) & 0xff
    rdx2 = (byte_state_new * rbx) & M64
    rdx2 = (rdx2 ^ rbp) & M64
    rdx2 = (rdx2 ^ rsi) & M64
    rcx_t = (r11_mid ^ rdx2) & M64
    rax3 = (r11_mid + rdx2) & M64
    r218_new = rcx_t if r14b == 0 else rax3
    return dict(_30=rdi, _28=r10, _27a=byte_state_new, _218=r218_new, r11_mid=r11_mid)


def unicorn_tick(helper_va, stop_va, ctx_dict):
    """Run helper up to stop_va and read back ctx state."""
    env = IsolatedPE(pe)
    ctx = env.alloc(0x2000)
    env.mu.mem_write(ctx, b'\x00' * 0x2000)
    for off_hex in ['_218','_1f8','_1f0','_1e8','_28','_30','_20','_190','_188']:
        off = int(off_hex.lstrip('_'), 16)
        env.mu.mem_write(ctx+off, struct.pack('<Q', ctx_dict.get(off_hex,0) & M64))
    env.mu.mem_write(ctx+0x27a, struct.pack('<B', ctx_dict.get('_27a',0) & 0xff))
    env.mu.mem_write(ctx+0x200, struct.pack('<B', ctx_dict.get('_200',0) & 0xff))
    tbl = ctx_dict.get('table_89f', [0]*0x400)
    env.mu.mem_write(ctx+0x89f, bytes(b & 0xff for b in tbl[:0x400]) + b'\x00'*(0x400 - len(tbl)))
    regs_arr = env.alloc(0x400 * 8)
    env.mu.mem_write(regs_arr, b'\x00' * (0x400*8))
    env.mu.mem_write(ctx+0x1160, struct.pack('<Q', regs_arr))
    # Proper call setup like IsolatedPE.call does:
    sp = env.stack + 0x1f008
    env.putq(sp, env.stop)  # return address on top
    env.mu.reg_write(unicorn.x86_const.UC_X86_REG_RSP, sp)
    env.mu.reg_write(unicorn.x86_const.UC_X86_REG_RCX, ctx)
    env.mu.reg_write(unicorn.x86_const.UC_X86_REG_RDX, 0)
    env.mu.reg_write(unicorn.x86_const.UC_X86_REG_R8, 0)
    env.mu.reg_write(unicorn.x86_const.UC_X86_REG_R9, 0)
    # Install hook to stop at stop_va
    def stop_hook(uc, addr, size, user_data):
        if addr == stop_va:
            uc.emu_stop()
    h = env.mu.hook_add(unicorn.UC_HOOK_CODE, stop_hook)
    try:
        env.mu.emu_start(helper_va, env.stop, count=500)
    finally:
        env.mu.hook_del(h)
    result = {}
    for off_hex, off_int in [('_30',0x30),('_28',0x28),('_218',0x218)]:
        result[off_hex] = struct.unpack('<Q', env.mu.mem_read(ctx+off_int,8))[0]
    result['_27a'] = env.mu.mem_read(ctx+0x27a,1)[0]
    result['r11'] = env.mu.reg_read(unicorn.x86_const.UC_X86_REG_R11)
    return result


# For 0x140003a50 stop at the test instruction (0x140003b1a) that compares r11
# For 0x140003880 stop at the cmp r14d,0x3fe (0x14000394e)

def test_state_tick():
    tests = [
        ('all zeros',         dict(_218=0, _1f8=0, _27a=0, _1f0=0, _1e8=0, _200=0, _28=0, _30=0)),
        ('r14=0 small vals',  dict(_218=5, _1f8=3, _27a=7, _1f0=11, _1e8=13, _200=0, _28=17, _30=19)),
        ('r14=1 (sub path)',  dict(_218=100, _1f8=0xcafebabe, _27a=0x5a, _1f0=0xff, _1e8=0xdead,
                                   _200=1, _28=0xbeef, _30=42)),
        ('neg r218 (jle)',    dict(_218=0xffffffffffffffff, _1f8=1, _27a=0, _1f0=0, _1e8=0,
                                   _200=0, _28=0, _30=0)),
        ('max fields',        dict(_218=M64, _1f8=M64, _27a=0xff, _1f0=M64, _1e8=M64,
                                   _200=0, _28=M64, _30=M64)),
    ]
    results = {'0x140003a50': [], '0x140003880': []}
    for helper_name, helper_va, stop_va in [
        ('0x140003a50', 0x140003a50, 0x140003b1a),  # stop at `test r11d, r11d`
        ('0x140003880', 0x140003880, 0x14000394e),  # stop at `cmp r14d, 0x3fe`
    ]:
        print(f'\n=== state_tick in {helper_name} (stop at 0x{stop_va:x}) ===')
        passed = 0
        for name, ctx_dict in tests:
            py = py_state_tick(ctx_dict)
            try:
                u = unicorn_tick(helper_va, stop_va, ctx_dict)
                ok = (u['_30'] == py['_30'] and u['_28'] == py['_28'] and
                      u['_27a'] == py['_27a'] and u['_218'] == py['_218'] and
                      u['r11'] == py['r11_mid'])
                passed += ok
                print(f'  [{"OK" if ok else "FAIL"}] {name}')
                if not ok:
                    print(f'    unicorn: _30={u["_30"]:x} _28={u["_28"]:x} _27a=0x{u["_27a"]:x} _218={u["_218"]:x} r11={u["r11"]:x}')
                    print(f'    python : _30={py["_30"]:x} _28={py["_28"]:x} _27a=0x{py["_27a"]:x} _218={py["_218"]:x} r11={py["r11_mid"]:x}')
            except Exception as e:
                print(f'  [EXC] {name}: {e}')
        results[helper_name] = (passed, len(tests))
        print(f'  {helper_name}: {passed}/{len(tests)}')
    return results


if __name__ == '__main__':
    r = test_state_tick()
    print(f'\n[SUMMARY]')
    for h, (p, t) in r.items():
        print(f'  {h}: state_tick {p}/{t}')
