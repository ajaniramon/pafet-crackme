#!/usr/bin/env python3
"""Validate semantic reimplementation of the 3 shared user-VM helpers.

Helpers verified here:
  0x140005b50 — "xor-mask writer" (24/35 handlers). ABI: rcx=ctx, rdx=idx.
                Writes buf_out[idx]^=mask and buf_shadow[idx]^=mask where
                mask is derived via fmix64(idx*phi ^ ctx[0xd8] ^ ctx[0xb8] ^ ctx[0xb0]).
                If the fmix result's low xor is zero, mask = 0x5a (the famous XOR 0x5A).
  0x140003a50 — called by 33/35 handlers; complex state tick + optional
                second phase that reads ctx[0x89f+idx] and updates ctx[0x1160]+idx*8.
  0x140003880 — called by 22/35; stores an input value (rdx) into the operand
                table ctx[0x89f+idx] and virtual-register file ctx[0x1160]+idx*8.
"""
import pefile, struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pafet_semantic_probe import IsolatedPE

pe = pefile.PE('pafet.bin', fast_load=True)

M64 = (1<<64)-1
PHI = 0x9e3779b97f4a7c15
RAND_C = 0x2545f4914f6cdd1d
M_FMIX1 = 0xff51afd7ed558ccd
M_FMIX2 = 0xc4ceb9fe1a85ec53


def rol64(x, n):
    n &= 63
    return ((x << n) | (x >> (64 - n))) & M64 if n else x & M64


def ror64(x, n):
    n &= 63
    return ((x >> n) | (x << (64 - n))) & M64 if n else x & M64


# =============================================================
#  HELPER 1 — 0x140005b50 (XOR mask writer)
# =============================================================
def py_helper_5b50(ctx_d8, ctx_b8, ctx_b0, idx):
    rcx = (idx * PHI) & M64
    rcx ^= ctx_d8
    rcx ^= ctx_b8
    rcx ^= ctx_b0
    rax = (rcx ^ (rcx >> 33)) & M64
    rax = (rax * M_FMIX1) & M64
    rcx = (rax ^ (rax >> 33)) & M64
    rcx = (rcx * M_FMIX2) & M64
    r8  = (rcx ^ (rcx >> 33)) & M64
    al = (r8 >> 0x18) & 0xff
    cl = (r8 >> 0x28) & 0xff
    cl ^= al
    cl ^= (r8 & 0xff)
    dl = 0x5a if (cl & 0xff) == 0 else cl & 0xff
    new_b0 = r8 | 1
    return dl, new_b0


def unicorn_5b50(ctx_d8, ctx_b8, ctx_b0, idx):
    env = IsolatedPE(pe)
    ctx = env.alloc(0x300)
    bufo = env.alloc(0x100)
    bufs = env.alloc(0x100)
    env.mu.mem_write(ctx, b'\x00' * 0x300)
    env.mu.mem_write(bufo, b'\x00' * 0x100)
    env.mu.mem_write(bufs, b'\x00' * 0x100)
    env.mu.mem_write(ctx+0x1b8, struct.pack('<I', 0x100))
    env.mu.mem_write(ctx+0xd8, struct.pack('<Q', ctx_d8))
    env.mu.mem_write(ctx+0xb8, struct.pack('<Q', ctx_b8))
    env.mu.mem_write(ctx+0xb0, struct.pack('<Q', ctx_b0))
    env.mu.mem_write(ctx+0x1b0, struct.pack('<Q', bufo))
    env.mu.mem_write(ctx+0xa8, struct.pack('<Q', bufs))
    env.call(0x140005b50, ctx, idx)
    out_byte = env.mu.mem_read(bufo + idx, 1)[0]
    sha_byte = env.mu.mem_read(bufs + idx, 1)[0]
    new_b0 = struct.unpack('<Q', env.mu.mem_read(ctx+0xb0, 8))[0]
    new_b8 = struct.unpack('<Q', env.mu.mem_read(ctx+0xb8, 8))[0]
    return out_byte, sha_byte, new_b0, new_b8


