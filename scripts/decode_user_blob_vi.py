#!/usr/bin/env python3
"""Offline decode of user-VM encrypted bytecode blob at 0x1403E5020.

Replicates the materializer 0x140007610..0x140007ba1:
  - permute8 user-VM at 0x140002080 with 4 Feistel seeds (extracted statically)
  - cycle-walking block_starts for 73 blocks of 24 bytes each
  - splitmix64-style keystream per block from (block_pos, byte_idx)
  - XOR keystream against raw blob to recover plaintext 24-byte block
"""
import json
import pefile
import struct
import hashlib

MASK64 = (1 << 64) - 1
IMG = 0x140000000

# From static disasm of 0x140002080 (permute8_uservm)
SEEDS_PERMUTE = (
    0x5cd8585a9977c0d4,
    0xfe81d29118a944eb,
    0x18494ccf9be2c8fe,
    0xba32c7061b144c95,
)
PERMUTE_MUL = 0xd6e8feb86659fd93
FMIX_MUL1 = 0xff51afd7ed558ccd
FMIX_MUL2 = 0xc4ceb9fe1a85ec53

# From static disasm of 0x140007610 (materializer body)
PHI64 = 0x9e3779b97f4a7c15
MAT_SEED1 = 0xdc5ea5a85eb4aabd
MAT_SEED2 = 0xdc5ea5a84cb9a2c4
MAT_EXTRA = 0x2545f4914f6cdd1d  # observed but not yet used in simple model

# Blob config
BLOB_VA = 0x1403E5020
BLOB_SZ = 1752  # 73 * 24
BLOB_BLOCKS = 73
BLOCK_SZ = 24


def fmix(x):
    """fmix64 variant (two multiplications, >>33 steps)."""
    x &= MASK64
    x = ((x >> 33) ^ x) * FMIX_MUL1 & MASK64
    x = ((x >> 33) ^ x) * FMIX_MUL2 & MASK64
    x = ((x >> 33) ^ x)
    return x & MASK64


def permute8(x):
    """4-round Feistel over 8 bits (user-VM variant)."""
    left, right = (x >> 4) & 0xF, x & 0xF
    for seed in SEEDS_PERMUTE:
        # Mirror of 0x140002080 inner round body:
        # tmp = ((right * PERMUTE_MUL) ^ seed)
        # tmp = fmix(tmp) (two xorshift+mul steps)
        # new_right = ((tmp >> 17) ^ (tmp >> 50) ^ old_left) & 0xF (via r9d combination)
        tmp = (right * PERMUTE_MUL) & MASK64
        tmp ^= seed
        # fmix64-lite:
        tmp = (((tmp >> 33) ^ tmp) * FMIX_MUL1) & MASK64
        tmp = (((tmp >> 33) ^ tmp) * FMIX_MUL2) & MASK64
        # The materializer code uses:
        #   mov r9, rax ; shr rax, 0x11 ; shr r9, 0x32 ; xor r9d, eax ; xor r9d, edx
        #   where edx is 'left' (upper nibble).
        new_right_bits = ((tmp >> 17) ^ (tmp >> 0x32)) & 0xFFFFFFFF
        new_right = (new_right_bits ^ left) & 0xF
        left, right = right, new_right
    return (right << 4) | left


def block_starts():
    """Mirror of the cycle-walking in the materializer (bound 0x48 == 72)."""
    result = [0]
    for i in range(1, BLOB_BLOCKS):
        v = permute8(i - 1)
        for _ in range(64):
            if v < BLOB_BLOCKS - 1:  # 0x48 == 72
                break
            v = permute8(v)
        else:
            raise AssertionError('Cycle-walk budget exceeded')
        result.append((v + 1) * BLOCK_SZ)
    return result


def main():
    pe = pefile.PE('pafet.bin', fast_load=True)
    blob = pe.get_data(BLOB_VA - IMG, BLOB_SZ)
    assert len(blob) == BLOB_SZ, len(blob)
    print(f'Loaded raw blob: {len(blob)} bytes, sha256={hashlib.sha256(blob).hexdigest()[:16]}')

    # Phase 1: block_starts
    print('\n=== Phase 1: block_starts (cycle-walking permute8) ===')
    try:
        starts = block_starts()
        unique = sorted(set(starts))
        print(f'  {len(starts)} starts, {len(unique)} unique')
        print(f'  First 10: {starts[:10]}')
        print(f'  Sorted range check: expected [0,24,48,...,{(BLOB_BLOCKS-1)*BLOCK_SZ}]')
        print(f'  Permute8 covers all 73 block positions: {unique == list(range(0, BLOB_SZ, BLOCK_SZ))}')
    except Exception as e:
        print(f'  FAILED: {e}')
        return 1

    # Save for next step
    out = {
        'seeds_permute': [hex(s) for s in SEEDS_PERMUTE],
        'phi64': hex(PHI64),
        'mat_seeds': [hex(MAT_SEED1), hex(MAT_SEED2)],
        'block_starts': starts,
        'unique_starts': unique,
    }
    with open('vm_pools_evidence/decode_user_blob_vi.json', 'w') as fh:
        json.dump(out, fh, indent=2)
    print('\n[+] Saved vm_pools_evidence/decode_user_blob_vi.json')


if __name__ == '__main__':
    main()
