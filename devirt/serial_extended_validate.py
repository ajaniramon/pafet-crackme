"""Pinned Windows/original-x64/three-step semantic differentials for JACK XXXI."""
import argparse
import copy
import json
import pathlib
import pefile
from .serial_extended import ExtendedSerialVMState
from .serial_continuous import UnsupportedSerialRoute
from .serial_continuous_validate import ROOT, read, compare_events, require_complete_capture, digest
from pafet_state_contract import ContractError, load_frames, load_verified, require
from pafet_state_compare import compare

OUT = ROOT / 'jack_xxxi_evidence'


def candidate(entry, count=3):
    state = ExtendedSerialVMState.from_initial_capture(entry, pefile.PE(str(ROOT/'pafet.bin')))
    steps, failure = [], None
    try:
        for _ in range(count):
            steps.append(copy.deepcopy(state.step()))
    except UnsupportedSerialRoute as error:
        failure = str(error)
    return state, steps, failure


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output', type=pathlib.Path, default=OUT/'validation.json')
    args = ap.parse_args()
    registry = json.loads((OUT/'corpus.json').read_bytes())
    for path, sha in registry['artifacts'].items():
        load_verified(ROOT/path, sha)
    rows, controls = [], []
    for item in registry['cases']:
        folder = ROOT/item['path']
        row = dict(case=item['path'], expected=item['expected'])
        try:
            manifest = require_complete_capture(folder)
        except ContractError as error:
            require(error.kind == 'incomplete-capture' and item['expected'] == 'rejected-incomplete',
                    'Unexpected rejected capture', 'integrity')
            manifest = load_frames(folder)
            row.update(status='REJECTED', level_A=False, level_C=False,
                       reason=manifest.get('error'), observed_prefix=manifest['frames'][0]['steps'])
            rows.append(row)
            print(folder.name, 'REJECTED before candidate/replay', flush=True)
            continue
        entry = read(folder/'frame_00.entry.json.gz')
        state, steps, failure = candidate(entry)
        # Candidate has already finished; observations enter only the comparison.
        oracle = read(folder/'frame_00.trace.json.gz')
        native = compare(entry, oracle)
        semantic = compare_events(entry, state.events, oracle)
        require(native['all_match'], 'Original-x64 replay differs', 'emulation', case=str(folder), first=native['first_state_difference'])
        require(semantic['all_events_match'], 'Semantic state differs', 'model', case=str(folder), first=semantic['first_divergence'])
        full = item['expected'] == 'three-continuous'
        if full:
            require(failure is None and len(steps) == 3 and state.phase == 'outer_dispatch', 'Three-step chain incomplete', 'model')
            require((state.peek(1), state.peek(2), state.rekeys) == (11, 1, 1), 'Unexpected logical endpoint', 'model')
            require(steps[2]['register'] == steps[1]['register'] and steps[2]['value'] == steps[0]['value'], 'Register roundtrip differs', 'model')
            # Negative controls alter only comparison copies, never candidate inputs.
            if not controls:
                for name, offset in [('rekey_exit', 0x1b0), ('opcode_core', 0x11c0)]:
                    bad = copy.deepcopy(state.events)
                    index = next(i for i, event in enumerate(bad) if event['name'] == name)
                    at, data = bad[index]['regions'][0]
                    changed = bytearray(data); changed[offset] ^= 1
                    bad[index]['regions'][0] = (at, bytes(changed))
                    control = compare_events(entry, bad, oracle)
                    require(not control['all_events_match'] and control['first_divergence']['context_offset'] == hex(offset), 'Negative control missed', 'regression')
                    controls.append(control)
            try:
                state.step()
            except UnsupportedSerialRoute as error:
                fourth = str(error)
            else:
                raise ContractError('coverage', 'Fourth-step boundary unexpectedly changed')
        else:
            require(failure == 'Outer dispatcher loop is not modeled' and len(steps) in (1, 2), 'Blocked route changed', 'coverage')
            fourth = None
        row.update(status='PASS' if full else 'PARTIAL', level_C=full,
                   run_id=manifest['run_id'], level_A=native, semantic=semantic,
                   steps=steps, unsupported=failure, rekeys=state.rekeys,
                   rekey_proofs=state.rekey_proofs, map_probes=state.map_probes,
                   domains=[state.regions[int(s['native_body'],16)]['domain'] for s in steps],
                   fourth_step=fourth, outer_boundary=hex(state.outer_return_rva))
        rows.append(row)
        print(folder.name, row['status'], 'steps=', len(steps), 'native=', native['instructions_compared'], flush=True)
    fresh = [r for r in rows if r['level_C'] and r['case'].startswith('jack_xxxi_evidence/')]
    require(len(fresh) >= 3 and len({r['run_id'] for r in fresh}) == len(fresh), 'Need three independent fresh chains', 'coverage')
    sources = ['devirt/serial.py','devirt/serial_continuous.py','devirt/serial_extended.py',
               'devirt/serial_regions_xxxi.py','devirt/serial_extended_validate.py',
               'scripts/pafet_serial_audit_xxxi.py','scripts/pafet_native_step_capture.py',
               'scripts/pafet_state_contract.py','scripts/pafet_state_compare.py','scripts/pafet_state_replay.py']
    report = dict(status='PASS', all_required_checks_pass=True, rows=rows, negative_controls=controls,
                  fresh_three_step_processes=len(fresh),
                  fresh_native_instructions_in_C_intervals=sum(r['level_A']['instructions_compared'] for r in fresh),
                  all_complete_fresh_native_instructions=sum(r['level_A']['instructions_compared'] for r in rows if r['status']!='REJECTED' and r['case'].startswith('jack_xxxi_evidence/')),
                  source_sha256={p:digest((ROOT/p).read_bytes()) for p in sources},
                  scope='Three dependent instructions from PC 0 through threaded return/unwind to outer dispatcher. Full declared virtual-memory equality, not native CPU/stack equivalence of the semantic model. No fourth instruction claimed.')
    args.output.write_bytes(json.dumps(report, indent=2).encode()+b'\n')


if __name__ == '__main__': main()
