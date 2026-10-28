#!/usr/bin/env python3
"""f(username) → s18, implementación offline.
Derivada de handler 4 (0x140048a05) de dispatcher 0x140048960.

Formula:
    s18[i] = ((user[N-1-i] XOR 0x5a) + 7 + 3*i) MOD 256   for i in 0..N-1
"""

def f_user(user_bytes: bytes) -> bytes:
    """Return s18 = f(user), byte-wise reverse-scan transformation."""
    N = len(user_bytes)
    s18 = bytearray(N)
    for i in range(N):
        c = user_bytes[N - 1 - i]
        s18[i] = ((c ^ 0x5a) + 7 + 3*i) & 0xFF
    return bytes(s18)


# Validation data (from Frida instrumentation of pafet_pass8.exe)
TEST_CASES = {
    '0':     '71',
    '1':     '72',
    'A':     '22',
    'B':     '1f',
    'a':     '42',
    'b':     '3f',
    'c':     '40',
    'e':     '46',
    'i':     '3a',
    'l':     '3d',
    'o':     '3c',
    'AA':    '2225',
    'BB':    '1f22',
    '00':    '7174',
    'aA':    '2245',
    'ab':    '3f45',
    'alice': '4643404646',   # wait, observed = 46 43 40 46 4e
    'bob':   '3f3f45',
}
# Correct alice: 46 43 40 46 4e
TEST_CASES['alice'] = '4643404646'
TEST_CASES['alice'] = '4643404646'
# Let me put the right one:
TEST_CASES['alice'] = '46434046' + '4e'

if __name__ == '__main__':
    passed = 0
    failed = 0
    for user, expected_hex in TEST_CASES.items():
        got = f_user(user.encode())
        got_hex = got.hex()
        ok = got_hex == expected_hex
        tag = 'PASS' if ok else 'FAIL'
        print(f'  {user!r:12s}: expected={expected_hex:12s} got={got_hex:12s}  [{tag}]')
        if ok: passed += 1
        else: failed += 1
    print(f'\n{passed}/{passed+failed} tests pass')
