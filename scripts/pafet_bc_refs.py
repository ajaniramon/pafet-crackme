#!/usr/bin/env python3
"""Find all code sites in .text that reference the user-VM encrypted bytecode
region [0x1403E5020, 0x1403E56F8). These are the sites that read/consume it."""
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

tname, tva, tvs, trp, trs = next(s for s in sections if s[0]=='.text')
text_va = image_base + tva
text_bytes = d[trp:trp+tvs]

BC_START = 0x1403E5020
BC_END   = BC_START + 0x6d8

hits = []
for ins in md.disasm(text_bytes, text_va):
    for op in ins.operands:
        if op.type == 3:  # mem
            m = op.mem
            try: base = ins.reg_name(m.base) if m.base else None
            except: base = None
            if base == 'rip':
                target = ins.address + ins.size + m.disp
                if BC_START <= target < BC_END:
                    hits.append((ins.address, ins.mnemonic, ins.op_str, target))
                    break

print(f'[*] rip-rel refs into user-VM bytecode [0x{BC_START:x}..0x{BC_END:x}): {len(hits)}')
for addr, mnem, ops, tgt in hits[:30]:
    print(f'   0x{addr:x}: {mnem} {ops}  -> target 0x{tgt:x} (offset +0x{tgt-BC_START:x})')

# Also direct 32-bit offsets (indexed access)
# Check: a function that computes [base + enc_index*1 + bc_rva]
# These are harder to find statically. The main dispatch would use the pattern
# [reg + reg + 0x3e5020] with reg containing image_base.
print(f'\n[*] searching for [reg + reg + imm32] where imm32 = BC_RVA (0x3e5020..0x3e56f8):')
hits2 = []
for ins in md.disasm(text_bytes, text_va):
    for op in ins.operands:
        if op.type == 3:
            m = op.mem
            # Both base and index registers set
            if m.base and m.index and 0x3e5020 <= m.disp < 0x3e56f8:
                hits2.append((ins.address, ins.mnemonic, ins.op_str, m.disp))
                break
print(f'   {len(hits2)} hits')
for addr, mnem, ops, disp in hits2[:30]:
    print(f'   0x{addr:x}: {mnem} {ops}  disp=0x{disp:x}')

# Also [reg + imm32] variant where reg has image_base pre-loaded
print(f'\n[*] searching for mov reg, [reg + imm32] where imm32 is in BC range (RVA 0x3e5020..0x3e56f8):')
hits3 = []
for ins in md.disasm(text_bytes, text_va):
    for op in ins.operands:
        if op.type == 3:
            m = op.mem
            if m.base and not m.index and 0x3e5020 <= m.disp < 0x3e56f8:
                hits3.append((ins.address, ins.mnemonic, ins.op_str, m.disp))
                break
print(f'   {len(hits3)} hits')
for addr, mnem, ops, disp in hits3[:30]:
    print(f'   0x{addr:x}: {mnem} {ops}  disp=0x{disp:x}')
