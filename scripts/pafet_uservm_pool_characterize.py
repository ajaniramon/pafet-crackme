#!/usr/bin/env python3
"""Characterize the 12 user-VM pool slots as mini-VM programs.

Each slot in the user-VM pool at 0x1403E1240/E7110/E2500 is NOT a stored
constant. It is a short mini-VM program (length words from aux_tbl) that
takes two 64-bit literal inputs r8 (= OP0 source) and r9 (= OP1 source) and
produces a single 64-bit value in rax.

The 11-op mini-VM: OP0 load r14, OP1 load r15, OP2 copy, OP3 add,
OP4 sub, OP5 xor, OP6 and, OP7 or, OP8 not, OP9 shl1, OP10 recurse into
another slot. The result is `local[3]` after `length` iterations.

For each slot we:
  1. Dump the decoded (opcode, dst, src) sequence it runs.
  2. Evaluate it on a battery of (lit1, lit2) inputs and show the output.
  3. Classify as: trivial-literal (always returns lit1 or lit2), xor-like,
     add-like, bitwise, or recursive-composition.
"""
import json
import os
import sys

import pefile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pafet_semantic_probe import BASE, MASK, IsolatedPE
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

PE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'pafet.bin')
EVIDENCE_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..',
                            'vm_pools_evidence')

POOL_READER_VA = 0x140048e10
CASE_VAS = {
    0x1400490b4: ('OP0_LOAD_R14', 0),
    0x1400490be: ('OP1_LOAD_R15', 1),
    0x1400490c8: ('OP2_COPY', 2),
    0x1400490d7: ('OP3_ADD', 3),
    0x1400490ed: ('OP4_SUB', 4),
    0x140049100: ('OP5_XOR', 5),
    0x140049113: ('OP6_AND', 6),
    0x140049126: ('OP7_OR', 7),
    0x140049139: ('OP8_NOT', 8),
    0x140049147: ('OP9_SHL1', 9),
    0x14004914e: ('OP10_RECURSE', 10),
}


def run_slot(pe, slot, lit1=0, lit2=0, trace=False):
    env = IsolatedPE(pe)
    ops = []

    def on_code(uc, address, size, _):
        if address in CASE_VAS:
            name, opcode = CASE_VAS[address]
            rbx = uc.reg_read(UC_X86_REG_RBX)
            r8 = uc.reg_read(UC_X86_REG_R8)
            r11d = uc.reg_read(UC_X86_REG_R11D)
            r14 = uc.reg_read(UC_X86_REG_R14)
            r15 = uc.reg_read(UC_X86_REG_R15)
            info = {'name': name, 'opcode': opcode, 'dst': rbx & 3, 'src': r8 & 3,
                    'r14': r14 & MASK, 'r15': r15 & MASK}
            if opcode == 10:
                info['recurse_slot'] = (r11d >> 0x10) & 0xf
            ops.append(info)

    if trace:
        env.mu.hook_add(UC_HOOK_CODE, on_code)
    try:
        rax = env.call(POOL_READER_VA, 0, slot, lit1, lit2)
    except Exception as exc:
        return None, str(exc), ops
    return rax, None, ops


def main():
    pe = pefile.PE(PE_PATH, fast_load=True)
    report = {'pool_reader_va': f'0x{POOL_READER_VA:x}',
              'abi': ('rcx=depth(0..3), rdx=slot(0..11), r8=literal_1, '
                      'r9=literal_2; returns rax=mini-VM local[3] after '
                      'length iterations'),
              'opcode_map': {k: v for k, v in sorted(
                  ((info[1], info[0]) for info in CASE_VAS.values()))},
              'slots': []}

    inputs = [(0, 0), (1, 0), (0, 1), (1, 1), (0xff, 0),
              (0, 0xff), (0xff, 0xff), (0xdeadbeef, 0xcafebabe),
              (0x1122334455667788, 0x8877665544332211)]

    for slot in range(12):
        # First get the opcode trace with lit1=0, lit2=0
        _, _, ops = run_slot(pe, slot, 0, 0, trace=True)
        # Then evaluate across inputs
        results = []
        for lit1, lit2 in inputs:
            rax, err, _ = run_slot(pe, slot, lit1, lit2, trace=False)
            results.append({'lit1': lit1, 'lit2': lit2,
                            'rax': rax, 'err': err})
        # Analyze linearity
        # f(0,0), f(1,0), f(0,1): if f depends only on lit1 → "lit1_pass"
        f00 = results[0]['rax']
        f10 = results[1]['rax']
        f01 = results[2]['rax']
        ffff00 = results[4]['rax']
        f00ff = results[5]['rax']
        classification = 'opaque'
        if f00 == 0 and f10 == 1 and f01 == 0 and ffff00 == 0xff and f00ff == 0:
            classification = 'identity_lit1'
        elif f00 == 0 and f10 == 0 and f01 == 1 and f00ff == 0xff and ffff00 == 0:
            classification = 'identity_lit2'
        elif f00 == 0 and f10 == 1 and f01 == 1 and ffff00 == 0xff and f00ff == 0xff:
            classification = 'xor_or_add_small'
        elif all(r['rax'] == f00 for r in results):
            classification = f'constant_{f00:#x}'

        report['slots'].append({
            'slot': slot,
            'program_length': len(ops),
            'opcode_trace': [{
                'opcode': o['opcode'], 'name': o['name'],
                'dst': o['dst'], 'src': o['src'],
                **({'recurse_slot': o['recurse_slot']} if 'recurse_slot' in o else {})
            } for o in ops],
            'evaluations': results,
            'classification': classification,
        })

    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    out = os.path.join(EVIDENCE_DIR, 'usuario_pool_characterization.json')
    with open(out, 'w', encoding='utf-8') as fh:
        json.dump(report, fh, indent=2)

    print(f'[+] wrote {out}')
    print()
    for s in report['slots']:
        ops_str = ' '.join(
            f'{o["name"][2:]}' + (f'(->{o["recurse_slot"]})'
                                   if 'recurse_slot' in o else '')
            for o in s['opcode_trace'])
        print(f'slot {s["slot"]:2d}  len={s["program_length"]:2d}  '
              f'class={s["classification"]:<16}  ops={ops_str[:100]}')
        for e in s['evaluations']:
            print(f'    f(0x{e["lit1"]:016x}, 0x{e["lit2"]:016x}) = '
                  f'0x{e["rax"]:016x}')
        print()


if __name__ == '__main__':
    main()
