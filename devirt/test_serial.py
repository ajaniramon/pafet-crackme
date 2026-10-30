"""Tests of actual recovered Serial effects and explicit unsupported routes."""
import builtins
import copy
import io
import unittest
from unittest.mock import patch
import pefile
from .serial import FirstOpcode,FirstDecode,materialize,starts
from .serial_validate import ROOT,read,memory,resolve,semantic,OUT
from pafet_state_contract import ContractError,validate_entry

class SerialTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.pe=pefile.PE(str(ROOT/'pafet.bin'))
        cls.entry=read(OUT/'captures/opcode1/frame_00.entry.json.gz')
    def test_first_instruction_from_pe_and_before_memory_only(self):
        entry=self.entry;m=memory(entry);ctx=entry['state']['gprs'][1]
        original=builtins.open
        def guarded(path,*a,**k):
            if '.trace.' in str(path) or 'validation.json' in str(path):raise AssertionError('Native result used as input')
            return original(path,*a,**k)
        with patch('builtins.open',guarded),patch('io.open',guarded):
            body=resolve(entry,m)['body_rva'];result=FirstOpcode(m,ctx,self.pe,body).run()
        self.assertEqual((result['opcode'],result['operand_pc'],result['next_pc'],result['selector']),(1,1,5,0))
        self.assertEqual(result['ir'][-1]['after_sp'],1)
    def test_two_native_core_boundaries(self):
        for name in ('opcode1','opcode1_len16'):
            entry=read(OUT/f'captures/{name}/frame_00.entry.json.gz')
            before=memory(entry);ctx=entry['state']['gprs'][1]
            self.assertEqual(int.from_bytes(before.read(ctx+0x11e0,4),'little'),1)
            result=semantic(entry,OUT/f'captures/{name}/frame_00.trace.json.gz','instruction',self.pe)
            self.assertTrue(result['all_virtual_regions_match']);self.assertEqual(result['native_instructions_to_boundary'],369)
    def test_whole_decoder_projection(self):
        entry=read(OUT/'captures/first_decode_v2/frame_00.entry.json.gz')
        result=semantic(entry,OUT/'captures/first_decode_v2/frame_00.trace.json.gz','decoder',self.pe)
        self.assertEqual(result['result']['opcode'],1);self.assertTrue(result['all_virtual_regions_match'])
    def test_unknown_decoder_route_is_preserved(self):
        entry=read(OUT/'captures/decoder_len16/frame_00.entry.json.gz')
        with self.assertRaisesRegex(ValueError,'Unimplemented decoder map refresh'):FirstDecode(memory(entry),entry['state']['gprs'][1],self.pe).run()
    def test_unknown_opcode_is_not_guessed(self):
        m=memory(self.entry);ctx=self.entry['state']['gprs'][1];m.add(ctx+0x4ad,b'\xff',overwrite=True)
        with self.assertRaisesRegex(ValueError,'Unknown Serial opcode'):FirstOpcode(m,ctx,self.pe).run()
    def test_unknown_window_is_not_filled_from_output(self):
        m=memory(self.entry);ctx=self.entry['state']['gprs'][1];m.add(ctx+0xaf0,(20).to_bytes(4,'little'),overwrite=True)
        with self.assertRaisesRegex(ValueError,'Unimplemented uncached operand window'):FirstOpcode(m,ctx,self.pe).run()
        m=memory(self.entry);bitmap=int.from_bytes(m.read(ctx+0xb50,8),'little');m.add(bitmap,b'\0',overwrite=True)
        with self.assertRaisesRegex(ValueError,'Unimplemented uncached operand window'):FirstOpcode(m,ctx,self.pe).run()
    def test_pointer_field_contract_detects_stale_target(self):
        entry=copy.deepcopy(self.entry);entry['contract']['pointer_roots'][0]['address']+=1
        with self.assertRaises(ContractError) as error:validate_entry(entry,pefile.PE(str(ROOT/'pafet.bin')))
        self.assertEqual(error.exception.kind,'contradictory-memory')
    def test_bad_materializer_shape_refused(self):
        with self.assertRaises(ValueError):materialize(b'\0',0)
        with self.assertRaises(ValueError):materialize(bytes(2678),103)
        with self.assertRaises(ValueError):materialize(bytes(2678),0,b'\0')
        self.assertEqual(len(set(starts())),103)

if __name__=='__main__':unittest.main()
