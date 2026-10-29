#!/usr/bin/env python3
"""Lockstep validation: run the hex-VM dispatcher model (Python mirror of
src/pafet_hexvm_handlers_xxv.h) across the captured push stream and verify
that K evolves exactly as captured.

The capture gives [tick, item, K_low, K_high, counter, len] per push.
At push i, K_before should match our predicted K after drain(i-1).
If it does for all N pushes, the model is validated structurally."""
import json, os, sys

HERE = os.path.dirname(os.path.abspath(__file__))
TRACE = os.path.join(HERE, '..', 'vm_pools_evidence', 'hexvm_full_trace_xxv.json')
OUT = os.path.join(HERE, '..', 'jack_xxv_evidence', 'hexvm_lockstep.json')

MASK = 0xFFFFFFFFFFFFFFFF
phi = 0x9e3779b97f4a7c15

def fmix64(x):
    x &= MASK
    x = (x ^ (x >> 33)) * 0xff51afd7ed558ccd & MASK
    x = (x ^ (x >> 33)) * 0xc4ceb9fe1a85ec53 & MASK
    x = x ^ (x >> 33)
    return x & MASK

def H(idx, K, A, B):
    if idx == 0: A = fmix64(K ^ A)
    elif idx == 1:
        K_old = K
        B = fmix64((K_old >> 7) ^ B)
        K = (phi + K_old) & MASK
    elif idx == 2: K ^= fmix64((A + 1) & MASK)
    elif idx == 3: A = (A + ((K & 6) | 1)) & MASK
    elif idx == 4: B ^= fmix64(K ^ A); B &= MASK
    elif idx == 5: K = fmix64(B ^ K)
    elif idx == 6: A ^= (K >> 32) & 0xFF
    elif idx == 7: B = fmix64((K + B) & MASK)
    return K & MASK, A & MASK, B & MASK

def drain_once(K, A, B, item):
    """Simulate one drain cycle: pop item, compute sel, scramble K, run handler.
    Returns new (K, A, B, handler_idx, sel)."""
    K_pre = K
    item_mixed = (item ^ K_pre) & MASK                     # queue stores K^item
    sel = ((K_pre * phi + item_mixed) & MASK) >> 61
    K = fmix64(K_pre ^ item_mixed)                          # = fmix64(item)
    # Rotation hypothesis: handler_idx = ((K_pre & 7) + sel) & 7 using the
    # pre-fmix K. (table_remap effects not modeled yet.)
    handler_idx = ((K_pre & 7) + sel) & 7
    K, A, B = H(handler_idx, K, A, B)
    return K, A, B, handler_idx, sel

def main():
    with open(TRACE) as f:
        d = json.load(f)
    pushes = d['pushes']  # [tick, item, K_low, K_high, counter, len]
    N = len(pushes)
    print(f'Total pushes: {N}')
    # New capture format: [tick, item, K_lo, K_hi, A_lo, A_hi, B_lo, B_hi, cnt, len]
    def getK(p): return (p[3] << 32) | p[2]
    def getA(p): return (p[5] << 32) | p[4]
    def getB(p): return (p[7] << 32) | p[6]
    passes = 0; passes_K_only = 0
    first_mismatch = None
    handler_hits = [0]*8
    for i in range(N - 1):
        p = pushes[i]
        K_i = getK(p); A_i = getA(p); B_i = getB(p); item = p[1]
        # One drain cycle
        K2, A2, B2, hi, sel = drain_once(K_i, A_i, B_i, item)
        handler_hits[hi] += 1
        K_exp = getK(pushes[i+1])
        A_exp = getA(pushes[i+1])
        B_exp = getB(pushes[i+1])
        if (K2, A2, B2) == (K_exp, A_exp, B_exp):
            passes += 1
        if K2 == K_exp:
            passes_K_only += 1
        if (K2, A2, B2) != (K_exp, A_exp, B_exp) and first_mismatch is None:
            first_mismatch = {
                'push_idx': i, 'item': hex(item),
                'K_in': hex(K_i), 'A_in': hex(A_i), 'B_in': hex(B_i),
                'K_computed': hex(K2), 'K_expected': hex(K_exp),
                'A_computed': hex(A2), 'A_expected': hex(A_exp),
                'B_computed': hex(B2), 'B_expected': hex(B_exp),
                'handler_idx': hi, 'sel': sel
            }
            print(f'[FAIL] at push {i}: handler={hi}, sel={sel}, item=0x{item:x}')
            print(f'       in : K=0x{K_i:x} A=0x{A_i:x} B=0x{B_i:x}')
            print(f'       cpp: K=0x{K2:x} A=0x{A2:x} B=0x{B2:x}')
            print(f'       exp: K=0x{K_exp:x} A=0x{A_exp:x} B=0x{B_exp:x}')
    print(f'\nTotal (K, A, B) lockstep passes: {passes}/{N-1}')
    print(f'K-only lockstep passes:         {passes_K_only}/{N-1}')
    print(f'Handler hit distribution (model):')
    for i, c in enumerate(handler_hits):
        print(f'  H{i}: {c}')
    expected_hits = [38880, 23433, 33272, 25764, 45658, 31641, 34103, 52634]
    print(f'Expected (from capture):')
    for i, c in enumerate(expected_hits):
        print(f'  H{i}: {c}')
    with open(OUT, 'w') as f:
        json.dump({
            'total': N - 1, 'passes': passes,
            'first_mismatch': first_mismatch,
            'handler_hits_model': handler_hits,
            'handler_hits_expected': expected_hits,
        }, f, indent=1)
    print(f'[+] saved {OUT}')

if __name__ == '__main__':
    main()
