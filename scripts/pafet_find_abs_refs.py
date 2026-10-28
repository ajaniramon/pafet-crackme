#!/usr/bin/env python3
import struct
d = open(r'C:\Users\Ramón\Desktop\pafet.bin','rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H',d,pe+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d,off+8); sections.append((name,va,vs,rp,rs))
def fo_to_section(fo):
    for n,sva,svs,rp,rs in sections:
        if rp<=fo<rp+rs: return n, image_base+sva+(fo-rp)
    return '?', 0

TABLES = {
    'PC1': 0x1403ec908,
    'PC2': 0x1403ed458,
    'E':   0x1403eead0,
    'P':   0x1403ea790,
    'IP':  0x1403def60,
    'FP':  0x1403e03b0,
    'Sbox':0x1403f1150,
}
for name, va in TABLES.items():
    needle = va.to_bytes(8, 'little')
    hits = []
    pos = 0
    while True:
        i = d.find(needle, pos)
        if i < 0: break
        hits.append(i)
        pos = i + 1
    print(f'{name:<5} VA=0x{va:x}  abs u64 LE hits: {len(hits)}')
    for h in hits[:6]:
        sec, hva = fo_to_section(h)
        ctx = ' '.join(f'{b:02x}' for b in d[max(0,h-8):h+16])
        print(f'   FO=0x{h:x} VA=0x{hva:x} ({sec})  ctx: {ctx}')