def test_5b50():
    tests = [
        (0, 0, 0, 0),
        (0xdeadbeefcafebabe, 0, 0, 1),
        (0xdeadbeefcafebabe, 0x1234, 0x5678, 5),
        (0xff51afd7ed558ccd, 1, 2, 3),
        (0, 0, 0, 42),
        (0x9e3779b97f4a7c15, 0x100, 0x200, 10),
        (0x123456789abcdef0, 0xaaaaaaaaaaaaaaaa, 0x5555555555555555, 100),
        (0x1111111111111111, 0x2222222222222222, 0x3333333333333333, 7),
    ]
    passed = 0
    for ctx_d8, ctx_b8, ctx_b0, idx in tests:
        u_out, u_sha, u_b0, u_b8 = unicorn_5b50(ctx_d8, ctx_b8, ctx_b0, idx)
        mask, new_b0 = py_helper_5b50(ctx_d8, ctx_b8, ctx_b0, idx)
        ok = (u_out == mask and u_sha == mask and u_b0 == new_b0 and u_b8 == (ctx_b8 + 1) & M64)
        passed += ok
        print(f'  [{"OK" if ok else "FAIL"}] d8=0x{ctx_d8:x} idx={idx}: mask=0x{mask:02x}')
    print(f'\n  helper 0x140005b50: {passed}/{len(tests)}')
    return passed, len(tests)


# =============================================================
#  HELPER 2 — 0x140003a50 (shadow state tick + optional 2nd phase)
# =============================================================
def _state_tick(ctx_dict):
    """Two-step state tick as in 0x140003a50 0x140003a6e..0x140003b13.
    Returns (new_ctx_dict, r11_updated). The second phase (if branch) is handled
    by the caller based on r11_updated's low 32-bit signed value."""
    r11 = ctx_dict['_218']
    rbx = ctx_dict['_1f8']
    dl  = ctx_dict['_27a']
    rax = ctx_dict['_1f0']
    rbp = ctx_dict['_1e8']
    r14b = ctx_dict['_200']
    r10 = ctx_dict['_28']
    rdi = ctx_dict['_30']
    rsi = (rax * 3) & M64
    rdx = (dl * rbx) & M64
    rdx = (rdx ^ rbp) & M64
    rdx = (rdx ^ rsi) & M64
    rax2 = (r11 ^ rdx) & M64
    r11_sub = (r11 - rdx) & M64
    # cmove r11, rax: ZF (from test r14b) sets if r14b==0 -> cmove triggers -> r11=rax
    r11_mid = rax2 if r14b == 0 else r11_sub
    rdi = (rdi + 1) & M64
    r10 = (r10 * PHI) & M64
    r10 = (r10 + RAND_C) & M64
    byte_state_new = (r10 >> 0x1b) & 0xff
    # Second block uses byte_state_new as the "dl"
    rdx2 = (byte_state_new * rbx) & M64
    rdx2 = (rdx2 ^ rbp) & M64
    rdx2 = (rdx2 ^ rsi) & M64
    rcx_t = (r11_mid ^ rdx2) & M64
    rax3 = (r11_mid + rdx2) & M64
    r218_new = rcx_t if r14b == 0 else rax3
    new = dict(ctx_dict)
    new['_30']  = rdi
    new['_28']  = r10
    new['_27a'] = byte_state_new
    new['_218'] = r218_new
    return new, r11_mid


