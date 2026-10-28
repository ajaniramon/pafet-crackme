#!/usr/bin/env python3
"""Find how the dispatcher (0x140396990) is invoked. Also disasm main (0x1403967a0)."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE_PATH, 'rb').read()
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
def fo_to_va(fo):
    for n,sva,svs,rp,rs in sections:
        if rp<=fo<rp+rs: return image_base+sva+(fo-rp)

md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True
DISPATCHER = 0x140396990

# ---- Find references to the dispatcher by VALUE in .rdata / .data / .text
print(f'[*] searching for refs to 0x{DISPATCHER:x} as absolute pointer, int32 offset, and in jump tables')
needle_abs = DISPATCHER.to_bytes(8, 'little')
hits_abs = []
pos = 0
while True:
    i = d.find(needle_abs, pos)
    if i < 0: break
    hits_abs.append(i)
    pos = i + 1
print(f'   absolute QWORD refs: {len(hits_abs)}')
for h in hits_abs[:10]:
    va = fo_to_va(h); print(f'     at FO=0x{h:x} VA=0x{va:x}')

# As an int32 offset from image_base
needle32 = (DISPATCHER - image_base).to_bytes(4, 'little')
hits32 = []
pos = 0
while True:
    i = d.find(needle32, pos)
    if i < 0: break
    hits32.append(i)
    pos = i + 1
print(f'   int32 offset refs (from image_base): {len(hits32)}')
# Narrow down: refs should be in sections, not inside instructions
for h in hits32[:20]:
    va = fo_to_va(h);
    section = next((n for n,sva,svs,rp,rs in sections if rp<=h<rp+rs), '?')
    print(f'     at FO=0x{h:x} VA=0x{va:x} ({section})')

# ---- Disasm main 0x1403967a0 for the first 400 bytes to see call pattern
print('\n=== main @ 0x1403967a0 (first 300 bytes) ===')
fo = va_to_fo(0x1403967a0)
for ins in md.disasm(d[fo:fo+350], 0x1403967a0):
    highlight = ''
    if DISPATCHER == 0x140396990:
        if 'ff e' in ins.op_str.lower() or f'0x{DISPATCHER:x}' in ins.op_str:
            highlight = '  <-- DISPATCHER'
    if ins.mnemonic == 'call':
        highlight += '  CALL'
    print(f'   0x{ins.address:x}: {ins.mnemonic:<8} {ins.op_str}{highlight}')

# ---- Scan ALL direct E8 (call) and JMP targets near dispatcher region
print(f'\n=== callers around dispatcher region (0x14039xxxx) ===')
TEXT = next(s for s in sections if s[0]=='.text')
TEXT_FO = TEXT[3]
# Check CALL to any offset near 0x140396990 +/- 0x100
pos = TEXT_FO
end = TEXT_FO + TEXT[4]
for i in range(pos, end-5):
    b = d[i]
    if b == 0xE8:
        disp = struct.unpack_from('<i', d, i+1)[0]
        va = fo_to_va(i); tgt = va + 5 + disp
        if abs(tgt - DISPATCHER) < 0x200:
            print(f'   CALL from VA=0x{va:x} to 0x{tgt:x}')
    if b == 0xE9:
        disp = struct.unpack_from('<i', d, i+1)[0]
        va = fo_to_va(i); tgt = va + 5 + disp
        if abs(tgt - DISPATCHER) < 0x200:
            print(f'   JMP  from VA=0x{va:x} to 0x{tgt:x}')
