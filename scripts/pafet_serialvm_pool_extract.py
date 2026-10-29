#!/usr/bin/env python3
"""Extract 12 decoded slots of candidate pool-readers that structurally match
the user-VM pool-reader. Four candidates were identified by searching for
`cmp edx, 0xc` + `lea r11, [rip+disp]` establishing r11=IMG + the triplet
(offsets, lengths, aux_tbl) with sum(lengths)*4 == |aux_tbl|.

User-VM reference included to detect "pure ALU replica" vs anomaly.
"""
import json
import os
import sys

import pefile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pafet_semantic_probe import IsolatedPE  # noqa: E402

PE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'pafet.bin')
EVIDENCE_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..',
                            'vm_pools_evidence')

CANDIDATES = [
    ('user_vm_REFERENCE', 0x140048e10),
    ('candidate_17fe40_near_serial_blob', 0x14017fe40),
    ('candidate_26dd30', 0x14026dd30),
    ('candidate_283e20', 0x140283e20),
    ('candidate_33e960', 0x14033e960),
]
NUM_SLOTS = 12


def extract_one(pe, name, pool_va):
    slots_out = []
    for slot in range(NUM_SLOTS):
        env = IsolatedPE(pe)
        outbuf = env.alloc(64)
        env.mu.mem_write(outbuf, b'\x00' * 64)
        try:
            rax = env.call(pool_va, 0, slot, outbuf, 0)
            slots_out.append({'slot': slot, 'rax': rax, 'rax_hex': f'0x{rax:016x}'})
        except Exception as exc:
            slots_out.append({'slot': slot, 'error': repr(exc)})
    return slots_out


def main():
    pe = pefile.PE(PE_PATH, fast_load=True)
    full = {}
    for name, va in CANDIDATES:
        print(f'=== {name}  (pool_reader=0x{va:x}) ===')
        slots = extract_one(pe, name, va)
        full[name] = {'pool_reader_va': f'0x{va:x}', 'slots': slots}
        for s in slots:
            if 'error' in s:
                print(f'  slot {s["slot"]:2d}  ERR {s["error"][:60]}')
            else:
                print(f'  slot {s["slot"]:2d}  rax={s["rax_hex"]}')
        print()

    # Comparison vs user-VM
    ref = full['user_vm_REFERENCE']['slots']
    print('=== Comparison vs user-VM (same input lit1=outbuf, lit2=0) ===')
    for name, data in full.items():
        if name == 'user_vm_REFERENCE': continue
        slots = data['slots']
        diffs = []
        for i, (a, b) in enumerate(zip(ref, slots)):
            if a.get('error') or b.get('error'): continue
            if a['rax'] != b['rax']:
                diffs.append((i, a['rax_hex'], b['rax_hex']))
        if not diffs:
            print(f'  {name}: IDENTICAL to user-VM  (same ALU library, different aux_tbl)')
        else:
            print(f'  {name}: {len(diffs)}/12 slots DIFFER:')
            for i, aref, bval in diffs:
                print(f'    slot {i:2d}: userVM={aref}  this={bval}')

    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    out = os.path.join(EVIDENCE_DIR, 'serial_pool_candidates_decoded.json')
    with open(out, 'w', encoding='utf-8') as fh:
        json.dump(full, fh, indent=2)
    print(f'\n[+] wrote {out}')


if __name__ == '__main__':
    main()
