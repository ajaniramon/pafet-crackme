#!/usr/bin/env python3
"""Find references to the bytecode base 0x1403dca10 (and the cipher-VM blob at
0x1403eb2f0) inside .text via RIP-relative LEAs/MOVs.

Pattern (x86-64):
   48 8d /r <disp32>       lea reg64, [rip + disp32]      (opcode = 8d, REX = 48)
   48 8b /r <disp32>       mov reg64, [rip + disp32]      (opcode = 8b)
Modrm /r with mod=00, rm=101 encodes RIP-relative in long mode.
We scan every byte in .text, decode a candidate, and check whether rip+size+disp32
points exactly at (or very near) the bytecode. Report hits with surrounding bytes.
"""
import struct

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE_PATH, 'rb').read()

pe = struct.unpack_from('<I', d, 0x3c)[0]
nsec = struct.unpack_from('<H', d, pe+6)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections = []
for i in range(nsec):
    off = sec_tbl + 40*i
    name = d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs, va, rs, rp = struct.unpack_from('<IIII', d, off+8)
    sections.append((name, va, vs, rp, rs))

text = next(s for s in sections if s[0] == '.text')
TEXT_NAME, TEXT_VA, TEXT_VS, TEXT_RP, TEXT_RS = text
print(f'[*] .text VA=0x{image_base+TEXT_VA:x}  size=0x{TEXT_VS:x}  FO=0x{TEXT_RP:x}')

TARGETS = {
    'scriptvm_bc': 0x1403dca10,
    'cipher_bc'  : 0x1403eb2f0,
    'cipher_fn'  : 0x1400c0510,  # function itself
    'script_fn'  : 0x14038d9d0,
    'disp_fn'    : 0x140396990,
    'main_fn'    : 0x1403967a0,
    'PC2'        : 0x1403ed458,
    'PC1'        : 0x1403ec908,
    'Sbox'       : 0x1403f1150,
}

def fo_to_va(fo):
    for name, va, vs, rp, rs in sections:
        if rp <= fo < rp+rs:
            return image_base + va + (fo - rp)
    return None

def is_rip_rel_modrm(modrm):
    """mod=00, rm=101  => [RIP+disp32]."""
    return (modrm >> 6) == 0 and (modrm & 7) == 5

# Scan text for RIP-relative LEA/MOV
rp0, rp1 = TEXT_RP, TEXT_RP + TEXT_RS
hits = {k: [] for k in TARGETS}

# Patterns: look at every file offset in .text, try to decode
#   47/48/49/4C (REX) + {8D|8B} + modrm + disp32
# or no REX for 32-bit variants (less common for these addresses)
for pos in range(rp0, rp1 - 7):
    b0 = d[pos]
    if b0 & 0xF0 != 0x40:  # REX
        continue
    if pos+7 >= rp1: continue
    op = d[pos+1]
    if op not in (0x8D, 0x8B, 0x89): continue
    modrm = d[pos+2]
    if not is_rip_rel_modrm(modrm): continue
    disp = struct.unpack_from('<i', d, pos+3)[0]
    insn_len = 7
    rip = fo_to_va(pos) + insn_len
    if rip is None: continue
    target = rip + disp
    for name, va in TARGETS.items():
        if abs(target - va) <= 128:
            delta = target - va
            hits[name].append((pos, fo_to_va(pos), target, delta, op, modrm))

for name, va in TARGETS.items():
    print(f'\n--- target {name} = 0x{va:x} :  {len(hits[name])} hits')
    for pos, insn_va, tgt, dlt, op, modrm in hits[name][:8]:
        op_name = {0x8D:'lea', 0x8B:'mov r,[]', 0x89:'mov [],r'}[op]
        print(f'   insn@VA=0x{insn_va:x} FO=0x{pos:x}  {op_name}  target=0x{tgt:x}  (base+{dlt:+d})')
        # Print surrounding bytes
        lo = max(0, pos-16); hi = min(len(d), pos+24)
        hb = ' '.join(f'{b:02x}' for b in d[lo:hi])
        print(f'      {hb}')
