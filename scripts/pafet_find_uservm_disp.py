#!/usr/bin/env python3
"""Scan the .text region near 0x14003f540 for dispatcher-shaped code:
    cmp (eax|ecx|edx), imm8 or imm32
    ja/jb/je ...
    mov reg, [reg + reg*4 + disp32]
    add reg, reg
    jmp reg
This is a jmp-table-based VM dispatcher."""
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

# Scan range: user-VM executor is at 0x14003f540. The dispatcher may be nearby
# but the actual VM function could be a separate function. User-VM executor is
# ~18KB stack, probably one big function.
# Let's scan the entire .text and find all 'cmp eXX, imm' followed closely by jmp [reg+disp32]
tname, tva, tvs, trp, trs = next(s for s in sections if s[0]=='.text')
text_va_base = image_base + tva
text_bytes = d[trp:trp+tvs]
disas = list(md.disasm(text_bytes, text_va_base))

# Look for jmp table pattern: `mov reg32, [reg + rax*4 + disp32]; add reg, X; jmp reg`
hits = []
for i, ins in enumerate(disas):
    if ins.mnemonic == 'mov' and 'rax*4' in ins.op_str and '[' in ins.op_str:
        # Check next few instructions
        try:
            next1 = disas[i+1]
            next2 = disas[i+2]
            # Look back for cmp
            cmp_ins = None
            for back in range(max(0, i-10), i):
                b_ins = disas[back]
                if b_ins.mnemonic == 'cmp' and ('eax' in b_ins.op_str or 'edx' in b_ins.op_str or 'ecx' in b_ins.op_str):
                    cmp_ins = b_ins
                    break
            if cmp_ins and (next1.mnemonic == 'add' or next2.mnemonic in ('jmp','call')):
                # Extract disp from mov op_str
                op_s = ins.op_str
                try:
                    disp_hex = op_s.rsplit('+',1)[-1].strip().rstrip(']').strip()
                    disp = int(disp_hex, 16)
                    hits.append((ins.address, cmp_ins.op_str, disp, op_s))
                except Exception:
                    pass
        except IndexError: pass

print(f'[*] Dispatcher-shape sites in .text ({len(hits)}):')
for addr, cmp_s, disp, mov_op in hits[:40]:
    tbl_va = image_base + (disp if disp < 0x80000000 else disp - 0x100000000)
    # The table va depends on which base register is used; approximate.
    print(f'   0x{addr:x}: cmp {cmp_s}  mov {mov_op}  disp=0x{disp:x}')
