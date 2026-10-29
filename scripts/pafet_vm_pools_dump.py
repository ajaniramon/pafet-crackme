#!/usr/bin/env python3
"""Extract encrypted bytecode blobs and nearby pool-looking tables for the 4
nested VMs. Apply the whitelist (SHA-256 IV/K, DES tables, fmix64 Murmur,
ASCII strings) and dump surviving constants with provenance.

Does NOT fully decrypt the per-VM bytecode (would require native_probe
adapted per-VM, which only exists for main). Captures raw blobs + metadata
+ a scan of nearby .rdata regions as evidence.
"""
import hashlib
import json
import os
import struct
from pathlib import Path

import pefile

BASE = 0x140000000
PE_PATH = r'C:\Users\Ramón\Desktop\pafet_crackme\pafet.bin'
EXPECTED_H = '9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420'
OUT = Path(r'C:\Users\Ramón\Desktop\pafet_crackme\vm_pools_evidence')

# From recon pass: unique .rdata lea per executor
VMS = [
    # (name, executor_va, blob_va)
    ('usuario', 0x140048960, 0x1403e5020),  # 1752 B per pafet_uservm_bc.py
    ('sha',     0x14027aba0, 0x1403e3f10),
    ('serial',  0x14022a120, 0x1403e9c10),
    ('hex',     0x1400804c0, 0x1403ec120),
    # Serial has also two outer wrappers but the exec one is 0x14022a120.
]

# Known SHA-256 IV and constants
SHA_IV = [0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
          0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19]
SHA_K = [
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2,
]
FMIX_CONST = {0xff51afd7ed558ccd, 0xc4ceb9fe1a85ec53, 0x100000001b3, 0x9e3779b97f4a7c15}
# DES PC-1, PC-2, IP tables (first element of each is distinctive)
DES_PC1_FIRST = 57
DES_SBOX_FIRST_ROW = [14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7]

# Known plaintext strings from the earlier audit (13 strings in main)
# Not loaded here; we only need their bytes if they appear in a blob.
WHITELIST_U32 = set(SHA_IV + SHA_K)
WHITELIST_U64 = FMIX_CONST | {0xde188941a3375d3a}  # the g_serial XOR mask previously conjectured


def section_of(pe, va):
    rva = va - BASE
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + max(s.Misc_VirtualSize, s.SizeOfRawData):
            return s.Name.rstrip(b'\0').decode(errors='replace')
    return '?'


def extract_blob(pe, blob_va, maxsize=0x2000):
    """Read raw bytes starting at blob_va, up to the next recognizable
    boundary (next big block of zeros or next lea target). Keep conservative."""
    rva = blob_va - BASE
    # Read a conservative window and shrink: find a run of 32+ zero bytes.
    data = pe.get_data(rva, maxsize)
    # Trim trailing region: look for sustained zero run >= 32
    cut = len(data)
    i = 0
    run = 0
    while i < len(data):
        if data[i] == 0:
            run += 1
            if run >= 32:
                cut = i - 31
                break
        else:
            run = 0
        i += 1
    return bytes(data[:cut])


def ascii_runs(data, min_len=4):
    runs = []
    start = None
    for i, c in enumerate(data + b'\0'):
        if 0x20 <= c <= 0x7e:
            if start is None:
                start = i
        else:
            if start is not None and i - start >= min_len:
                runs.append((start, data[start:i].decode(errors='replace')))
            start = None
    return runs


def entropy(data):
    import math
    from collections import Counter
    if not data:
        return 0.0
    c = Counter(data)
    n = len(data)
    return -sum((v / n) * math.log2(v / n) for v in c.values())


def scan_u64(data):
    """Return list of (offset, u64_le) for each 8-aligned u64."""
    out = []
    for i in range(0, len(data) - 7, 8):
        out.append((i, struct.unpack_from('<Q', data, i)[0]))
    return out


def scan_u32(data):
    out = []
    for i in range(0, len(data) - 3, 4):
        out.append((i, struct.unpack_from('<I', data, i)[0]))
    return out


def inverse_f_user_prefix(data):
    """Try to invert f_user over a hex prefix: s18[i] = ((user[N-1-i]^0x5a)+7+3i)&0xFF.
    Return list of (len, candidate_user_bytes) that give ASCII [0x20..0x7e]."""
    MASK8 = 0xFF
    out = []
    for n in range(1, min(32, len(data) + 1)):
        prefix = data[:n]
        # Reverse: user[j] = ((prefix[n-1-j] - 7 - 3*(n-1-j)) ^ 0x5a) & 0xFF
        user = bytearray(n)
        for j in range(n):
            i = n - 1 - j
            user[j] = ((prefix[i] - 7 - 3 * i) & MASK8) ^ 0x5a
        if all(0x20 <= b <= 0x7e for b in user):
            out.append((n, bytes(user)))
    return out