def py_helper_3a50(ctx_dict):
    """Full semantic for 0x140003a50. Modifies ctx state in-place semantically.
    Reads ctx[0x89f + idx]  (byte table inside ctx)
    Reads/writes ctx[0x1160][idx*8]  (qword register array via pointer at ctx[0x1160])
    """
    new, r11 = _state_tick(ctx_dict)
    r11d = r11 & 0xffffffff
    r11d_s = r11d - (1<<32) if r11d & 0x80000000 else r11d
    if r11d_s <= 0:
        return new
    # Enter the >0 path
    r10 = new['_28']
    rdi = new['_30']
    rbx = new['_1f8']
    rbp = new['_1e8']
    rax = new['_1f0']
    r14b = new['_200']
    rsi = (rax * 3) & M64
    r10 = (r10 * PHI) & M64
    r8  = (r11d_s - 1) & M64  # dec r8 (which was movsxd r11d)
    r11_signext = r11d_s & M64
    r10 = (r10 + RAND_C) & M64
    rdi = (rdi + 1) & M64
    byte_state2 = (r10 >> 0x1b) & 0xff
    new['_28']  = r10
    new['_30']  = rdi
    new['_27a'] = byte_state2
    rdx = (byte_state2 * rbx) & M64
    rbx_lea = (r8 * 8) & M64
    rdx = (rdx ^ rbp) & M64
    rdx = (rdx ^ rsi) & M64
    rcx_t = (rdx ^ r8) & M64
    rax_t = (rdx + r8) & M64
    new['_218'] = rcx_t if r14b == 0 else rax_t
    # Operand byte read
    byte_val = new['table_89f'][r8 & 0x3ff]
    reg_val  = new['regs_1160'][r8 & 0x3ff]
    rcx = (byte_val * new['_20']) & M64
    rax1 = (r11_signext * new['_190']) & M64
    rcx = (rcx ^ rax1) & M64
    rcx = (rcx ^ new['_188']) & M64
    rdx_mix = rcx
    cl = (rcx >> 0x3a) & 0xff
    rdx_mix = (rdx_mix ^ reg_val) & M64
    if cl != 0:
        rdx_mix = ror64(rdx_mix, cl)
    # Second splitmix tick + write
    r10 = (r10 * PHI) & M64
    rdi_new = (rdi + 1) & M64
    new['_30'] = rdi_new
    r10 = (r10 + RAND_C) & M64
    new['_28'] = r10
    byte_state3 = (r10 >> 0x1b) & 0xff
    new['table_89f'][r8 & 0x3ff] = byte_state3
    rax2 = (byte_state3 * new['_20']) & M64
    r11_mul = (r11_signext * new['_190']) & M64
    rax2 = (rax2 ^ r11_mul) & M64
    rax2 = (rax2 ^ new['_188']) & M64
    r8_fin = (r8 ^ new['_28']) & M64
    cl2 = (rax2 >> 0x3a) & 0xff
    if cl2 != 0:
        r8_fin = rol64(r8_fin, cl2)
    r8_fin = (r8_fin ^ rax2) & M64
    new['regs_1160'][r8 & 0x3ff] = r8_fin
    return new


def unicorn_3a50(ctx_dict):
    env = IsolatedPE(pe)
    ctx = env.alloc(0x2000)
    env.mu.mem_write(ctx, b'\x00' * 0x2000)
    for off_hex in ['_218','_1f8','_1f0','_1e8','_28','_30','_20','_190','_188']:
        off = int(off_hex.lstrip('_'), 16)
        env.mu.mem_write(ctx+off, struct.pack('<Q', ctx_dict.get(off_hex,0) & M64))
    env.mu.mem_write(ctx+0x27a, struct.pack('<B', ctx_dict.get('_27a',0) & 0xff))
    env.mu.mem_write(ctx+0x200, struct.pack('<B', ctx_dict.get('_200',0) & 0xff))
    # Inline byte table at ctx+0x89f (not via pointer)
    tbl = ctx_dict.get('table_89f', [0]*0x400)
    env.mu.mem_write(ctx+0x89f, bytes(b & 0xff for b in tbl[:0x400]) + b'\x00'*(0x400 - len(tbl)))
    # Reg array via pointer at ctx+0x1160
    regs_arr = env.alloc(0x400 * 8)
    env.mu.mem_write(regs_arr, b'\x00' * (0x400*8))
    regs = ctx_dict.get('regs_1160', [0]*0x400)
    for i,v in enumerate(regs[:0x400]):
        env.mu.mem_write(regs_arr + i*8, struct.pack('<Q', v & M64))
    env.mu.mem_write(ctx+0x1160, struct.pack('<Q', regs_arr))
    env.call(0x140003a50, ctx)
    result = {}
    for off_hex, off_int in [('_30',0x30),('_28',0x28),('_218',0x218)]:
        result[off_hex] = struct.unpack('<Q', env.mu.mem_read(ctx+off_int,8))[0]
    result['_27a'] = env.mu.mem_read(ctx+0x27a,1)[0]
    result['table_89f_slot0'] = env.mu.mem_read(ctx+0x89f,16)
    result['regs_slot0'] = struct.unpack('<Q', env.mu.mem_read(regs_arr, 8))[0]
    result['regs_slots'] = [struct.unpack('<Q', env.mu.mem_read(regs_arr+i*8,8))[0] for i in range(8)]
    return result


