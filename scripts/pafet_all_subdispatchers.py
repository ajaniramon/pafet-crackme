#!/usr/bin/env python3
"""Walk the .text region starting at 0x1403a0d40 looking for jump-table dispatchers
(the pattern `cmp eax, N; lea reg, [rip-X] (=image_base); mov eax,[reg+rax*4+table];
add rax, reg; jmp rax` or variants).

Classify each table found by what it accesses (PC1, PC2, E, Sbox, P, IP, FP, ???).
Also detect whether each individual case does table-lookup.
"""
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

TABLES = {0x3ec908:'PC1', 0x3ed458:'PC2', 0x3eead0:'E', 0x3ea790:'P',
          0x3def60:'IP', 0x3e03b0:'FP', 0x3f1150:'Sbox', 0x3ec0b0:'???(0x3ec0b0)'}

# Known starting points — the u32-offset table scan previously found refs here.
# Scan .text [0x1403a0000..0x1403a2000] for dispatcher-shaped functions.
START = 0x1403a0000
END   = 0x1403a2000
fo = va_to_fo(START)
code = d[fo:fo+(END-START)]

# Decode linearly, remember addresses where we see the pattern:
#   cmp eax, imm; jump/table idiom
dispatchers = []
disas = list(md.disasm(code, START))

for i, ins in enumerate(disas):
    if ins.mnemonic == 'cmp' and ins.op_str.startswith('eax, ') and \
       i+5 < len(disas):
        # Expect: ja ... ; mov/lea ... image_base ; mov eax, [reg+rax*4+disp32]; ...
        # Look for pattern over next ~8 insns
        window = disas[i:i+10]
        # Find the "mov eax, [reg+rax*4+disp]" instruction
        for j, w in enumerate(window):
            if w.mnemonic == 'mov' and 'rax*4' in w.op_str and '+' in w.op_str:
                # Extract disp
                try:
                    # op_str like 'eax, dword ptr [rdx + rax*4 + 0x3a0e98]'
                    s = w.op_str
                    disp_hex = s.split('+')[-1].strip().replace(']','').strip()
                    disp = int(disp_hex, 16)
                    cmp_imm = int(ins.op_str.split(',')[1].strip(), 16)
                    dispatchers.append((ins.address, cmp_imm, disp))
                except Exception:
                    pass
                break

print(f'[*] Found {len(dispatchers)} dispatcher-shaped sites in {START:x}..{END:x}:')
for addr, cmp_imm, disp in dispatchers:
    tbl_va = image_base + disp
    print(f'   @ 0x{addr:x}  cmp eax, 0x{cmp_imm:x}  table @ 0x{tbl_va:x} (RVA 0x{disp:x})')

# For each dispatcher, decode its handlers' first few bytes to detect table refs.
for addr, cmp_imm, disp in dispatchers:
    tbl_va = image_base + disp
    tbl_fo = va_to_fo(tbl_va)
    n_cases = cmp_imm + 1
    print(f'\n[*] Dispatcher @ 0x{addr:x}  cases=[0..{cmp_imm}]  table @ 0x{tbl_va:x}')
    handlers = []
    for i in range(n_cases):
        off32 = struct.unpack_from('<i', d, tbl_fo + i*4)[0]
        hva = image_base + off32
        handlers.append(hva)
    tbl_counts = {}
    for i, hva in enumerate(handlers):
        hfo = va_to_fo(hva)
        if hfo is None: continue
        hit = None
        for ins in md.disasm(d[hfo:hfo+48], hva):
            s = ins.op_str
            for off, name in TABLES.items():
                if f'0x{off:x}' in s:
                    hit = name
            if ins.mnemonic in ('ret','jmp','int3'): break
        tag = f' <-- {hit}' if hit else ''
        if hit:
            tbl_counts[hit] = tbl_counts.get(hit, 0) + 1
    print(f'   handlers n={len(handlers)}  table hits: {dict(tbl_counts)}')
    # Show the unique handlers' sites (dedup)
    unique_handlers = sorted(set(handlers))
    print(f'   unique handlers n={len(unique_handlers)}:')
    for hva in unique_handlers:
        hfo = va_to_fo(hva)
        if hfo is None: continue
        hit = None; last = None
        for ins in md.disasm(d[hfo:hfo+32], hva):
            s = ins.op_str
            for off, name in TABLES.items():
                if f'0x{off:x}' in s:
                    hit = name
            last = ins
            if ins.mnemonic in ('ret','jmp','int3'): break
        print(f'     0x{hva:x}  {("<-- "+hit) if hit else ""}')
