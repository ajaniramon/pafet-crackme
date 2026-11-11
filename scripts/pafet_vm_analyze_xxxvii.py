#!/usr/bin/env python3
"""Per-block symbolic evaluation of a lifted Pafet VM program (output of pafet_vm_lift_xxxvii.py).

For every conditional branch and every HOST call it prints the expression that
feeds it, with constants folded. Registers and values entering a block are left
symbolic (rN, inN): this is a local, per-block view meant to answer one question,
"what can decide a branch?", not a full decompilation.

Usage: python scripts/pafet_vm_analyze_xxxvii.py jack_xxxvii_evidence/lifted/NAME.json [...]
"""
import json
import pathlib
import sys

M = (1 << 64) - 1


def sx(v, w):
    w &= 63
    if not w:
        return v
    v &= (1 << w) - 1
    return v | (M ^ ((1 << w) - 1)) if v >> (w - 1) else v


def signed(v):
    return v - (1 << 64) if v >> 63 else v


def fold(op, a, b=None, imm=None):
    """a, b: int or str. Returns int when everything is constant, else an expression string."""
    ints = isinstance(a, int) and (b is None or isinstance(b, int))
    if ints:
        if op == 'ADD': return (a + b) & M
        if op == 'SUB': return (a - b) & M
        if op == 'AND': return a & b
        if op == 'OR': return a | b
        if op == 'SHL': return (a << (b & 63)) & M
        if op == 'SHR': return a >> (b & 63)
        if op == 'SGE': return int(signed(a) >= signed(b))
        if op == 'ZEXT': return a & ((1 << (imm & 63)) - 1) if imm & 63 else a
        if op == 'MUL': return (a * b) & M
        if op == 'XOR': return a ^ b
        if op == 'NOT': return a ^ M
        if op == 'EQ': return int(a == b)
        if op == 'NE': return int(a != b)
        if op == 'SLT': return int(signed(a) < signed(b))
        if op == 'SGT': return int(signed(a) > signed(b))
        if op == 'SEXT': return sx(a, imm)
    f = lambda v: hex(v) if isinstance(v, int) else v
    if op in ('NOT',): return '~%s' % f(a)
    if op in ('SEXT', 'ZEXT'): return '%s%d(%s)' % ('sext' if op == 'SEXT' else 'zext', imm, f(a))
    sym = {'ADD': '+', 'SUB': '-', 'MUL': '*', 'XOR': '^', 'AND': '&', 'OR': '|', 'SHL': '<<', 'SHR': '>>',
           'EQ': '==', 'NE': '!=', 'SLT': '<s', 'SGT': '>s', 'SGE': '>=s'}[op]
    return '(%s %s %s)' % (f(a), sym, f(b))


BIN = {8: 'ADD', 9: 'SUB', 10: 'MUL', 20: 'EQ', 21: 'NE', 22: 'SLT', 24: 'SGT', 25: 'SGE', 39: 'AND', 40: 'OR', 41: 'XOR', 42: 'SHL', 43: 'SHR'}


def analyze(path):
    d = json.loads(pathlib.Path(path).read_text(encoding='utf-8'))
    consts = {int(k): int(v, 16) for k, v in d['constants'].items()}
    lines = ['# %s (%s): what feeds each conditional branch and each HOST call' % (d['name'], d['role'])]
    branches = []
    hosts = []
    unknown = set()
    for b in sorted(d['program'], key=int):
        stack = []
        nin = [0]
        regs = {}

        def pop():
            if stack:
                return stack.pop()
            nin[0] += 1
            return 'in%d' % nin[0]

        for i, ins in enumerate(d['program'][b]):
            op, args = ins['op'], ins['args']
            if op == 1:
                stack.append(consts.get(args[0], 'const[%d]' % args[0]))
            elif op == 4:
                stack.append(regs.get(args[0], 'r%d' % args[0]))
            elif op == 5:
                regs[args[0]] = pop()
            elif op in BIN:
                y, x = pop(), pop()
                stack.append(fold(BIN[op], x, y))
            elif op == 44:
                stack.append(fold('NOT', pop()))
            elif op in (58, 59):
                v = pop()
                stack.append(fold('SEXT' if op == 58 else 'ZEXT', v, imm=args[0]))
            elif op == 31:
                pop()
            elif op == 32:
                argv = [pop() for _ in range(args[1])][::-1]
                name = 'h%d@%s.%d' % (args[0], b, i)
                nxt = d['program'][b][i + 1]['op'] if i + 1 < len(d['program'][b]) else None
                hosts.append((args[0], b, i, argv, 'dropped' if nxt == 31 else 'used'))
                stack.append(name)
            elif op in (27, 28):
                c = pop()
                branches.append((b, i, 'JZ' if op == 27 else 'JNZ', args[0], c))
            elif op in (26, 29, 30):
                break
            else:
                unknown.add(op)
                stack.append('op%d(?)' % op)
    f = lambda v: hex(v) if isinstance(v, int) else v
    lines.append('## conditional branches: %d' % len(branches))
    nat = {(str(x['block']), x['idx']): x for x in d.get('branches', [])}
    classified = []
    for b, i, kind, tgt, c in branches:
        n = nat.get((b, i), {})
        both = len(n.get('natural', '')) == 2
        tag = 'REAL (both outcomes occur naturally)' if both else 'ONE-WAY in every natural run: %s, values %s' % (n.get('natural', '?'), n.get('natural_condition_values', []))
        classified.append((b, i, kind, tgt, c, both))
        lines.append('  block %s.%d  %s -> %d   cond = %s   %s' % (b, i, kind, tgt, f(c), tag))
    branches = classified
    lines.append('## HOST calls: %d' % len(hosts))
    for h, b, i, argv, use in sorted(hosts, key=lambda t: (t[0], int(t[1]), t[2])):
        lines.append('  host %-2d at %s.%-2d args=[%s]  return %s' % (h, b, i, ', '.join(f(a) for a in argv), use))
    if unknown:
        lines.append('## unmodelled opcodes: %s' % sorted(unknown))
    return '\n'.join(lines) + '\n', branches, hosts


if __name__ == '__main__':
    for p in sys.argv[1:]:
        text, br, hs = analyze(p)
        out = pathlib.Path(p).with_suffix('.analysis.txt')
        out.write_text(text, encoding='utf-8')
        real = [x for x in br if x[5]]
        print('%-14s branches=%d  real=%d  one-way=%d  hosts=%d' % (pathlib.Path(p).stem, len(br), len(real), len(br) - len(real), len(hs)))
        for b, i, kind, tgt, c, both in real:
            print('     %s.%d %s cond = %s' % (b, i, kind, c if not isinstance(c, int) else hex(c)))
