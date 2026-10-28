#!/usr/bin/env python3
"""Analyze the .data table at 0x14041bd30..+0x4fb (1276 bytes).
Check if DES tables are embedded in it (static-init from PE)."""
import struct

PE = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE, 'rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H', d, pe+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII', d, off+8); sections.append((name,va,vs,rp,rs))
def va_to_fo(va):
    for n,sva,svs,rp,rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)

TABLE_VA = 0x14041bd30
TABLE_SZ = 0x4fb + 1  # 1276 bytes
fo = va_to_fo(TABLE_VA)
if fo is None:
    print(f'VA 0x{TABLE_VA:x} not in any section (BSS?)')
    # it could be in BSS which is uninit; check .data size vs raw size
    for n, sva, vs, rp, rs in sections:
        if n == '.data':
            print(f'   .data VA=0x{image_base+sva:x} VS=0x{vs:x} RS=0x{rs:x}  v0+vs=0x{image_base+sva+vs:x}')
            v0=image_base+sva; v1=v0+rs
            if v0 <= TABLE_VA < v0+vs:
                offset_in_virt = TABLE_VA - v0
                if offset_in_virt < rs:
                    fo = rp + offset_in_virt
                    print(f'   -> within raw .data, fo=0x{fo:x}')
                else:
                    print(f'   -> BEYOND raw .data (BSS/zero-init)')

if fo:
    table = d[fo:fo+TABLE_SZ]
    print(f'[*] table at VA=0x{TABLE_VA:x} FO=0x{fo:x} size={TABLE_SZ}')
    print(f'   first 128 bytes: {table[:128].hex()}')
    print(f'   last  32 bytes:  {table[-32:].hex()}')

    # Check if the DES tables are copied here
    DES_TABLES = {
        'PC1_56':   d[va_to_fo(0x1403ec908):va_to_fo(0x1403ec908)+56],
        'PC2_48':   d[va_to_fo(0x1403ed458):va_to_fo(0x1403ed458)+48],
        'E_48':     d[va_to_fo(0x1403eead0):va_to_fo(0x1403eead0)+48],
        'P_32':     d[va_to_fo(0x1403ea790):va_to_fo(0x1403ea790)+32],
        'IP_64':    d[va_to_fo(0x1403def60):va_to_fo(0x1403def60)+64],
        'FP_64':    d[va_to_fo(0x1403e03b0):va_to_fo(0x1403e03b0)+64],
        'Sbox_512': d[va_to_fo(0x1403f1150):va_to_fo(0x1403f1150)+512],
    }
    print('\n[*] substring searches of DES tables inside .data[0x14041bd30..]:')
    for name, bs in DES_TABLES.items():
        try:
            idx = table.index(bs)
            print(f'   {name}: FOUND at .data+{idx} (sz={len(bs)})')
        except ValueError:
            # Try first 16 bytes
            try:
                i16 = table.index(bs[:16])
                print(f'   {name}: partial first-16 at .data+{i16}')
            except ValueError:
                print(f'   {name}: not found')

    # Histogram of byte values in the table
    from collections import Counter
    c = Counter(table)
    print(f'\n[*] byte histogram: {len(c)} distinct values; top 10:')
    for b, n in c.most_common(10):
        print(f'   0x{b:02x}: {n}')
    # Entropy
    import math
    total = len(table)
    H = -sum((n/total) * math.log2(n/total) for n in c.values())
    print(f'   entropy (bits/byte) = {H:.3f}  (uniform random ~ 7.90-8.00)')