def test_3a50():
    tests = [
        # (name, ctx)
        ('zero/jle path', dict(_218=0,_1f8=0,_27a=0,_1f0=0,_1e8=0,_200=0,_28=0,_30=0,_20=0,_190=0,_188=0,
                               table_89f=[0]*16, regs_1160=[0]*16)),
        ('r11=1 (enters >0 path)', dict(_218=1,_1f8=5,_27a=3,_1f0=7,_1e8=9,_200=0,_28=11,_30=13,_20=17,_190=19,_188=23,
                                        table_89f=list(range(16)), regs_1160=[i*0x1111 for i in range(16)])),
        ('r11=5 r14=1 (sub path)', dict(_218=5,_1f8=0xdead,_27a=0x5a,_1f0=0xff,_1e8=0xcafebabe,_200=1,_28=0xbeef,_30=0,
                                        _20=0x9e3779b97f4a7c15, _190=0xff51afd7ed558ccd, _188=0xc4ceb9fe1a85ec53,
                                        table_89f=list(range(16)), regs_1160=[0]*16)),
        ('large positive r11', dict(_218=100,_1f8=1,_27a=1,_1f0=1,_1e8=1,_200=0,_28=1,_30=1,_20=1,_190=1,_188=1,
                                    table_89f=[0xff]*0x100, regs_1160=[0x1234567890abcdef]*0x100)),
        ('r11 negative (jle)', dict(_218=0xffffffffffffffff,_1f8=0,_27a=0,_1f0=0,_1e8=0,_200=0,_28=0,_30=0,_20=0,_190=0,_188=0,
                                    table_89f=[0]*16, regs_1160=[0]*16)),
    ]
    passed = 0
    for name, ctx_dict in tests:
        import copy
        ctx_for_py = copy.deepcopy(ctx_dict)
        ctx_for_py['table_89f'] = list(ctx_for_py['table_89f']) + [0]*(0x400 - len(ctx_for_py['table_89f']))
        ctx_for_py['regs_1160'] = list(ctx_for_py['regs_1160']) + [0]*(0x400 - len(ctx_for_py['regs_1160']))
        py_result = py_helper_3a50(ctx_for_py)
        u_result = unicorn_3a50(ctx_dict)
        ok = (u_result['_30'] == py_result['_30'] and
              u_result['_28'] == py_result['_28'] and
              u_result['_27a'] == py_result['_27a'] and
              u_result['_218'] == py_result['_218'])
        # Also check regs if the >0 path triggered
        r11d = ctx_dict['_218'] & 0xffffffff
        r11d_s = r11d - (1<<32) if r11d & 0x80000000 else r11d
        if r11d_s > 0:
            r8_idx = (r11d_s - 1) & 0x3ff
            reg_ok = (u_result['regs_slots'][r8_idx] == py_result['regs_1160'][r8_idx])
            ok = ok and reg_ok
        print(f'  [{"OK" if ok else "FAIL"}] {name}')
        if not ok:
            print(f'    unicorn: _30={u_result["_30"]:x} _28={u_result["_28"]:x} _27a=0x{u_result["_27a"]:x} _218={u_result["_218"]:x}')
            print(f'    python : _30={py_result["_30"]:x} _28={py_result["_28"]:x} _27a=0x{py_result["_27a"]:x} _218={py_result["_218"]:x}')
            if r11d_s > 0:
                r8_idx = (r11d_s-1) & 0x3ff
                print(f'    reg[{r8_idx}]: unicorn=0x{u_result["regs_slots"][r8_idx]:x} python=0x{py_result["regs_1160"][r8_idx]:x}')
        passed += ok
    print(f'\n  helper 0x140003a50: {passed}/{len(tests)}')
    return passed, len(tests)


