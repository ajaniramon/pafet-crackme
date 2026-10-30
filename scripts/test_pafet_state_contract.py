"""Input contract and observation failures must be loud, even under python -O."""
import copy
import gzip
import json
import pathlib
import tempfile
import unittest
import pefile
from pafet_state_contract import Memory,ContractError,load_frames,load_verified,validate_entry
from pafet_state_compare import validate_oracle,byte_map
from pafet_state_replay import Replay,ROOT

def load(relative):return json.loads(gzip.decompress((ROOT/relative).read_bytes()))

class ContractTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.entry=load('jack_xxviii_evidence/captures/serial_seed/frame_00.entry.json.gz')
        cls.oracle=load('jack_xxviii_evidence/captures/serial_seed/frame_00.trace.json.gz')
    def validate(self,e):return validate_entry(e,pefile.PE(str(ROOT/'pafet.bin')))
    def test_generic_profile_has_no_user_layout(self):
        self.assertEqual(self.validate(self.entry)[2]['array_count'],0)
    def test_consistent_alias_is_safe(self):
        m=Memory();m.add(4094,b'abcd');m.add(4095,b'bc');self.assertEqual(m.read(4094,4),b'abcd');self.assertEqual(m.alias_bytes,2)
    def test_conflicting_alias_is_rejected(self):
        m=Memory();m.add(4094,b'abcd')
        with self.assertRaises(ContractError) as c:m.add(4095,b'zz')
        self.assertEqual(c.exception.kind,'contradictory-memory')
    def test_hole_does_not_become_zero(self):
        m=Memory();m.add(0x1000,b'a');self.assertFalse(m.covered(0x1001,1))
        with self.assertRaises(ContractError):m.read(0x1001,1)
        m.mark(0x1001,1);self.assertTrue(m.covered(0x1001,1))
    def test_cpu_fields_required(self):
        for key,value in [('gprs',[0]*15),('xmm',''),('mxcsr',None),('flags',0x100)]:
            with self.subTest(key=key):
                e=copy.deepcopy(self.entry);e['state'][key]=value
                with self.assertRaises(ContractError):self.validate(e)
    def test_missing_gs_rejected(self):
        e=copy.deepcopy(self.entry);del e['gs_base']
        with self.assertRaises(ContractError):self.validate(e)
    def test_missing_stack_page_rejected(self):
        e=copy.deepcopy(self.entry);at=e['state']['gprs'][4]&~4095;e['regions']=[r for r in e['regions'] if r['address']!=at]
        with self.assertRaises(ContractError):self.validate(e)
    def test_missing_writable_cookie_page_rejected(self):
        e=copy.deepcopy(self.entry);at=(e['base']+0x40d020)&~4095;e['regions']=[r for r in e['regions'] if r['address']!=at]
        with self.assertRaises(ContractError):self.validate(e)
    def test_unsupported_version_rejected(self):
        e=copy.deepcopy(self.entry);e['contract']['version']=999
        with self.assertRaises(ContractError):self.validate(e)
    def test_code_overlay_rejected(self):
        e=copy.deepcopy(self.entry);e['regions'].append({'address':e['state']['rip'],'hex':'cc','labels':['fake code']})
        with self.assertRaises(ContractError) as c:self.validate(e)
        self.assertEqual(c.exception.kind,'code-overlay')
    def test_empty_manifest_and_directory_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            p=pathlib.Path(directory)
            with self.assertRaises(ContractError):load_frames(p)
            (p/'manifest.json').write_text('{"frames":[]}')
            with self.assertRaises(ContractError):load_frames(p)
    def test_inventory_and_hash_failures(self):
        with tempfile.TemporaryDirectory() as directory:
            p=pathlib.Path(directory);(p/'manifest.json').write_text('{"frames":[{"stem":"x"}]}')
            with self.assertRaises(ContractError):load_frames(p)
            with self.assertRaises(ContractError):load_verified(p/'manifest.json','0'*64)
        import subprocess,sys
        result=subprocess.run([sys.executable,'-O',str(ROOT/'scripts/pafet_lab_xxviii.py'),'--cpp'],capture_output=True,text=True)
        self.assertNotEqual(result.returncode,0);self.assertIn('run it without python -O',result.stderr)
    def test_empty_truncated_and_broken_observations_rejected(self):
        for mode in ('empty','truncated','broken'):
            with self.subTest(mode=mode):
                o=copy.deepcopy(self.oracle)
                if mode=='empty':o['trace']=[]
                elif mode=='truncated':o['trace'].pop()
                else:o['trace'][1]['pc']+=1
                with self.assertRaises(ContractError):validate_oracle(self.entry,o)
    def test_exact_budget_and_entry_only_generic_replay(self):
        m=Replay(self.entry);self.assertEqual(sum(1 for _ in m.run(budget=18)),18)
    def test_generic_rejects_user_ablation(self):
        with self.assertRaises(ContractError):Replay(self.entry,'legacy')
    def test_conflicting_observation_alias_rejected(self):
        with self.assertRaises(ContractError):byte_map([(0x100,'01'),(0x100,'02')])
    def test_missing_iat_or_teb_rejected(self):
        for at in (self.entry['gs_base']&~4095,(self.entry['base']+0x3cd000)&~4095):
            e=copy.deepcopy(self.entry);e['regions']=[r for r in e['regions'] if r['address']!=at]
            with self.assertRaises(ContractError):self.validate(e)
    def test_synthetic_zero_count_preserves_defined_flags(self):
        # Synthetic CPU fixture, never a modification/execution of the PE.
        import capstone,unicorn
        from unicorn.x86_const import UC_X86_REG_RIP,UC_X86_REG_RCX,UC_X86_REG_EFLAGS
        m=Replay.__new__(Replay);m.uc=unicorn.Uc(unicorn.UC_ARCH_X86,unicorn.UC_MODE_64)
        m.uc.mem_map(0x1000,4096);m.uc.mem_write(0x1000,bytes.fromhex('d3e0'));m.uc.reg_write(UC_X86_REG_RIP,0x1000);m.uc.reg_write(UC_X86_REG_RCX,0)
        m.uc.reg_write(UC_X86_REG_EFLAGS,0x8d7);m.md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);m.md.detail=True;m.reads=[];m.writes=[];m.defined=0x8d5
        self.assertEqual(m.step()['defined_flags_mask'],0x8d5)
    def test_extended_state_is_rejected_before_execution(self):
        import unicorn
        from unicorn.x86_const import UC_X86_REG_RIP
        for code in ('0f31','d9e8','0f6fc0','c5fdefc0'):
            with self.subTest(code=code):
                m=Replay(self.entry);at=0x20000000;m.uc.mem_map(at,4096);m.uc.mem_write(at,bytes.fromhex(code));m.uc.reg_write(UC_X86_REG_RIP,at)
                with self.assertRaises(ContractError) as c:m.step()
                self.assertEqual(c.exception.kind,'unsupported-state')
    def test_runtime_read_of_zero_mapped_hole_rejected(self):
        from unicorn.x86_const import UC_X86_REG_RAX,UC_X86_REG_RIP
        m=Replay(self.entry);at=0x20000000;m.uc.mem_map(at,4096);m.uc.mem_write(at,bytes.fromhex('488b00'));m.initialized.mark(at,3)
        m.uc.reg_write(UC_X86_REG_RAX,at+0x800);m.uc.reg_write(UC_X86_REG_RIP,at)
        with self.assertRaises(ContractError) as c:m.step()
        self.assertEqual(c.exception.kind,'missing-initial-memory')

if __name__=='__main__':unittest.main()
