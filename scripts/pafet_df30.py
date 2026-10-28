#!/usr/bin/env python3
"""Disasm 0x14039df30 and surrounding vtable methods for the user-VM vtable
0x1403f1858. The vtable has q[2]=0x14039df30."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

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
md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

# Vtable 0x1403f1858 has these q entries (first 6):
# [0]: 0x14039df40 (seen earlier)
# [1]: 0x14039df40
# [2]: 0x14039df30
# [3]: 0x14039df20
# [4]: 0x14039df10
# Wait let me re-read

VT = 0x1403f1858
tfo = va_to_fo(VT)
print(f'[*] vtable {VT:x} first qwords:')
for i in range(10):
    q = struct.unpack_from('<Q', d, tfo + i*8)[0]
    print(f'   q[{i}] = 0x{q:016x}')

# Now disasm each virtual method
seen = set()
for i in range(6):
    q = struct.unpack_from('<Q', d, tfo + i*8)[0]
    if q in seen: continue
    seen.add(q)
    print(f'\n[*] virtual method q[*] @ 0x{q:x}')
    qfo = va_to_fo(q)
    if qfo is None:
        print(f'   (not mapped)')
        continue
    for j, ins in enumerate(md.disasm(d[qfo:qfo+64], q)):
        print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
        if ins.mnemonic in ('ret','jmp'):
            print(f'   [end: {ins.mnemonic}]')
            break
        if j > 10: break
