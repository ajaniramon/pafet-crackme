#!/usr/bin/env python3
"""Hunt for the 72-byte ciphertext in pafet.bin.
Strategy A: find 72-byte windows with high entropy (> 7.5 bits/byte).
Strategy B: use the 6 captured plaintexts — if there is a FIXED ciphertext C
and KEY_i derived per-input, then (plaintext_i XOR plaintext_j) == (KEY_i XOR KEY_j).
Any constant C XORed cancels. If the KEY_i has some structure, we can learn it.

But the key test: does p1 XOR p2 look like it could be key XOR? If keys are
pseudorandom too, p1 XOR p2 is also pseudorandom (uninformative).

Strategy C: brute-force candidate ciphertexts by trying each 72B window in PE
and checking if (window XOR plaintext_i) matches a hash family on input."""
import struct, math
from collections import Counter

PE = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE, 'rb').read()

def entropy(bs):
    c = Counter(bs)
    n = len(bs)
    return -sum((cnt/n) * math.log2(cnt/n) for cnt in c.values())

# A. Scan .rdata/.data for 72-byte windows with entropy > 7.5
pe_off = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe_off+20)[0]
image_base = struct.unpack_from('<Q', d, pe_off+24+24)[0]
sec_tbl = pe_off+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H',d,pe_off+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d,off+8); sections.append((name,va,vs,rp,rs))

LEN = 72
candidates = []
for sname, sva, svs, srp, srs in sections:
    if sname not in ('.rdata', '.data', '.text'): continue
    end = srp + min(svs, srs)
    for i in range(srp, end - LEN, 8):
        w = d[i:i+LEN]
        if entropy(w) > 7.5:
            candidates.append((entropy(w), i, sname))

candidates.sort(reverse=True)
print(f'[*] High-entropy 72B windows: {len(candidates)} candidates')
for ent, fo, sname in candidates[:15]:
    print(f'   FO 0x{fo:x} ({sname}) H={ent:.3f}  bytes={d[fo:fo+16].hex()}...')

# B. Pairwise XOR analysis
CAPTURES_P = [
    bytes.fromhex('fd2077a101acdfae1a7349c88533c26caa5fa363ba51f3d5cfbff1ad0a56c985'),
    bytes.fromhex('fb5009a95e91bbb44cb22dbd3a1f2eab509e2b3fe09ad5f323ea99ce195e5dec'),
    bytes.fromhex('c49c9dffd921f09ad4a879e84be9b4d99210ca6f2792d710a373675bb996449c'),
    bytes.fromhex('e6e976ec62cf3fba80f7c987a374659af661235d3ef4f1b2e6681fa0fa2687b1'),
    bytes.fromhex('36e3e3491c9bb26f73ba302c4a1f9ec5215e1b39bd2d07ccec7aa4d31c6dbf2b'),
    bytes.fromhex('3510366fbff5cb69f9ae3d6d21437b3f19d8374fca2495c463fccc9db989391f'),
]
# Only 32B shown — but each is 72B of the plaintext (we captured first 128 hex chars = 64B).
# Each plaintext is 72B, so our hex strings are first 32B.

print(f'\n[*] XOR structure test: p_i XOR p_j has same length as p_i (independent of fixed C).')
# If fixed-C exists:  p_i = KEY_i XOR C  →  p_i XOR p_j = KEY_i XOR KEY_j (no C).
# This tells us about KEY distribution.
# If KEY is pseudorandom, p_i XOR p_j is also pseudorandom.
# If plaintext XOR p_other has HIGH ENTROPY → not a trivial keystream.

for i in range(len(CAPTURES_P)):
    for j in range(i+1, len(CAPTURES_P)):
        x = bytes(a^b for a,b in zip(CAPTURES_P[i], CAPTURES_P[j]))
        print(f'   p{i} XOR p{j}: entropy={entropy(x):.3f}  bytes[:16]={x[:16].hex()}')

# C. Try each candidate as C and see if (p_i XOR C) has structure
print(f'\n[*] Trying top-10 ciphertext candidates XORed with p_0 ("alice","serial01"):')
p0 = CAPTURES_P[0]
for ent, fo, sname in candidates[:10]:
    c = d[fo:fo+32]  # match length of p0 we have (32 bytes shown)
    key_candidate = bytes(a^b for a,b in zip(p0, c))
    print(f'   FO 0x{fo:x}: key_cand entropy={entropy(key_candidate):.3f}  bytes={key_candidate[:16].hex()}')

# D. Specifically: is there a buffer at or near the main-VM bytecode (0x1403dca10, 2730B)?
# Try as 72-byte windows at specific VAs we already know about.
KNOWN_VAS = {
    '.data[0x14041bd30]': 0x14041bd30,
    'script-bc@0x1403dca10': 0x1403dca10,
    'cipher-bc@0x1403eb2f0': 0x1403eb2f0,
    'IP@0x1403def60': 0x1403def60,
    'FP@0x1403e03b0': 0x1403e03b0,
}
def va_to_fo(va):
    for n,sva,svs,rp,rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)

print(f'\n[*] Test known addresses as C:')
for label, va in KNOWN_VAS.items():
    fo = va_to_fo(va)
    for offset in range(0, 256, 8):
        c = d[fo+offset:fo+offset+32]
        if len(c) < 32: continue
        kc = bytes(a^b for a,b in zip(p0, c))
        if entropy(kc) < 7.0 or entropy(kc) > 7.9:
            print(f'   {label}+0x{offset:x}: C_ent={entropy(c):.2f} kc_ent={entropy(kc):.3f} kc={kc[:16].hex()}')
