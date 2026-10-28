#!/usr/bin/env python3
"""Differential test: patch 1 byte in different places and see how plaintext changes.
If a non-DES-table byte also causes 72/72 changes, the mechanism is attestation,
not table-usage.

Also compare different offsets within E/P/Sbox to see if the effect is proportional
to how many "DES operations" the byte would participate in (DES-like) vs uniform
(attestation-like)."""
import struct, os, subprocess, hashlib

HERE = r'C:\Users\Ramón\Desktop'
BASE_EXE = os.path.join(HERE, 'pafet_oracle.exe')

d_orig = open(BASE_EXE, 'rb').read()
pe = struct.unpack_from('<I', d_orig, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d_orig, pe+20)[0]
image_base = struct.unpack_from('<Q', d_orig, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H',d_orig,pe+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d_orig[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d_orig,off+8); sections.append((name,va,vs,rp,rs))
def va_to_fo(va):
    for n,sva,svs,rp,rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)

def run(exe):
    p = subprocess.Popen([exe], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, _ = p.communicate(input=b'\r\n\r\n', timeout=120)
    i = out.find(b'[+] Flag: ')
    if i < 0: return None
    return out[i+10:i+10+72]

print('[*] running original...')
ORIG = run(BASE_EXE)
print(f'   orig[:16] = {ORIG[:16].hex()}')

def patch_and_run(label, patches):
    data = bytearray(d_orig)
    for va, delta_bytes in patches:
        fo = va_to_fo(va)
        for i, b in enumerate(delta_bytes):
            data[fo+i] = b
    tmp = os.path.join(HERE, '_tmp_patched.exe')
    with open(tmp, 'wb') as f: f.write(data)
    pt = run(tmp)
    os.remove(tmp)
    if pt is None:
        print(f'   {label:<40} <no output>')
        return None
    diff = sum(1 for a,b in zip(ORIG, pt) if a != b)
    tag = '==' if diff == 0 else f'{diff}/72 diff'
    print(f'   {label:<40} {tag}  pt[:16]={pt[:16].hex()}')
    return (diff, pt)

print('\n[*] Precise 1-byte patches:')
# Within E table (48B) — multiple positions
for off in (0, 1, 16, 24, 47):
    patch_and_run(f'E[{off}]^=0xFF',  [(0x1403eead0 + off, bytes([d_orig[va_to_fo(0x1403eead0+off)] ^ 0xFF]))])

# Immediately before E (should be P which is 32B at 0x1403ea790, so between P and E there's ~0x340 bytes of other stuff)
for off in (-1, -16, -256, 48, 100, 256):
    patch_and_run(f'E{off:+d} byte XOR 0xFF', [(0x1403eead0 + off, bytes([d_orig[va_to_fo(0x1403eead0+off)] ^ 0xFF]))])

# Random .rdata bytes far from any table
RDATA_START = 0x1403cd000
for far_off in (0x100, 0x1000, 0x5000, 0x20000, 0x3f000):
    va = RDATA_START + far_off
    if va_to_fo(va) is None: continue
    patch_and_run(f'rdata+0x{far_off:x} XOR 0xFF', [(va, bytes([d_orig[va_to_fo(va)] ^ 0xFF]))])

# Within P table
for off in (0, 1, 16, 31):
    patch_and_run(f'P[{off}]^=0xFF',  [(0x1403ea790 + off, bytes([d_orig[va_to_fo(0x1403ea790+off)] ^ 0xFF]))])

# Within Sbox1
for off in (0, 1, 32, 63):
    patch_and_run(f'Sbox1[{off}]^=0xFF',  [(0x1403f1150 + off, bytes([d_orig[va_to_fo(0x1403f1150+off)] ^ 0xFF]))])
