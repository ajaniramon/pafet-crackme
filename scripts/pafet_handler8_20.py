#!/usr/bin/env python3
"""Disassemble main-VM handlers 8 and 20 (where the patches live)
AND handler 10 (candidate for key derivation / serial check)."""
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

TABLE_VA = 0x140397380
fo = va_to_fo(TABLE_VA)
handlers = []
for i in range(24):
    off = struct.unpack_from('<i', d, fo + i*4)[0]
    handlers.append(image_base + off)

for i in [6, 7, 8, 10, 11, 20]:
    hva = handlers[i]
    print(f'\n[*] Handler opcode {i} @ 0x{hva:x}')
    hfo = va_to_fo(hva)
    for ins in md.disasm(d[hfo:hfo+256], hva):
        print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
        if ins.mnemonic == 'jmp' and '0x140397' in ins.op_str and ('32' in ins.op_str or '31' in ins.op_str):
            break
        if ins.mnemonic == 'ret': break
        # heuristic end
        if ins.address > hva + 128 and ins.mnemonic == 'jmp': break
