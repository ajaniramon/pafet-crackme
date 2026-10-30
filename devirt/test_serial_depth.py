"""Depth, native-ALU, independence and unsupported-route regressions."""
import builtins,copy,json,random,subprocess,sys,unittest
from unittest.mock import patch
import pefile
from .serial_alu import decode,evaluate,xor_variant
from .serial_depth import DeepSerialVMState
from .serial_depth_validate import OUT,candidate,unsupported_seventh
from .serial_continuous import UnsupportedSerialRoute
from .serial_continuous_validate import ROOT,read,compare_events
from pafet_state_contract import ContractError


class DepthTests(unittest.TestCase):
    def entry(self,name='six_c'):
        return read(OUT/f'captures/{name}/frame_00.entry.json.gz')

    def test_three_independent_six_step_chains(self):
        for name in ('six_a','six_b','six_c'):
            with self.subTest(process=name):
                e=self.entry(name);s,steps,failure=candidate(e,6)
                self.assertIsNone(failure)
                self.assertEqual([r['virtual_pc'] for r in steps],[0,5,8,11,16,17])
                self.assertEqual([r['opcode'] for r in steps],[1,5,4,1,41,5])
                self.assertEqual((s.peek(1)&0xffffffff,s.peek(2)&0xffffffff),(20,0))
                result=compare_events(e,s.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
                self.assertTrue(result['all_events_match'],result['first_divergence'])
                self.assertEqual(result['boundaries'][-1]['native_instructions'],
                                 len(read(OUT/f'captures/{name}/frame_00.trace.json.gz')['trace']))

    def test_natural_rebuild_is_followed_by_semantic_instruction(self):
        e=self.entry('five_a');s,steps,failure=candidate(e,5)
        self.assertIsNone(failure);self.assertEqual(len(s.remaps),1)
        names=[r['name'] for r in s.events]
        end=names.index('remap_exit')
        self.assertIn('opcode_core',names[end+1:])
        result=compare_events(e,s.events,read(OUT/'captures/five_a/frame_00.trace.json.gz'))
        self.assertTrue(result['all_events_match'],result['first_divergence'])
        self.assertEqual(s.remaps[0]['entries'],248)

    def test_seventh_unknown_handler_latches_without_retry(self):
        s,_,failure=candidate(self.entry(),6);self.assertIsNone(failure)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Unknown opcode/body association'):
            s.step()
        context=s.read(s.c,0x11f0)
        for action in (s.step,s.dispatch_next):
            with self.assertRaisesRegex(UnsupportedSerialRoute,'Stopped state'):action()
            self.assertEqual(context,s.read(s.c,0x11f0))

    def test_all_four_xor_domains_have_natural_candidates(self):
        domains=set()
        for name in ('five_a','five_b','five_c','six_b'):
            s,steps,failure=candidate(self.entry(name),5)
            self.assertIsNone(failure)
            domains.add(s.regions[int(steps[4]['native_body'],16)]['domain'])
        self.assertEqual(domains,{0,1,2,3})

    def test_no_native_engine_solver_or_observation_dependency(self):
        code="""import sys,json,gzip,pefile
sys.modules['unicorn']=None;sys.modules['z3']=None
from devirt.serial_depth import DeepSerialVMState
e=json.loads(gzip.decompress(open(sys.argv[1],'rb').read()))
import builtins,io
old=builtins.open
def guarded(path,*a,**k):
    if any(x in str(path) for x in ('.trace.','validation.json','alu_static_proof.json')):raise RuntimeError('Observation dependency')
    return old(path,*a,**k)
builtins.open=io.open=guarded
s=DeepSerialVMState.from_initial_capture(e,pefile.PE('pafet.bin'))
for _ in range(6):s.step()
print(s.peek(1)&0xffffffff,s.peek(2)&0xffffffff)
"""
        result=subprocess.run([sys.executable,'-c',code,str(OUT/'captures/six_b/frame_00.entry.json.gz')],cwd=ROOT,capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        self.assertEqual(result.stdout.strip(),'20 0')

    def test_missing_thunk_root_is_rejected_before_execution(self):
        e=self.entry();context=e['state']['gprs'][1]
        s,_,_=candidate(e,0);missing=s.u(0x1190)+40
        regions=[]
        for r in e['regions']:
            at=r['address'];data=bytes.fromhex(r['hex'])
            if at<=missing<at+len(data):
                offset=missing-at
                if offset:regions.append(dict(r,address=at,hex=data[:offset].hex()))
                if offset+1<len(data):regions.append(dict(r,address=missing+1,hex=data[offset+1:].hex()))
            else:regions.append(r)
        e['regions']=regions
        with self.assertRaises(ContractError):candidate(e,0)

    def test_alu_selector_two_matches_xor_for_unrelated_operands(self):
        pe=pefile.PE(str(ROOT/'pafet.bin'));rng=random.Random(33)
        cases=[(0,0,123),(1,2,0),(0xffffffffffffffff,0,0xffffffffffffffff)]
        cases += [(rng.getrandbits(64),rng.getrandbits(64),rng.getrandbits(64)) for _ in range(512)]
        for a,b,token in cases:
            self.assertEqual(xor_variant(pe,a,b,token),a^b)

    def test_decoded_alu_records_and_unknown_program(self):
        pe=pefile.PE(str(ROOT/'pafet.bin'))
        self.assertEqual([i['opcode'] for i in decode(pe,6)],[2,7,10,4])
        with self.assertRaisesRegex(ValueError,'Unknown native ALU program'):decode(pe,12)
        original=pe.get_data
        def corrupt(at,size):
            data=original(at,size)
            return bytes([data[0]^1])+data[1:] if at==0x3e33a0 else data
        with patch.object(pe,'get_data',side_effect=corrupt):
            with self.assertRaisesRegex(ValueError,'checksum'):decode(pe,0)

    def test_outer_job_counterexample_and_fixed_seventh_frontier(self):
        e=self.entry('seventh_boundary')
        with patch.object(DeepSerialVMState,'additional_job',return_value=False):
            old,steps,failure=candidate(e,7)
        self.assertEqual(len(steps),5)
        self.assertEqual(failure,'Unknown outer job 0x2e0073')
        old.record('unsupported_outer_job',0x230ef1)
        oracle=read(OUT/'captures/seventh_boundary/frame_00.trace.json.gz')
        before=compare_events(e,old.events,oracle)
        self.assertTrue(before['all_events_match'],before['first_divergence'])
        state,steps,failure=unsupported_seventh(e)
        self.assertEqual(len(steps),6)
        self.assertIn(0x2e0073,state.jobs)
        after=compare_events(e,state.events,oracle)
        self.assertTrue(after['all_events_match'],after['first_divergence'])
        self.assertEqual(after['boundaries'][-1]['native_instructions'],len(oracle['trace']))


if __name__=='__main__':unittest.main()
