#!/usr/bin/env python3
"""Full disasm of the cipher-VM function body 0x1400c0510.
Find:
  - its post-attestation init
  - its main loop (backward branches, indirect jumps, switch-like patterns)
  - how it reads bytecode[pc] and dispatches handlers
"""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_IMM, CS_OP_MEM

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

TEXT=next(s for s in sections if s[0]=='.text')
TEXT_FO=TEXT[3]; TEXT_SZ=TEXT[4]; TEXT_END = image_base + TEXT[1] + TEXT[2]
md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

CIPHER = 0x1400c0510
# Find function end by scanning for the next function prologue after CIPHER.
# A function usually starts with `mov [rsp+8], rcx` or `48 89 5c 24 08` or
# `48 89 4c 24 08` etc. Easiest: look for a sequence of int3 (0xCC) padding.
fo_start = va_to_fo(CIPHER)
# find next region of int3 after CIPHER
end_fo = fo_start
# A function body in MSVC terminates with ret/jmp + int3 padding before next alignment
# Walk ~0x8000 and look for a long int3 run
blob_scan = d[fo_start:fo_start+0x8000]
# find the first 0xCC run of >=5 after seeing at least 100 instructions
pad_pos = None
pos = 0
while pos < len(blob_scan)-5:
    if blob_scan[pos] == 0xCC and all(b == 0xCC for b in blob_scan[pos:pos+5]):
        # likely end-of-function alignment
        pad_pos = pos
        break
    pos += 1
# But we may hit an inline int3 trap. Use a smarter approach: disasm linearly from
# CIPHER and track where we last saw a 'ret'/'jmp' AT the start of alignment.
# Simpler: cap at 0x4000 and dump everything.
BODY_SZ = 0x4000
end_va = CIPHER + BODY_SZ
print(f'[*] cipher-VM body estimated: 0x{CIPHER:x} .. 0x{end_va:x}  (size <= 0x{BODY_SZ:x})')

body = d[fo_start:fo_start+BODY_SZ]
disas = list(md.disasm(body, CIPHER))
print(f'[*] disassembled {len(disas)} instructions')

# Catalog interesting instructions:
# 1. backward branches (likely loops)
# 2. indirect jmps/calls
# 3. jmp table reads: `movzx/mov r, [rip+disp]` or `jmp [reg*8 + disp]`
# 4. cmp with constants <64 (opcode dispatch)
back = []
indirect = []
large_cmps = []
table_reads = []
rip_targets = {}
calls = {}
for ins in disas:
    if ins.mnemonic in ('je','jne','ja','jb','jl','jg','jle','jge','jz','jnz','jmp'):
        if ins.op_str.startswith('0x'):
            try:
                tgt = int(ins.op_str, 16)
                if tgt < ins.address and ins.address - tgt < 0x400:
                    back.append((ins.address, tgt))
            except Exception:
                pass
        elif ins.mnemonic == 'jmp' and '[' in ins.op_str:
            indirect.append(ins)
    if ins.mnemonic == 'call':
        if ins.op_str.startswith('0x'):
            try:
                tgt = int(ins.op_str, 16)
                calls.setdefault(tgt, 0)
                calls[tgt] += 1
            except Exception: pass
        elif '[' in ins.op_str:
            indirect.append(ins)
    if ins.mnemonic == 'cmp' and ins.operands and len(ins.operands) == 2:
        if ins.operands[1].type == CS_OP_IMM:
            v = ins.operands[1].imm
            if 0 < v < 128:
                large_cmps.append((ins.address, v, ins))
    # rip-relative mem accesses
    if ins.operands:
        for op in ins.operands:
            if op.type == CS_OP_MEM:
                try: base = ins.reg_name(op.mem.base) if op.mem.base else None
                except: base = None
                if base == 'rip':
                    tgt = ins.address + ins.size + op.mem.disp
                    rip_targets.setdefault(tgt, 0)
                    rip_targets[tgt] += 1

print(f'\n[*] backward branches: {len(back)} (candidate loops)')
# Group by target address to find the "most popular loop head"
from collections import Counter
tgt_count = Counter(t for _,t in back)
for tgt, n in tgt_count.most_common(10):
    print(f'   -> 0x{tgt:x}  back-jumps={n}')

print(f'\n[*] indirect jmp/call: {len(indirect)}')
for ins in indirect[:20]:
    print(f'   0x{ins.address:x}: {ins.mnemonic} {ins.op_str}')

print(f'\n[*] top CALL targets:')
for tgt, n in sorted(calls.items(), key=lambda kv: -kv[1])[:15]:
    print(f'   -> 0x{tgt:x}  n={n}')

print(f'\n[*] CMP with small immediate (dispatch bounds check?)')
for addr, v, ins in large_cmps[:30]:
    print(f'   0x{addr:x}: {ins.mnemonic} {ins.op_str}')

print(f'\n[*] top RIP-rel targets referenced:')
# Only those that look like data in .rdata
RDATA=next(s for s in sections if s[0]=='.rdata')
RDATA_LO = image_base + RDATA[1]; RDATA_HI = RDATA_LO + RDATA[2]
rip_rdata = {t:n for t,n in rip_targets.items() if RDATA_LO <= t < RDATA_HI}
for tgt, n in sorted(rip_rdata.items(), key=lambda kv: -kv[1])[:25]:
    note = ''
    # DES tables
    if tgt == 0x1403ed458 or (0x1403ed458 <= tgt < 0x1403ed458+48): note = ' <-- PC2'
    elif tgt == 0x1403ec908 or (0x1403ec908 <= tgt < 0x1403ec908+56): note = ' <-- PC1'
    elif tgt == 0x1403eead0 or (0x1403eead0 <= tgt < 0x1403eead0+48): note = ' <-- E'
    elif tgt == 0x1403ea790 or (0x1403ea790 <= tgt < 0x1403ea790+32): note = ' <-- P'
    elif tgt == 0x1403def60 or (0x1403def60 <= tgt < 0x1403def60+64): note = ' <-- IP'
    elif tgt == 0x1403e03b0 or (0x1403e03b0 <= tgt < 0x1403e03b0+64): note = ' <-- FP'
    elif 0x1403f1150 <= tgt < 0x1403f1150+512: note = ' <-- Sbox'
    elif tgt == 0x1403eb2f0 or (0x1403eb2f0 <= tgt < 0x1403eb2f0+1704): note = ' <-- cipher bytecode'
    print(f'   0x{tgt:x}  n={n}{note}')
