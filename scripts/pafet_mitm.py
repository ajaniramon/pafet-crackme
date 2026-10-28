#!/usr/bin/env python3
"""Bounded meet-in-the-middle search for Pafet credentials.

Hypothesis: the original author encrypted three times with conventional
8-byte padding. Then the outermost decrypted final block is eight 0x08s.

This separates username and serial for two layouts:
  username length 8, serial length <=8: key = U || S || zero
  username length 16, serial length <=8: key = U1 || U2 || S

Work is proportional to the sum of dictionary sizes, not their product.
Only this padding hypothesis and these layouts are searched. A miss does
not prove that a username or serial is absent from either dictionary.

python scripts/pafet_mitm.py users.txt serials.txt
python scripts/pafet_mitm.py --self-test
"""
import argparse
import hashlib
import itertools
import json
import time
from collections import defaultdict
from pathlib import Path
from Crypto.Cipher import DES
from pafet_des3_offline import CIPHERTEXT, USERNAME_SHA256, derive_key, f_user, g_serial

PAD = bytes([8])*8


def find_pairs(users, serials, ciphertext=CIPHERTEXT):
    """Yield (username, serial) candidates matching the known outer padding block."""
    table8, table16 = defaultdict(list), defaultdict(list)
    for user in users:
        if len(user) == 8:
            token = DES.new(f_user(user), DES.MODE_ECB).encrypt(PAD)
            table8[token].append(user)
        elif len(user) == 16:
            key = f_user(user)
            token = DES.new(key[8:], DES.MODE_ECB).decrypt(
                DES.new(key[:8], DES.MODE_ECB).encrypt(PAD))
            table16[token].append(user)
    c = ciphertext[-8:]
    zero_c = DES.new(bytes(8), DES.MODE_ECB).decrypt(c)
    for serial in serials:
        if len(serial) > 8:
            continue
        sk = g_serial(serial).ljust(8, b'\0')
        cipher = DES.new(sk, DES.MODE_ECB)
        if table8:
            token = cipher.encrypt(zero_c)
            for user in table8.get(token, ()):
                yield user, serial
        if table16:
            token = cipher.decrypt(c)
            for user in table16.get(token, ()):
                yield user, serial


def username_parity_variants(user):
    """Invert both possible low parity bits of each transformed username byte."""
    choices = []
    for i, c in enumerate(f_user(user)):
        vals = [(((c & 0xfe) | low)-7-3*i) & 255 for low in (0, 1)]
        choices.append([v ^ 0x5a for v in vals])
    for variant in itertools.product(*choices):
        yield bytes(reversed(variant))


def self_test():
    flag = b'CMO{' + b'A'*43 + b'}'
    for user, serial in [(b'alice123', b'12345678'),
                         (b'username12345678', b'87654321')]:
        key = derive_key(user, serial)
        ciphers = [DES.new(key[i:i+8], DES.MODE_ECB) for i in (0, 8, 16)]
        ct = flag
        for _ in range(3):
            count = 8-len(ct) % 8
            ct += bytes([count])*count
            ct = ciphers[2].encrypt(ciphers[1].decrypt(ciphers[0].encrypt(ct)))
        pairs = list(find_pairs([b'wrongusr', b'usernameabcdefgh', user],
                                [b'wrongkey', serial], ct))
        assert pairs == [(user, serial)], pairs
        assert user in username_parity_variants(user)
    print('PASS: independent synthetic cases for 8- and 16-byte usernames')


def words(path):
    # Preserve intentional spaces; remove only line endings.
    return list(dict.fromkeys(Path(path).read_bytes().splitlines()))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('users', nargs='?')
    parser.add_argument('serials', nargs='?')
    parser.add_argument('--self-test', action='store_true')
    args = parser.parse_args()
    if args.self_test:
        self_test()
    if args.users and args.serials:
        start = time.monotonic()
        users, serials = words(args.users), words(args.serials)
        print(json.dumps({'eligible_users': sum(len(u) in (8, 16) for u in users),
                          'eligible_serials': sum(len(s) <= 8 for s in serials)}), flush=True)
        matches = 0
        for u, s in find_pairs(users, serials):
            matches += 1
            real_users = [v for v in username_parity_variants(u)
                          if hashlib.sha256(v).hexdigest() == USERNAME_SHA256]
            print(json.dumps({'candidate_user_hex': u.hex(), 'serial_hex': s.hex(),
                              'username_preimages_hex': [v.hex() for v in real_users]}), flush=True)
        print(json.dumps({'matches': matches, 'elapsed_seconds': time.monotonic()-start}))
    elif not args.self_test:
        parser.error('Provide both dictionaries, or --self-test')


if __name__ == '__main__':
    main()
