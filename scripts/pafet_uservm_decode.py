#!/usr/bin/env python3
"""Full disasm of user-VM dispatcher from 0x140002480 to end, including
the loop continuation at 0x1400027eb and how PC/iteration update."""
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

# Full disasm 0x140002480..0x140002860
print('[*] USER-VM DISPATCHER (full)')
fo = va_to_fo(0x140002480)
for ins in md.disasm(d[fo:fo+1024], 0x140002480):
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    if ins.address > 0x14000285f: break
