#!/usr/bin/env python3
"""Analyze the user-VM dispatcher at 0x140002717 + its jump table + 11 handlers."""
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

# Scan backwards from 0x140002717 to find function start (int3 padding)
start = 0x140002717
fo = va_to_fo(start)
# Find function start: scan back for CC CC CC
back = 0
while back < 4096:
    if d[fo-back-1] == 0xCC and d[fo-back-2] == 0xCC and d[fo-back-3] == 0xCC:
        fn_start = start - back
        break
    back += 1
else:
    fn_start = start - 500  # fallback

print(f'[*] user-VM dispatcher function start: 0x{fn_start:x}')
print(f'[*] disassembly from function start:')
fnfo = va_to_fo(fn_start)
cnt = 0
for ins in md.disasm(d[fnfo:fnfo+2000], fn_start):
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    cnt += 1
    if ins.mnemonic == 'ret': break
    if cnt > 60: break

# Jump table: cmp eax, 0xa; mov eax, [r9 + rax*4 + 0x2868]
# r9 almost certainly holds image_base at this point.
# So table_va = image_base + 0x2868 = 0x140002868
TABLE_VA = image_base + 0x2868
tfo = va_to_fo(TABLE_VA)
print(f'\n[*] jump table @ VA 0x{TABLE_VA:x} FO 0x{tfo:x}')
handlers = []
for i in range(11):
    off = struct.unpack_from('<i', d, tfo + i*4)[0]
    hva = image_base + off
    handlers.append(hva)
    print(f'   handler[{i:2d}] offset 0x{off:x} -> VA 0x{hva:x}')

# Disasm first ~30 insns of each handler
for i, hva in enumerate(handlers):
    print(f'\n[*] Handler {i} @ 0x{hva:x}')
    hfo = va_to_fo(hva)
    if hfo is None:
        print('   (not mapped)')
        continue
    for j, ins in enumerate(md.disasm(d[hfo:hfo+300], hva)):
        print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
        if j > 20 or (ins.mnemonic in ('jmp', 'ret') and 'rip' not in ins.op_str): break
