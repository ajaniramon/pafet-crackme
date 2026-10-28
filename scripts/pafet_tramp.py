#!/usr/bin/env python3
"""Inspect the trampoline to the dispatcher (0x14039d4a9 -> 0x140396990)
and what the main does after calling the script-VM."""
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

md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

# 1. Inspect VA 0x14039d4a9 (the JMP source) — walk back 120 bytes to see its function
print('=== around 0x14039d4a9 (JMP to dispatcher) ===')
fo = va_to_fo(0x14039d4a9 - 120)
for ins in md.disasm(d[fo:fo+150], 0x14039d4a9 - 120):
    highlight = ''
    if ins.address == 0x14039d4a9: highlight = '  <-- JMP TO DISPATCHER'
    print(f'   0x{ins.address:x}: {ins.mnemonic:<8} {ins.op_str}{highlight}')

# 2. Find callers of the function that contains 0x14039d4a9
# Function entry is at the nearest aligned function prologue backwards
# Also find all callers of ~that address+N (within last 400 bytes)
# For simplicity scan for E8 call to a target in [0x14039d400, 0x14039d4b0]
print('\n=== callers of the function containing 0x14039d4a9 ===')
TEXT = next(s for s in sections if s[0]=='.text')
TEXT_FO = TEXT[3]; TEXT_SZ = TEXT[4]
text = d[TEXT_FO:TEXT_FO+TEXT_SZ]
LO = 0x14039d400; HI = 0x14039d4b0
callers = []
for i in range(len(text)-5):
    if text[i] == 0xE8:
        disp = struct.unpack_from('<i', text, i+1)[0]
        fo_i = TEXT_FO + i
        va_i = image_base + TEXT[1] + i
        tgt = va_i + 5 + disp
        if LO <= tgt < HI:
            callers.append((va_i, tgt))
print(f'   {len(callers)} direct callers')
for va, tgt in callers[:20]:
    print(f'   from VA 0x{va:x} -> 0x{tgt:x}')

# 3. Continue disasm of main AFTER the call to script-VM
print('\n=== main continuation after script-VM call (0x1403968e7 .. +300) ===')
fo = va_to_fo(0x1403968e7)
for ins in md.disasm(d[fo:fo+300], 0x1403968e7):
    print(f'   0x{ins.address:x}: {ins.mnemonic:<8} {ins.op_str}')
