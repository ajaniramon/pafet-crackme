#!/usr/bin/env python3
"""Partial offline implementation of the pafet key derivation. ONLY confirmed
pieces so far. Does NOT reproduce the plaintext — this is honest work in
progress.

Known:
   s8  = username (plain)
   s20 = serial XOR 0xde188941a3375d3a  (as 8-byte block, zero-padded or truncated)

Unknown:
   s18 = f(user)  — some per-user transform, NOT a simple XOR with a constant
   s30 = concat(s18, s20, zeros)  (24-byte key material)
   s38 = cipher_vm(s30, 72)       — produces 72 B of key-dependent "plaintext"
"""
import hashlib

SERIAL_KEY = bytes.fromhex('de188941a3375d3a')  # confirmed

def serial_transform(serial_str):
    """s20 = serial (as bytes) XOR SERIAL_KEY (truncated/extended if needed).
    Only verified for serials of length <= 8."""
    s = serial_str.encode()
    k = SERIAL_KEY[:len(s)]
    if len(k) < len(s):
        # Serial longer than 8 bytes: behaviour unknown (needs more experiments)
        k = SERIAL_KEY * ((len(s) + 7) // 8)
        k = k[:len(s)]
    return bytes(a^b for a,b in zip(s, k))

def test_known():
    cases = [
        ('serial01', 'ad7dfb28c25b6d0b'),
        ('serial02', 'ad7dfb28c25b6d08'),
    ]
    for s, exp in cases:
        got = serial_transform(s).hex()
        print(f'   serial_transform({s!r}) = {got}  expected={exp}  match={got==exp}')

if __name__ == '__main__':
    print('[*] Partial offline derivation — ONLY serial_transform is validated.')
    test_known()
    print('\n[*] NOT implemented yet:')
    print('   - user_transform (s18): unknown, varies per user')
    print('   - full cipher_vm transform producing s38 (72B plaintext)')
    print('   - therefore CANNOT reproduce ciphertext → plaintext offline')