def main():
    OUT.mkdir(exist_ok=True)
    pe = pefile.PE(PE_PATH, fast_load=True)
    pe_bytes = pe.__data__.tobytes() if hasattr(pe.__data__, 'tobytes') else bytes(pe.__data__)

    binary_sha = hashlib.sha256(open(PE_PATH, 'rb').read()).hexdigest()
    report = {
        'binary': PE_PATH,
        'binary_sha256': binary_sha,
        'expected_user_sha256': EXPECTED_H,
        'notes': [
            'Each VM executor has exactly ONE .rdata lea target: its encrypted bytecode blob.',
            'Nested VM pools (analogue of 0x3ea8b0/930/9e0 in main) were NOT found with a trivial scan;',
            'per-VM decryption is required to extract the plaintext bytecode and locate CONST operands.',
            'This script dumps raw blobs + runs ASCII/sha256/f_user_inverse heuristics on them as evidence.',
        ],
        'vms': [],
    }

    for name, exec_va, blob_va in VMS:
        print(f'=== VM {name} exec=0x{exec_va:x} blob=0x{blob_va:x} ===')
        blob = extract_blob(pe, blob_va)
        blob_sha = hashlib.sha256(blob).hexdigest()
        print(f'  blob size={len(blob)} sha256={blob_sha} entropy={entropy(blob):.3f}')

        # Save raw blob
        (OUT / f'{name}_blob_enc.bin').write_bytes(blob)

        # ASCII scan
        runs = ascii_runs(blob, 6)
        print(f'  ascii runs>=6: {len(runs)}')
        for off, s in runs[:5]:
            print(f'    +0x{off:x}: {s!r}')

        # Scan for whitelisted constants
        u32s = scan_u32(blob)
        u64s = scan_u64(blob)
        hits_sha_iv = [(o, v) for o, v in u32s if v in set(SHA_IV)]
        hits_sha_k = [(o, v) for o, v in u32s if v in set(SHA_K)]
        hits_fmix = [(o, v) for o, v in u64s if v in FMIX_CONST]
        hits_other_known = [(o, v) for o, v in u64s if v in WHITELIST_U64 and v not in FMIX_CONST]
        print(f'  SHA-256 IV u32 hits: {len(hits_sha_iv)}')
        print(f'  SHA-256 K  u32 hits: {len(hits_sha_k)}')
        print(f'  fmix64 u64 hits: {len(hits_fmix)}')
        print(f'  other known u64 hits: {len(hits_other_known)}')

        # SHA-256 of blob (does it == H?)
        matches_H = (blob_sha == EXPECTED_H)
        if matches_H:
            print('  *** SHA256(blob) == H (username target hash) ***')

        # Try blob slices as DES3 key candidates (24B at every 8-aligned offset)
        des_candidates = []
        # Lazy import so missing crypto doesn't crash recon
        try:
            from Crypto.Cipher import DES
            CIPHERTEXT_HEX = ('6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3'
                              '455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09'
                              'abb0a67da54ba93b')
            CT = bytes.fromhex(CIPHERTEXT_HEX)
            def des3_dec(ct, key):
                k1 = DES.new(key[0:8],  DES.MODE_ECB)
                k2 = DES.new(key[8:16], DES.MODE_ECB)
                k3 = DES.new(key[16:24], DES.MODE_ECB)
                return k1.decrypt(k2.encrypt(k3.decrypt(ct)))
            tested = 0
            for off in range(0, len(blob) - 23):
                key = blob[off:off+24]
                try:
                    pt = des3_dec(CT[:8], key)  # first block only, cheap
                    if pt.startswith(b'CMO{'):
                        print(f'  *** CANDIDATE DES3 key @ +0x{off:x}: {key.hex()} -> first block starts CMO{{ ***')
                        des_candidates.append((off, key.hex(), pt.hex()))
                except Exception:
                    pass
                tested += 1
            print(f'  DES3-key candidates tested: {tested}, hits: {len(des_candidates)}')
        except ImportError:
            print('  (pycryptodome missing, skipping DES scan)')

        # Try blob slices as username candidates (sha256 == H?)
        sha_candidates = []
        for ln in range(1, min(64, len(blob)) + 1):
            for off in range(0, len(blob) - ln + 1):
                s = blob[off:off+ln]
                if hashlib.sha256(s).hexdigest() == EXPECTED_H:
                    print(f'  *** SHA256 preimage @ +0x{off:x} len={ln}: {s.hex()} ***')
                    sha_candidates.append((off, ln, s.hex()))
        print(f'  SHA preimage hits in blob: {len(sha_candidates)}')

        # f_user inverse on first 32 bytes
        fuser_cands = inverse_f_user_prefix(blob[:32])
        plausible = [(n, u) for n, u in fuser_cands
                     if all(chr(c).isalnum() or c in b'-_.' for c in u)]
        print(f'  f_user^-1 ASCII prefixes: {len(fuser_cands)} total, {len(plausible)} alnum-only')
        for n, u in plausible[:5]:
            print(f'    len={n}: user={u!r}')

        report['vms'].append({
            'name': name,
            'executor_va': f'0x{exec_va:x}',
            'blob_va': f'0x{blob_va:x}',
            'blob_size': len(blob),
            'blob_sha256': blob_sha,
            'entropy_bits_per_byte': round(entropy(blob), 4),
            'ascii_runs': [{'offset': o, 'text': s} for o, s in runs[:20]],
            'sha_iv_u32_hits': len(hits_sha_iv),
            'sha_k_u32_hits': len(hits_sha_k),
            'fmix_u64_hits': len(hits_fmix),
            'blob_sha256_matches_H': matches_H,
            'des3_key_candidates_producing_CMO': des_candidates,
            'sha_preimage_hits': sha_candidates,
            'f_user_inverse_alnum_candidates': [{'len': n, 'user': u.decode('ascii', errors='replace')} for n, u in plausible],
        })

    (OUT / 'report.json').write_text(json.dumps(report, indent=2))
    print(f'\n[*] Report: {OUT/"report.json"}')
    print(f'[*] Blobs saved to: {OUT}')

    any_hit = any(v['blob_sha256_matches_H']
                  or v['des3_key_candidates_producing_CMO']
                  or v['sha_preimage_hits']
                  for v in report['vms'])
    print(f'\n[*] Candidate hits across all VMs: {"YES" if any_hit else "NO"}')


if __name__ == '__main__':
    main()
