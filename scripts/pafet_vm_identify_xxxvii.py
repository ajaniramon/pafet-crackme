#!/usr/bin/env python3
"""JACK XXXVII: identify the VMs that earlier rounds left unnamed, from static evidence.

1. Host adapters. Every VM reaches its native callbacks through a small adapter near
   RVA 0x39d300-0x39e200. The adapter-to-dispatcher link is read from the PE here. Which
   adapter each executor uses was observed with a Frida Stalker call summary during HOST
   instructions (not reproduced by this script) and is recorded in ADAPTER_OF.
2. DES tables. The byte tables indexed by the callbacks of three cipher VMs are compared
   in full with the standard DES tables.
3. Branch-free VMs. The lifted program is evaluated symbolically from entry to RET, and
   executed on random inputs against the textbook SHA-256 function it should be.

Reads pafet.bin and jack_xxxvii_evidence/lifted/*.json. Executes nothing.
Usage: python scripts/pafet_vm_identify_xxxvii.py
"""
import json
import pathlib
import random
import re
import struct

import pefile

import pafet_vm_analyze_xxxvii as A   # run from the repository root: python scripts/pafet_vm_identify_xxxvii.py

ROOT = pathlib.Path(__file__).resolve().parents[1]
LIFTED = ROOT / 'jack_xxxvii_evidence' / 'lifted'
BASE = 0x140000000
M32 = 0xffffffff

# executor name -> adapter VA (Stalker observation, this round)
ADAPTER_OF = {
    'main': 0x14039d4a0, 'sha_ch': 0x14039d580, 'sha_compress': 0x14039d600, 'sha_msg': 0x14039d6b0,
    'serial_inner': 0x14039d940, 'des_keyschedule': 0x14039d9c0, 'des_round': 0x14039da50,
    'des_block': 0x14039dae0, 'cipher_unpad': 0x14039db70, 'cipher_buffer': 0x14039de80,
    'hex': 0x14039dee0, 'user': 0x14039df30,
}
# (VM, host case, table RVA, standard table name); RVAs read from the dispatcher bodies
TABLE_USES = [
    ('des_block', '8', 0x3def60, 'IP'), ('des_block', '24', 0x3e03b0, 'FP'),
    ('des_round', '4', 0x3eead0, 'E'), ('des_round', '19', 0x3ea790, 'P'), ('des_round', '15', 0x3f1150, 'SBOX'),
    ('des_keyschedule', '8', 0x3ec908, 'PC1'), ('des_keyschedule', '15/16/18/19', 0x3ec0b0, 'SHIFTS'),
    ('des_keyschedule', '25', 0x3ed458, 'PC2'),
]
DES = {
    'IP': [58, 50, 42, 34, 26, 18, 10, 2, 60, 52, 44, 36, 28, 20, 12, 4, 62, 54, 46, 38, 30, 22, 14, 6, 64, 56, 48, 40, 32, 24, 16, 8,
           57, 49, 41, 33, 25, 17, 9, 1, 59, 51, 43, 35, 27, 19, 11, 3, 61, 53, 45, 37, 29, 21, 13, 5, 63, 55, 47, 39, 31, 23, 15, 7],
    'FP': [40, 8, 48, 16, 56, 24, 64, 32, 39, 7, 47, 15, 55, 23, 63, 31, 38, 6, 46, 14, 54, 22, 62, 30, 37, 5, 45, 13, 53, 21, 61, 29,
           36, 4, 44, 12, 52, 20, 60, 28, 35, 3, 43, 11, 51, 19, 59, 27, 34, 2, 42, 10, 50, 18, 58, 26, 33, 1, 41, 9, 49, 17, 57, 25],
    'E': [32, 1, 2, 3, 4, 5, 4, 5, 6, 7, 8, 9, 8, 9, 10, 11, 12, 13, 12, 13, 14, 15, 16, 17,
          16, 17, 18, 19, 20, 21, 20, 21, 22, 23, 24, 25, 24, 25, 26, 27, 28, 29, 28, 29, 30, 31, 32, 1],
    'P': [16, 7, 20, 21, 29, 12, 28, 17, 1, 15, 23, 26, 5, 18, 31, 10, 2, 8, 24, 14, 32, 27, 3, 9, 19, 13, 30, 6, 22, 11, 4, 25],
    'PC1': [57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36,
            63, 55, 47, 39, 31, 23, 15, 7, 62, 54, 46, 38, 30, 22, 14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 28, 20, 12, 4],
    'PC2': [14, 17, 11, 24, 1, 5, 3, 28, 15, 6, 21, 10, 23, 19, 12, 4, 26, 8, 16, 7, 27, 20, 13, 2,
            41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48, 44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32],
    'SHIFTS': [1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1],
    'SBOX': [
        14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7, 0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
        4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0, 15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13,
        15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10, 3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
        0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15, 13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9,
        10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8, 13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
        13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7, 1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12,
        7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15, 13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
        10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4, 3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14,
        2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9, 14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,
        4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14, 11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3,
        12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11, 10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,
        9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6, 4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13,
        4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1, 13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
        1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2, 6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12,
        13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7, 1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,
        7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8, 2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11],
}


