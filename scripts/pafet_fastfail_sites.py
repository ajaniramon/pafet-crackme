#!/usr/bin/env python3
"""Disassemble ~64 bytes BEFORE and ~16 bytes AFTER each __fastfail (int 29h).
Classify: is this __GSHandlerCheck, __security_check_cookie, hand-rolled
security-check, or something anti-debug?"""
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
FF = [0x1403a4a41, 0x1403a4b29, 0x1403a4cc4, 0x1403a9ea8, 0x1403b085c, 0x1403b3181]

for ff in FF:
    print(f'\n[*] __fastfail @ 0x{ff:x}')
    # Walk backwards from ff - 64 to ff + 16, printing linear disasm
    fo = va_to_fo(ff - 64)
    code = d[fo:fo+96]
    for ins in md.disasm(code, ff - 64):
        if ff - 64 <= ins.address <= ff + 16:
            marker = '  <-- __fastfail' if ins.address == ff else ''
            print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}{marker}')

# rdtsc single site
print('\n\n[*] single rdtsc @ 0x140053454')
fo = va_to_fo(0x140053454 - 32)
for ins in md.disasm(d[fo:fo+96], 0x140053454 - 32):
    marker = '  <-- rdtsc' if ins.address == 0x140053454 else ''
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}{marker}')

# ud2 sites
print('\n\n[*] ud2 sites (first 20 bytes around each):')
for ud in [0x140347247, 0x14034f16f, 0x14035592f, 0x1403583f7, 0x14035e7e7,
           0x14036128f, 0x1403752fe, 0x140376186, 0x1403a8bc5]:
    print(f'\n--- 0x{ud:x} ---')
    fo = va_to_fo(ud - 32)
    for ins in md.disasm(d[fo:fo+48], ud - 32):
        if ud - 32 <= ins.address <= ud + 10:
            marker = '  <-- ud2' if ins.address == ud else ''
            print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}{marker}')
