#!/usr/bin/env python3
"""Disassemble the two helpers that handler-22 calls:
   0x140380840 (ecx=0xA/0xB arg)
   0x14039adb0 (concat/output?)
Also check the lea target 0x1403972d1 + ... = 0x14041FF30."""
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

# At the lea in handler 22: lea rcx, [rip + 0x8864b] at VA 0x1403972de (7 bytes long)
# target = 0x1403972de + 7 + 0x8864b = 0x14041FF30
lea_va = 0x1403972de
lea_sz = 7
disp = 0x8864b
target = lea_va + lea_sz + disp
print(f'[*] lea target: 0x{target:x}')
tfo = va_to_fo(target)
if tfo is not None:
    print(f'    at FO 0x{tfo:x}: {d[tfo:tfo+64]!r}')

# Also from handler 23 (closing)
lea_va2 = 0x140397320
lea_sz2 = 7
disp2 = 0x88609
target2 = lea_va2 + lea_sz2 + disp2
print(f'\n[*] handler 23 lea target: 0x{target2:x}')
tfo2 = va_to_fo(target2)
if tfo2 is not None:
    print(f'    at FO 0x{tfo2:x}: {d[tfo2:tfo2+64]!r}')

# Disasm 0x140380840
print(f'\n[*] func 0x140380840:')
fo = va_to_fo(0x140380840)
for ins in md.disasm(d[fo:fo+160], 0x140380840):
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    if ins.mnemonic == 'ret': break

# Disasm 0x14039adb0 (first 20 insns)
print(f'\n[*] func 0x14039adb0:')
fo = va_to_fo(0x14039adb0)
for i, ins in enumerate(md.disasm(d[fo:fo+200], 0x14039adb0)):
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    if ins.mnemonic == 'ret' or i >= 20: break

# Also 0x14039bfa0 called from handler 22
print(f'\n[*] func 0x14039bfa0:')
fo = va_to_fo(0x14039bfa0)
for i, ins in enumerate(md.disasm(d[fo:fo+200], 0x14039bfa0)):
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    if ins.mnemonic == 'ret' or i >= 20: break
