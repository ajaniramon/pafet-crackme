"""Synthetic isolated rekey differentials: original x64 versus scalar effects.

These are deliberately constructed helper inputs, never extra Windows routes.
Native code is the oracle only; the candidate receives no replay result.
"""
import copy
import hashlib
import json
import pathlib
import pefile
from .serial_extended import ExtendedSerialVMState
from .serial_continuous_validate import ROOT, read, require_complete_capture
from pafet_state_replay import Replay
from pafet_state_contract import require

OUT = ROOT / 'jack_xxxi_evidence'


def case(active):
    require_complete_capture(OUT / 'captures/process_b')
    entry = read(OUT / 'captures/process_b/frame_00.entry.json.gz')
    state = ExtendedSerialVMState.from_initial_capture(entry, pefile.PE(str(ROOT/'pafet.bin')))
    # Make well-encoded helper inputs using the independently reconstructed PUSH.
    # This does not claim these artificial pushes are a natural program route.
    for value in range(active):
        state.push(0xfedcba9876543210 ^ value)
    queue_count = min(active, 32)
    state.put(0x394, queue_count, 4)
    for index in range(queue_count):
        for offset in (0x398 + 8*index, 0x39c + 8*index):
            state.put(offset, (0x12340000 ^ offset) ^ state.u(0x10), 4)
    state.put(0x200, 0, 4)
    synthetic = copy.deepcopy(entry)
    synthetic.pop('stop_any', None)
    # The captured site is BEFORE CALL: its stack top is not a return address.
    # Construct the synthetic call's pushed return slot from the entry address.
    rsp = entry['state']['gprs'][4] - 8
    synthetic['state']['gprs'][4] = rsp
    synthetic['native_return'] = entry['state']['rip']
    synthetic['stop'] = entry['state']['rip']
    state.m.add(rsp, synthetic['stop'].to_bytes(8, 'little'), overwrite=True)
    synthetic['state']['rip'] = entry['base'] + 0x1ef7c0
    synthetic['regions'] = []
    for region in entry['regions']:
        r = dict(region)
        r['hex'] = state.read(r['address'], len(bytes.fromhex(r['hex']))).hex()
        synthetic['regions'].append(r)
    native = Replay(synthetic)
    state.rekey()
    instructions = sum(1 for _ in native.run())
    regions = []
    for root in state.roots:
        candidate = state.read(root['address'], root['size'])
        actual = bytes(native.uc.mem_read(root['address'], root['size']))
        require(candidate == actual, 'Synthetic rekey differs', 'model', role=root['role'], active=active)
        regions.append(dict(role=root['role'], bytes=len(candidate), different_bytes=0))
    return dict(kind='synthetic-original-x64-helper', active_stack_cells=active, queue_entries=queue_count,
                original_x64_instructions=instructions, regions=regions,
                logical_preservation=state.rekey_proofs, all_bytes_match=True)


def main():
    results = [case(n) for n in (0, 1, 3, 1023)]
    report = dict(all_checks_pass=True, cases=results,
                  source_sha256={p: hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in
                                 ['devirt/serial_rekey_validate.py','devirt/serial_extended.py','scripts/pafet_state_replay.py']},
                  entry_sha256=hashlib.sha256((OUT/'captures/process_b/frame_00.entry.json.gz').read_bytes()).hexdigest(),
                  scope='Constructed isolated-helper inputs; not native Windows paths or continuous program coverage.')
    (OUT/'rekey_differential.json').write_bytes(json.dumps(report, indent=2).encode()+b'\n')
    print('PASS: four synthetic rekey cases, including live stack and storage limit')


if __name__ == '__main__': main()
