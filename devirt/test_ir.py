"""Regression tests for semantic corner cases and refusal of unproved meaning."""
import copy
import unittest
from .ir import arithmetic, evaluate, execute, optimize, State, UnknownSemantics, MASK
from .uservm import ROOT, lift, lift_decoder, Decoder
from .cpp import structured
import pefile


class ArithmeticTests(unittest.TestCase):
    def test_width_and_signedness(self):
        self.assertEqual(arithmetic('add',[MASK,1]),0)
        self.assertEqual(arithmetic('add',[255,1],8),0)
        self.assertEqual(arithmetic('slt',[1<<63,0]),1)
        self.assertEqual(arithmetic('sgt',[MASK,0]),0)
        self.assertEqual(arithmetic('ult',[MASK,0]),0)
        self.assertEqual(arithmetic('sext',[0x80]),MASK-127)
        self.assertEqual(arithmetic('sext',[0x7f]),127)
        with self.assertRaises(ValueError): arithmetic('shr',[1,64])

    def test_memory_effect_not_removed(self):
        p,_=lift(ROOT/'pafet.bin'); s=State(working=bytearray(b'\xff'),index=0); values={}
        evaluate(p['functions']['host_4']['body'],values,s,p['functions'])
        self.assertEqual(len(s.working),1)
        with self.assertRaises(IndexError):
            evaluate(p['functions']['host_4']['body'],{},State(index=1),p['functions'])

    def test_unknown_stops(self):
        with self.assertRaises(UnknownSemantics): evaluate([{'op':'unknown','reason':'unproved handler'}],{},State(),{})


class LiftingTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls): cls.program,_=lift(ROOT/'pafet.bin')

    def test_extraction_cfg_and_effects(self):
        p=self.program
        self.assertEqual((p['bytecode_bytes'],p['instructions'],len(p['blocks'])),(1752,339,75))
        self.assertEqual(p['unknown_instructions'],[])
        self.assertEqual(p['blocks'][0]['instructions'][-1]['control']['target'],72)

    def test_unknown_opcode_not_decoded_with_a_guessed_length(self):
        decoder=Decoder(pefile.PE(str(ROOT/'pafet.bin')))
        encoded=next(i for i in range(256) if decoder.table[i^0x33]^0xeb==2)
        decoder.code=bytes([encoded]); p=lift_decoder(decoder)
        self.assertEqual(p['unknown_instructions'],[0]); self.assertEqual(p['edges'],[])
        with self.assertRaises(UnknownSemantics):execute(p,State())

    def test_join_shape_rejected(self):
        decoder=Decoder(pefile.PE(str(ROOT/'pafet.bin')))
        decoder.targets=decoder.targets.copy(); decoder.targets[1]=10
        with self.assertRaises(ValueError): lift_decoder(decoder)

    def test_unproved_host_effect_is_explicit_and_stops(self):
        decoder=Decoder(pefile.PE(str(ROOT/'pafet.bin')))
        code=bytearray(decoder.code); pc=15; x=(pc*0x7af13fd3)&0xffffffff
        encoded=((99*pow(0x1a8d,-1,65536))^x^(x>>13)^0xffff9a10)&65535
        code[15:17]=encoded.to_bytes(2,'little');decoder.code=bytes(code)
        p=lift_decoder(decoder)
        host=next(i for b in p['blocks'] for i in b['instructions'] if i['pc']==14)
        self.assertEqual(host['effects'][0]['writes'],['all'])
        with self.assertRaises(UnknownSemantics):execute(p,State())

    def test_optimizer_keeps_host_calls_and_writes(self):
        p=self.program; o=optimize(p)
        effects=lambda x:[(n['op'],n.get('index'),n.get('function')) for b in x['blocks'] for i in b['instructions'] for n in i['effects'] if n['op'] in ('reg.write','call','unknown')]
        self.assertEqual(effects(p),effects(o))
        a=State(source=b'\0\x80\xff');b=copy.deepcopy(a)
        execute(p,a);execute(o,b);self.assertEqual(a,b)

    def test_structurer_refuses_unproved_multiple_branches(self):
        with self.assertRaises(ValueError):structured(optimize(self.program),{})

    def test_malformed_pe_rejected(self):
        with self.assertRaises(ValueError):lift(ROOT/'README.md')


if __name__=='__main__':unittest.main()
