"""Native prefix, TLS/host contract, negative and independence regressions."""
import copy,json,subprocess,sys,unittest
import pefile
from .serial_hostcall import HostCallSerialVMState
from .serial_signextend import sign_extend_low
from .serial_program_validate import OUT,candidate
from .serial_continuous_validate import ROOT,read,compare_events
from .serial_continuous import UnsupportedSerialRoute
from pafet_state_contract import ContractError


class ProgramTests(unittest.TestCase):
    def entry(self,name='seventeen_b'):
        return read(OUT/f'captures/{name}/frame_00.entry.json.gz')

    def test_three_eleven_step_prefixes_close_at_next_entry(self):
        for name in ('eleven_a','eleven_b','eleven_c'):
            e=self.entry(name);s,steps,failure=candidate(e,11)
            self.assertIsNone(failure);self.assertEqual(s.steps,11)
            self.assertEqual((s.peek(8)&0xffffffff,s.u(0x4ad,1)),(2043,32))
            c=compare_events(e,s.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
            self.assertTrue(c['all_events_match'],c['first_divergence'])

    def test_three_seventeen_step_prefixes_match_all_roots(self):
        for name in ('seventeen_b','seventeen_c','seventeen_d'):
            e=self.entry(name);s,steps,failure=candidate(e,17)
            self.assertEqual(len(steps),17);self.assertTrue(failure.startswith('Unknown opcode/body association '))
            self.assertEqual(s.steps,17);self.assertEqual(s.u(0x4ad,1),22)
            self.assertEqual([v['virtual_pc'] for v in steps[-3:]],[1742,1746,1748])
            c=compare_events(e,s.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
            self.assertTrue(c['all_events_match'],c['first_divergence'])
            self.assertEqual(c['boundaries'][-1]['native_instructions'],len(read(OUT/f'captures/{name}/frame_00.trace.json.gz')['trace']))

    def test_sign_extension_edges_and_masked_zero_width(self):
        for x,w,expected in [(0x80,8,0xffffffffffffff80),(0x80000000,32,0xffffffff80000000),
                             (0x8000,16,0xffffffffffff8000),(1,0,1),(1,64,1),
                             (0xffffffffffffffff,0,0xffffffffffffffff)]:
            self.assertEqual(sign_extend_low(x,w),expected)

    def test_callback_is_general_scalar_write_and_signed_read(self):
        s,_,_=candidate(self.entry(),0,False)
        self.assertEqual(s.host_call(0,[0x100000005]),0)
        self.assertEqual(s.host_call(1,[]),5)
        s.host_call(0,[0x80000000])
        self.assertEqual(s.host_call(1,[]),0xffffffff80000000)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Unknown native callback function'):s.host_call(2,[])

    def test_tls_frame_authentication_and_nonreentrant_contract(self):
        s,_,_=candidate(self.entry(),0,False);depth=s.tu(0x524,4)
        s.frame_push(1234,7,3);self.assertEqual(s.frame_pop(),1234)
        self.assertEqual(s.tu(0x524,4),depth)
        s.frame_push(1234,7,3);s.tp(depth*40,s.tu(depth*40)^1)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'authentication mismatch'):s.frame_pop()
        s.tp(0x524,depth+1,4)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Unbalanced callback TLS depth'):s.unwind_to_outer()

    def test_missing_new_tls_root_is_rejected_before_execution(self):
        e=self.entry();s,_,_=candidate(e,0,False);missing=s.tls+0x518;regions=[]
        for r in e['regions']:
            at=r['address'];data=bytes.fromhex(r['hex'])
            if at<=missing<at+len(data):
                n=missing-at
                if n:regions.append(dict(r,address=at,hex=data[:n].hex()))
                if n+1<len(data):regions.append(dict(r,address=missing+1,hex=data[n+1:].hex()))
            else:regions.append(r)
        e['regions']=regions
        with self.assertRaises(ContractError):candidate(e,0,False)

    def test_preparation_does_not_count_or_execute_another_opcode(self):
        s,steps,failure=candidate(self.entry(),11)
        self.assertIsNone(failure);self.assertEqual(s.steps,11)
        self.assertEqual(s.tu(0x524,4),s.entry_tls_depth)
        self.assertEqual(steps[-1]['opcode'],58)
        # The host CALL's frame/side effects only occur when step is invoked.
        before=s.read(s.tls,0x528);s.step()
        self.assertEqual(s.steps,12);self.assertNotEqual(before,s.read(s.tls,0x528))

    def test_unimplemented_eighteenth_cannot_resume(self):
        s,_,failure=candidate(self.entry(),17);self.assertIsNotNone(failure)
        before=s.read(s.c,0x11f0)
        for action in (s.step,s.prepare_next_instruction):
            with self.assertRaisesRegex(UnsupportedSerialRoute,'Stopped state'):action()
            self.assertEqual(before,s.read(s.c,0x11f0))

    def test_cold_seventeen_steps_without_native_engine_or_observations(self):
        code="""import sys,json,gzip,pefile
sys.modules['unicorn']=None;sys.modules['z3']=None
from devirt.serial_hostcall import HostCallSerialVMState
e=json.loads(gzip.decompress(open(sys.argv[1],'rb').read()))
import builtins,io
old=builtins.open
def guarded(path,*a,**k):
    if any(x in str(path) for x in ('.trace.','validation.json','arithmetic.json')):raise RuntimeError('Observation input')
    return old(path,*a,**k)
builtins.open=io.open=guarded
s=HostCallSerialVMState.from_initial_capture(e,pefile.PE('pafet.bin'))
for _ in range(17):s.step()
print(s.steps,s.peek(1)&0xffffffff,s.peek(2)&0xffffffff)
"""
        r=subprocess.run([sys.executable,'-c',code,str(OUT/'captures/seventeen_b/frame_00.entry.json.gz')],cwd=ROOT,capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr);self.assertTrue(r.stdout.startswith('17 1753 '))

    def test_cfg_keeps_unknown_frontier_and_uncertainty(self):
        graph=json.loads((OUT/'virtual_cfg.json').read_bytes())
        progress=json.loads((OUT/'progress.json').read_bytes())
        self.assertIsNone(progress['global_devirtualization_percentage'])
        self.assertIsNone(progress['instructions_to_termination'])
        unknown=next(n for n in graph['nodes'] if n['pc']==1753)
        self.assertFalse(unknown['executed_in_verified_candidate'])
        self.assertNotIn('instruction_length',unknown)
        self.assertFalse(any(e['source']==1753 for e in graph['edges']))
        self.assertTrue(all(e['provenance'] and e['confidence'] for e in graph['edges']))
        self.assertEqual({e['target'] for e in graph['edges'] if e['kind']=='deferred_branch'},{1742,2028})


if __name__=='__main__':unittest.main()
