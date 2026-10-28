#!/usr/bin/env python3
"""Hypothesis: plaintext comes from decrypting main-VM bytecode (0x1403dca10, 2730 B)
with the known seed ss = 0x2F74D9FA1BAA952A using VSEC-REVoid family keystream
derivations (bc_ks + fmix64)."""
import struct

MASK = (1<<64)-1
C1 = 0xff51afd7ed558ccd
C2 = 0xc4ceb9fe1a85ec53
GR = 0x9E3779B97F4A7C15
LC = 0x2545F4914F6CDD1D
CP = 0xC2B2AE3D27D4EB4F

def fmix64(h):
    h &= MASK
    h ^= (h >> 33)
    h = (h * C1) & MASK
    h ^= (h >> 33)
    h = (h * C2) & MASK
    h ^= (h >> 33)
    return h

def xor_fold_1(v):
    v &= MASK
    v ^= (v >> 32)
    v &= 0xFFFFFFFF
    v ^= (v >> 16)
    v &= 0xFFFF
    v ^= (v >> 8)
    return v & 0xFF

def xor_fold_8(v):
    # fold 64 bit → 8 bytes little-endian
    return struct.pack('<Q', v & MASK)

def bc_ks_1byte(pos, ss):
    h = fmix64((pos * GR + ss) & MASK)
    return xor_fold_1(h)

def bc_ks_8bytes(pos, ss):
    h = fmix64((pos * GR + ss) & MASK)
    return xor_fold_8(h)

def ks2_1byte(pos, rt):
    h = fmix64((pos * CP) ^ rt)
    return xor_fold_1(h)

# Load PE
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

SCRIPT_BC_VA = 0x1403dca10
SCRIPT_BC_SZ = 2730
SS = 0x2F74D9FA1BAA952A

fo = va_to_fo(SCRIPT_BC_VA)
enc = d[fo:fo+SCRIPT_BC_SZ]
print(f'[*] enc bytecode @ 0x{SCRIPT_BC_VA:x} FO 0x{fo:x} size={len(enc)}')
print(f'    first 32 enc:  {enc[:32].hex()}')
PT_PREFIX = bytes.fromhex('3510366fbff5cb69f9ae3d6d21437b3f')

# Trial 1: xor with bc_ks_1byte(pos, SS)
def xor_scheme(name, keyfn):
    pt = bytes(enc[i] ^ keyfn(i) for i in range(len(enc)))
    hit = pt.find(PT_PREFIX)
    print(f'  {name}: first 32 dec = {pt[:32].hex()}  prefix@{hit}')
    return pt, hit

print('\n[*] Trial XOR schemes:')
xor_scheme('bc_ks(pos,SS)',          lambda i: bc_ks_1byte(i, SS))
xor_scheme('bc_ks(pos+1,SS)',        lambda i: bc_ks_1byte(i+1, SS))
xor_scheme('ks2(pos,SS)',            lambda i: ks2_1byte(i, SS))
# Try different ss values from the summary
for ss, label in [(0x75BE7955E0AB34D0, 'cipher-ss'),
                  (0x62587529768CE317, 'alt-ss'),
                  (0x2b148ef5a8e14739, 'script-sum'),
                  (0xd27c8baa606262fa, 'cipher-sum')]:
    xor_scheme(f'bc_ks(pos, {label}=0x{ss:x})', lambda i, ss=ss: bc_ks_1byte(i, ss))

# Trial 2: 8-byte keystream xored block by block
print('\n[*] 8-byte block XOR schemes:')
def xor_blocks(name, blockfn):
    out = bytearray()
    for b in range(0, len(enc), 8):
        ks = blockfn(b)
        out.extend(enc[b+i] ^ ks[i] for i in range(min(8, len(enc)-b)))
    hit = bytes(out).find(PT_PREFIX)
    print(f'  {name}: first 32 dec = {bytes(out[:32]).hex()}  prefix@{hit}')
xor_blocks('bc_ks8(pos, SS)',   lambda i: bc_ks_8bytes(i, SS))
xor_blocks('bc_ks8(pos/8, SS)', lambda i: bc_ks_8bytes(i//8, SS))

# Trial 3: Look at the pt prefix "35 10 36 6f bf f5 cb 69" interpreted as text
print(f'\n[*] plaintext prefix bytes = {PT_PREFIX.hex()}')
print(f'    as ASCII (if any): {PT_PREFIX.decode("latin-1", errors="replace")!r}')
# does any ascii portion appear in enc?
asc_hits = []
for i, c in enumerate(enc):
    if 0x20 <= c <= 0x7e: asc_hits.append(i)
# Longest ASCII run
run_start = None; longest = (0, -1)
for i, c in enumerate(enc + b'\0'):
    if 0x20 <= c <= 0x7e:
        if run_start is None: run_start = i
    else:
        if run_start is not None and (i - run_start) > longest[0]:
            longest = (i - run_start, run_start)
        run_start = None
print(f'    longest ASCII run in enc bytecode: {longest[0]} chars starting @ offset {longest[1]}')
if longest[0] >= 4:
    print(f'       sample: {enc[longest[1]:longest[1]+longest[0]].decode("latin-1", errors="replace")!r}')
