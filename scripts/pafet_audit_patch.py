#!/usr/bin/env python3
"""Audit: locate the two patched bytes in pafet_pass8.exe and pafet_oracle.exe
relative to pafet.bin and understand what branch they bypass."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE_ORIG = r'C:\Users\Ramón\Desktop\pafet.bin'
PE_P8   = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'
PE_ORA  = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
d_orig = open(PE_ORIG, 'rb').read()
d_p8   = open(PE_P8,   'rb').read()
d_ora  = open(PE_ORA,  'rb').read()

pe = struct.unpack_from('<I', d_orig, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d_orig, pe+20)[0]
image_base = struct.unpack_from('<Q', d_orig, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H',d_orig,pe+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d_orig[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d_orig,off+8); sections.append((name,va,vs,rp,rs))
def fo_to_va(fo):
    for n,sva,svs,rp,rs in sections:
        if rp <= fo < rp+rs: return image_base + sva + (fo - rp)
    return None
def va_to_fo(va):
    for n,sva,svs,rp,rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)
md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

print('[*] pafet_pass8 patch bytes:')
# pos 3759868 and 3759869 differ
for i in range(3759860, 3759880):
    o = d_orig[i]; p = d_p8[i]
    marker = '  <-- CHANGED' if o != p else ''
    va = fo_to_va(i)
    print(f'   FO 0x{i:x} (VA 0x{va:x}): orig=0x{o:02x} p8=0x{p:02x}{marker}')

va_patch = fo_to_va(3759868)
print(f'\n[*] disassembly ORIGINAL around 0x{va_patch:x}:')
fo = va_to_fo(va_patch - 32)
for ins in md.disasm(d_orig[fo:fo+96], va_patch - 32):
    marker = '  <-- PATCH SITE' if ins.address == va_patch else ''
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}{marker}')
    if ins.address > va_patch + 32: break

print(f'\n[*] disassembly PATCHED (pass8):')
fo = va_to_fo(va_patch - 32)
for ins in md.disasm(d_p8[fo:fo+96], va_patch - 32):
    marker = '  <-- PATCHED HERE' if va_patch - 2 <= ins.address <= va_patch + 2 else ''
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}{marker}')
    if ins.address > va_patch + 32: break

print('\n[*] oracle patch byte differences from original:')
for i in range(len(d_orig)):
    if d_orig[i] != d_ora[i]:
        va = fo_to_va(i)
        print(f'   FO 0x{i:x} VA 0x{va:x}: orig=0x{d_orig[i]:02x} ora=0x{d_ora[i]:02x}')
