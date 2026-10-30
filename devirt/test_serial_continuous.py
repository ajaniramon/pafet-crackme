"""Continuous Serial execution, exact boundaries and laboratory counterexamples."""
import builtins
import copy
import io
import subprocess
import sys
import unittest
from unittest.mock import patch
import pefile
import unicorn
from .serial import SerialVMState
from .serial_continuous import UnsupportedSerialRoute
from .serial_continuous_validate import ROOT,OUT,read,candidate,compare_events,require_complete_capture
from pafet_state_contract import ContractError,validate_entry

class ContinuousSerialTests(unittest.TestCase):
    def entry(self,name='chain_a'):
        return read(OUT/f'captures/{name}/frame_00.entry.json.gz')
    def test_two_steps_have_no_oracle_or_native_engine(self):
        entry=self.entry();pe=pefile.PE(str(ROOT/'pafet.bin'));old=builtins.open
        def guarded(path,*a,**k):
            if '.trace.' in str(path) or 'validation.json' in str(path):raise AssertionError('Observation accessed during candidate execution')
            return old(path,*a,**k)
        with patch('builtins.open',guarded),patch('io.open',guarded),patch.object(unicorn.Uc,'emu_start',side_effect=AssertionError('Native engine used')):
            state=SerialVMState.from_initial_capture(entry,pe)
            first=state.step();second=state.step()
        self.assertEqual((first['virtual_pc'],second['virtual_pc'],state.peek(1),state.peek(2)),(0,5,8,0))
        self.assertEqual((second['register'],second['value']),(16,first['value']))
    def test_three_fresh_continuous_processes(self):
        for name in ('chain_a','chain_e','chain_f'):
            with self.subTest(case=name):
                entry=self.entry(name);state,steps,failure=candidate(entry)
                result=compare_events(entry,state.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
                self.assertIsNone(failure);self.assertEqual(len(steps),2);self.assertEqual(state.phase,'decode');self.assertTrue(result['all_events_match'])
    def test_return_handoff_after_second_instruction_is_exact(self):
        entry=self.entry('chain_b');state,steps,failure=candidate(entry)
        self.assertIsNone(failure);self.assertEqual(len(steps),2);self.assertEqual(state.phase,'return_handoff')
        self.assertTrue(compare_events(entry,state.events,read(OUT/'captures/chain_b/frame_00.trace.json.gz'))['all_events_match'])
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Native return continuation'):state.step()
    def test_one_byte_difference_is_reported(self):
        entry=self.entry();state,_,_=candidate(entry);events=copy.deepcopy(state.events)
        at,data=events[1]['regions'][0];bad=bytearray(data);bad[0x1b0]^=1;events[1]['regions'][0]=(at,bytes(bad))
        result=compare_events(entry,events,read(OUT/'captures/chain_a/frame_00.trace.json.gz'))
        self.assertFalse(result['all_events_match']);self.assertEqual(result['first_divergence']['context_offset'],'0x1b0')
        self.assertEqual(sum(r['different_bytes'] for r in result['boundaries'][1]['regions']),1)
    def test_truncated_observations_rejected_before_execution(self):
        for name in ('chain_c','chain_d'):
            with self.assertRaises(ContractError) as error:require_complete_capture(OUT/'captures'/name)
            self.assertEqual(error.exception.kind,'incomplete-capture')
    def test_missing_serial_root_cannot_hide_behind_generic_profile(self):
        entry=self.entry();pointer=entry['contract']['pointer_roots'][0]['address'];page=pointer&~4095
        entry['regions']=[r for r in entry['regions'] if r['address']!=page]
        entry['contract']['pointer_roots']=[];entry['contract']['required_regions']=[]
        with self.assertRaises(ContractError):SerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')))
    def test_relocation_preflight_does_not_close_semantic_pe(self):
        pe=pefile.PE(str(ROOT/'pafet.bin'));before=pe.get_data(0x3ead00,68)
        state=SerialVMState.from_initial_capture(self.entry(),pe)
        self.assertEqual(pe.get_data(0x3ead00,68),before);self.assertEqual(state.pe.get_data(0x3ead00,68),before)
    def test_unknown_third_step_is_latched_without_retry_mutation(self):
        state,steps,failure=candidate(self.entry());self.assertIsNone(failure)
        with self.assertRaises(UnsupportedSerialRoute):state.step()
        before=state.m.read(state.c,0x11f0)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Stopped state'):state.step()
        self.assertEqual(state.m.read(state.c,0x11f0),before)
    def test_alternative_boundaries_are_validated(self):
        entry=self.entry();entry['stop_any']=[entry['state']['rip']]
        with self.assertRaises(ContractError):validate_entry(entry,pefile.PE(str(ROOT/'pafet.bin')))
    def test_public_api_works_without_validator_import(self):
        code="import sys,gzip,json,pefile;from devirt.serial import SerialVMState;e=json.loads(gzip.decompress(open(sys.argv[1],'rb').read()));s=SerialVMState.from_initial_capture(e,pefile.PE('pafet.bin'));s.step();s.step();print(s.peek(1),s.peek(2))"
        done=subprocess.run([sys.executable,'-c',code,str(OUT/'captures/chain_a/frame_00.entry.json.gz')],cwd=ROOT,capture_output=True,text=True)
        self.assertEqual(done.returncode,0,done.stderr);self.assertEqual(done.stdout.strip(),'8 0')
    def test_uncached_value_error_also_latches(self):
        state=SerialVMState.from_initial_capture(self.entry(),pefile.PE(str(ROOT/'pafet.bin')))
        state.put(0xaf0,20,4)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'uncached operand window'):state.step()
        before=state.m.read(state.c,0x11f0)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Stopped state'):state.step()
        self.assertEqual(state.m.read(state.c,0x11f0),before)

if __name__=='__main__':unittest.main()
