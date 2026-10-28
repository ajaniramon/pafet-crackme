#!/usr/bin/env python3
"""Catalog the 24 handlers of main dispatcher 0x140396990.
Jump table at 0x140397380, 24 int32 offsets from image_base."""
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
print(f'[*] main-VM jump table @ 0x{TABLE_VA:x} FO 0x{fo:x}')
handlers = []
for i in range(24):
    off = struct.unpack_from('<i', d, fo + i*4)[0]
    hva = image_base + off
    handlers.append(hva)

# For each handler, decode until ret and classify what it does.
print(f'\n[*] Handler summary:')
for i, hva in enumerate(handlers):
    hfo = va_to_fo(hva)
    insns = []
    for ins in md.disasm(d[hfo:hfo+256], hva):
        insns.append(ins)
        if ins.mnemonic == 'ret' or ins.mnemonic == 'jmp' and ins.op_str.startswith('0x') is False:
            break
        if len(insns) >= 32: break
    calls = [ins for ins in insns if ins.mnemonic in ('call','jmp')]
    # Heuristic: find any `call 0x14XXXXXX` (direct call to known VM entries)
    call_targets = set()
    for ins in calls:
        if ins.mnemonic == 'call':
            try:
                tgt = int(ins.op_str, 16)
                call_targets.add(tgt)
            except:
                pass
    labels = []
    if 0x1400c0510 in call_targets: labels.append('cipher-VM')
    if 0x140396990 in call_targets: labels.append('self-call(main-VM)')
    if 0x14039d4a0 in call_targets: labels.append('thunk')
    print(f'  [{i:2d}] 0x{hva:x}  insns={len(insns)}  calls={sorted(call_targets)}  {labels}')

# Also, where is handler 19 (opcode 19 = cipher caller)?
print(f'\n[*] opcode 19 handler = 0x{handlers[19]:x}')
print(f'    first 20 insns:')
hfo = va_to_fo(handlers[19])
for ins in md.disasm(d[hfo:hfo+200], handlers[19]):
    print(f'      0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    if ins.mnemonic == 'ret': break

# Where in handler 19 is the call to 0x1400c0510 (the known caller 0x1403971b2)?
# Already noted. Check all opcodes see which call to cipher-VM.
print(f'\n[*] All opcode handlers whose body contains call 0x1400c0510:')
for i, hva in enumerate(handlers):
    hfo = va_to_fo(hva)
    for ins in md.disasm(d[hfo:hfo+512], hva):
        if ins.mnemonic == 'call':
            try:
                if int(ins.op_str, 16) == 0x1400c0510:
                    print(f'   opcode {i:2d}  handler 0x{hva:x}  call@0x{ins.address:x}')
            except: pass
        if ins.mnemonic == 'ret': break
