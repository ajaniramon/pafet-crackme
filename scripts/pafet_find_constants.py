#!/usr/bin/env python3
"""Locate the VM scheme constants inside pafet.bin and show their context.

Looks for:
  - ss          = 0x62587529768ce317  (seed from report)
  - 0x9E3779B97F4A7C15  (bc_ks multiplier, also fnv/golden)
  - 0xC2B2AE3D27D4EB4F  (ks2 multiplier)
  - 0xFF51AFD7ED558CCD  (fmix64 const 1)
  - 0xC4CEB9FE1A85EC53  (fmix64 const 2)
  - 0x5345474D ("SEGM") used in seg_key
  - cipher-VM entry 0x1400c0510 relative base (so we can locate its own mod_keys block)

For each hit, print surrounding bytes to visually spot `xorkey`/`hx` adjacency.
Also report the VA/section for each hit (to see whether it's in .rdata vs .text).
"""
import struct, os

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE_PATH, 'rb').read()
print(f'[*] loaded {len(d)} B')

pe = struct.unpack_from('<I', d, 0x3c)[0]
nsec = struct.unpack_from('<H', d, pe+6)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections = []
for i in range(nsec):
    off = sec_tbl + 40*i
    name = d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs, va, rs, rp = struct.unpack_from('<IIII', d, off+8)
    sections.append((name, va, vs, rp, rs))

def fo_to_section(fo):
    for name, sva, svs, rp, rs in sections:
        if rp <= fo < rp + rs:
            return name, image_base + sva + (fo - rp)
    return '?', 0

NEEDLES = [
    ('ss (report)',          0x62587529768CE317, 8),
    ('golden ratio 64',      0x9E3779B97F4A7C15, 8),
    ('ks2 multiplier',       0xC2B2AE3D27D4EB4F, 8),
    ('fmix const1',          0xFF51AFD7ED558CCD, 8),
    ('fmix const2',          0xC4CEB9FE1A85EC53, 8),
    ('SEGM tag u32',         0x5345474D,         4),
]

def hex_dump(fo, before=32, after=32):
    lo = max(0, fo-before); hi = min(len(d), fo+after)
    bs = d[lo:hi]
    annotations = []
    for i,b in enumerate(bs):
        pos = lo + i
        annotations.append(f'{b:02x}')
    marker = ' '*(before*3-1) + '^^'
    return ' '.join(annotations), marker

for label, val, sz in NEEDLES:
    needle = val.to_bytes(sz, 'little')
    hits = []
    pos = 0
    while True:
        i = d.find(needle, pos)
        if i < 0: break
        hits.append(i)
        pos = i + 1
    print(f'\n--- {label} = 0x{val:0{sz*2}X} ({sz}B LE)  hits={len(hits)}')
    for h in hits[:5]:
        sec, va = fo_to_section(h)
        print(f'   FO=0x{h:x}  VA=0x{va:x}  in={sec}')
        dump, mark = hex_dump(h, 32, 32+sz)
        print(f'     {dump}')
        print(f'     {mark}')

# Also show the surrounding bytes of each hit of ss (0x62...) more generously.
print('\n=== wide context around ss hits (xorkey/hx likely very close) ===')
ss_bytes = (0x62587529768CE317).to_bytes(8, 'little')
pos = 0
while True:
    i = d.find(ss_bytes, pos)
    if i < 0: break
    sec, va = fo_to_section(i)
    print(f'\n[ss hit] FO=0x{i:x} VA=0x{va:x} in={sec}')
    lo = max(0, i-128); hi = min(len(d), i+128)
    row = d[lo:hi]
    # 16-byte rows
    for off in range(0, len(row), 16):
        chunk = row[off:off+16]
        va_row = image_base + sections[0][1] + 0  # not used; just use file offset
        hb = ' '.join(f'{b:02x}' for b in chunk)
        asc= ''.join(chr(b) if 32<=b<127 else '.' for b in chunk)
        rfo = lo + off
        mark = '  <-- ss' if (lo+off) <= i < (lo+off+16) else ''
        print(f'   FO=0x{rfo:06x}  {hb:<48}  {asc}{mark}')
    pos = i + 1
