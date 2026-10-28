#!/usr/bin/env python3
"""Build s30 = f(username) + g(serial) + zero-padding, verify offline against runtime observations."""
import sys
sys.path.insert(0, r'C:\Users\Ramón\Desktop')
from pafet_f_user import f_user

SERIAL_KEY = bytes.fromhex('de188941a3375d3a')

def g_serial(serial_bytes: bytes) -> bytes:
    """g(serial) = serial XOR SERIAL_KEY (8-byte constant), observed for serials up to 8 bytes."""
    # For serials shorter than 8, truncate key; for longer, repeat?
    # Confirmed only for 8-byte serials. Behavior at other lengths pending verification.
    L = len(serial_bytes)
    if L <= 8:
        return bytes(a ^ b for a, b in zip(serial_bytes, SERIAL_KEY[:L]))
    else:
        # Hypothesis: repeat key
        key = (SERIAL_KEY * ((L + 7) // 8))[:L]
        return bytes(a ^ b for a, b in zip(serial_bytes, key))

def build_s30(username: bytes, serial: bytes) -> bytes:
    """s30 = s18 ++ s20 ++ zero-padding to total length ~24 B."""
    s18 = f_user(username)
    s20 = g_serial(serial)
    s30 = s18 + s20
    return s30  # observed as variable length — padding appears when written to buffer

# Runtime observations of s30 (hex, no zero-padding — raw s18 ++ s20)
# From pafet_frida_perop.py output:
# alice/serial01 → s30 = 464340464e ad7dfb28c25b6d0b 0000000000000000 00000000
# alice/serial02 → s30 = 464340464e ad7dfb28c25b6d08 0000000000000000 00000000
# bob/serial01   → s30 = 3f3f45 ad7dfb28c25b6d0b 00000000000000000000000000000000

TESTS = [
    (b'alice', b'serial01', '464340464ead7dfb28c25b6d0b'),
    (b'alice', b'serial02', '464340464ead7dfb28c25b6d08'),
    (b'bob',   b'serial01', '3f3f45ad7dfb28c25b6d0b'),
]

print('[*] Verifying s30 construction against runtime observations:')
passed = 0
for user, serial, expected_hex in TESTS:
    got = build_s30(user, serial).hex()
    ok = got == expected_hex
    print(f'  user={user!r:<10} serial={serial!r:<10}: expected={expected_hex}  got={got}  {"PASS" if ok else "FAIL"}')
    if ok: passed += 1
print(f'\n{passed}/{len(TESTS)} s30 tests pass')
