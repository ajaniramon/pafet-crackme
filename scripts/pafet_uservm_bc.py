#!/usr/bin/env python3
"""Extract the user-VM encrypted bytecode at VA 0x1403E5020 (1752 B)
and compute attestation sum offline to verify."""
import struct, math
from collections import Counter

PE = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE, 'rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H',d,pe+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d,off+8); sections.append((name,va,vs,rp,rs))
def va_to_fo(va):
    for n,sva,svs,rp,rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)

BC_VA = 0x1403E5020
BC_SZ = 0x6d8  # 1752
fo = va_to_fo(BC_VA)
bc = d[fo:fo+BC_SZ]

def entropy(bs):
    c = Counter(bs)
    n = len(bs)
    return -sum((cnt/n) * math.log2(cnt/n) for cnt in c.values())

print(f'[*] user-VM encrypted bytecode @ VA 0x{BC_VA:x} FO 0x{fo:x}, size={BC_SZ}')
print(f'    entropy = {entropy(bc):.3f} bits/byte  (max for len 1752 = 8.0)')
print(f'    first 32 bytes: {bc[:32].hex()}')
print(f'    sha-ish (first 16 after xor 0): {bc[:16].hex()}')

# Save it to disk
import os
os.makedirs(r'C:\Users\Ramón\Desktop\pafet_blobs', exist_ok=True)
out = r'C:\Users\Ramón\Desktop\pafet_blobs\uservm_bc_enc.bin'
with open(out, 'wb') as f: f.write(bc)
print(f'    saved to {out}')

# Compute the attestation sum offline using the same loop
MASK = (1<<64)-1
C1 = 0xff51afd7ed558ccd
C2 = 0xc4ceb9fe1a85ec53
def fmix64(h):
    h &= MASK
    h ^= h >> 33
    h = (h * C1) & MASK
    h ^= h >> 33
    h = (h * C2) & MASK
    h ^= h >> 33
    return h

rax = 0xf7002e5d6b6ed339
rbx = 0  # counter
for i in range(len(bc)):
    rcx = bc[i] ^ rbx ^ rax
    rax = fmix64(rcx & MASK)
    rbx += 1

print(f'\n[*] attestation sum computed offline: 0x{rax:016x}')
print(f'    expected (hardcoded cmp):          0xc4344faf7ef3b8df')
print(f'    match: {rax == 0xc4344faf7ef3b8df}')

# Also inspect: is the bytecode plaintext? Any ascii run?
runs = []
start = None
for i, c in enumerate(bc + b'\0'):
    if 0x20 <= c <= 0x7e:
        if start is None: start = i
    else:
        if start is not None and i-start >= 4:
            runs.append((start, i-start))
        start = None
print(f'[*] ascii runs >=4: {len(runs)}')
for s, l in runs[:10]:
    print(f'   +0x{s:x} ({l} chars): {bc[s:s+l].decode()!r}')

# What are the most common bytes?
cnt = Counter(bc)
print(f'[*] top 5 common bytes: {cnt.most_common(5)}')

# Byte frequency: if bytecode has few opcodes used repeatedly, we'd see peaks
# For 1752 bytes with ~20 opcodes, each ~87 occurences on average.
# Compute mean and stddev of counts
counts = [cnt.get(b, 0) for b in range(256)]
import statistics
print(f'[*] byte count mean={statistics.mean(counts):.2f}  stdev={statistics.stdev(counts):.2f}  max={max(counts)}')
