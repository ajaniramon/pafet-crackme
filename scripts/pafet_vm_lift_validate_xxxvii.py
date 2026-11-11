#!/usr/bin/env python3
"""Check the JACK XXXVII dynamic lifts against the repository's independent static decodes.

References (all produced earlier from original PE bytes, without Frida):
  main          controller_evidence/decoded_main_program.json   (controller slice, 482 instructions)
  user          jack_xvii_evidence/generated/user.ir.json       (JACK XVII/XXIII, 339 instructions)
  serial_inner  jack_xxxvi_evidence/static_sweep.json           (JACK XXXVI closed program, 478 instructions)

Two separate verdicts per VM:

  consistent  every logical block the dynamic lift recorded has the same
              (opcode, operands) sequence as the static decode, or a prefix of it
              when the trace was cut. A single differing instruction fails this.
  complete    the lift has every block the static decode reaches from the entry
              block, each in full. Static blocks that no static jump reaches from
              the entry are dead code and do not count against this.

Blocks present only in the static decode are listed with their static predecessors.

Usage: python scripts/pafet_vm_lift_validate_xxxvii.py
"""
import json
import pathlib

ROOT = pathlib.Path(__file__).resolve().parents[1]
LIFTED = ROOT / 'jack_xxxvii_evidence' / 'lifted'
JUMPS = (26, 27, 28)
TERMINAL = (26, 29, 30)


def static_main():
    gt = json.loads((ROOT / 'controller_evidence' / 'decoded_main_program.json').read_text())
    ins = {i['pc']: i for i in gt['instructions']}
    blocks = {}
    for block_id, start in enumerate(gt['block_starts']):
        pc, lst = start, []
        while pc in ins:
            i = ins[pc]
            lst.append((i['opcode'], tuple(i['args'])))
            pc = i['next']
            if i['opcode'] in TERMINAL:
                break
        blocks[block_id] = lst
    return blocks


def static_user():
    ir = json.loads((ROOT / 'jack_xvii_evidence' / 'generated' / 'user.ir.json').read_text())
    ins = {}
    for b in ir['blocks']:
        for i in b['instructions']:
            ins[i['pc']] = i
    blocks = {}
    for block_id, start in enumerate(ir['logical_block_offsets']):
        pc, lst = start, []
        while pc in ins:
            i = ins[pc]
            lst.append((i['logical_opcode'], tuple(i['operands'])))
            if i['logical_opcode'] in TERMINAL:
                break
            pc = i['fallthrough_pc']
        blocks[block_id] = lst
    return blocks


def static_serial():
    nodes = {n['pc']: n for n in json.loads((ROOT / 'jack_xxxvi_evidence' / 'static_sweep.json').read_text())['nodes']}
    start = {0: 0}                       # logical unit label -> PC, from the static branch targets
    for n in nodes.values():
        if n['opcode'] in JUMPS:
            start[n['operand']] = n['target']
    blocks = {}
    for block_id, pc in start.items():
        lst = []
        while pc in nodes:
            n = nodes[pc]
            lst.append((n['opcode'], (n['function'], n['argc']) if n['opcode'] == 32 else ((n['operand'],) if 'operand' in n else ())))
            if n['opcode'] in TERMINAL:
                break
            pc += n['length']
        blocks[block_id] = lst
    return blocks


def reachable(static):
    seen, todo = set(), [0]
    while todo:
        b = todo.pop()
        if b in seen or b not in static:
            continue
        seen.add(b)
        for op, args in static[b]:
            if op in JUMPS:
                todo.append(args[0])
    return seen


def compare(name, static):
    lifted = json.loads((LIFTED / (name + '.json')).read_text())
    mine = {int(b): [(i['op'], tuple(i['args'])) for i in lst] for b, lst in lifted['program'].items()}
    identical, prefix, mismatch = [], [], []
    for b, lst in sorted(mine.items()):
        ref = static.get(b, [])
        if lst == ref:
            identical.append(b)
        elif lst == ref[:len(lst)]:
            prefix.append(dict(block=b, lifted=len(lst), static=len(ref)))
        else:
            mismatch.append(dict(block=b, lifted=lst[:6], static=ref[:6]))
    with_code = {b for b, l in static.items() if l}
    absent = sorted(with_code - set(mine))
    reach = reachable(static)
    preds = {}
    for b, lst in static.items():
        for op, args in lst:
            if op in JUMPS:
                preds.setdefault(args[0], set()).add(b)
    return dict(
        vm=name,
        static_blocks_with_code=len(with_code), static_instructions=sum(len(l) for l in static.values()),
        static_blocks_reachable_from_entry=len(reach & with_code),
        static_instructions_reachable_from_entry=sum(len(static[b]) for b in reach if b in static),
        lifted_blocks=len(mine), lifted_instructions=sum(len(l) for l in mine.values()),
        identical_blocks=len(identical), prefix_only_blocks=prefix, mismatching_blocks=mismatch,
        static_blocks_absent_from_lift=absent,
        absent_blocks_reachable_from_entry=sorted(set(absent) & reach),
        absent_block_static_predecessors={str(b): sorted(preds.get(b, ())) for b in absent},
        consistent=not mismatch,
        complete=not mismatch and not prefix and not (set(absent) & reach),
    )


def main():
    report = dict(
        scope='Logical (opcode, operands) sequences per logical block id; not native mechanisms, values or coverage of every input.',
        results=[compare('main', static_main()), compare('user', static_user()), compare('serial_inner', static_serial())])
    report['all_consistent'] = all(r['consistent'] for r in report['results'])
    report['all_complete'] = all(r['complete'] for r in report['results'])
    out = ROOT / 'jack_xxxvii_evidence' / 'validation.json'
    out.write_text(json.dumps(report, indent=1) + '\n', encoding='utf-8')
    for r in report['results']:
        print('%-12s static %d blocks / %d instr (reachable %d / %d) | lifted %d / %d | identical %d, prefix-only %d, mismatching %d | absent %s (reachable: %s) | %s' % (
            r['vm'], r['static_blocks_with_code'], r['static_instructions'], r['static_blocks_reachable_from_entry'],
            r['static_instructions_reachable_from_entry'], r['lifted_blocks'], r['lifted_instructions'], r['identical_blocks'],
            len(r['prefix_only_blocks']), len(r['mismatching_blocks']), r['static_blocks_absent_from_lift'],
            r['absent_blocks_reachable_from_entry'],
            ('CONSISTENT' if r['consistent'] else 'INCONSISTENT') + (', COMPLETE' if r['complete'] else ', INCOMPLETE')))


if __name__ == '__main__':
    main()
