#!/usr/bin/env python3
"""Locate the script-VM core: dec[256], jump table of 24 handlers, opcode fetcher.
No assumptions from the VSEC-REVoid demo — pure static evidence."""
import struct, sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_IMM, CS_OP_MEM

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE_PATH, 'rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections = []
nsec = struct.unpack_from('<H', d, pe+6)[0]
for i in range(nsec):
    off = sec_tbl + 40*i
    name = d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs, va, rs, rp = struct.unpack_from('<IIII', d, off+8)
    sections.append((name, va, vs, rp, rs))
def va_to_fo(va):
    for name, sva, svs, rp, rs in sections:
        v0 = image_base + sva; v1 = v0 + max(svs, rs)
        if v0 <= va < v1: return rp + (va - v0)
    return None
def fo_to_va(fo):
    for name, sva, svs, rp, rs in sections:
        if rp <= fo < rp+rs: return image_base + sva + (fo - rp)
    return None

TEXT = next(s for s in sections if s[0] == '.text')
TEXT_VA  = image_base + TEXT[1]
TEXT_FO  = TEXT[3]
TEXT_SZ  = TEXT[4]
TEXT_END = TEXT_VA + TEXT[2]
RDATA = next(s for s in sections if s[0] == '.rdata')
RDATA_VA = image_base + RDATA[1]
RDATA_FO = RDATA[3]
RDATA_SZ = RDATA[4]
RDATA_END = RDATA_VA + RDATA[2]

# ------------------------------------------------------------------
# A) dec[256] candidate: contiguous 256 bytes in .rdata where most values are low.
# ------------------------------------------------------------------
print('[A] dec[256] candidates in .rdata (mostly values < 32, otherwise 0xff):')
rdata = d[RDATA_FO:RDATA_FO+RDATA_SZ]
cands_dec = []
for off in range(0, len(rdata)-256, 1):   # byte alignment is enough for a byte table
    win = rdata[off:off+256]
    n_lo  = sum(1 for b in win if b < 32)
    n_ff  = sum(1 for b in win if b == 0xff)
    n_sent = sum(1 for b in win if b >= 32)   # non-opcode slots
    # heuristic: a dec[] for a 24-handler VM should have ~24 lows + many sentinels
    if 20 <= n_lo <= 48 and (n_lo + n_sent) == 256 and n_sent >= 200:
        va = RDATA_VA + off
        # extra: among the "low" bytes we want the distinct count close to 24
        uniq_lo = len(set(b for b in win if b < 32))
        cands_dec.append((va, n_lo, uniq_lo, n_ff, win))
# Rank by proximity to "24 unique lows"
cands_dec.sort(key=lambda t: (abs(t[2]-24), t[0]))
print(f'   {len(cands_dec)} candidates total; top 10:')
for va, n_lo, uniq_lo, n_ff, _ in cands_dec[:10]:
    print(f'   VA=0x{va:x}  n_low={n_lo}  uniq_low={uniq_lo}  n_ff={n_ff}')

# ------------------------------------------------------------------
# B) Jump table of 24 pointers to .text
# ------------------------------------------------------------------
print('\n[B] 24-pointer jump tables in .rdata (each entry in [TEXT_VA..TEXT_END)):')
tabs = []
# Pointers are 8-aligned
for off in range(0, len(rdata)-24*8, 8):
    ok = True
    ptrs = []
    for k in range(24):
        p = struct.unpack_from('<Q', rdata, off + k*8)[0]
        if not (TEXT_VA <= p < TEXT_END):
            ok = False; break
        ptrs.append(p)
    if ok:
        # Also require NOT ok for entry 24 (i.e. table has exactly 24 entries),
        # OR entry 24 falls outside text (table may be followed by anything).
        va = RDATA_VA + off
        tabs.append((va, ptrs))
print(f'   {len(tabs)} candidate tables; first 8:')
for va, ptrs in tabs[:8]:
    print(f'   VA=0x{va:x}')
    for i, p in enumerate(ptrs):
        print(f'     [{i:2d}] 0x{p:x}')
    print()

# ------------------------------------------------------------------
# C) Opcode fetcher: broadened search.
#   Pattern options:
#     1) movzx r32, [reg+idx]  (fetch of enc byte)   0F B6 /r with [reg+reg] or [reg+disp]
#     2) xor r8, r8  or  xor al, imm8   (apply hx)
#     3) movzx r32, [rip+disp]           (dec[] lookup)   0F B6 ModRM /r mod=00 rm=101
# ------------------------------------------------------------------
print('\n[C] Opcode fetcher — scan for `movzx r,byte [reg+reg]` followed within 32 bytes by `movzx r,byte [rip+disp]`')
# This heuristic is deliberately loose; we expect to find many places but one that
# references the dec[] candidate from step A.
md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail = True
# Scan the script-VM range only
start_va = 0x14038d9d0
end_va   = start_va + 0x10000
fo0 = va_to_fo(start_va); fo1 = va_to_fo(end_va)
blob = d[fo0:fo1]
disas = list(md.disasm(blob, start_va))
by_va = {ins.address: ins for ins in disas}
movzx_regmem = []
movzx_rip    = []
for ins in disas:
    if ins.mnemonic != 'movzx': continue
    if not ins.operands or len(ins.operands) != 2: continue
    src = ins.operands[1]
    if src.type != CS_OP_MEM: continue
    m = src.mem
    if m.base == 0 and m.index == 0: continue
    # RIP-relative?
    try:
        base_name = ins.reg_name(m.base) if m.base else None
    except Exception:
        base_name = None
    if base_name == 'rip':
        # compute target
        rip = ins.address + ins.size
        tgt = rip + m.disp
        movzx_rip.append((ins.address, tgt, ins))
    else:
        movzx_regmem.append((ins.address, ins))
print(f'   movzx r,[reg+idx] count: {len(movzx_regmem)}')
print(f'   movzx r,[rip+disp] (any disp) count: {len(movzx_rip)}')

# Group RIP-rel movzx by target
from collections import Counter
tgt_hist = Counter(t for _,t,_ in movzx_rip)
print('   top RIP-rel targets (most-referenced):')
for tgt, n in tgt_hist.most_common(10):
    note = ''
    for va_cand, *_ in cands_dec[:5]:
        if tgt == va_cand: note = '  <-- dec[] candidate'; break
    print(f'     0x{tgt:x}  n={n}{note}')
