#!/usr/bin/env python3
"""Validate loop3_level3 against runtime captures from pafet_frida_loop3.py.
20/20 iterations verified across 3 inputs × 5 Loop 3 invocations."""
import sys
sys.path.insert(0, r'C:\Users\Ramón\Desktop')
from pafet_offline import loop3_level3

TEST_CASES = [
    # (label, r13, r15, expected_u64_outputs)
    ('alice/s01 call#1',
     0xfe3561a9270dba8d, 0xa4825378169cfd81,
     [0x8ca68610d058e3fb, 0x2bf7823500da711a, 0xb95cd586176e3bda, 0x40daa979c278d05a]),
    ('alice/s01 call#2',
     0x93ce076d88833e1f, 0xe5c92ba036b9ffcc,
     [0x09e0fa4e4c293937, 0x69273c5f79150a8c, 0x0ac9cacfa2b79d8e, 0x33fd407e1705c8f6]),
    ('alice/s02 call#1',
     0x38878dc70942f998, 0x985d48fe9bade655,
     [0xb6583e8cbb8d82e5, 0xf646f2cf12cb8cf7, 0xe1673d726da36070, 0x808936dc91954b58]),
    ('alice/s02 call#3',
     0x209ea0d1fb47625d, 0x32f215d1a2f6d3d7,
     [0x671bb069c3515b44, 0xad33309c582a75cd, 0x8558dfc034e2f1a9, 0x41563515a9cc1583]),
    ('bob/s01 call#1',
     0xb3f9e3a4aed8b223, 0x085d91ae645894c4,
     [0x41bb65ebbc16f544, 0x4023f8cc3c20b758, 0x65093c68afad0b6f, 0x7e48df0a94f9af8d]),
]

passed = 0
total = 0
for label, r13, r15, expected in TEST_CASES:
    got = loop3_level3(r13, r15)
    for i, (g, e) in enumerate(zip(got, expected)):
        total += 1
        if g == e:
            passed += 1
        else:
            print(f'FAIL {label} iter {i}: expected=0x{e:016x} got=0x{g:016x}')

print(f'{passed}/{total} Loop 3 iterations PASS')
assert passed == total, 'Loop 3 porting broken'
