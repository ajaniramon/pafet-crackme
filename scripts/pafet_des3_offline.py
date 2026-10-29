#!/usr/bin/env python3
"""Recover Pafet's cipher stage without executing its VMs.

Dependency: python -m pip install pycryptodome

Examples:
  python scripts/pafet_des3_offline.py --self-test
  python scripts/pafet_des3_offline.py alice serial01
  python scripts/pafet_des3_offline.py --parity-test

The original PE loads 144 ASCII hex characters from VA 0x1403dbbc0.
The 72 decoded bytes are decrypted with 3-key DES-EDE in ECB mode THREE
times, using the SAME 24-byte key each time.
After each pass, a permissive padding trim removes the number of bytes
specified by the last byte if that number is in 1..8 and fits the input.
It does NOT verify that all removed bytes equal the padding length.

This reproduces all ten recorded final-output digests in PAFET_FULL_STATE.md
and the three recorded intermediate prefixes for three credential pairs.
It does not recover a username preimage, serial, or flag.
If an intermediate trim leaves a partial DES block, this script stops:
the binary reads beyond the logical string length, so its tail can depend
on heap slack. Use plaintext_prefix or --prefix-only for the exact first
block without that dependency.

The serial's known 8-byte mask is the beginning of the RC4 zero-key stream,
not a repeating 8-byte key. The binary's decoded string slot 7 is empty;
its observed stream matches RC4 with a one-byte zero key. This equivalence
also reproduces the recorded 9-byte serial case.

The DES3 implementation below uses separate DES calls so degenerate keys,
including all zeroes, are accepted. Crypto.Cipher.DES3 rejects such keys.
"""
import argparse
import hashlib
import json
from Crypto.Cipher import ARC4, DES

CIPHERTEXT = bytes.fromhex(
    '6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3'
    '455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09'
    'abb0a67da54ba93b'
)
USERNAME_SHA256 = '9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420'


def f_user(user: bytes) -> bytes:
    return bytes(((c ^ 0x5a) + 7 + 3*i) & 255
                 for i, c in enumerate(reversed(user)))


def g_serial(serial: bytes) -> bytes:
    return ARC4.new(b'\0').encrypt(serial)


def derive_key(user: bytes, serial: bytes) -> bytes:
    # Handlers 12-15 concatenate, truncate to 24 bytes, then append real zeroes.
    return (f_user(user) + g_serial(serial))[:24].ljust(24, b'\0')


def des3_decrypt_ecb(data: bytes, key: bytes) -> bytes:
    if len(key) != 24 or len(data) % 8:
        raise ValueError('Expected a 24-byte key and whole 8-byte blocks')
    k1, k2, k3 = (DES.new(key[i:i+8], DES.MODE_ECB) for i in (0, 8, 16))
    return k1.decrypt(k2.encrypt(k3.decrypt(data)))


def decrypt_material(key: bytes, data: bytes = CIPHERTEXT) -> list[bytes]:
    stages = []
    for _ in range(3):
        if len(data) % 8:
            raise NotImplementedError(
                'An intermediate padding trim left a partial block; '
                'the binary tail reads heap slack; use --prefix-only')
        data = des3_decrypt_ecb(data, key)
        data = unpad(data)
        stages.append(data)
    return stages


def unpad(data: bytes) -> bytes:
    if data and 1 <= data[-1] <= 8 and data[-1] <= len(data):
        return data[:-data[-1]]
    return data


def plaintext(user: bytes, serial: bytes) -> bytes:
    return decrypt_material(derive_key(user, serial))[-1]


def plaintext_prefix(user: bytes, serial: bytes) -> bytes:
    """Exact first 8 bytes, even when a trailing partial block reads heap slack.

    ECB blocks are independent. Starting with 72 bytes, three trims of at
    most 8 bytes cannot remove the first block. Never unpad this block alone.
    """
    key = derive_key(user, serial)
    data = CIPHERTEXT[:8]
    for _ in range(3):
        data = des3_decrypt_ecb(data, key)
    return data


