"""Autonomous scheduler, bounded rebuild and laboratory-loader regressions."""
import builtins,copy,json,subprocess,sys,unittest
from unittest.mock import patch
import pefile,unicorn
from .serial_scheduler import ScheduledSerialVMState
from .serial_scheduler_validate import OUT,candidate,remap_candidate
from .serial_continuous_validate import ROOT,read,compare_events
from .serial_continuous import UnsupportedSerialRoute
from pafet_state_contract import ContractError,Memory,stop_reached,validate_entry
from pafet_state_replay import Replay


class SchedulerTests(unittest.TestCase):
    def entry(self,name='four_a'):
        return read(OUT/f'captures/{name}/frame_00.entry.json.gz')

    def test_four_steps_use_no_native_engine_or_observation_input(self):
        entry=self.entry();old=builtins.open
        def guard(path,*args,**kwargs):
            if '.trace.' in str(path) or 'validation.json' in str(path):raise AssertionError('Observation used by candidate')
            return old(path,*args,**kwargs)
        with patch('builtins.open',guard),patch('io.open',guard),patch.object(unicorn.Uc,'emu_start',side_effect=AssertionError('Native engine used')):
            state=ScheduledSerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')))
            steps=[state.step() for _ in range(4)]
        self.assertEqual([s['virtual_pc'] for s in steps],[0,5,8,11])
        self.assertEqual((state.peek(1),state.peek(2)),(16,2))

    def test_three_independent_four_instruction_chains(self):
        for name in ('four_a','four_b','four_c'):
            with self.subTest(process=name):
                entry=self.entry(name);state,steps,failure,_=candidate(entry,'four')
                self.assertIsNone(failure);self.assertEqual(len(steps),4)
                comparison=compare_events(entry,state.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
                self.assertTrue(comparison['all_events_match'],comparison['first_divergence'])

    def test_both_requested_outer_returns_select_decoder(self):
        for name,rva in [('return2_b',0x22bc87),('outer_c',0x231c09)]:
            state,steps,failure,work=candidate(self.entry(name),'outer')
            self.assertIsNone(failure);self.assertEqual(work['work'],'decode')
            self.assertTrue(any(e['name']=='outer_dispatch' and e['boundary_rva']==rva for e in state.events))
            self.assertEqual(state.phase,'outer_decode')

    def test_two_native_remap_inputs_match_all_declared_roots(self):
        for name in ('remap_a','remap_b'):
            entry=self.entry(name);state,result=remap_candidate(entry)
            self.assertEqual(result['codec_mask'],15)
            comparison=compare_events(entry,state.events,read(OUT/f'captures/{name}/frame_00.trace.json.gz'))
            self.assertTrue(comparison['all_events_match'],comparison['first_divergence'])

    def test_replay_readonly_pointers_use_runtime_base(self):
        entry=self.entry('remap_a');replay=Replay(entry)
        pe=pefile.PE(str(ROOT/'pafet.bin'));preferred=int.from_bytes(pe.get_data(0x3e95a0,8),'little')
        expected=preferred-pe.OPTIONAL_HEADER.ImageBase+entry['base']
        actual=int.from_bytes(replay.uc.mem_read(entry['base']+0x3e95a0,8),'little')
        self.assertEqual(actual,expected)

    def test_counter_terminal_is_not_reached_on_an_earlier_visit(self):
        entry=self.entry();predicate=entry['stop_counter_min'];m=Memory()
        m.add(predicate['address'],(1).to_bytes(4,'little'));pc=entry['stop_any'][0]
        self.assertFalse(stop_reached(entry,m.read,pc))
        m.add(predicate['address'],(4).to_bytes(4,'little'),overwrite=True)
        self.assertTrue(stop_reached(entry,m.read,pc))

    def test_missing_counter_or_invalid_limit_is_rejected(self):
        entry=self.entry();entry['stop_counter_min']['address']=0x123000
        with self.assertRaises(ContractError):validate_entry(entry,pefile.PE(str(ROOT/'pafet.bin')))
        entry=self.entry();entry['instruction_limit']=0
        with self.assertRaises(ContractError):validate_entry(entry,pefile.PE(str(ROOT/'pafet.bin')))

    def test_unknown_callback_target_fails(self):
        state=ScheduledSerialVMState.from_initial_capture(self.entry(),pefile.PE(str(ROOT/'pafet.bin')))
        state.put(0x288,state.runtime_base+0x22a120)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Unknown queue callback'):state.callback(0)

    def test_frame_assumptions_are_explicit(self):
        entry=self.entry();entry['state']['gprs'][15]^=1
        with self.assertRaisesRegex(UnsupportedSerialRoute,'native-frame contract'):
            ScheduledSerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')))

    def test_runtime_has_no_unicorn_or_z3_dependency(self):
        code="import sys,json,gzip,pefile;sys.modules['unicorn']=None;sys.modules['z3']=None;from devirt.serial_scheduler import ScheduledSerialVMState;e=json.loads(gzip.decompress(open(sys.argv[1],'rb').read()));s=ScheduledSerialVMState.from_initial_capture(e,pefile.PE('pafet.bin'));[s.step() for _ in range(4)];print(s.peek(1),s.peek(2))"
        result=subprocess.run([sys.executable,'-c',code,str(OUT/'captures/four_a/frame_00.entry.json.gz')],cwd=ROOT,capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr);self.assertEqual(result.stdout.strip(),'16 2')

    def test_dispatch_failure_latches_and_cannot_retry_changed_state(self):
        state=ScheduledSerialVMState.from_initial_capture(self.entry(),pefile.PE(str(ROOT/'pafet.bin')))
        for _ in range(3):state.step()
        state.set_control(0,0xdeadbeef)
        with self.assertRaises(UnsupportedSerialRoute):state.dispatch_next()
        before=state.read(state.c,0x11f0)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Stopped state'):state.dispatch_next()
        self.assertEqual(state.read(state.c,0x11f0),before)

    def test_unvalidated_post_wrapper_fallback_is_explicit(self):
        state=ScheduledSerialVMState.from_initial_capture(self.entry(),pefile.PE(str(ROOT/'pafet.bin')))
        for _ in range(3):state.step()
        caller=[0x22fcd0,0x231c09,0x22bc87,0x2304bc].index(state.outer_return_rva)
        state.set_control(0,[0x26dc07,0x338040,0x48cad,0x2a0025][caller])
        with self.assertRaisesRegex(UnsupportedSerialRoute,'post-wrapper fallback'):state.dispatch_next()

if __name__=='__main__':unittest.main()
