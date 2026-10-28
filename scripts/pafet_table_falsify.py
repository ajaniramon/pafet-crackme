#!/usr/bin/env python3
"""Falsification test: patch the alleged "PC2" table in a copy of pafet_pass8.exe
and compare plaintext output. If plaintext is unchanged, PC2 is a decoy.

Also dumps 128 bytes at PC2+48 (which is the only region referenced by LEAs we
mis-attributed to PC2) to see what the real adjacent object is.
"""
import struct, os, subprocess, shutil, hashlib

HERE = r'C:\Users\Ramón\Desktop'
BASE_EXE = os.path.join(HERE, 'pafet_oracle.exe')  # always prints plaintext

# Load the PE and locate the sections
d = open(BASE_EXE, 'rb').read()
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

TABLES = {
    'PC2':   (0x1403ed458, 48),
    'PC2+48 (adjacent object)': (0x1403ed488, 128),
    'PC1':   (0x1403ec908, 56),
    'E':     (0x1403eead0, 48),
    'P':     (0x1403ea790, 32),
    'IP':    (0x1403def60, 64),
    'FP':    (0x1403e03b0, 64),
    'Sbox1': (0x1403f1150, 64),
}
print('[*] bytes at each table:')
for name, (va, sz) in TABLES.items():
    fo = va_to_fo(va)
    bs = d[fo:fo+min(sz, 48)]
    hb = ' '.join(f'{b:02x}' for b in bs[:32])
    print(f'   {name:<28} VA=0x{va:x} FO=0x{fo:x}  first32: {hb}')

# Build the patched variant: zero the PC2 region
def run_oracle(exe_path, label):
    print(f'[*] running {label}: {exe_path}')
    p = subprocess.Popen([exe_path], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    out, err = p.communicate(input=b'\r\n\r\n', timeout=120)
    # Extract plaintext after '[+] Flag: '
    i = out.find(b'[+] Flag: ')
    if i < 0:
        print(f'   no [+] Flag in output. First bytes: {out[:120]!r}')
        return None
    pt = out[i+10 : i+10+72]
    print(f'   plaintext (72B) sha256 = {hashlib.sha256(pt).hexdigest()[:16]}  hex[:16]={pt[:16].hex()}')
    return pt

ORIG_PT = run_oracle(BASE_EXE, 'original')

# Patch 1: zero PC2
def write_patched(path, patches):
    data = bytearray(open(BASE_EXE, 'rb').read())
    for va, newbytes in patches:
        fo = va_to_fo(va)
        for i, b in enumerate(newbytes):
            data[fo+i] = b
    with open(path, 'wb') as f: f.write(data)

patched_variants = {
    'PC2_zero':    [(0x1403ed458, b'\x00'*48)],
    'PC2_FF':      [(0x1403ed458, b'\xFF'*48)],
    'PC1_zero':    [(0x1403ec908, b'\x00'*56)],
    'E_zero':      [(0x1403eead0, b'\x00'*48)],
    'P_zero':      [(0x1403ea790, b'\x00'*32)],
    'Sbox1_zero':  [(0x1403f1150, b'\x00'*64)],
    'post_PC2_zero': [(0x1403ed488, b'\x00'*64)],
}
results = {'original': ORIG_PT}
for name, patches in patched_variants.items():
    out_path = os.path.join(HERE, f'pafet_oracle_{name}.exe')
    write_patched(out_path, patches)
    pt = run_oracle(out_path, name)
    results[name] = pt
    os.remove(out_path)

print('\n[*] COMPARISON vs original plaintext:')
for name, pt in results.items():
    if pt is None:
        print(f'   {name:<20} <no output>')
    elif pt == ORIG_PT:
        print(f'   {name:<20} IDENTICAL')
    else:
        diff = sum(1 for a,b in zip(ORIG_PT, pt) if a != b) if ORIG_PT else -1
        print(f'   {name:<20} DIFFERENT ({diff}/72 bytes differ)')
