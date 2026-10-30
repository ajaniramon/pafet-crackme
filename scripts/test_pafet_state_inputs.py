"""Regression tests for omitted native-stack arrays and oracle/input separation."""
import builtins
import copy
import gzip
import io
import json
import pathlib
import unittest
from unittest.mock import patch
from pafet_state_replay import Replay,ROOT
from pafet_uservm_inputs import require_complete,IncompleteCapture


def load(path):return json.loads(gzip.decompress(path.read_bytes()))


class InputTests(unittest.TestCase):
    def test_all_original_xxvii_frames_are_incomplete(self):
        captures=load(ROOT/'jack_xxvii_evidence/cookie_frames.json.gz');count=0
        for c in captures.values():
            for vector in c['vectors']:
                with self.assertRaises(IncompleteCapture):require_complete(vector)
                count+=1
        self.assertEqual(count,6)

    def test_corrected_frames_cover_both_pointed_arrays(self):
        captures=load(ROOT/'state_divergence_evidence/frida/cookie_frames.json.gz')
        for c in captures.values():
            for v in c['vectors']:
                self.assertTrue(require_complete(v))
                shortened=copy.deepcopy(v)
                del shortened['extra'][next(k for k,x in shortened['extra'].items() if x['src']=='encoded register banks')]
                with self.assertRaises(IncompleteCapture):require_complete(shortened)

    def test_after_values_cannot_satisfy_missing_input_contract(self):
        captures=load(ROOT/'jack_xxvii_evidence/cookie_frames.json.gz');v=captures['ramon']['vectors'][1]
        changed=copy.deepcopy(v);changed['after']={'ctx_hex':'ff'*0x2000}
        with self.assertRaises(IncompleteCapture):require_complete(changed)

    def test_replay_rejects_missing_array_page(self):
        entry=load(ROOT/'state_divergence_evidence/second_rekey/frame_01.entry.json.gz')
        target=entry['known_arrays'][0]['address']&~4095
        entry['regions']=[r for r in entry['regions'] if r['address']!=target]
        with self.assertRaisesRegex(ValueError,'Required before-memory is absent'):Replay(entry)

    def test_autonomous_replay_cannot_open_observations(self):
        entry=load(ROOT/'state_divergence_evidence/second_rekey/frame_01.entry.json.gz')
        original=builtins.open
        def guarded(path,*args,**kwargs):
            if '.trace.' in str(path) or 'comparison.json' in str(path):raise AssertionError('oracle used as input')
            return original(path,*args,**kwargs)
        with patch('builtins.open',guarded),patch('io.open',guarded):
            model=Replay(entry);steps=sum(1 for _ in model.run())
        # Observations become available only after the candidate has finished.
        oracle=load(ROOT/'state_divergence_evidence/second_rekey/frame_01.trace.json.gz')
        self.assertEqual(steps,len(oracle['trace']))


if __name__=='__main__':unittest.main()
