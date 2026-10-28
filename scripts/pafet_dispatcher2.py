#!/usr/bin/env python3
"""List the 24 dispatcher handlers correctly (int32 offsets), find who calls
0x140396990 (the dispatcher), and inspect the script-VM main loop."""
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

TABLE_VA = 0x140397380
print(f'=== 24 dispatcher handlers (int32 offsets at VA 0x{TABLE_VA:x}) ===')
fo = va_to_fo(TABLE_VA)
handler_vas = []
for i in range(24):
    off = struct.unpack_from('<i', d, fo + i*4)[0]
    va = image_base + off
    handler_vas.append(va)
    print(f'   case {i:2d}: offset=0x{off:x}  VA=0x{va:x}')

# Verify by disassembling the first 2 instructions of each handler
print('\n=== first instruction of each handler (sanity check) ===')
for i, va in enumerate(handler_vas):
    fo_h = va_to_fo(va)
    if fo_h is None: continue
    first = next(md.disasm(d[fo_h:fo_h+16], va), None)
    if first:
        print(f'   case {i:2d}: 0x{va:x}  {first.mnemonic} {first.op_str}')
    else:
        print(f'   case {i:2d}: 0x{va:x}  <no disasm>')

# Find who calls the dispatcher 0x140396990
TARGET = 0x140396990
print(f'\n=== callers of dispatcher 0x{TARGET:x} ===')
TEXT = next(s for s in sections if s[0]=='.text')
TEXT_FO = TEXT[3]; TEXT_SZ = TEXT[4]
text = d[TEXT_FO:TEXT_FO+TEXT_SZ]
callers = []
# E8 disp32 = call rel32
for i in range(len(text)-5):
    if text[i] == 0xE8:
        disp = struct.unpack_from('<i', text, i+1)[0]
        fo = TEXT_FO + i
        va = image_base + TEXT[1] + (fo - TEXT_FO)
        tgt = va + 5 + disp
        if tgt == TARGET:
            callers.append(va)
    elif text[i] == 0xFF and text[i+1] in (0x15, 0x25):
        # call [rip+disp32] or jmp [rip+disp32] — indirect
        pass
print(f'   direct CALL sites (E8): {len(callers)}')
for c in callers:
    # show the ~16 preceding bytes which usually set up edx (the opcode) and rcx
    pre_fo = va_to_fo(c) - 16
    pre = d[pre_fo:pre_fo+21]
    print(f'   caller @ VA 0x{c:x}')
    # disasm the preceding 21 bytes
    for ins in md.disasm(pre, c-16):
        print(f'      0x{ins.address:x}: {ins.mnemonic} {ins.op_str}')
    print()