def adapters(img):
    """Adapters of the common shape `mov r8,[r8]; add rcx,8; mov edx,[rdx]; jmp D`, or `add rcx,8; jmp D`."""
    lo, hi = 0x39d300, 0x39e200
    blob = img[lo:hi]
    out = {}
    for pat in (rb'\x4d\x8b\x00\x48\x83\xc1\x08\x8b\x12\xe9', rb'(?<!\x8b\x00)\x48\x83\xc1\x08\xe9'):
        for m in re.finditer(pat, blob):
            end = lo + m.end()
            out[BASE + lo + m.start()] = BASE + end + 4 + struct.unpack_from('<i', img, end)[0]
    return out


def switch_cases(img, va):
    """Number of cases of the `cmp reg, N; ja` switch near the head of a dispatcher, if present."""
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    prev = None
    for ins in md.disasm(bytes(img[va - BASE: va - BASE + 400]), va):
        if prev and ins.mnemonic == 'ja':
            return int(prev.op_str.split(',')[1], 0) + 1
        prev = ins if ins.mnemonic == 'cmp' and re.match(r'(e[a-d]x|r\d+d), (0x[0-9a-f]+|\d+)$', ins.op_str) else None
        if ins.mnemonic in ('ret', 'jmp'):
            break
    return None


def load(name):
    d = json.loads((LIFTED / (name + '.json')).read_text(encoding='utf-8'))
    return d, {int(k): int(v, 16) for k, v in d['constants'].items()}


def walk(name, const, reg_read, host):
    """Follow the JMP chain of a branch-free program from block 0; `fold` decides symbolic or concrete."""
    d, consts = load(name)
    assert not d['conditional_branches'], name
    stack, regs, blk, seen = [], {}, '0', set()
    while True:
        assert blk not in seen
        seen.add(blk)
        nxt = None
        for ins in d['program'][blk]:
            op, args = ins['op'], ins['args']
            if op == 1:
                stack.append(const(consts[args[0]]))
            elif op == 4:
                stack.append(regs[args[0]] if args[0] in regs else reg_read(args[0]))
            elif op == 5:
                regs[args[0]] = stack.pop()
            elif op in A.BIN:
                y, x = stack.pop(), stack.pop()
                stack.append(A.fold(A.BIN[op], x, y))
            elif op == 44:
                stack.append(A.fold('NOT', stack.pop()))
            elif op in (58, 59):
                stack.append(A.fold('SEXT' if op == 58 else 'ZEXT', stack.pop(), imm=args[0]))
            elif op == 31:
                stack.pop()
            elif op == 32:
                argv = [stack.pop() for _ in range(args[1])][::-1]
                stack.append(host(args[0], argv))
            elif op == 26:
                nxt = str(args[0])
                break
            elif op in (29, 30):
                return (stack.pop() if op == 29 and stack else None), len(seen), len(d['program'])
            else:
                raise ValueError((name, op))
        blk = nxt


def formula(name):
    calls = []

    def host(idx, argv):
        calls.append('host%d(%s)' % (idx, ', '.join(hex(a) if isinstance(a, int) else a for a in argv)))
        return 'h%d' % (len(calls) - 1)
    ret, walked, total = walk(name, lambda v: v, lambda r: 'arg%d' % r, host)
    return dict(returns=hex(ret) if isinstance(ret, int) else ret, host_calls=calls, blocks_walked=walked, blocks=total)


def rotr(x, n):
    x &= M32
    n &= 31
    return ((x >> n) | (x << (32 - n))) & M32 if n else x


