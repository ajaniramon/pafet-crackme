#!/usr/bin/env python3
"""Static search: do the plaintext bytes `35 10 36 6f bf f5 cb 69` exist in the PE,
either plain or XORed with a single-byte or 8-byte constant?"""
PE = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE, 'rb').read()
NEEDLE = bytes.fromhex('3510366fbff5cb69f9ae3d6d21437b3f')  # 16 bytes of plaintext

print(f'[*] searching PE ({len(d)} bytes) for plaintext bytes')

# 1. Plain
idx = 0
plain_hits = []
while True:
    j = d.find(NEEDLE, idx)
    if j < 0: break
    plain_hits.append(j)
    idx = j+1
print(f'   plain hits: {len(plain_hits)} at FO {plain_hits[:5]}')

# 2. XOR with each possible byte constant 0..255
print('\n[*] XOR with 1-byte key:')
for k in range(256):
    xneedle = bytes(c ^ k for c in NEEDLE)
    j = d.find(xneedle)
    if j >= 0:
        print(f'   key=0x{k:02x}: FO 0x{j:x}')

# 3. First 8 bytes only (shorter needle increases hits — expect many)
print('\n[*] First 8 bytes of plaintext:')
NSHORT = NEEDLE[:8]
plain_hits = []
idx = 0
while True:
    j = d.find(NSHORT, idx)
    if j < 0: break
    plain_hits.append(j); idx = j+1
print(f'   plain hits (first 8 bytes): {len(plain_hits)}')

# 4. XOR 8-byte key — check XOR patterns:
#    for each file offset, compute d[fo:fo+8] XOR needle[:8]
#    if the key is constant across many offsets, suspicious
print('\n[*] XOR map (8-byte): scan for a KEY that appears many times when XORing d[fo:fo+8] with needle')
from collections import Counter
key_count = Counter()
step = 1
for i in range(0, len(d)-8, step):
    k = bytes(d[i+j] ^ NSHORT[j] for j in range(8))
    key_count[k] += 1
# Keys that match many fos → suggest they're actual XOR keys
top = key_count.most_common(10)
print(f'   top 10 derived keys and their frequency:')
for k, n in top:
    print(f'     key={k.hex()} count={n}')

# 5. Try: is there a 72-byte region in .rdata/.data that XOR'd with a RUN of bytes gives the plaintext?
# The ciphertext of the plaintext might be in .rdata adjacent to the main-VM bytecode.
# The plaintext is 72 bytes.
PT72 = bytes.fromhex('3510366fbff5cb69f9ae3d6d21437b3f19d8374fca2495c463fccc9db989391f4b73bf899972069bb371dacad9d5681d')
# scan: at each FO, compute XOR with PT72; find spans with few distinct bytes
print('\n[*] scanning for region whose XOR with PT72 has low entropy:')
import struct
pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H',d,pe+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d,off+8); sections.append((name,va,vs,rp,rs))

best = []
for sname, sva, svs, srp, srs in sections:
    if sname not in ('.rdata', '.data', '.text'): continue
    data_range = (srp, srp + min(svs, srs))
    for i in range(data_range[0], data_range[1] - 72, 8):
        x = bytes(d[i+j] ^ PT72[j] for j in range(72))
        # count distinct bytes
        distinct = len(set(x))
        if distinct < 20:  # low entropy
            best.append((distinct, i, sname, x))

best.sort()
print(f'   top 10 low-entropy XOR candidates:')
for dc, fo, sname, x in best[:10]:
    print(f'     FO 0x{fo:x} ({sname}) distinct={dc} xor_sample={x[:16].hex()}')