# =============================================================
#  HELPER 3 — 0x140003880 (store operand to tables)
# =============================================================
def py_helper_3880(ctx_dict, input_val):
    """Full semantic for 0x140003880(rcx=ctx, rdx=input).
    Writes input_val (rotated) to ctx[0x1160][idx*8] where idx = ctx[0x218] (bounded 1022)."""
    rsi = input_val & M64
    new, r14_updated = _state_tick(ctx_dict)
    r14 = r14_updated
    # cmp r14d, 0x3fe; ja 0x140003a38  (ja = unsigned above)
    r14d = r14 & 0xffffffff
    if r14d > 0x3fe:
        return new, None
    # Enter the if body (0x14000395b..0x140003a21)
    r10 = new['_28']
    rbp = new['_30']  # was rbp before but ok
    rax = new['_1f0']
    rbx_mul = new['_1f8']
    r10 = (r10 * PHI) & M64
    r9  = r14d  # movsxd r9, r14d
    new['_30'] = (rbp + 1) & M64
    r10 = (r10 + RAND_C) & M64
    new['_28'] = r10
    r8_val  = (r14d + 1) & M64  # lea eax, [r14+1] + movsxd
    byte_state2 = (r10 >> 0x1b) & 0xff
    new['_27a'] = byte_state2
    new['table_89f'][r14d & 0x3ff] = byte_state2
    # Hash for rotation
    rax_h = (r8_val * new['_190']) & M64
    rdx_h = (byte_state2 * new['_20']) & M64  # Note: rdx was overwritten with movzx edx,r8b (byte_state2)
    rdx_h = (rdx_h ^ rax_h) & M64
    rdx_h = (rdx_h ^ new['_188']) & M64
    cl = (rdx_h >> 0x3a) & 0xff
    if cl != 0:
        rsi = rol64(rsi, cl)
    rsi = (rsi ^ rdx_h) & M64
    # Store rsi to ctx[0x1160][r9*8]
    new['regs_1160'][r9 & 0x3ff] = rsi
    # Final state tick (0x1400039ca..0x140003a21)
    r10_f = (new['_28'] * PHI) & M64  # Actually it reads [rdi+0x28] which was just written to r10
    # inc qword [rdi+0x30] again
    new['_30'] = (new['_30'] + 1) & M64
    r10_f = (r10_f + RAND_C) & M64
    new['_28'] = r10_f
    byte_state3 = (r10_f >> 0x1b) & 0xff
    new['_27a'] = byte_state3
    # Final r218 update
    rax_f = new['_1f0']
    rdx_f = (byte_state3 * new['_1f8']) & M64
    rcx_lea = (rax_f * 3) & M64
    rdx_f = (rdx_f ^ rcx_lea) & M64
    rdx_f = (rdx_f ^ new['_1e8']) & M64
    rcx_f = (rdx_f ^ r8_val) & M64
    rax_f2 = (rdx_f + r8_val) & M64
    r200 = new['_200']
    new['_218'] = rcx_f if r200 == 0 else rax_f2
    return new, rsi


def unicorn_3880(ctx_dict, input_val):
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
    regs = ctx_dict.get('regs_1160', [0]*0x400)
    for i,v in enumerate(regs[:0x400]):
        env.mu.mem_write(regs_arr + i*8, struct.pack('<Q', v & M64))
    env.mu.mem_write(ctx+0x1160, struct.pack('<Q', regs_arr))
    env.call(0x140003880, ctx, input_val)
    result = {}
    for off_hex, off_int in [('_30',0x30),('_28',0x28),('_218',0x218)]:
        result[off_hex] = struct.unpack('<Q', env.mu.mem_read(ctx+off_int,8))[0]
    result['_27a'] = env.mu.mem_read(ctx+0x27a,1)[0]
    result['regs_slots'] = [struct.unpack('<Q', env.mu.mem_read(regs_arr+i*8,8))[0] for i in range(16)]
    return result


