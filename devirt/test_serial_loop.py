"""JACK XXXVI: new opcode semantics, callbacks, exception route, halt route,
static program structure and candidate independence."""
import json,pathlib,random,subprocess,sys,unittest
import pefile
from .serial_loop import (LoopSerialVMState,HANDLERS,NativeThrow,condition_scramble,signed64,
                          compare_less_signed,compare_greater_signed,compare_not_equal,bitwise_not,zero_extend,add)
from .serial_alu import add_variant
from .serial_continuous import UnsupportedSerialRoute
from .serial_continuous_validate import ROOT,read
from .serial import MASK

OUT=ROOT/'jack_xxxvi_evidence';CAPTURES=ROOT/'jack_xxxv_evidence/captures'
EDGES=[0,1,2,0x7f,0x80,0xff,0x7fffffff,0x80000000,0xffffffff,1<<32,(1<<63)-1,1<<63,MASK-1,MASK]


class StackVM:
    """Minimal stack double for pure handler arithmetic."""
    def __init__(self,values,domain=1,operand=0):
        self.stack=list(values);self.domain=domain;self.operand=operand;self.pe=None
    def pop(self):return self.stack.pop()
    def push(self,v):self.stack.append(v&MASK)
    def peek(self,i):return 0
    def read_u8_operand(self):return 0,self.operand
    def u(self,offset,size=8):return 0


class Semantics(unittest.TestCase):
    def test_registry_contains_recovered_families_once(self):
        self.assertEqual(sorted(HANDLERS.table),[8,21,22,24,27,28,30,44,59])
        with self.assertRaises(ValueError):HANDLERS.register(22,'DUP')(lambda vm:None)

    def test_signed_and_equality_comparisons_on_edges(self):
        for a in EDGES:
            for b in EDGES:
                for fn,expected in ((compare_less_signed,signed64(a)<signed64(b)),(compare_greater_signed,signed64(a)>signed64(b)),
                                    (compare_not_equal,a!=b)):
                    vm=StackVM([a,b]);fn(vm);self.assertEqual(vm.stack,[int(expected)])

    def test_not_and_zero_extension_width_zero_is_zero(self):
        for x in EDGES:
            vm=StackVM([x]);bitwise_not(vm);self.assertEqual(vm.stack,[(~x)&MASK])
            for byte in (0x00,0x40,0x08,0x20,0x3f,0xff):
                vm=StackVM([x],operand=byte);zero_extend(vm)
                w=byte&63;self.assertEqual(vm.stack,[x&((1<<w)-1) if w else 0])

    def test_native_alu_add_program_is_decoded_not_assumed(self):
        pe=pefile.PE(str(ROOT/'pafet.bin'));rng=random.Random(36)
        for _ in range(200):
            a,b,t=(rng.getrandbits(64) for _ in range(3))
            self.assertEqual(add_variant(pe,a,b,t),(a+b)&MASK)
        for a in EDGES:
            vm=StackVM([a,MASK],domain=2);add(vm);self.assertEqual(vm.stack,[(a-1)&MASK])

    def test_condition_scramble_is_zero_exactly_for_zero(self):
        rng=random.Random(27)
        for _ in range(500):
            args=[rng.getrandbits(64) for _ in range(6)]
            self.assertEqual(condition_scramble(0,*args),0)
            self.assertNotEqual(condition_scramble(rng.getrandbits(64)|1,*args),0)
            self.assertNotEqual(condition_scramble(1<<rng.randrange(64),*args),0)


