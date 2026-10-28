#!/usr/bin/env python3
"""
Hypothesis F experiment (bounded):
  Fix u = "whatever" (8 chars).
  For a small sweep of 16-char candidate serials s, run pafet_oracle locally
  and read the 72-byte plaintext it prints.
  Check for the discrete fixed-point:  plaintext[4:4+16] == s_bytes
  Also log plaintext hex and avalanche across the sweep.

  Interpretation:
    - A hit here would be stunning (prob ~ N/2^128 random, so a hit
      implies structure that lets the author construct a fixed point).
    - Zero hits does NOT falsify F — the real fixed point lives at u*=u_author.
"""
import subprocess, os, time, sys, re

HERE = r'C:\Users\Ramón\Desktop'
ORACLE = os.path.join(HERE, 'pafet_oracle.exe')
KDUMP  = os.path.join(HERE, 'pafet_keydump3.exe')

def run_oracle(user: str, serial: str, timeout=90) -> bytes:
    """Run pafet_oracle with user+serial on stdin; return raw stdout bytes."""
    p = subprocess.Popen(
        [ORACLE],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    try:
        out, _ = p.communicate(input=(user + '\n' + serial + '\n').encode('latin-1'), timeout=timeout)
    except subprocess.TimeoutExpired:
        p.kill(); out, _ = p.communicate()
    return out

def extract_plaintext(stdout: bytes) -> bytes | None:
    """Oracle prints '[+] Flag: ' + 72 raw bytes. Find and return the bytes."""
    tag = b'[+] Flag: '
    i = stdout.find(tag)
    if i < 0: return None
    return stdout[i+len(tag): i+len(tag)+72]

def run_keydump(user: str, serial: str, timeout=90) -> bytes:
    """Keydump prints the 24-byte key."""
    p = subprocess.Popen(
        [KDUMP],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    try:
        out, _ = p.communicate(input=(user + '\n' + serial + '\n').encode('latin-1'), timeout=timeout)
    except subprocess.TimeoutExpired:
        p.kill(); out, _ = p.communicate()
    return out

def extract_key(stdout: bytes) -> bytes | None:
    """keydump3 output format from the report: look for a line of 48 hex chars (= 24 bytes)."""
    for line in stdout.splitlines():
        line = line.strip()
        if re.fullmatch(br'[0-9a-fA-F]{48}', line):
            return bytes.fromhex(line.decode())
    # Alternative: search for a 24-byte binary block after a known tag
    return None

U = 'whatever'  # 8 chars
# Candidates: pick 6 distinct serials with length 16
candidates = [
    'AAAAAAAAAAAAAAAA',
    'BBBBBBBBBBBBBBBB',
    '0000000000000000',
    '0123456789abcdef',
    'nikjoo_vsec_2026',
    'CMO{crackmesolve',  # kinda like a flag core
]

print(f'[*] user fixed = {U!r}')
print(f'[*] sweeping {len(candidates)} serials of length 16')
print()

results = []
for s in candidates:
    assert len(s) == 16, f'bad serial length: {s!r}'
    t0 = time.time()
    out_o = run_oracle(U, s)
    pt = extract_plaintext(out_o)
    dt_o = time.time() - t0

    t1 = time.time()
    out_k = run_keydump(U, s)
    key = extract_key(out_k)
    dt_k = time.time() - t1

    hit = False
    s_bytes = s.encode('latin-1')
    if pt is not None and pt[4:4+16] == s_bytes:
        hit = True

    results.append({'s': s, 'pt': pt, 'key': key, 'hit': hit, 'dt': dt_o+dt_k})
    pt_h = pt.hex() if pt else '<none>'
    k_h  = key.hex() if key else '<none>'
    print(f'[s] {s!r}  oracle {dt_o:5.1f}s  kdump {dt_k:5.1f}s  hit={hit}')
    print(f'    key = {k_h}')
    print(f'    plaintext hex = {pt_h}')
    if pt is not None:
        pt_ascii = ''.join(chr(b) if 32<=b<127 else '.' for b in pt)
        print(f'    plaintext asc = {pt_ascii!r}')
        print(f'    pt[4:20] = {pt[4:20]!r}')
    print()

# Summary
any_hit = any(r['hit'] for r in results)
print('='*60)
print(f'[result] fixed-point hit in {len(candidates)} candidates: {any_hit}')
print()
print('[interpretation]')
if any_hit:
    print('  A hit here is EXTRAORDINARY: ~ len(candidates)/2^128 ~ 0.')
    print('  This would strongly suggest the cipher has structure that lets')
    print('  the author construct a fixed point. Would validate hypothesis F.')
else:
    print('  No hit expected or seen. This does NOT falsify F because the')
    print('  author built the fixed point around u*=u_author, not around u="whatever".')
    print('  To test F for real we need u* (hashcat).')
print()
print('[avalanche across candidates]')
# Compare plaintexts byte-by-byte vs the first
base = results[0]['pt']
if base is not None:
    for r in results[1:]:
        pt = r['pt']
        if pt is None: continue
        diff = sum(1 for a,b in zip(base, pt) if a != b)
        print(f'  {r["s"]!r:>18}  diff bytes vs base = {diff}/72  ({diff*100/72:.1f}%)')