# VM -> (argument registers, textbook function, host model). Registers are the ones the formula reads.
LEAVES = {
    'sha_rotr': ((5, 12), lambda x, n: rotr(x, n), None),
    'sha_maj': ((5, 10, 7), lambda a, b, c: (a & b) ^ (a & c) ^ (b & c), None),
    'sha_ep0': ((8,), lambda x: rotr(x, 2) ^ rotr(x, 13) ^ rotr(x, 22), 'rotr'),
    'sha_ep1': ((4,), lambda x: rotr(x, 6) ^ rotr(x, 11) ^ rotr(x, 25), 'rotr'),
    'sha_sig0': ((7,), lambda x: rotr(x, 7) ^ rotr(x, 18) ^ (x >> 3), 'rotr'),
    'sha_sig1': ((2,), lambda x: rotr(x, 17) ^ rotr(x, 19) ^ (x >> 10), 'rotr'),
    'sha_ch': ((), lambda x, y, z: (x & y) ^ (~x & z & M32), 'ch'),
}


def numeric(name, trials=2000, seed=37):
    regs_in, ref, model = LEAVES[name]
    rng = random.Random(seed)
    bad = 0
    for t in range(trials):
        vals = [rng.getrandbits(32) for _ in range(3)]
        if name == 'sha_rotr':
            vals[1] = rng.randrange(1, 32)
        if model == 'ch':
            x, y, z = vals
            # native adapter 0x14039d580: host 0 -> x, 1 -> y, 2 -> ~x (32-bit), 3 -> z
            host = lambda idx, argv: (x, y, ~x & M32, z)[idx]
            got, _, _ = walk(name, lambda v: v, lambda r: 0, host)
            exp = ref(x, y, z)
        else:
            given = dict(zip(regs_in, vals))
            host = (lambda idx, argv: rotr(argv[0], argv[1])) if model == 'rotr' else None
            got, _, _ = walk(name, lambda v: v, lambda r: given.get(r, 0), host)
            exp = ref(*vals[:len(regs_in)])
        bad += (got & M32) != (exp & M32)
    return dict(trials=trials, mismatches=bad, argument_registers=list(regs_in), host_model=model)


def main():
    pe = pefile.PE(str(ROOT / 'pafet.bin'), fast_load=True)
    img = pe.get_memory_mapped_image()
    ad = adapters(img)
    rows = []
    for name, a in sorted(ADAPTER_OF.items(), key=lambda t: t[1]):
        disp = ad.get(a, a)     # cipher_unpad and sha_ch have the switch inside the adapter itself
        rows.append(dict(vm=name, adapter=hex(a), dispatcher=hex(disp), inline=a not in ad, cases=switch_cases(img, disp)))
    tables = []
    for vm, case, rva, std in TABLE_USES:
        ref = DES[std]
        got = list(img[rva: rva + len(ref)])
        tables.append(dict(vm=vm, host_case=case, table_rva=hex(rva), standard=std, length=len(ref), equal=got == ref,
                           first_difference=next((i for i, (x, y) in enumerate(zip(got, ref)) if x != y), None)))
    leaves = {n: dict(formula=formula(n), numeric=numeric(n)) for n in LEAVES}
    report = dict(scope='static identification only; executes nothing', host_adapters=rows, des_tables=tables, branch_free_vms=leaves,
                  all_tables_equal=all(t['equal'] for t in tables),
                  all_leaves_equal=all(v['numeric']['mismatches'] == 0 for v in leaves.values()))
    (ROOT / 'jack_xxxvii_evidence' / 'identification.json').write_text(json.dumps(report, indent=1) + '\n', encoding='utf-8')
    for r in rows:
        print('%-16s adapter %s -> dispatcher %s  cases=%s%s' % (r['vm'], r['adapter'], r['dispatcher'], r['cases'], '  (inline)' if r['inline'] else ''))
    for t in tables:
        print('%-16s host %-12s table %s  %-6s len=%-3d %s' % (t['vm'], t['host_case'], t['table_rva'], t['standard'], t['length'], 'EQUAL' if t['equal'] else 'DIFFERS at %s' % t['first_difference']))
    for n, v in leaves.items():
        print('%-9s %d/%d random inputs equal   return %s' % (n, v['numeric']['trials'] - v['numeric']['mismatches'], v['numeric']['trials'], v['formula']['returns']))


if __name__ == '__main__':
    main()
