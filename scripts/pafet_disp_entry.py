#!/usr/bin/env python3
"""Disassemble the first ~40 bytes of main-VM dispatcher 0x140396990
AND the thunk 0x14039d4a0 so we know the calling convention."""
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

for name, va in [('main-VM dispatcher', 0x140396990),
                 ('thunk', 0x14039d4a0),
                 ('op17 handler', 0x1403970ed),
                 ('op18 handler', 0x1403970fb),
                 ('op19 handler', 0x140397107)]:
    print(f'\n[*] {name} @ 0x{va:x}')
    fo = va_to_fo(va)
    for ins in md.disasm(d[fo:fo+80], va):
        print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
        if ins.mnemonic in ('ret','jmp'):
            if ins.op_str.startswith('0x') or 'rip' in ins.op_str:
                break
            break
