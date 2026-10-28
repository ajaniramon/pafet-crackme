#!/usr/bin/env python3
"""Verify 0x140002040 is really fmix64 (MurmurHash3) and figure out its ABI.
Also disasm 0x140005320 which is called inside the user-VM executor."""
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

for name, va in [
    ('0x140002040 (claimed fmix64)', 0x140002040),
    ('0x140005320 (second call from executor)', 0x140005320),
]:
    print(f'\n[*] {name}')
    fo = va_to_fo(va)
    for ins in md.disasm(d[fo:fo+96], va):
        print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
        if ins.mnemonic == 'ret': break
