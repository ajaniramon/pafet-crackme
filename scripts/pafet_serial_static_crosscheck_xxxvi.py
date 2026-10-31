#!/usr/bin/env python3
"""Decode the reachable program from every pinned capture and compare.

Each capture has independent encrypted runtime state (shadow, windows, keys,
register encodings); identical logical programs show that the static decode
does not depend on one process's state. Also checks executed instances from
validation.json against the static decode."""
import gzip
import hashlib
import json
import pathlib
import sys
ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'scripts'))
from pafet_serial_static_xxxvi import sweep

OUT = ROOT/'jack_xxxvi_evidence'
KEYS = ('pc', 'opcode', 'kind', 'length', 'operand', 'value', 'target', 'function', 'argc', 'register', 'successors')


def canonical(nodes):
    return [{k: n[k] for k in KEYS if k in n} for _, n in sorted(nodes.items())]


def main():
    corpus = json.loads((OUT/'corpus.json').read_text()); rows = []
    reference = None
    for case in corpus['cases']:
        entry = json.loads(gzip.decompress((ROOT/case['path']/'frame_00.entry.json.gz').read_bytes()))
        manifest = json.loads((ROOT/case['path']/'manifest.json').read_text())
        program = canonical(sweep(entry)); digest = hashlib.sha256(json.dumps(program, sort_keys=True).encode()).hexdigest()
        reference = reference or program
        rows.append(dict(case=case['path'], user=bytes.fromhex(manifest['user_hex']).decode(), instructions=len(program),
                         program_sha256=digest, identical_to_first=program == reference))
        print(rows[-1], flush=True)
    checks = []
    validation = OUT/'validation.json'
    if validation.exists():
        static = {n['pc']: n for n in reference}
        from pafet_serial_graph_xxxvi import load_rows
        for r in load_rows(validation):
            bad = []
            for t in r['trace'][:r['verified_steps']]:
                n = static.get(t['pc'])
                ok = n is not None and n['opcode'] == t['opcode']
                if ok and 'target_pc' in t: ok = n.get('target') == t['target_pc']
                if ok and 'function' in t: ok = n.get('function') == t['function']
                if ok and t['opcode'] == 1 and 'value' in t: ok = n.get('value') == t['value']
                if not ok: bad.append(t)
            checks.append(dict(case=r['case'], verified_instances=r['verified_steps'], mismatches=len(bad), first=bad[:1]))
    (OUT/'static_crosscheck.json').write_text(json.dumps(dict(captures=rows, executed_vs_static=checks,
        all_identical=all(r['identical_to_first'] for r in rows)), indent=1)+'\n')


if __name__ == '__main__':
    main()
