#!/usr/bin/env python3
"""Differential test for the 8 hex-VM state handlers:
  compare the C++ port in src/pafet_hexvm_handlers_xxv.h against the x64
  bodies run under Unicorn. Each handler takes rcx = ctx and mutates
  ctx[0x4b0] (K), ctx[0x230] (A), ctx[0x940] (B).

Produces jack_xxv_evidence/hexvm_handlers_diff.json."""
import os, json, struct, random
import pefile, unicorn
from unicorn.x86_const import *

HERE = os.path.dirname(os.path.abspath(__file__))
PE_PATH = os.path.join(HERE, '..', 'pafet.bin')
BASE = 0x140000000
HANDLERS = [0x14004c490, 0x14004c4f0, 0x14004c560, 0x14004c5b0,
            0x14004c5d0, 0x14004c630, 0x14004c690, 0x14004c6a0]

OUT_DIR = os.path.join(HERE, '..', 'jack_xxv_evidence')
os.makedirs(OUT_DIR, exist_ok=True)

def fmix64(x):
    x &= 0xFFFFFFFFFFFFFFFF
    x = (x ^ (x >> 33)) * 0xff51afd7ed558ccd & 0xFFFFFFFFFFFFFFFF
    x = (x ^ (x >> 33)) * 0xc4ceb9fe1a85ec53 & 0xFFFFFFFFFFFFFFFF
    x = x ^ (x >> 33)
    return x & 0xFFFFFFFFFFFFFFFF

def cpp_H(idx, K, A, B):
    """Mirror of pafet_hexvm_handlers_xxv.h."""
    MASK = 0xFFFFFFFFFFFFFFFF
    if idx == 0:
        A = fmix64(K ^ A)
    elif idx == 1:
        K_old = K
        B = fmix64((K_old >> 7) ^ B)
        K = (0x9e3779b97f4a7c15 + K_old) & MASK
    elif idx == 2:
        K ^= fmix64((A + 1) & MASK)
    elif idx == 3:
        t = (K & 6) | 1
        A = (A + t) & MASK
    elif idx == 4:
        B ^= fmix64(K ^ A)
        B &= MASK
    elif idx == 5:
        K = fmix64(B ^ K)
    elif idx == 6:
        A ^= (K >> 32) & 0xFF
    elif idx == 7:
        B = fmix64((K + B) & MASK)
    return K & MASK, A & MASK, B & MASK

def setup_unicorn():
    pe = pefile.PE(PE_PATH)
    uc = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    end = max(s.VirtualAddress + s.Misc_VirtualSize for s in pe.sections)
    uc.mem_map(BASE, (end + 0xFFF) & ~0xFFF, unicorn.UC_PROT_ALL)
    uc.mem_write(BASE, pe.header)
    for s in pe.sections:
        uc.mem_write(BASE + s.VirtualAddress, s.get_data()[:s.Misc_VirtualSize])
    # Stack
    uc.mem_map(0x10000000, 0x10000)
    # Ctx — allocate 0x2000 bytes at a known address
    ctx = 0x20000000
    uc.mem_map(ctx, 0x2000)
    return uc, ctx

def run_handler(uc, ctx, handler_va, K, A, B):
    # Zero ctx, place K, A, B, then run from handler_va to its ret
    uc.mem_write(ctx, b'\x00' * 0x2000)
    uc.mem_write(ctx + 0x4b0, struct.pack('<Q', K))
    uc.mem_write(ctx + 0x230, struct.pack('<Q', A))
    uc.mem_write(ctx + 0x940, struct.pack('<Q', B))
    uc.reg_write(UC_X86_REG_RCX, ctx)
    uc.reg_write(UC_X86_REG_RSP, 0x1000f000)
    # Push a dummy return address to a sentinel RIP so Unicorn stops cleanly
    SENTINEL = 0x7FFFFFFF0000
    uc.mem_write(0x1000effc, struct.pack('<Q', SENTINEL))
    uc.reg_write(UC_X86_REG_RSP, 0x1000effc)
    # Run until ret pops SENTINEL
    try:
        uc.emu_start(handler_va, SENTINEL, count=100)
    except unicorn.UcError:
        pass
    K_after = struct.unpack('<Q', uc.mem_read(ctx + 0x4b0, 8))[0]
    A_after = struct.unpack('<Q', uc.mem_read(ctx + 0x230, 8))[0]
    B_after = struct.unpack('<Q', uc.mem_read(ctx + 0x940, 8))[0]
    return K_after, A_after, B_after

def main():
    uc, ctx = setup_unicorn()
    results = []
    rng = random.Random(1234567)
    for idx, hva in enumerate(HANDLERS):
        pass_count = 0
        fail_count = 0
        failing = []
        for trial in range(50):
            K = rng.randint(0, 0xFFFFFFFFFFFFFFFF)
            A = rng.randint(0, 0xFFFFFFFFFFFFFFFF)
            B = rng.randint(0, 0xFFFFFFFFFFFFFFFF)
            Ku, Au, Bu = run_handler(uc, ctx, hva, K, A, B)
            Kc, Ac, Bc = cpp_H(idx, K, A, B)
            if (Ku, Au, Bu) == (Kc, Ac, Bc):
                pass_count += 1
            else:
                fail_count += 1
                if len(failing) < 3:
                    failing.append({
                        'K': hex(K), 'A': hex(A), 'B': hex(B),
                        'unicorn': {'K': hex(Ku), 'A': hex(Au), 'B': hex(Bu)},
                        'cpp':     {'K': hex(Kc), 'A': hex(Ac), 'B': hex(Bc)},
                    })
        results.append({
            'handler_idx': idx,
            'va': hex(hva),
            'pass': pass_count,
            'fail': fail_count,
            'failing_samples': failing,
        })
        print(f'[H{idx}] 0x{hva:x}  pass={pass_count}/50  fail={fail_count}')
        if failing:
            for f in failing[:1]:
                print(f'       sample fail: K={f["K"]} A={f["A"]} B={f["B"]}')
                print(f'         unicorn: {f["unicorn"]}')
                print(f'         cpp:     {f["cpp"]}')

    out = os.path.join(OUT_DIR, 'hexvm_handlers_diff.json')
    with open(out, 'w') as f:
        json.dump({'results': results}, f, indent=1)
    print(f'[+] saved {out}')


if __name__ == '__main__':
    main()