class Captured(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.entry=read(CAPTURES/'seventeen_b/frame_00.entry.json.gz')
    def fresh(self):return LoopSerialVMState.from_initial_capture(self.entry,pefile.PE(str(ROOT/'pafet.bin')))

    def test_callback_cases_follow_switch_232e20(self):
        s=self.fresh();F=s.field
        s.host_call(0,[7]);self.assertEqual(s.host_call(2,[]),7);self.assertEqual(s.rd(F(1)+7,1),7)
        s.host_call(3,[0x1ff]);self.assertEqual(s.rd(F(2),1),0xff)
        s.host_call(6,[3]);s.host_call(0,[3]);s.host_call(2,[])
        self.assertEqual(s.host_call(10,[]),(0xff+3)&255)                 # j += S[i]
        s.wr(F(1)+s.rd(F(2),1),0x55,1);s.host_call(11,[])                    # swap S[j],S[i]
        self.assertEqual(s.rd(F(1)+3,1),0x55)
        s.host_call(5,[0])
        with self.assertRaisesRegex(UnsupportedSerialRoute,'divide by zero'):s.host_call(9,[])
        self.assertEqual(s.host_call(23,[]),0)                                # JA default
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Missing callback argument'):s.host_call(12,[])
        s.host_call(12,[1]);s.host_call(13,[2]);s.wr(F(1)+1,10,1);s.wr(F(1)+2,20,1)
        self.assertEqual(s.host_call(17,[]),1)
        self.assertEqual(s.host_call(18,[]),(2+10)&255)                       # B += S[A]
        s.host_call(21,[0x5a]);s.host_call(14,[0]);out=s.rd(s.rd(F(11),8),1)
        self.assertEqual(s.host_call(22,[]),out^0x5a)
        self.assertTrue(any(r['role']=='callback 22 output byte' for r in s.roots))

    def test_cached_window_request_moves_nothing(self):
        # 1f0660: both windows cached -> epilogue, no 1f05c0 (step-45948 fix).
        s=self.fresh();old26=s.u(0xb5c,4);old32=s.u(0xaf0,4)
        lo=(old26+1)*26
        if lo//32 not in (old32,old32+1):self.skipTest('capture window layout')
        before=(s.read(s.u(0x1d0),2678),s.read(s.u(0xb50),104),s.u(0xb5c,4))
        s.ensure_cached_window(lo,lo)
        self.assertEqual(before,(s.read(s.u(0x1d0),2678),s.read(s.u(0xb50),104),s.u(0xb5c,4)))

    def test_inconsistent_branch_request_is_refused(self):
        s=self.fresh()
        with self.assertRaisesRegex(UnsupportedSerialRoute,'consistency guard'):s.request_branch(0,5,value=0,condition=0)

    def test_exception_delivery_enqueues_encoded_label_and_resumes_loop(self):
        s=self.fresh()
        for _ in range(3):s.step()
        n=s.u(0xad0,4);caught=s.u(0xae0)
        s.deliver(NativeThrow(0x1234))
        self.assertEqual((s.u(0xad0,4),s.u(0x8c8+8*n),s.u(0xae0),s.phase),(n+1,0x1234,caught+1,'outer_jobs'))
        self.assertEqual([e['name'] for e in s.events[-2:]],['cxx_throw','catch_resume'])
        s.tp(0x524,s.entry_tls_depth+1,4)
        with self.assertRaisesRegex(UnsupportedSerialRoute,'Active TLS clamp'):s.deliver(NativeThrow(1))

    def test_hundred_fifty_steps_cross_the_old_exception_frontier(self):
        s=self.fresh();pcs=[s.step()['virtual_pc'] for _ in range(160)]
        self.assertEqual(pcs[17:19],[1753,1754]);self.assertEqual(getattr(s,'throws',0)>=1,True)
        self.assertEqual([i+1 for i,pc in enumerate(pcs) if pc==1742],[15,96])

    def test_cold_candidate_without_native_engine_or_observations(self):
        code="""import sys,json,gzip,pefile
sys.modules['unicorn']=None;sys.modules['z3']=None
from devirt.serial_loop import LoopSerialVMState
e=json.loads(gzip.decompress(open(sys.argv[1],'rb').read()))
import builtins,io
old=builtins.open
def guarded(path,*a,**k):
    if any(x in str(path) for x in ('.trace.','validation.json','virtual_cfg','static_sweep')):raise RuntimeError('Observation input')
    return old(path,*a,**k)
builtins.open=io.open=guarded
s=LoopSerialVMState.from_initial_capture(e,pefile.PE('pafet.bin'))
pcs=[s.step()['virtual_pc'] for _ in range(100)]
print(s.steps,pcs.count(1742),getattr(s,'throws',0))
"""
        r=subprocess.run([sys.executable,'-c',code,str(CAPTURES/'seventeen_b/frame_00.entry.json.gz')],cwd=ROOT,capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr);self.assertEqual(r.stdout.split()[:2],['100','2'])


class Structure(unittest.TestCase):
    def test_static_program_is_closed_and_capture_independent(self):
        cross=json.loads((OUT/'static_crosscheck.json').read_text())
        self.assertTrue(cross['all_identical']);self.assertEqual({r['instructions'] for r in cross['captures']},{478})
        self.assertTrue(all(c['mismatches']==0 for c in cross['executed_vs_static']))

    def test_serial_cpp_matches_rc4_zero_key_reference(self):
        import shutil, subprocess, tempfile
        gpp = shutil.which('g++') or shutil.which('clang++')
        if not gpp:
            self.skipTest('no C++ compiler')
        src = ROOT / 'serial_cpp_evidence' / 'serial.cpp'
        if not src.exists():
            self.skipTest('serial.cpp not present')
        # Independent RC4(zero-key) stream XOR "serial01".
        S = list(range(256)); j = 0
        for i in range(256):
            j = (j + S[i]) & 255; S[i], S[j] = S[j], S[i]
        a = b = 0; ref = []
        for c in b'serial01':
            a = (a + 1) & 255; b = (b + S[a]) & 255; S[a], S[b] = S[b], S[a]
            ref.append(c ^ S[(S[a] + S[b]) & 255])
        with tempfile.TemporaryDirectory() as d:
            (pathlib.Path(d) / 'serial.cpp').write_bytes(src.read_bytes())
            (pathlib.Path(d) / 'm.cpp').write_text(
                '#include "serial.cpp"\n#include <cstdio>\nint main(){std::string w="serial01",k="";'
                'pafet::run_serial(w,k);for(unsigned char c:w)printf("%02x",c);}\n')
            subprocess.run([gpp, '-O2', '-std=c++17', 'm.cpp', '-o', 'm'], cwd=d, check=True)
            out = subprocess.run(['./m'], cwd=d, capture_output=True, text=True, check=True).stdout.strip()
        self.assertEqual(out, bytes(ref).hex())

    def test_cfg_loops_bifurcations_and_halt(self):
        g=json.loads((OUT/'virtual_cfg.json').read_text())
        self.assertEqual(g['summary']['unknown_frontiers'],[])
        self.assertEqual(sorted(l['header'] for l in g['loops']),[1742,2184,2522])
        self.assertTrue(g['termination']['halt_statically_reachable']);self.assertEqual(g['termination']['halt_pcs'],[2652])
        self.assertTrue(all('static-decode' in e['provenance'] for e in g['edges']))
        loop=next(l for l in g['loops'] if l['header']==1742)
        self.assertTrue(any(d['back_edges_traversed']>=1 for d in loop['dynamic']))
        self.assertEqual(g['summary']['observed_pcs_outside_static'],[])


if __name__=='__main__':unittest.main()
