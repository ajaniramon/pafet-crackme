"""Seven-step deferred transfer and ten-step materialization regressions."""
import subprocess,sys,unittest
from unittest.mock import patch
import pefile
from .serial_windows import WindowSerialVMState
from .serial_branch_validate import candidate,OUT
from .serial_continuous_validate import ROOT,read,compare_events
from .serial_continuous import UnsupportedSerialRoute


class BranchTests(unittest.TestCase):
    def entry(self,name='ten_a'):
        return read(OUT/f'captures/{name}/frame_00.entry.json.gz')

    def test_three_seven_step_transfers_match_after_scheduler(self):
        for name in ('seven_a','seven_b','seven_c'):
            e=self.entry(name);s,steps,failure=candidate(e,7)
            self.assertIsNone(failure);self.assertEqual(len(steps),7)
            self.assertEqual((s.peek(1)&0xffffffff,s.u(0xad0,4)),(25,1))
            self.assertEqual(steps[-1]['target_pc'],2028)
            s.dispatch_next()
            self.assertEqual((s.peek(1)&0xffffffff,s.peek(6)),(2028,0))
            c=compare_events(e,s.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
            self.assertTrue(c['all_events_match'],c['first_divergence'])

    def test_three_ten_step_chains_match_all_declared_roots(self):
        for name in ('ten_a','ten_b','ten_c'):
            e=self.entry(name);s,steps,failure=candidate(e,10)
            self.assertIsNone(failure)
            self.assertEqual([v['virtual_pc'] for v in steps],[0,5,8,11,16,17,20,2028,2033,2036])
            self.assertEqual((s.peek(1)&0xffffffff,s.peek(2)&0xffffffff),(2041,1))
            c=compare_events(e,s.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
            self.assertTrue(c['all_events_match'],c['first_divergence'])
            self.assertEqual(c['boundaries'][-1]['native_instructions'],len(read(OUT/f'captures/{name}/frame_00.trace.json.gz')['trace']))

    def test_natural_rebuild_inputs_from_xxxiii_remain_equivalent(self):
        for name,depth in [('five_a',5),('six_b',6)]:
            folder=ROOT/f'jack_xxxiii_evidence/captures/{name}';e=read(folder/'frame_00.entry.json.gz')
            s,_,failure=candidate(e,depth);self.assertIsNone(failure);self.assertEqual(len(s.remaps),1)
            c=compare_events(e,s.events,read(folder/'frame_00.trace.json.gz'))
            self.assertTrue(c['all_events_match'],c['first_divergence'])

    def test_cold_ten_steps_without_native_engine_solver_or_oracle(self):
        code="""import sys,json,gzip,pefile
sys.modules['unicorn']=None;sys.modules['z3']=None
from devirt.serial_windows import WindowSerialVMState
e=json.loads(gzip.decompress(open(sys.argv[1],'rb').read()))
import builtins,io
old=builtins.open
def guarded(path,*a,**k):
    if any(x in str(path) for x in ('.trace.','validation.json','alu_static_proof.json')):raise RuntimeError('Oracle input')
    return old(path,*a,**k)
builtins.open=io.open=guarded
s=WindowSerialVMState.from_initial_capture(e,pefile.PE('pafet.bin'))
for _ in range(10):s.step()
print(s.peek(1)&0xffffffff,s.peek(2)&0xffffffff)
"""
        r=subprocess.run([sys.executable,'-c',code,str(OUT/'captures/ten_b/frame_00.entry.json.gz')],cwd=ROOT,capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr);self.assertEqual(r.stdout.strip(),'2041 1')

    def test_corrupted_request_tag_is_rejected(self):
        s,_,failure=candidate(self.entry(),7);self.assertIsNone(failure)
        s.set_control(12,s.peek(12)^1)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'attestation mismatch'):
            s.attestation_gate()

    def test_invalid_branch_unit_latches_failure(self):
        s,_,failure=candidate(self.entry(),6);self.assertIsNone(failure)
        with patch.object(s,'read_u32_operand',return_value=(21,103)):
            with self.assertRaisesRegex(UnsupportedSerialRoute,'Invalid materialization-unit label'):s.step()
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Stopped state'):s.step()

    def test_unknown_window_shape_is_explicit(self):
        s,_,_=candidate(self.entry(),0);s.put(0xaf4,64,4)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Unknown window layout'):
            s.ensure_cached_window(2028,2028)

    def test_first_unimplemented_opcode_cannot_resume(self):
        s,_,failure=candidate(self.entry(),10);self.assertIsNone(failure)
        with self.assertRaises(UnsupportedSerialRoute):s.step()
        data=s.read(s.c,0x11f0)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Stopped state'):s.step()
        self.assertEqual(data,s.read(s.c,0x11f0))

    def test_repeated_rva_summary_requires_full_preceding_sequence(self):
        e=self.entry();s,_,failure=candidate(e,10);self.assertIsNone(failure)
        selected=[v for v in s.events if v['name']=='materializer_return' or (v['name']=='handler_entry' and v['pc']==2029)]
        oracle=read(OUT/'captures/ten_a/frame_00.trace.json.gz')
        unanchored=compare_events(e,selected,oracle)
        self.assertFalse(unanchored['all_events_match'])
        anchored=compare_events(e,s.events,oracle)
        self.assertTrue(anchored['all_events_match'],anchored['first_divergence'])
        selected_indices=[i for i,v in enumerate(s.events) if v in selected]
        self.assertTrue(all(anchored['boundaries'][i]['all_bytes_match'] for i in selected_indices))


if __name__=='__main__':unittest.main()
