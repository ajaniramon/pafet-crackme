"""Three-step continuity, native boundaries and abstraction counterexamples."""
import builtins
import copy
import unittest
from unittest.mock import patch
import pefile
import unicorn
from .serial_extended import ExtendedSerialVMState
from .serial_extended_validate import candidate, OUT
from .serial_continuous import UnsupportedSerialRoute
from .serial_continuous_validate import ROOT, read, compare_events, require_complete_capture
from pafet_state_contract import ContractError


class ExtendedSerialTests(unittest.TestCase):
    def entry(self, name='process_b'):
        return read(OUT/f'captures/{name}/frame_00.entry.json.gz')

    def test_three_fresh_chains_include_rekey_and_all_return_boundaries(self):
        for name in ('process_b', 'process_d', 'process_h'):
            with self.subTest(process=name):
                entry = self.entry(name)
                state, steps, failure = candidate(entry)
                self.assertIsNone(failure)
                self.assertEqual([s['virtual_pc'] for s in steps], [0, 5, 8])
                self.assertEqual((state.peek(1), state.peek(2)), (11, 1))
                self.assertEqual(state.phase, 'outer_dispatch')
                self.assertEqual(state.rekeys, 1)
                self.assertTrue(state.rekey_proofs[0]['logical_values_preserved'])
                self.assertEqual(steps[2]['value'], steps[0]['value'])
                report = compare_events(entry, state.events, read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
                self.assertTrue(report['all_events_match'], report['first_divergence'])
                self.assertEqual(len(report['boundaries']), 13)

    def test_no_observation_or_native_engine_during_candidate(self):
        entry = self.entry()
        pe = pefile.PE(str(ROOT/'pafet.bin'))
        original = builtins.open
        def guarded(path, *args, **kwargs):
            if '.trace.' in str(path) or 'validation.json' in str(path):
                raise AssertionError('Candidate opened observation')
            return original(path, *args, **kwargs)
        with patch('builtins.open', guarded), patch('io.open', guarded), patch.object(unicorn.Uc, 'emu_start', side_effect=AssertionError('Native execution in model')):
            state = ExtendedSerialVMState.from_initial_capture(entry, pe)
            for _ in range(3): state.step()
        self.assertEqual(state.peek(1), 11)

    def test_logical_equality_does_not_replace_full_state_comparison(self):
        entry = self.entry()
        state = ExtendedSerialVMState.from_initial_capture(entry, pefile.PE(str(ROOT/'pafet.bin')))
        # Deliberate candidate ablation, never counted as a native program path.
        state.noise_prefix = lambda: None
        steps = [state.step() for _ in range(3)]
        self.assertEqual((state.peek(1), state.peek(2), steps[2]['value']), (11, 1, steps[0]['value']))
        result = compare_events(entry, state.events, read(OUT/'captures/process_b/frame_00.trace.json.gz'))
        self.assertFalse(result['all_events_match'])
        self.assertEqual(result['first_divergence']['event'], 'opcode_core')

    def test_single_byte_register_corruption_is_detected(self):
        entry = self.entry()
        state, _, _ = candidate(entry)
        events = copy.deepcopy(state.events)
        index = next(i for i,e in enumerate(events) if e['name']=='rekey_exit')
        root = events[index]['roles'].index('register banks')
        at, data = events[index]['regions'][root]
        changed = bytearray(data); changed[0] ^= 1
        events[index]['regions'][root] = (at, bytes(changed))
        result = compare_events(entry, events, read(OUT/'captures/process_b/frame_00.trace.json.gz'))
        self.assertFalse(result['all_events_match'])
        self.assertEqual(result['first_divergence']['address'], hex(at))

    def test_fourth_instruction_stops_before_unmodeled_outer_loop(self):
        state, _, _ = candidate(self.entry())
        before = state.logical_state(), state.read(state.c, 0x11f0)
        with self.assertRaisesRegex(UnsupportedSerialRoute, 'Outer dispatcher loop'):
            state.step()
        with self.assertRaisesRegex(UnsupportedSerialRoute, 'Stopped state'):
            state.step()
        self.assertEqual(before, (state.logical_state(), state.read(state.c, 0x11f0)))

    def test_short_routes_remain_explicit_counterexamples(self):
        state, steps, failure = candidate(self.entry('process_i'))
        self.assertEqual(len(steps), 2)
        self.assertEqual(failure, 'Outer dispatcher loop is not modeled')
        self.assertEqual(state.phase, 'outer_dispatch')

    def test_incomplete_capture_is_rejected(self):
        with self.assertRaises(ContractError):
            require_complete_capture(OUT/'captures/process_c')

    def test_tls_flag_is_required_even_without_optional_descriptors(self):
        entry = self.entry()
        state = ExtendedSerialVMState.from_initial_capture(entry, pefile.PE(str(ROOT/'pafet.bin')))
        flag = state.roots[-1]['address']
        entry['regions'] = [r for r in entry['regions'] if not r['address'] <= flag < r['address']+len(bytes.fromhex(r['hex']))]
        entry['contract']['pointer_roots'] = []
        with self.assertRaises(ContractError):
            ExtendedSerialVMState.from_initial_capture(entry, pefile.PE(str(ROOT/'pafet.bin')))


if __name__ == '__main__': unittest.main()
