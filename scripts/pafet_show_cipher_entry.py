#!/usr/bin/env python3
"""Show the first ~48 bytes of cipher-VM entry 0x1400c0510 so we know
what Frida would overwrite with its trampoline."""
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

print('[*] cipher-VM entry 0x1400c0510')
fo = va_to_fo(0x1400c0510)
print(f'   first 32 bytes raw: {d[fo:fo+32].hex()}')
for ins in md.disasm(d[fo:fo+64], 0x1400c0510):
    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
    if ins.address >= 0x1400c0510 + 24: break

print('\n[*] Helpers entries (first 16 bytes each):')
for name, va in [('h24', 0x14008d270), ('h10', 0x140089bb0), ('h5', 0x140089ae0), ('h3', 0x14008a230)]:
    fo = va_to_fo(va)
    print(f'   {name} @ 0x{va:x}: {d[fo:fo+16].hex()}')
    for ins in md.disasm(d[fo:fo+32], va):
        print(f'      0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}')
        if ins.address >= va + 16: break

# Check if there are integrity-check patterns near cipher-VM entry
# e.g., checksum loops over cipher_body bytes.
print('\n[*] Scan 0x1400c0510..+0x200 for RIP-relative reads of its own code:')
start = 0x1400c0510
fo = va_to_fo(start)
for ins in md.disasm(d[fo:fo+0x200], start):
    for op in ins.operands:
        if op.type == 3:  # CS_OP_MEM
            m = op.mem
            try: base = ins.reg_name(m.base) if m.base else None
            except: base = None
            if base == 'rip':
                target = ins.address + ins.size + m.disp
                if start <= target < start + 0x4000:  # ref inside cipher-VM body
                    print(f'   0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}  -> target 0x{target:x} (SELF)')
