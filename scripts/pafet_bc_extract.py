#!/usr/bin/env python3
"""Extract Pafet script-VM bytecode blob.

Report says:
  bytecode of 2730 bytes at RVA 0x3dca10 (VA 0x1403dca10), seed ss=0x62587529768ce317.
  PE sections (confirmed earlier this session):
    .rdata  VA=1403cd000..14040c582  FO=3cc000..40b600
  So file offset = 0x3cc000 + (0x3dca10 - 0x3cd000) = 0x3dba10.

Also extract bytecode of the cipher-VM (1704 B at RVA 0x3eb2f0 = VA 0x1403eb2f0)
and keep handy. We don't attack it yet, but have it ready for step 2.
"""
import struct, os, sys, hashlib

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
OUT_DIR = r'C:\Users\Ramón\Desktop\pafet_blobs'
os.makedirs(OUT_DIR, exist_ok=True)

d = open(PE_PATH, 'rb').read()
print(f'[*] loaded {PE_PATH} ({len(d)} B, sha256={hashlib.sha256(d).hexdigest()[:16]}...)')

# Re-check PE header to compute file offsets safely
pe = struct.unpack_from('<I', d, 0x3c)[0]
nsec = struct.unpack_from('<H', d, pe+6)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
print(f'[*] ImageBase=0x{image_base:x}  sections={nsec}')
sections = []
for i in range(nsec):
    off = sec_tbl + 40*i
    name = d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs, va, rs, rp = struct.unpack_from('<IIII', d, off+8)
    sections.append((name, va, vs, rp, rs))
    print(f'   {name:<10} VA=0x{image_base+va:x} VS=0x{vs:x} FO=0x{rp:x} RS=0x{rs:x}')

def va_to_fo(va):
    for name, sva, svs, rp, rs in sections:
        v0 = image_base + sva
        v1 = v0 + max(svs, rs)
        if v0 <= va < v1:
            return rp + (va - v0)
    raise ValueError(f'VA 0x{va:x} not in any section')

BLOBS = [
    ('scriptvm_bc',  0x1403dca10, 2730, 'script-runner VM bytecode (seed 0x62587529768ce317)'),
    ('cipher_bc',    0x1403eb2f0, 1704, 'cipher VM bytecode (handlers encrypted)'),
]
for name, va, sz, desc in BLOBS:
    fo = va_to_fo(va)
    blob = d[fo:fo+sz]
    out = os.path.join(OUT_DIR, f'{name}.bin')
    with open(out, 'wb') as f: f.write(blob)
    print(f'[+] {name}: VA=0x{va:x} FO=0x{fo:x} size={sz} sha256={hashlib.sha256(blob).hexdigest()[:16]} -> {out}')
    # First 32 bytes preview
    hb = ' '.join(f'{b:02x}' for b in blob[:32])
    print(f'    first32: {hb}')

# Also dump DES tables for sanity (PC2 should start 0e 11 0b)
TABLES = [
    ('PC1', 0x1403ec908, 56),
    ('PC2', 0x1403ed458, 48),
    ('E',   0x1403eead0, 48),
    ('P',   0x1403ea790, 32),
    ('IP',  0x1403def60, 64),
    ('FP',  0x1403e03b0, 64),
    ('Sbox',0x1403f1150, 512),
]
print('\n[*] DES tables sanity:')
for n, va, sz in TABLES:
    fo = va_to_fo(va); blob = d[fo:fo+sz]
    print(f'   {n:<4} VA=0x{va:x} first8={" ".join(f"{b:02x}" for b in blob[:8])}')
