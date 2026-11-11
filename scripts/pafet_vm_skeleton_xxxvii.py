#!/usr/bin/env python3
"""Skeleton of a lifted Pafet VM program: host calls and real control flow, obfuscation folded away.

The lifted program is walked from block 0. Unconditional jumps are followed, a branch that
only ever went one way in the natural runs is followed that way, and a branch that went
both ways splits the walk. Each straight run is evaluated symbolically, so constants fold
and only host calls, their argument expressions and the branch conditions remain.

A one-way branch whose condition involves a host value is a real test that the inputs
never flipped: its other side is walked too (it was recorded by a forced run). A one-way
branch on junk registers and constants only is treated as an opaque predicate.

Values are carried along a straight run (stack and registers). At a join they are not
merged: a run that reads a register or stack slot it did not write shows it as rN / inN.

Usage: python scripts/pafet_vm_skeleton_xxxvii.py NAME [NAME ...]
Writes jack_xxxvii_evidence/lifted/NAME.skeleton.txt
"""
import json
import pathlib
import re
import sys

import pafet_vm_analyze_xxxvii as A

ROOT = pathlib.Path(__file__).resolve().parents[1]
LIFTED = ROOT / 'jack_xxxvii_evidence' / 'lifted'


def skeleton(name):
    d = json.loads((LIFTED / (name + '.json')).read_text(encoding='utf-8'))
    consts = {int(k): int(v, 16) for k, v in d['constants'].items()}
    natural = {(str(b['block']), b['idx']): b['natural'] for b in d['branches']}
    prog = d['program']
    f = lambda v: hex(v) if isinstance(v, int) else v
    runs = {}                  # start position -> (lines, exits)
    todo = [('0', 0)]
    counter = [0]
    while todo:
        start = todo.pop()
        if start in runs:
            continue
        blk, idx = start
        stack, regs, lines, exits, nin = [], {}, [], [], [0]
        hops = 0

        def pop():
            if stack:
                return stack.pop()
            nin[0] += 1
            return 'in%d' % nin[0]

        while True:
            hops += 1
            assert hops < 100000, 'runaway walk'
            if idx >= len(prog[blk]):
                # the forced trace that recorded this block ended before its terminator
                exits.append(('incomplete', (blk, idx)))
                break
            ins = prog[blk][idx]
            op, args = ins['op'], ins['args']
            if op == 1:
                # a pool constant only read by forced runs has no recorded value
                stack.append(consts.get(args[0], 'const[%d]' % args[0]))
            elif op == 4:
                stack.append(regs.get(args[0], 'r%d' % args[0]))
            elif op == 5:
                regs[args[0]] = pop()
            elif op in A.BIN:
                y, x = pop(), pop()
                stack.append(A.fold(A.BIN[op], x, y))
            elif op == 44:
                stack.append(A.fold('NOT', pop()))
            elif op in (58, 59):
                stack.append(A.fold('SEXT' if op == 58 else 'ZEXT', pop(), imm=args[0]))
            elif op == 31:
                pop()
            elif op == 32:
                argv = [pop() for _ in range(args[1])][::-1]
                counter[0] += 1
                v = 'v%d' % counter[0]
                lines.append('%s = host%d(%s)' % (v, args[0], ', '.join(f(a) for a in argv)))
                stack.append(v)
            elif op == 26:
                blk, idx = str(args[0]), 0
                if (blk, idx) in runs or (blk, idx) == start:
                    exits.append(('goto', (blk, idx)))
                    break
                continue
            elif op in (27, 28):
                cond = pop()
                nat = natural.get((blk, idx), '')
                taken_pos, fall_pos = (str(args[0]), 0), (blk, idx + 1)
                if len(nat) == 2:
                    zero_pos, nonzero_pos = (taken_pos, fall_pos) if op == 27 else (fall_pos, taken_pos)
                    exits.append(('if', f(cond), nonzero_pos, zero_pos))
                    todo += [nonzero_pos, zero_pos]
                    break
                # one-way in every natural run: follow the outcome that occurred, and say so
                # unless the condition folded to a constant (an opaque predicate)
                if not isinstance(cond, int):
                    other = fall_pos if nat == 'T' else taken_pos
                    # a condition built only from junk registers and constants is an opaque predicate;
                    # one that involves a host value is a real test these inputs never flipped
                    depends = re.search(r'\bv\d+|\bin\d+', str(cond)) is not None
                    lines.append('# one-way%s: (%s) was always %s; the other outcome goes to L%s_%d' % (
                        '' if depends else ' (registers and constants only)', f(cond),
                        ('zero' if (op == 27) == (nat == 'T') else 'nonzero'), other[0], other[1]))
                    if depends:
                        todo.append(other)
                blk, idx = taken_pos if nat == 'T' else fall_pos
                if (blk, idx) in runs:
                    exits.append(('goto', (blk, idx)))
                    break
                continue
            elif op in (29, 30):
                exits.append(('return', f(pop()) if op == 29 else 'void'))
                break
            else:
                raise ValueError((name, op))
            idx += 1
        runs[start] = (lines, exits)
        for e in exits:
            if e[0] == 'goto':
                todo.append(e[1])
    lab = lambda p: 'L%s_%d' % p
    out = ['# %s (%s): host-call skeleton. Lx_y = run starting at block x, instruction y.' % (d['name'], d['role'])]
    for start in sorted(runs, key=lambda p: (int(p[0]), p[1])):
        lines, exits = runs[start]
        out.append('%s:' % lab(start))
        out += ['    ' + l for l in lines]
        for e in exits:
            if e[0] == 'goto':
                out.append('    goto %s' % lab(e[1]))
            elif e[0] == 'if':
                out.append('    if (%s) goto %s; else goto %s' % (e[1], lab(e[2]), lab(e[3])))
            elif e[0] == 'incomplete':
                out.append('    # block %s not recorded past instruction %d' % e[1])
            else:
                out.append('    return %s' % e[1])
    return '\n'.join(out) + '\n'


if __name__ == '__main__':
    for n in sys.argv[1:]:
        text = skeleton(n)
        (LIFTED / (n + '.skeleton.txt')).write_text(text, encoding='utf-8')
        print(text)