CAPTURES = [
    ('alice', 'serial01', '66b0ab3df07fc783'),
    ('alice', 'serial02', '68bdf732c113e1eb'),
    ('alice', 'serial03', '68bdf732c113e1eb'),
    ('alicE', 'serial01', '21c1eb1c33ce4369'),
    ('aliceX', 'serial01', '7b0e07fbd7b27647'),
    ('alice', 'serial011', 'bd2ffacec2e73684'),
    ('A', '0', '281001ff91cdd3cc'),
    ('AA', '0', '280fd5e9b3be6a7c'),
    ('A', '00', 'e6b1175a9fc53968'),
    ('', '', '956043bd298b7234'),
]
INTERMEDIATES = [
    ('alice', 'serial01', ['88f312f8161b3676', '6f181551dbeace85', 'fd2077a101acdfae']),
    ('alice', 'serial02', ['139089e3749b2de2', '81844cd800c0e85b', 'fb5009a95e91bbb4']),
    ('bob', 'serial01', ['37729bcc5a4c0d82', '4005cd65fa1ad606', 'e6e976ec62cf3fba']),
]


def self_test() -> None:
    for u, s, expected in CAPTURES:
        got = hashlib.sha256(plaintext(u.encode(), s.encode())).hexdigest()[:16]
        if got != expected:
            raise AssertionError(f'{u!r}/{s!r}: {got} != {expected}')
        if plaintext_prefix(u.encode(), s.encode()) != plaintext(u.encode(), s.encode())[:8]:
            raise AssertionError(f'Prefix mismatch: {u!r}/{s!r}')
        print(f'PASS {u!r}/{s!r}: sha256[:16]={got}')
    for u, s, expected in INTERMEDIATES:
        got = [b[:8].hex() for b in decrypt_material(derive_key(u.encode(), s.encode()))]
        if got != expected:
            raise AssertionError(f'Intermediate mismatch: {u!r}/{s!r}: {got}')
    empty = bytes.fromhex(
        '3510366fbff5cb69f9ae3d6d21437b3f19d8374fca2495c463fccc9db989391f'
        '4b73bf899972069bb371dacad9d5681d70652b37dbf0f187ed7e1fd28758d0e1'
        'a984aeee3d8d6062')
    if plaintext(b'', b'') != empty:
        raise AssertionError('Full 72-byte empty-input capture mismatch')
    print('PASS all 10 final digests, 9 intermediate prefixes, full empty capture')


def parity_test() -> None:
    """Test the recovered algorithm; this command does not run the PE."""
    base = b'serial02'
    expected = des3_decrypt_ecb(CIPHERTEXT, derive_key(b'alice', base))
    print('Recovered offline algorithm: flip each of 64 serial bits independently')
    unchanged = []
    for i in range(len(base)):
        for bit in range(8):
            serial = bytearray(base)
            serial[i] ^= 1 << bit
            got = des3_decrypt_ecb(CIPHERTEXT, derive_key(b'alice', bytes(serial)))
            same = got == expected
            if same:
                unchanged.append((i, bit))
            if same != (bit == 0):
                raise AssertionError(f'Unexpected equivalence at byte={i}, bit={bit}')
    print('PASS: exactly the 8 bit-0 flips preserve the 72-byte DES3 result; 56 other flips change it')
    print(json.dumps({'unchanged_serial_bits': unchanged}))


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('username', nargs='?')
    parser.add_argument('serial', nargs='?')
    parser.add_argument('--self-test', action='store_true')
    parser.add_argument('--parity-test', action='store_true')
    parser.add_argument('--prefix-only', action='store_true',
                        help='Compute only the exact first block; avoids heap-dependent tails')
    args = parser.parse_args()
    if args.self_test:
        self_test()
    if args.parity_test:
        parity_test()
    if args.username is not None or args.serial is not None:
        if args.username is None or args.serial is None:
            parser.error('Provide both username and serial')
        u, s = args.username.encode(), args.serial.encode()
        if args.prefix_only:
            prefix = plaintext_prefix(u, s)
            print(json.dumps({'prefix_hex': prefix.hex(),
                              'cmo_prefix': prefix.startswith(b'CMO{')}, indent=2))
            return
        key = derive_key(u, s)
        stages = decrypt_material(key)
        out = stages[-1]
        print(json.dumps({
            'key_hex': key.hex(),
            'stage_hex': [b.hex() for b in stages],
            'plaintext_hex': out.hex(),
            'plaintext_sha256': hashlib.sha256(out).hexdigest(),
            'username_gate': hashlib.sha256(u).hexdigest() == USERNAME_SHA256,
            'flag_shape': out.startswith(b'CMO{') and out.endswith(b'}'),
        }, indent=2))
    elif not args.self_test and not args.parity_test:
        parser.print_help()


if __name__ == '__main__':
    main()
