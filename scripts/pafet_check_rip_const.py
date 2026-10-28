#!/usr/bin/env python3
"""Compute and dump the constant 0x1403f1a68 referenced inside handler 19."""
import struct

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

# handler 19 does: lea rax, [rip + 0x5a8ec] at VA 0x140397175 (7 bytes)
# target = 0x140397175 + 7 + 0x5a8ec = 0x1403F1A68
va = 0x140397175 + 7 + 0x5a8ec
print(f'[*] rip-rel target = 0x{va:x}')
fo = va_to_fo(va)
print(f'    FO = 0x{fo:x}')
raw = d[fo:fo+256]
print(f'[*] 256 bytes at target:')
for i in range(0, 256, 16):
    print(f'    +0x{i:03x}: {raw[i:i+16].hex()}  {raw[i:i+16].decode("latin-1", errors="replace")!r}')

# Could it be a vtable? Check first qword as pointer
first_q = struct.unpack_from('<Q', raw, 0)[0]
print(f'\n[*] first qword as ptr: 0x{first_q:x}')
if 0x140000000 <= first_q < 0x180000000:
    fo2 = va_to_fo(first_q)
    print(f'    (within image) FO 0x{fo2:x}: {d[fo2:fo2+32].hex()}')
# Second qword
sq = struct.unpack_from('<Q', raw, 8)[0]
print(f'[*] second qword as ptr: 0x{sq:x}')
if 0x140000000 <= sq < 0x180000000:
    fo3 = va_to_fo(sq)
    if fo3:
        print(f'    (within image) FO 0x{fo3:x}: {d[fo3:fo3+64]!r}')
# Also walk a few more q's
for i in range(2, 12):
    q = struct.unpack_from('<Q', raw, i*8)[0]
    if 0x140000000 <= q < 0x180000000:
        fo_q = va_to_fo(q)
        if fo_q:
            print(f'    q[{i}] = 0x{q:x}  FO 0x{fo_q:x}: {d[fo_q:fo_q+48]!r}')
