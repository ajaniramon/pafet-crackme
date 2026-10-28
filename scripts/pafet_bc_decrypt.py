#!/usr/bin/env python3
"""
Port of VSEC-REVoid bytecode decryption formula to Pafet's script-VM.

From the public NIKJOO/VSEC-REVoid demo (password_check.vm.cpp):
  code[i] = enc[i] ^ bc_ks(i) ^ ks2(i, ss) ^ xorkey
  bc_ks(pos)       : x = mix(pos * 0x9E3779B97F4A7C15 + ss); return (x ^ (x>>8) ^ (x>>16) ^ (x>>24)) & 0xff
  ks2(pos, ss)     : x = mix(pos * 0xC2B2AE3D27D4EB4F ^ ss); return (x ^ (x>>7)  ^ (x>>21))         & 0xff
  mix(x) == fmix64 MurmurHash3

For Pafet:
  enc    = scriptvm_bc.bin (2730 B at RVA 0x1403dca10)
  ss     = 0x62587529768ce317   (from report)
  xorkey = unknown u8           -> brute-force (256 trials)
  hx     = unknown u8           -> post-step
  dec[]  = unknown 256 B table  -> post-step (dispatcher has 24 cases)

The decrypted stream `code[]` carries bytes `wired`, and `logical = dec[wired ^ hx]`.
Since dec[] is a permutation (into 24 valid handlers + sentinels), the FINAL opcode
stream only takes <=24 distinct values. Because XOR by hx is a bijection on bytes,
`code[]` ALSO takes <=24 distinct values whenever xorkey is correct.
So: iterate xorkey in 0..255, pick the one that minimises len(set(code)).
"""
import struct, os

HERE = r'C:\Users\Ramón\Desktop'
BC_PATH = os.path.join(HERE, 'pafet_blobs', 'scriptvm_bc.bin')
SS = 0x62587529768CE317
MASK64 = (1<<64) - 1

enc = open(BC_PATH, 'rb').read()
assert len(enc) == 2730, len(enc)
print(f'[*] enc len = {len(enc)}')

def mix(x: int) -> int:
    x &= MASK64
    x ^= (x >> 33)
    x = (x * 0xFF51AFD7ED558CCD) & MASK64
    x ^= (x >> 33)
    x = (x * 0xC4CEB9FE1A85EC53) & MASK64
    x ^= (x >> 33)
    return x

def bc_ks(pos: int, ss: int) -> int:
    x = mix((pos * 0x9E3779B97F4A7C15 + ss) & MASK64)
    return (x ^ (x >> 8) ^ (x >> 16) ^ (x >> 24)) & 0xFF

def ks2(pos: int, ss: int) -> int:
    x = mix((pos * 0xC2B2AE3D27D4EB4F ^ ss) & MASK64)
    return (x ^ (x >> 7) ^ (x >> 21)) & 0xFF

# Precompute the per-position keystream (independent of xorkey)
ks_per_pos = bytearray(len(enc))
for i in range(len(enc)):
    ks_per_pos[i] = bc_ks(i, SS) ^ ks2(i, SS)
print(f'[*] keystream computed; first 16 = {ks_per_pos[:16].hex()}')

# Brute-force xorkey
print('\n[*] trying all 256 xorkey candidates, counting unique bytes:')
results = []
for xk in range(256):
    uniq = set()
    for i in range(len(enc)):
        uniq.add(enc[i] ^ ks_per_pos[i] ^ xk)
    results.append((len(uniq), xk))
    if len(uniq) <= 32:
        print(f'   xorkey=0x{xk:02x}  uniq={len(uniq)}')

results.sort()
print(f'\n[*] sorted top 10 (lowest uniq first):')
for u, xk in results[:10]:
    print(f'   xorkey=0x{xk:02x}  uniq_bytes={u}')

best_u, best_xk = results[0]
print(f'\n[+] best xorkey = 0x{best_xk:02x}  (uniq={best_u})')
# For contrast, highest:
print(f'[~] worst xorkey = 0x{results[-1][1]:02x}  (uniq={results[-1][0]})')

# Decode with the best xorkey
decoded = bytearray(len(enc))
for i in range(len(enc)):
    decoded[i] = enc[i] ^ ks_per_pos[i] ^ best_xk
alphabet = sorted(set(decoded))
print(f'\n[*] decoded alphabet ({len(alphabet)} symbols): {[hex(b) for b in alphabet]}')

# Frequency histogram
from collections import Counter
freq = Counter(decoded)
total = len(decoded)
print(f'[*] frequency distribution (per byte value):')
for b, n in freq.most_common():
    pct = n*100.0/total
    print(f'   0x{b:02x}: {n:5d}  ({pct:5.1f}%)')

# Save decoded for later use
out = os.path.join(HERE, 'pafet_blobs', 'scriptvm_bc_dec_xk0x%02x.bin' % best_xk)
with open(out, 'wb') as f: f.write(decoded)
print(f'\n[+] saved decoded bytecode -> {out}')
print(f'\nNEXT: these bytes are STILL `wired = code ^ hx` for some unknown u8 hx.')
print(f'      Dispatcher has 24 cases -> expect dec[] to map `wired ^ hx` to [0..23].')
print(f'      hx is just a global XOR; try all 256 values and read the opcode stream.')
