#!/usr/bin/env python3
"""Catalog all byte memory reads inside cipher-VM body (0x1400c0510+0x4000).
Classify by addressing mode:
  - [reg+disp32]           — pointer in reg
  - [reg+idx*scale]        — table lookup
  - [reg+idx*scale+disp32] — table lookup with offset
A table lookup pattern suggests S-box/E/P consumption."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_MEM
from collections import Counter

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
CIPHER = 0x1400c0510
fo = va_to_fo(CIPHER)
body = d[fo:fo+0x4000]
disas = list(md.disasm(body, CIPHER))

byte_reads = []  # (addr, pattern, mnem, op_str, mem_desc)
for ins in disas:
    if not ins.operands: continue
    for op in ins.operands:
        if op.type != CS_OP_MEM: continue
        # byte-sized?
        sz = getattr(op, 'size', 0)
        if sz != 1: continue
        m = op.mem
        # Only READS (first operand being memory means WRITE for most mov)
        if ins.mnemonic == 'mov' and ins.operands[0].type == CS_OP_MEM:
            # mov [mem], ... — write
            continue
        try: base = ins.reg_name(m.base) if m.base else None
        except: base = None
        try: idx  = ins.reg_name(m.index) if m.index else None
        except: idx = None
        if base == 'rip': continue  # already know these are 0
        if idx:
            pat = 'TABLE[reg+idx]'   # table-style lookup
        elif base:
            pat = 'byte[reg+disp]'
        else:
            pat = 'other'
        byte_reads.append((ins.address, pat, ins.mnemonic, ins.op_str, (base, idx, m.disp, m.scale)))

print(f'[*] total byte reads in cipher-VM body: {len(byte_reads)}')
# Count patterns
by_pat = Counter(x[1] for x in byte_reads)
print('[*] by pattern:', dict(by_pat))

# Show TABLE[reg+idx] candidates — these are the S-box lookup kind
print('\n[*] TABLE[reg+idx] (indexed lookups — classic S-box pattern):')
for addr, pat, mnem, ops, (b,i,disp,scale) in byte_reads:
    if pat != 'TABLE[reg+idx]': continue
    print(f'   0x{addr:x}: {mnem} {ops}  (base={b} idx={i} scale={scale} disp=0x{disp:x})')

# Also: TOP byte reads with disp (hints at buffer bases)
print(f'\n[*] byte[reg+disp] — Top 10 base registers:')
reg_disp = Counter((x[4][0], x[4][2]) for x in byte_reads if x[1]=='byte[reg+disp]')
for (reg, disp), n in reg_disp.most_common(20):
    print(f'   base={reg} disp=0x{disp:x}  n={n}')
