#!/usr/bin/env python3
"""Static: for the 3 sites that reference E/Sbox/P tables inside .text,
disassemble ~40 insns around them to understand the function context."""
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

# E ref at 0x1403a0f64, Sbox at 0x1403a0ff3, P at 0x1403a1024
# Walk backwards up to 64 bytes to find function start (int3 padding)
SITES = {'E':0x1403a0f64, 'Sbox':0x1403a0ff3, 'P':0x1403a1024}
for name, va in SITES.items():
    print(f'\n[*] Site {name} ref @ 0x{va:x}')
    # Scan backwards for an int3 (0xCC) padding or ret (C3)
    fo = va_to_fo(va)
    start = va
    # Find function start: nearest preceding sequence of int3 (CC CC CC) or ret (C3) + alignment
    for back in range(1, 128):
        if d[fo-back] == 0xCC and d[fo-back-1] == 0xCC:
            start = va - back + 1
            break
        if d[fo-back] == 0xC3 and (fo-back) % 2 == 0:  # ret aligned
            start = va - back + 1
            break
    print(f'   likely function start @ 0x{start:x} (len {va-start+16} bytes)')
    sfo = va_to_fo(start)
    for ins in md.disasm(d[sfo:sfo+(va-start+16)], start):
        marker = '  <-- REF' if ins.address == va else ''
        print(f'     0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}{marker}')
        if ins.address >= va + 8: break

# Also: who calls 0x1403a0d40 (the dispatcher)? Linear E8 call scan.
print('\n[*] Callers of 0x1403a0d40 (direct E8 calls, .text scan):')
tsec = next(s for s in sections if s[0]=='.text')
tname, tva, tvs, trp, trs = tsec
tb = d[trp:trp+tvs]
TARGET = 0x1403a0d40
callers = []
for i in range(0, len(tb) - 5):
    if tb[i] == 0xE8:
        rel = struct.unpack_from('<i', tb, i+1)[0]
        src = image_base + tva + i
        tgt = src + 5 + rel
        if tgt == TARGET:
            callers.append(src)
print(f'   {len(callers)} direct callers:')
for c in callers[:16]:
    print(f'     0x{c:x}')

# And callers of 0x1400c0510 (cipher-VM)
TARGET = 0x1400c0510
callers = []
for i in range(0, len(tb) - 5):
    if tb[i] == 0xE8:
        rel = struct.unpack_from('<i', tb, i+1)[0]
        src = image_base + tva + i
        tgt = src + 5 + rel
        if tgt == TARGET:
            callers.append(src)
print(f'\n[*] Callers of 0x1400c0510 (cipher-VM): {len(callers)}')
for c in callers[:16]:
    print(f'     0x{c:x}')

# And callers of main dispatcher 0x140396990
TARGET = 0x140396990
callers = []
for i in range(0, len(tb) - 5):
    if tb[i] == 0xE8:
        rel = struct.unpack_from('<i', tb, i+1)[0]
        src = image_base + tva + i
        tgt = src + 5 + rel
        if tgt == TARGET:
            callers.append(src)
print(f'\n[*] Callers of 0x140396990 (main script-VM dispatcher): {len(callers)}')
for c in callers[:16]:
    print(f'     0x{c:x}')
