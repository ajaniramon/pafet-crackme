#!/usr/bin/env python3
"""Small, deterministic cryptographic audit. No real-credential search.

Uses artificial credentials solely to test/falsify algebraic hypotheses.
Requires pycryptodome. Writes JSON to stdout.
"""
import hashlib
import itertools
import json
import random
import time
import tracemalloc
from Crypto.Cipher import DES, DES3
from pafet_des3_offline import derive_key, f_user, unpad


def F(data, key):
    """One DES-EDE decryption pass, using the independent DES3 API."""
    return DES3.new(key, DES3.MODE_ECB).decrypt(data)


def G(data, key):
    return DES3.new(key, DES3.MODE_ECB).encrypt(data)


def reduce_inverse_pairs(ops):
    reduced = []
    for direction, key in ops:
        if reduced and reduced[-1] == (-direction, key):
            reduced.pop()
        else:
            reduced.append((direction, key))
    return reduced


def two_anchor_mitm(users, serials, ct):
    """CONDITIONAL: assumes ordinary nested padding, user length 8 or 16,
    and serial length <=8. No claim that the real challenge has this layout.

    F(C9)=08*8 and F(C8)=C9 provide two independent 64-bit tokens.
    Expected time O(U+S), table memory O(U); roles can be swapped.
    """
    from collections import defaultdict
    from pafet_des3_offline import g_serial
    p = bytes([8])*8
    c8, c9 = ct[-16:-8], ct[-8:]
    inputs = (c9, c8)
    outputs = (p, c9)
    zero = DES.new(bytes(8), DES.MODE_ECB)
    zinputs = [zero.decrypt(x) for x in inputs]
    tables = {8: defaultdict(list), 16: defaultdict(list)}
    for u in users:
        material = f_user(u)
        if len(u) == 8:
            d = DES.new(material, DES.MODE_ECB)
            token = b''.join(d.encrypt(x) for x in outputs)
        elif len(u) == 16:
            d1 = DES.new(material[:8], DES.MODE_ECB)
            d2 = DES.new(material[8:], DES.MODE_ECB)
            token = b''.join(d2.decrypt(d1.encrypt(x)) for x in outputs)
        else:
            continue
        tables[len(u)][token].append(u)
    matches = []
    for s in serials:
        if len(s) > 8:
            continue
        d = DES.new(g_serial(s).ljust(8, b'\0'), DES.MODE_ECB)
        for length, token in [(8, b''.join(d.encrypt(x) for x in zinputs)),
                              (16, b''.join(d.decrypt(x) for x in inputs))]:
            matches.extend((u, s) for u in tables[length].get(token, ()))
    return matches


def padded_encrypt_three(plain, key):
    data = plain
    for _ in range(3):
        count = 8-len(data) % 8
        data = G(data + bytes([count])*count, key)
    return data


def decode_three(ct, key):
    data = ct
    stages = []
    for _ in range(3):
        assert len(data) % 8 == 0, 'This test avoids heap-dependent tails'
        data = unpad(F(data, key))
        stages.append(data)
    return data, stages


