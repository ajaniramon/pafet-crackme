#!/usr/bin/env python3
"""Bounded native audit; preserve observations, including loader mismatches.

Build scripts/native/native_probe first. No real credential search.
Writes JSON to stdout. --trace FILE independently checks a recorded DES trace.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
from Crypto.Cipher import DES
from pafet_des3_offline import derive_key, f_user, g_serial, unpad

PC1 = [57,49,41,33,25,17,9,1,58,50,42,34,26,18,10,2,59,51,43,35,27,19,
       11,3,60,52,44,36,63,55,47,39,31,23,15,7,62,54,46,38,30,22,14,6,
       61,53,45,37,29,21,13,5,28,20,12,4]
PC2 = [14,17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,
       41,52,31,37,47,55,30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32]
ROT = [1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1]

def perm(x, table, bits):
    out = 0
    for i in table:
        out = (out << 1) | ((x >> (bits-i)) & 1)
    return out

def schedule(key):
    v = perm(int.from_bytes(key, 'big'), PC1, 64)
    c, d = v >> 28, v & 0xfffffff
    result = []
    for n in ROT:
        c = ((c << n) | (c >> (28-n))) & 0xfffffff
        d = ((d << n) | (d >> (28-n))) & 0xfffffff
        result.append(perm((c << 28) | d, PC2, 56))
    return result

def check_trace(path):
    key = derive_key(b'alice', b'serial01')
    calls = [line.split() for line in Path(path).read_text().splitlines()
             if line.startswith('DES-TRACE ')]
    assert len(calls) == 9
    previous = bytes.fromhex('6f56f79c3e348835')
    for index, fields in enumerate(calls):
        enc = int(fields[1])
        inp, out = map(bytes.fromhex, fields[2:4])
        k = [key[16:], key[8:16], key[:8]][index % 3]
        assert enc == [0,1,0][index % 3]
        assert inp == previous
        assert list(map(lambda x: int(x, 16), fields[4:])) == schedule(k)
        cipher = DES.new(k, DES.MODE_ECB)
        assert (cipher.encrypt(inp) if enc else cipher.decrypt(inp)) == out
        previous = out
    return {'calls': 9, 'round_subkeys_checked': 144,
            'directions': [0,1,0]*3, 'final_block': previous.hex(),
            'canonical_PC1_PC2_rotations_and_independent_DES_match': True}

def native_run(native, args, **extra):
    env = {k:v for k,v in os.environ.items() if k not in
           ('FAST_DES','TRACE_DES','TRACE_USER','LOG_SHA_BLOCK','LOG_SHA_ALL','POISON_TAIL')}
    env.update(extra)
    p = subprocess.run([str(native), *args], cwd=native.parent, env=env,
                       capture_output=True, text=True, timeout=100)
    return {'args': args, 'environment': extra, 'returncode': p.returncode,
            'stdout': p.stdout, 'stderr': p.stderr}

def fields(record):
    return dict(line.split(' ', 1) for line in record['stdout'].splitlines()
                if ' ' in line)

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--trace', type=Path)
    ap.add_argument('--native', type=Path)
    args = ap.parse_args()
    result = {'scope': 'instrumented PE loader; NOT unmodified Windows acceptance'}
    if args.trace:
        result['des_trace'] = check_trace(args.trace)
    if args.native:
        native = args.native.resolve()
        r = native_run(native, ['--strings'])
        assert r['returncode'] == 0
        fs = fields(r)
        assert bytes.fromhex(fs['STRING-0']).decode() == \
            '9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420'
        assert fs['STRING-7'] == ''
        result['decoded_hash_and_empty_RC4_key'] = r

        # Test actual VM padding and original compression, including two blocks.
        result['sha'] = []
        for msg in [b'', b'alice', b' A\0z ', bytes.fromhex('41610020c3b1ff'),
                    b'a'*55, b'a'*56, bytes(range(64))]:
            r = native_run(native, ['--sha-hex', msg.hex()], LOG_SHA_ALL='1')
            assert r['returncode'] == 0, r
            actual = b''.join(bytes.fromhex(line.split()[1])
                              for line in r['stdout'].splitlines()
                              if line.startswith('ACTUAL-SHA-BLOCK '))
            expected = msg+b'\x80'
            expected += bytes((56-len(expected)) % 64)
            expected += (len(msg)*8).to_bytes(8, 'big')
            assert actual == expected, r
            assert fields(r)['ACTUAL-SHA-DIGEST'] == hashlib.sha256(msg).hexdigest(), r
            r['matches_standard_blocks_and_hashlib'] = True
            result['sha'].append(r)

        result['unpad'] = []
        for data in [b'', b'\0', b'\x09', b'\x02', b'ABCDEFG\x01',
                     b'ABCDEFG\x02', bytes([8])*8, b'ABCDEFG\x08', b'A'*8+b'\x09']:
            r = native_run(native, ['--unpad', data.hex()])
            assert r['returncode'] == 0 and fields(r)['UNPAD'] == unpad(data).hex(), r
            result['unpad'].append(r)

        # These are observations rather than unconditional pass assertions:
        # long-user returns have a known intermittent loader discrepancy.
        result['derive_observations'] = []
        samples = [(b'alice', b'serial011'), (b' A\0z ', bytes(range(32))),
                   (b'A'*15, b'12345678')] + [(b'A'*17, b'12345678')]*6
        for u,s in samples:
            r = native_run(native, ['--derive', u.hex(), s.hex()], TRACE_USER='1')
            fs = fields(r)
            expected = derive_key(u,s).hex()
            r['expected_key'] = expected
            r['expected_user_transform'] = f_user(u).hex()
            r['expected_serial_transform'] = g_serial(s).hex()
            r['key_matches_model'] = r['returncode'] == 0 and fs.get('KEY') == expected
            r['handler_output_matches_model'] = fs.get('OUTPUT') == f_user(u).hex()
            result['derive_observations'].append(r)
        result['known_limitations'] = [
            'Intermittent user-wrapper return mismatch (observed at lengths 15 and 17); not a program length restriction.',
            'Some decoded string slots are unreliable in loader; slot8 gave empty/a0, not assumed CMO{.',
            'SHA stream formatting/gate and whole original Windows execution are not exercised.',
            'Partial DES block tail depends on memory past logical string length.'
        ]
    result['assertions_passed'] = True
    result['real_searches_executed'] = 0
    print(json.dumps(result, indent=2))

if __name__ == '__main__':
    main()
