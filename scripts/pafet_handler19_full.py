#!/usr/bin/env python3
"""Disassemble the FULL main-VM handler 19 (0x140397107) until its final jmp
to the dispatcher's epilogue."""
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

START = 0x140397107
# Dispatcher epilogue starts at 0x14039732f
END = 0x1403972ca  # start of handler 21 — handler 19 ends somewhere before here

print(f'[*] handler 19 full disasm (0x{START:x})')
fo = va_to_fo(START)
# Decode up to 0x200 bytes
for ins in md.disasm(d[fo:fo+0x400], START):
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    if ins.mnemonic == 'jmp' and ('0x14039732' in ins.op_str or '0x140397331' in ins.op_str):
        print(f'   ^ end of handler 19 at 0x{ins.address:x}')
        break
    if ins.address >= 0x140397239: break  # don't overshoot into handler 20