def main():
    rng = random.Random(20261028)
    results = {'scope': 'synthetic validation only; no recovery or original acceptance claim'}
    key = derive_key(b'alice123', b'12345678')
    block = bytes.fromhex('6f56f79c3e348835')
    one = F(block, key)
    three = F(F(one, key), key)
    assert three != one
    generic = [('D', 'K1'), ('E', 'K2'), ('D', 'K3')]*3
    ops = [(-1 if d == 'D' else 1, k) for d, k in generic]
    assert len(reduce_inverse_pairs(ops)) == 9
    cancelled = reduce_inverse_pairs([(-1, 'A'), (1, 'A'), (-1, 'C')]*3)
    assert cancelled == [(-1, 'C')]*3
    results['algebra'] = {
        'generic_adjacent_inverse_cancellations': 0,
        'three_pass_differs_from_one': True,
        'if_K1_equals_K2': 'F = D_K3, but F^3 = D_K3^3 in general',
        'not_a_proof_against_all_possible_cryptanalysis': True,
    }

    # Parity is a property of DES key schedules; no reduction of SHA work.
    random_key = rng.randbytes(24)
    base = F(block, random_key)
    preserved = []
    for i in range(24):
        changed = bytearray(random_key)
        changed[i] ^= 1
        assert F(block, bytes(changed)) == base
        preserved.append(i)
    assert hashlib.sha256(b'username').digest() != hashlib.sha256(b'usernamd').digest()
    results['parity'] = {'all_24_key_byte_low_bits_ignored': True,
                         'does_not_remove_username_hash_check': True}

    # Truncation bounds a representative serial, but not the hashed username.
    u = b'alice123'
    s = bytes(range(24))
    keep = 24-len(u)
    assert derive_key(u, s) == derive_key(u, s[:keep])
    u_long = b'PREFIX-' + b'0123456789abcdefghijklmn'
    assert len(u_long[-24:]) == 24
    assert derive_key(u_long, b'anything') == derive_key(u_long[-24:], b'')
    assert hashlib.sha256(u_long).digest() != hashlib.sha256(u_long[-24:]).digest()
    results['canonical_lengths'] = {
        'serial_representative_max_for_N_lt24': '24-N bytes',
        'serial_ignored_for_N_ge24': True,
        'username_truncation_does_not_preserve_SHA256': True,
    }

    # The nested-padding hypothesis produces two full known single-F pairs.
    flag48 = b'CMO{' + b'A'*43 + b'}'
    assert len(flag48) == 48
    cases = []
    for u, s in [(b'alice123', b'12345678'),
                 (b'username12345678', b'87654321')]:
        k = derive_key(u, s)
        ct = padded_encrypt_three(flag48, k)
        assert len(ct) == 72
        plain, stages = decode_three(ct, k)
        assert plain == flag48
        assert F(ct[-8:], k) == bytes([8])*8
        assert F(ct[-16:-8], k) == ct[-8:]
        assert F(ct[-24:-16], k) == ct[-16:-8]  # extra pair only for L=48
        users = [rng.randbytes(len(u)) for _ in range(128)] + [u]
        serials = [rng.randbytes(8) for _ in range(256)] + [s]
        tracemalloc.start()
        start = time.perf_counter()
        matches = two_anchor_mitm(users, serials, ct)
        elapsed = time.perf_counter()-start
        _, peak = tracemalloc.get_traced_memory()
        tracemalloc.stop()
        assert matches == [(u, s)], matches
        cases.append({'username_bytes': len(u), 'serial_bytes': len(s),
                      'user_candidates': len(users), 'serial_candidates': len(serials),
                      'matches': len(matches), 'seconds': elapsed,
                      'python_peak_bytes': peak,
                      'stage_lengths': [len(x) for x in stages]})
    results['conditional_two_anchor_mitm'] = {
        'hypotheses': ['conventional padding before each encryption',
                       'username length 8 or 16', 'serial length <=8'],
        'time': 'O(U+S) DES evaluations up to constant factors',
        'memory': 'O(min(U,S)) if the smaller side is tabulated',
        'full_space_user8_serial8': 'about 2^57 token evaluations, about 2^56 entries',
        'full_space_user16_serial8': 'about 2^112 username candidates plus 2^56 serial candidates',
        'synthetic_cases': cases,
    }

    # FALSIFICATION OF NECESSITY: a 72-byte flag-shaped plaintext encrypted
    # three times WITHOUT padding is also accepted by the recovered shape
    # predicate and unpad logic, but does NOT have the proposed known pad block.
    flag72 = b'CMO{' + b'B'*67 + b'}'
    assert len(flag72) == 72
    no_pad_ct = G(G(G(flag72, key), key), key)
    recovered, stages = decode_three(no_pad_ct, key)
    assert recovered == flag72 and recovered.startswith(b'CMO{') and recovered.endswith(b'}')
    assert F(no_pad_ct[-8:], key) != bytes([8])*8
    assert two_anchor_mitm([b'alice123'], [b'12345678'], no_pad_ct) == []
    results['padding_counterexample'] = {
        'synthetic_only': True, 'ciphertext_bytes': len(no_pad_ct),
        'plain_bytes': len(recovered), 'shape_predicate': True,
        'stage_lengths': [len(x) for x in stages],
        'outer_PAD8_hypothesis': False,
        'correct_credentials_missed_by_PAD8_mitm': True,
        'conclusion': '72-byte ciphertext and CMO{...} shape do not imply nested padding',
    }

    # Parity-equivalent usernames are distinct SHA preimages: only hashing
    # them selects the intended raw username, even after a key is recovered.
    from pafet_mitm import username_parity_variants
    original = b'alice123'
    variants = list(username_parity_variants(original))
    target = hashlib.sha256(original).digest()
    matching = [v for v in variants if hashlib.sha256(v).digest() == target]
    assert len(variants) == 256 and matching == [original]
    results['username_parity_test'] = {'equivalent_key_variants': 256,
                                      'matching_raw_SHA256_preimages': 1,
                                      'not_the_challenge_target_hash': True}
    results['real_searches_executed'] = 0
    results['all_assertions_passed'] = True
    print(json.dumps(results, indent=2))


if __name__ == '__main__':
    main()
