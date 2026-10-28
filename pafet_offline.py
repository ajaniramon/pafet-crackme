#!/usr/bin/env python3
"""Pafet offline reconstruction — PROGRESSIVE.

VERIFIED (byte-by-byte against runtime):
  - f_user(username) → s18     : 21/21 observations (incl. 4 predictions)
  - g_serial(serial) → s20     : 10/10 observations (for serials of various lengths)
  - build_s30(user, serial)    : 3/3 observations

PARTIALLY UNDERSTOOD:
  - cipher ignores bit 0 of LAST byte of s20 (empirically observed:
    serial02↔serial03 same plaintext, '2'↔'3' same plaintext, '1'↔'2' different)
  - cipher-VM dispatcher: 0x1400c9170 (7 opcodes)
  - handler 4 (0x1400c9278): delegates to nested executor 0x1400d3fe0

PENDING (cipher-VM nested layers not fully reverse-engineered):
  - cipher_transform(s30) → s38 (72-byte plaintext)
"""

SERIAL_KEY = bytes.fromhex('de188941a3375d3a')

def f_user(user_bytes: bytes) -> bytes:
    """Derived from handler 4 of dispatcher 0x140048960 (bytes 0x140048a05..0x140048a3a).
    Scans user bytes in reverse: s18[i] = ((user[N-1-i] XOR 0x5a) + 7 + 3*i) & 0xFF."""
    N = len(user_bytes)
    s18 = bytearray(N)
    for i in range(N):
        c = user_bytes[N - 1 - i]
        s18[i] = ((c ^ 0x5a) + 7 + 3*i) & 0xFF
    return bytes(s18)

def g_serial(serial_bytes: bytes) -> bytes:
    """Serial XORed with 8-byte constant."""
    L = len(serial_bytes)
    if L <= 8:
        return bytes(a ^ b for a, b in zip(serial_bytes, SERIAL_KEY[:L]))
    key = (SERIAL_KEY * ((L + 7) // 8))[:L]
    return bytes(a ^ b for a, b in zip(serial_bytes, key))

def build_s30(username: bytes, serial: bytes) -> bytes:
    """s30 = s18 ++ s20. Zero-padding is in-memory layout, not content."""
    return f_user(username) + g_serial(serial)

def fmix64(h):
    """MurmurHash3 fmix64 (0x140002040)."""
    MASK = (1 << 64) - 1
    h &= MASK
    h ^= h >> 33
    h = (h * 0xff51afd7ed558ccd) & MASK
    h ^= h >> 33
    h = (h * 0xc4ceb9fe1a85ec53) & MASK
    h ^= h >> 33
    return h

# ------------------------------------------------------------
# NOISE DISCARDED (verified via EXP A-style process-stability tests):
#
# 1. Loop 3 of 0x140176950 (Fase 5):
#    r13/r15 vary across 5 processes, same s38 → ASLR noise.
#    [rsp+0x6a0] (Loop 3 output buffer) is NEVER READ after writing.
#    rcx on entry = pointer whose deref=0; fmix64(pointer_value) = pure ASLR.
#
# 2. 0x14016fa50 (Fase 6): state at call#1 varies across 5+ processes with
#    same creds. pre_518, pre_68, pre_20 all ASLR-dependent. s38 unchanged.
#    Static analysis: 3 "key-dependent" operations at function start are DEAD
#    (results overwritten by `mov rax, [rsi+0x518]`). The state update
#    (state = fmix64(state>>13) XOR const + state) depends only on prior state,
#    which is itself ASLR-seeded.
#
# 3. 6 candidate sub-functions (0x14016d950, 0x140169d10, 0x140168f10,
#    0x14016cd80, 0x14016ca90, 0x140176950): first_pt_after scan showed
#    plaintext does NOT appear in heap at their exit (0 hits for 6 funcs).
#    fn_16ca90 and fn_169d10 called 44958 / 47202 times in cipher #1 alone →
#    massive utility noise, not pure crypto.
#
# → All these are protector obfuscation. The real plaintext producer appears
#   to be inside function 0x1401af6b0 (located via HW watchpoint on bytes 68-71
#   of the plaintext heap buffer: 4/5 BP hits at RIP 0x1401afa6a with
#   decrementing counter rdx=7,6,5,4 → 8-iter loop writing to plaintext).

def canonical_s30(username: bytes, serial: bytes) -> bytes:
    """s30 as the cipher would use it: with bit 0 of LAST byte of s20 masked.
    Verified empirically: serial02/03 and '2'/'3' produce identical plaintexts
    because the cipher ignores bit 0 of s20's last byte."""
    s18 = f_user(username)
    s20 = bytearray(g_serial(serial))
    if s20:
        s20[-1] &= ~1  # mask bit 0 of last byte
    return s18 + bytes(s20)


# -------- Validation --------

VALIDATED_F_USER = {
    '0':'71','1':'72','A':'22','B':'1f','a':'42','b':'3f','c':'40','e':'46',
    'i':'3a','l':'3d','o':'3c','AA':'2225','BB':'1f22','00':'7174',
    'aA':'2245','ab':'3f45','aa':'4245','ba':'4242',
    'alice':'464340464e','bob':'3f3f45',
    'Alice':'464340462e','123':'707278','12x':'297278',
}

VALIDATED_S30 = {
    ('alice', 'serial01'): '464340464ead7dfb28c25b6d0b',
    ('alice', 'serial02'): '464340464ead7dfb28c25b6d08',
    ('bob',   'serial01'): '3f3f45ad7dfb28c25b6d0b',
}

# Known: cipher produces SAME plaintext for these pairs
# (confirming the "ignore bit 0 of last s20 byte" observation)
CIPHER_EQUIVALENCE = [
    (('alice', 'serial02'), ('alice', 'serial03'), 'cipher ignores bit 0 of s20[-1]'),
    (('alice', '2'),        ('alice', '3'),        'cipher ignores bit 0 of s20[-1]'),
]

def validate():
    print('[*] f_user validation:')
    p=0; f=0
    for u, exp in VALIDATED_F_USER.items():
        got = f_user(u.encode()).hex()
        ok = got == exp
        if ok: p+=1
        else: f+=1; print(f'  FAIL {u!r}: expected={exp} got={got}')
    print(f'  {p}/{p+f} pass')

    print('\n[*] build_s30 validation:')
    p=0; f=0
    for (u,s), exp in VALIDATED_S30.items():
        got = build_s30(u.encode(), s.encode()).hex()
        ok = got == exp
        if ok: p+=1
        else: f+=1; print(f'  FAIL user={u!r} serial={s!r}: expected={exp} got={got}')
    print(f'  {p}/{p+f} pass')

    print('\n[*] canonical_s30 (cipher-input) equivalence predictions:')
    for a, b, note in CIPHER_EQUIVALENCE:
        ca = canonical_s30(a[0].encode(), a[1].encode()).hex()
        cb = canonical_s30(b[0].encode(), b[1].encode()).hex()
        ok = ca == cb
        print(f'  {a} == {b}: canonical_a={ca[-6:]} canonical_b={cb[-6:]}  {"MATCH" if ok else "MISMATCH"}  ({note})')

if __name__ == '__main__':
    validate()
