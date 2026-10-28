#!/usr/bin/env python3
"""Test hypothesis: K[i] = byte_of_u64(fmix64_reversed_scan(user, seed))
where the scan goes from pos=N-1 down to pos=i, accumulating state."""
import struct

MASK = (1<<64) - 1
C1 = 0xff51afd7ed558ccd
C2 = 0xc4ceb9fe1a85ec53
def fmix64(h):
    h &= MASK
    h ^= h >> 33
    h = (h * C1) & MASK
    h ^= h >> 33
    h = (h * C2) & MASK
    h ^= h >> 33
    return h

# Known observations:
# user → s18 → K (K[i] = user[i] XOR s18[i])
observations = {
    '0':     [0x41],         # single
    '1':     [0x43],
    'A':     [0x63],
    'B':     [0x5d],
    'a':     [0x23],
    'b':     [0x5d],
    'c':     [0x23],
    'e':     [0x23],
    'i':     [0x53],
    'l':     [0x51],         # 'l' XOR 0x3d = 0x51
    'o':     [0x53],         # 'o' XOR 0x3c = 0x53
    'AA':    [0x63, 0x64],   # 'A' XOR [22,25]
    'BB':    [0x5d, 0x60],   # 'B' XOR [1f,22]
    '00':    [0x41, 0x44],   # '0' XOR [71,74]
    'aA':    [0x63, 0x04],   # 'a' XOR 22, 'A' XOR 45
    'alice': [0x27, 0x2f, 0x29, 0x25, 0x2b],
    'bob':   [0x5d, 0x50, 0x27],
}

# Hypothesis 1: scan forward, K[i] = low_byte(fmix(state XOR user[i] XOR i))
# where state = seed, then updates.
def test_forward(seed, byte_pick):
    for user, expected in observations.items():
        s = seed
        K = []
        for i, c in enumerate(user.encode()):
            s = fmix64(s ^ c ^ i)
            K.append(byte_pick(s))
        if K != expected:
            return False, user, K
    return True, None, None

# Hypothesis 2: scan backward (reverse)
def test_reverse(seed, byte_pick):
    for user, expected in observations.items():
        ub = user.encode()
        N = len(ub)
        states = [None] * N
        s = seed
        for i in range(N-1, -1, -1):
            s = fmix64(s ^ ub[i] ^ i)
            states[i] = s
        K = [byte_pick(states[i]) for i in range(N)]
        if K != expected:
            return False, user, K
    return True, None, None

# Try several seed candidates and byte-pick functions
SEEDS = [
    ('attestation', 0xf7002e5d6b6ed339),
    ('xor_const1', 0xf0dd36899ec75067),
    ('xor_const2', 0xdc5ea5a81cf8e18f),
    ('attest_cipher_vm', 0xd27c8baa606262fa),
    ('cipher_ss', 0x75be7955e0ab34d0),
    ('script_ss', 0x2f74d9fa1baa952a),
    ('zero', 0),
    ('low32_attest', 0x6b6ed339),
    ('golden', 0x9e3779b97f4a7c15),
    ('one', 1),
]

def pick(byte_idx):
    """Pick byte at index byte_idx of u64."""
    def _pick(v):
        return (v >> (byte_idx*8)) & 0xFF
    return _pick

def pick_xor_fold():
    def _pick(v):
        v ^= v >> 32
        v &= 0xFFFFFFFF
        v ^= v >> 16
        v &= 0xFFFF
        v ^= v >> 8
        return v & 0xFF
    return _pick

byte_fns = [('byte'+str(i), pick(i)) for i in range(8)] + [('xor_fold', pick_xor_fold())]

print('[*] Testing forward scan:')
for sname, seed in SEEDS:
    for bname, bpick in byte_fns:
        ok, user, K = test_forward(seed, bpick)
        if ok:
            print(f'  MATCH: seed={sname}=0x{seed:x}  byte_pick={bname}')
        elif user == 'bob' or user == 'alice':
            # Peek
            pass

print('[*] Testing reverse scan:')
for sname, seed in SEEDS:
    for bname, bpick in byte_fns:
        ok, user, K = test_reverse(seed, bpick)
        if ok:
            print(f'  MATCH: seed={sname}=0x{seed:x}  byte_pick={bname}')

# At minimum, maybe single-char observations hint at the function
# For single-char: K[0] = low_byte(fmix(seed XOR c XOR 0)) = low_byte(fmix(seed XOR c))
# Let's see what seed makes K[0]='0'=0x41 for c='0':
#   fmix(seed XOR 0x30) & 0xFF = 0x41
# Brute force seed with just one byte constraint:
TARGET_SC = {ord('0'): 0x41, ord('1'): 0x43, ord('A'): 0x63, ord('B'): 0x5d,
             ord('a'): 0x23, ord('b'): 0x5d, ord('c'): 0x23, ord('e'): 0x23,
             ord('i'): 0x53, ord('l'): 0x51, ord('o'): 0x53}
print(f'\n[*] Trying brute-force on single-char K:')
print(f'   Target K for c: {TARGET_SC}')

# For each candidate seed and each byte_fn, see if forward model matches single-char:
for sname, seed in SEEDS:
    for bname, bpick in byte_fns:
        hits = 0
        matches_all = True
        for c, k_expected in TARGET_SC.items():
            k_got = bpick(fmix64(seed ^ c ^ 0))
            if k_got == k_expected:
                hits += 1
            else:
                matches_all = False
        if hits >= 5:
            print(f'  seed={sname}  byte={bname}: {hits}/{len(TARGET_SC)} match (all={matches_all})')
