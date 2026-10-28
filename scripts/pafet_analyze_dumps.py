#!/usr/bin/env python3
"""Offline analyzer for pafet_mainvm_ops.json dumps.
Searches for plaintext prefix in several encodings:
  1. Plain substring in any pre_* / post_* buffer
  2. XOR(pre_X, post_X) at matching offsets — reveals writes made by handler
  3. XOR of two different post-buffers (post_rcx ^ post_r8 etc.)
  4. Byte-reversed substring
Reports: op #, opcode, field, offset, origin."""
import json, os, sys

OPS_FILE = r'C:\Users\Ramón\Desktop\pafet_mainvm_ops.json'
NEEDLE = '3510366fbff5cb69'  # first 8 bytes of plaintext
NEEDLE_BYTES = bytes.fromhex(NEEDLE)
NEEDLE_REV = NEEDLE_BYTES[::-1].hex()

def hex_to_bytes(h):
    if not h: return None
    try: return bytes.fromhex(h)
    except: return None

def xor_bytes(a, b):
    n = min(len(a), len(b))
    return bytes(a[i]^b[i] for i in range(n))

def find_hits(buf, name):
    hits = []
    if buf is None: return hits
    i = 0
    while True:
        j = buf.find(NEEDLE_BYTES, i)
        if j < 0: break
        hits.append((name, 'plain', j))
        i = j + 1
    i = 0
    while True:
        j = buf.find(bytes.fromhex(NEEDLE_REV), i)
        if j < 0: break
        hits.append((name, 'reversed', j))
        i = j + 1
    return hits

def main():
    with open(OPS_FILE) as f:
        ops = json.load(f)
    print(f'[*] loaded {len(ops)} ops')
    if ops:
        print(f'[*] opcodes: {[o["opcode"] for o in ops]}')

    print(f'\n[*] searching for plaintext prefix {NEEDLE} (and reversed {NEEDLE_REV})')
    total_hits = 0
    for e in ops:
        for field in ('pre_rcx','pre_r8','pre_r9','post_rcx','post_r8','post_r9'):
            buf = hex_to_bytes(e.get(field))
            if buf is None: continue
            hits = find_hits(buf, field)
            for name, kind, off in hits:
                total_hits += 1
                base = (field.startswith('post_') and 'post' or 'pre')
                reg  = field.split('_')[1]
                ptr  = e.get(reg)
                print(f'[HIT] op#{e["n"]} opcode={e["opcode"]} {field}[+0x{off:x}] = {kind}  (base {reg}={ptr})')
    print(f'\n[*] plain/reversed hits total: {total_hits}')

    # XOR pre/post for same buffer
    print(f'\n[*] XOR(pre, post) search for the needle (handler writes revealed):')
    xor_hits = 0
    for e in ops:
        for reg in ('rcx','r8','r9'):
            pre = hex_to_bytes(e.get('pre_'+reg))
            post = hex_to_bytes(e.get('post_'+reg))
            if pre is None or post is None: continue
            xr = xor_bytes(pre, post)
            hits = find_hits(xr, 'xor_'+reg)
            for name, kind, off in hits:
                xor_hits += 1
                print(f'[XOR-HIT] op#{e["n"]} opcode={e["opcode"]} {name}[+0x{off:x}] {kind}  (post differs from pre at that offset)')
    print(f'[*] XOR hits total: {xor_hits}')

    # NON-CONTIGUOUS: check if the first 8 bytes appear as 8 single-byte writes
    # that could be scattered across the buffer at specific stride
    print(f'\n[*] searching for each byte of the needle individually in post dumps:')
    for e in ops:
        for field in ('post_rcx','post_r8','post_r9'):
            buf = hex_to_bytes(e.get(field))
            if not buf: continue
            # For each byte of the needle, record its offsets
            byte_positions = {}
            for i, b in enumerate(NEEDLE_BYTES):
                positions = [j for j in range(len(buf)) if buf[j] == b]
                byte_positions[i] = positions
            # Check for arithmetic progression: offsets[0], offsets[0]+s, offsets[0]+2s, ...
            if all(byte_positions[i] for i in range(8)):
                # Try strides 1..64
                for stride in range(1, 65):
                    for p0 in byte_positions[0]:
                        ok = all((p0 + i*stride) in byte_positions[i] for i in range(8))
                        if ok:
                            print(f'[STRIDE-HIT] op#{e["n"]} opcode={e["opcode"]} {field} start=0x{p0:x} stride={stride}')
                            break
                    else:
                        continue
                    break

if __name__ == '__main__':
    main()
