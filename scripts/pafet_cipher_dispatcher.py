#!/usr/bin/env python3
"""Decode the cipher-VM dispatcher at 0x1403a0d40 with jump table at 0x1403a0e98.
List all 28 virtual handlers and classify each."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

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

md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

# Jump table at 0x1403a0e98, 28 int32 offsets
TABLE_VA = 0x1403a0e98
fo = va_to_fo(TABLE_VA)
print(f'[*] jump table @ VA 0x{TABLE_VA:x}  FO 0x{fo:x}')
handlers = []
for i in range(28):
    off = struct.unpack_from('<i', d, fo + i*4)[0]
    va = image_base + off
    handlers.append(va)
print(f'   {"idx":>3}  offset    handler VA')
for i, va in enumerate(handlers):
    print(f'   [{i:2d}]  0x{va-image_base:06x}  0x{va:x}')

print('\n[*] Disassembly of each handler (first ~40 bytes until ret/jmp):')
TABLES = {0x3ec908:'PC1', 0x3ed458:'PC2', 0x3eead0:'E', 0x3ea790:'P',
          0x3def60:'IP', 0x3e03b0:'FP', 0x3f1150:'Sbox', 0x3ec0b0:'???'}
for i, va in enumerate(handlers):
    fo_h = va_to_fo(va)
    if fo_h is None:
        print(f'  [{i:2d}] 0x{va:x}  <not mapped>')
        continue
    insns = []
    tbl_hit = None
    for ins in md.disasm(d[fo_h:fo_h+64], va):
        insns.append(ins)
        # look for table ref in op_str
        for off_disp, name in TABLES.items():
            if f'0x{off_disp:x}' in ins.op_str:
                tbl_hit = name
        if ins.mnemonic in ('ret','jmp','int3'): break
    tag = f'  <-- {tbl_hit}' if tbl_hit else ''
    print(f'  [{i:2d}] 0x{va:x}{tag}')
    for ins in insns[:6]:
        print(f'        0x{ins.address:x}: {ins.mnemonic} {ins.op_str}')
    if len(insns) > 6:
        print(f'        ... ({len(insns)-6} more insns)')