def test_3880():
    tests = [
        ('bounded, idx=0', dict(_218=0,_1f8=1,_27a=0,_1f0=1,_1e8=1,_200=0,_28=1,_30=0,_20=1,_190=1,_188=1,
                                table_89f=[0]*16, regs_1160=[0]*16), 0xdeadbeef),
        ('idx=5 nonzero state', dict(_218=5,_1f8=0xdead,_27a=0x5a,_1f0=0xff,_1e8=0xcafebabe,_200=0,_28=0xbeef,_30=1,
                                     _20=0x9e3779b97f4a7c15, _190=0xff51afd7ed558ccd, _188=0xc4ceb9fe1a85ec53,
                                     table_89f=list(range(16)), regs_1160=[0]*16), 0x1122334455667788),
        ('r200=1 (sub path)', dict(_218=10,_1f8=0,_27a=0,_1f0=0,_1e8=0,_200=1,_28=0,_30=0,_20=0,_190=0,_188=0,
                                    table_89f=[0]*16, regs_1160=[0]*16), 0xffffffffffffffff),
        ('bigger idx', dict(_218=100,_1f8=1,_27a=1,_1f0=1,_1e8=1,_200=0,_28=1,_30=1,_20=1,_190=1,_188=1,
                            table_89f=[0]*0x100, regs_1160=[0]*0x100), 0x1),
        ('idx>1022 (ja path)', dict(_218=0x400,_1f8=0,_27a=0,_1f0=0,_1e8=0,_200=0,_28=0,_30=0,_20=0,_190=0,_188=0,
                                    table_89f=[0]*16, regs_1160=[0]*16), 0),
    ]
    passed = 0
    for name, ctx_dict, inp in tests:
        import copy
        ctx_for_py = copy.deepcopy(ctx_dict)
        ctx_for_py['table_89f'] = list(ctx_for_py['table_89f']) + [0]*(0x400 - len(ctx_for_py['table_89f']))
        ctx_for_py['regs_1160'] = list(ctx_for_py['regs_1160']) + [0]*(0x400 - len(ctx_for_py['regs_1160']))
        py_new, py_rsi = py_helper_3880(ctx_for_py, inp)
        u_result = unicorn_3880(ctx_dict, inp)
        ok = (u_result['_30'] == py_new['_30'] and
              u_result['_28'] == py_new['_28'] and
              u_result['_27a'] == py_new['_27a'] and
              u_result['_218'] == py_new['_218'])
        r14d = ctx_dict['_218'] & 0xffffffff
        # Need to compute what r14 (first state tick output) is to know if the if path triggered
        _, r14_mid = _state_tick(ctx_for_py)
        r14_mid_d = r14_mid & 0xffffffff
        if r14_mid_d <= 0x3fe:
            idx = r14_mid_d & 0x3ff
            reg_ok = (u_result['regs_slots'][idx] == py_new['regs_1160'][idx]) if idx < 16 else True
            ok = ok and reg_ok
        print(f'  [{"OK" if ok else "FAIL"}] {name} (idx_after_tick={r14_mid_d})')
        if not ok:
            print(f'    unicorn: _30={u_result["_30"]:x} _28={u_result["_28"]:x} _27a=0x{u_result["_27a"]:x} _218={u_result["_218"]:x}')
            print(f'    python : _30={py_new["_30"]:x} _28={py_new["_28"]:x} _27a=0x{py_new["_27a"]:x} _218={py_new["_218"]:x}')
        passed += ok
    print(f'\n  helper 0x140003880: {passed}/{len(tests)}')
    return passed, len(tests)


if __name__ == '__main__':
    print('=== Testing helper 0x140005b50 (xor-mask writer) ===')
    p1, t1 = test_5b50()
    print('\n=== Testing helper 0x140003a50 (shadow state + optional VM op) ===')
    p2, t2 = test_3a50()
    print('\n=== Testing helper 0x140003880 (store-to-table) ===')
    p3, t3 = test_3880()
    print(f'\n[SUMMARY] 0x140005b50: {p1}/{t1}, 0x140003a50: {p2}/{t2}, 0x140003880: {p3}/{t3}')
