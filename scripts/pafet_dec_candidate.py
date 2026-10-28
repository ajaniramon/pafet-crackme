#!/usr/bin/env python3
"""Zoom into the dec[256] candidate region and find its true alignment, then
hunt XREFs that read 1 byte from it via [rip+disp]."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_MEM
from collections import Counter

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
    for n, sva, svs, rp, rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)
def fo_to_va(fo):
    for n, sva, svs, rp, rs in sections:
        if rp<=fo<rp+rs: return image_base+sva+(fo-rp)

TEXT=next(s for s in sections if s[0]=='.text')
TEXT_VA=image_base+TEXT[1]; TEXT_FO=TEXT[3]; TEXT_SZ=TEXT[4]
RDATA=next(s for s in sections if s[0]=='.rdata')
RDATA_VA=image_base+RDATA[1]; RDATA_FO=RDATA[3]; RDATA_SZ=RDATA[4]
RDATA_END = RDATA_VA + RDATA[2]

# --- A. Dump bytes around the dec[] candidate region, aligned, to find the real table
print('[*] Dumping .rdata around VA 0x1403d0100 .. 0x1403d0280')
start_va = 0x1403d0100
start_fo = va_to_fo(start_va)
blob = d[start_fo:start_fo+0x180]
for row in range(len(blob)//16):
    chunk = blob[row*16:(row+1)*16]
    hb = ' '.join(f'{b:02x}' for b in chunk)
    asc = ''.join(chr(b) if 32<=b<127 else '.' for b in chunk)
    print(f'   0x{start_va+row*16:x}: {hb}  {asc}')

# --- B. For each possible 256-byte window start in RDATA, require that the window
#        has EXACTLY 24 unique low values AND 232 sentinels of a single value
print('\n[*] Searching for an exact dec[]: 24 unique lows + 232 sentinels of same byte')
rdata = d[RDATA_FO:RDATA_FO+RDATA_SZ]
exact = []
for off in range(0, len(rdata)-256):
    win = rdata[off:off+256]
    lows = [b for b in win if b < 32]
    non_lows = [b for b in win if b >= 32]
    if len(lows) != 24: continue
    if len(non_lows) != 232: continue
    if len(set(non_lows)) != 1: continue
    if len(set(lows)) != 24: continue
    va = RDATA_VA + off
    exact.append((va, win, non_lows[0]))
print(f'   exact matches (24 lows + 232 identical sentinels): {len(exact)}')
for va, win, sent in exact[:5]:
    print(f'   VA=0x{va:x}  sentinel=0x{sent:02x}')
    # Show which byte positions have low values
    positions = [i for i,b in enumerate(win) if b < 32]
    print(f'     low-value positions (24): {positions}')
    print(f'     low-value bytes          : {[win[p] for p in positions]}')
    # Show the mapping position -> opcode
    mapping = {p: win[p] for p in positions}
    # Hex dump of the first 32 bytes
    print(f'     first 32B: {" ".join(f"{b:02x}" for b in win[:32])}')
    print()

# --- C. Of each exact candidate, find all RIP-relative movzx/mov r,[rip+disp] XREFs
if exact:
    md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True
    # Scan whole .text for RIP-rel 1-byte loads pointing within [cand, cand+256)
    print('[*] Finding XREFs into exact dec[] candidates from .text')
    text_blob = d[TEXT_FO:TEXT_FO+TEXT_SZ]
    for cand_va, win, sent in exact[:3]:
        cand_lo, cand_hi = cand_va, cand_va + 256
        xrefs = []
        # fast byte scan: look for `0F B6 ?? ?? ?? ?? ??` where ModRM mod=00 rm=101
        i = 0
        L = len(text_blob)
        while i < L-7:
            if text_blob[i] == 0x0F and text_blob[i+1] == 0xB6:
                modrm = text_blob[i+2]
                if (modrm>>6)==0 and (modrm&7)==5:
                    disp = struct.unpack_from('<i', text_blob, i+3)[0]
                    fo = TEXT_FO + i
                    va = fo_to_va(fo)
                    rip = va + 7
                    tgt = rip + disp
                    if cand_lo <= tgt < cand_hi:
                        xrefs.append((va, tgt))
                    i += 7
                    continue
            i += 1
        print(f'   candidate VA=0x{cand_va:x}: {len(xrefs)} byte-load XREFs')
        for va, tgt in xrefs[:12]:
            print(f'     from VA 0x{va:x}  reads +{tgt-cand_va}')
