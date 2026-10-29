#!/usr/bin/env python3
"""Bounded semantic audit of Pafet constants and native validation handlers.

No credential search or original acceptance claim. By default no DES runs;
--tail-validation reuses the existing cipher solely for two memory tests. Unicorn runs
original instruction bytes in isolated regions with explicit dependencies.
Requires pefile, capstone, unicorn. JSON to stdout, optional --native control
projection and --revoid source assessment. See PAFET_SEMANTIC_COVERAGE.md.
"""
import argparse
import hashlib
import itertools
import json
import os
from pathlib import Path
import re
import random
import struct
import subprocess
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from unicorn import Uc, UC_ARCH_X86, UC_MODE_64, UC_HOOK_CODE
from unicorn.x86_const import *

BASE = 0x140000000
MASK = (1 << 64)-1
EXPECTED_HASH = 'fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'

def mix(x):
    x &= MASK
    x ^= x >> 33
    x = x*0xff51afd7ed558ccd & MASK
    x ^= x >> 33
    x = x*0xc4ceb9fe1a85ec53 & MASK
    return x ^ (x >> 33)

def decode_strings(pe):
    records = []
    for index in range(13):
        off = struct.unpack('<I', pe.get_data(0x3e8a58+4*index,4))[0]
        size = struct.unpack('<I', pe.get_data(0x3e94d8+4*index,4))[0]
        encrypted = pe.get_data(0x3ea7b0+off, size)
        plain = bytearray()
        for i, b in enumerate(encrypted):
            v = mix((i*0x100000001b3) ^ (((index+1)*0x9e3779b97f4a7c15)&MASK)
                    ^ 0xe16c87d37ae1dd97)
            plain.append(b ^ ((v ^ (v >> 8) ^ (v >> 16) ^ (v >> 24)) & 255))
        records.append({'slot': index, 'offset': off, 'size': size,
                        'plaintext_hex': plain.hex(), 'text': plain.decode('ascii')})
    return records

class IsolatedPE:
    def __init__(self, pe):
        self.mu = Uc(UC_ARCH_X86, UC_MODE_64)
        self.mu.mem_map(BASE, 0x460000)
        self.mu.mem_write(BASE, pe.get_memory_mapped_image())
        self.stack = 0x70000000
        self.mu.mem_map(self.stack, 0x20000)
        self.heap = 0x60000000
        self.mu.mem_map(self.heap, 0x100000)
        self.next = self.heap
        self.stop = 0x50000000
        self.mu.mem_map(self.stop, 0x1000)
        self.hooks = {}
        self.mu.hook_add(UC_HOOK_CODE, self.on_code)

    def q(self, addr):
        return struct.unpack('<Q', self.mu.mem_read(addr,8))[0]

    def putq(self, addr, value):
        self.mu.mem_write(addr, struct.pack('<Q', value & MASK))

    def alloc(self, size):
        p = self.next
        self.next += (max(size,1)+15) & ~15
        assert self.next < self.heap+0x100000
        return p

    def string(self, data, declared=None):
        p = self.alloc(48)
        n = len(data)
        if n < 16:
            self.mu.mem_write(p, data+b'\0')
            cap = 15
        else:
            buf = self.alloc(n+1)
            self.mu.mem_write(buf, data+b'\0')
            self.putq(p,buf)
            cap = n
        self.putq(p+16, n if declared is None else declared)
        self.putq(p+24,cap)
        return p

    def strbytes(self, p):
        start = self.q(p) if self.q(p+24) >= 16 else p
        return bytes(self.mu.mem_read(start,self.q(p+16)))

    def on_code(self, uc, addr, size, _):
        if addr not in self.hooks:
            return
        value = self.hooks[addr]()
        if value is not None:
            uc.reg_write(UC_X86_REG_RAX, value & MASK)
        sp = uc.reg_read(UC_X86_REG_RSP)
        uc.reg_write(UC_X86_REG_RIP,self.q(sp))
        uc.reg_write(UC_X86_REG_RSP,sp+8)

    def call(self, address, *args):
        sp = self.stack+0x1f008
        self.putq(sp,self.stop)
        self.mu.reg_write(UC_X86_REG_RSP,sp)
        for reg,value in zip([UC_X86_REG_RCX,UC_X86_REG_RDX,UC_X86_REG_R8,UC_X86_REG_R9],args):
            self.mu.reg_write(reg,value)
        self.mu.emu_start(address,self.stop,count=100000)
        assert self.mu.reg_read(UC_X86_REG_RIP) == self.stop
        return self.mu.reg_read(UC_X86_REG_RAX)

def test_decoder_loop(pe, records):
    results=[]
    for record in records:
        p=IsolatedPE(pe)
        n=record['size']
        if n:
            sp=p.stack+0x1e000
            dest=sp+0x40 if n<16 else p.alloc(n+1)
            if n>=16:
                p.putq(sp+0x40,dest)
            p.putq(sp+0x50,n)
            p.putq(sp+0x58,15 if n<16 else n)
            for reg,value in [(UC_X86_REG_RSP,sp),(UC_X86_REG_RDI,0),
                              (UC_X86_REG_RBP,n),(UC_X86_REG_R12,record['offset']),
                              (UC_X86_REG_R13,BASE),(UC_X86_REG_R15,record['slot'])]:
                p.mu.reg_write(reg,value)
            p.mu.emu_start(BASE+0x380981,BASE+0x380a49,count=10000)
            assert p.mu.reg_read(UC_X86_REG_RIP)==BASE+0x380a49
            assert bytes(p.mu.mem_read(dest,n)).hex()==record['plaintext_hex']
        results.append({'slot':record['slot'],'matches_original_loop':bool(n),
                        'empty_slot_no_loop':n==0})
    return results

def test_validation_handlers(pe, records, extra_cases=()):
    # Dependencies are stubs. The comparison and length/suffix logic are the
    # original main dispatcher instructions. These are component tests only.
    p=IsolatedPE(pe)
    strings={r['slot']:p.alloc(r['size']+1) for r in records}
    for r in records:
        p.mu.mem_write(strings[r['slot']],bytes.fromhex(r['plaintext_hex'])+b'\0')
    reg=lambda r:p.mu.reg_read(r)
    p.hooks[BASE+0x380840]=lambda:strings[reg(UC_X86_REG_RCX)]
    comparisons=[]
    def memcmp():
        n=reg(UC_X86_REG_R8)
        a=bytes(p.mu.mem_read(reg(UC_X86_REG_RCX),n))
        b=bytes(p.mu.mem_read(reg(UC_X86_REG_RDX),n))
        comparisons.append({'bytes_compared':n,'a_hex':a.hex(),'b_hex':b.hex()})
        return (a>b)-(a<b)
    p.hooks[BASE+0x3a68e0]=memcmp
    p.hooks[BASE+0x3a3dc0]=lambda:None
    p.hooks[BASE+0x3997c0]=lambda:None
    ctx=p.alloc(128)
    shape=[]
    cases=[b'',b'CMO{',b'CMO{}',b'CMO{X}',b'AMO{X}',b'CMO{X!',
           b'CMO{\0}',b'CMO{X}\0junk',b'CMO{'+b'A'*10+b'}',
           b'CMO{'+b'A'*11+b'}',b'CMO{'+b'A'*66+b'}']+list(extra_cases)
    for data in cases:
        p.putq(ctx+0x38,p.string(data))
        got=p.call(BASE+0x396990,ctx,20,0)
        expect=len(data)>4 and data.startswith(b'CMO{') and data.endswith(b'}')
        assert got==int(expect),(data,got)
        shape.append({'data_hex':data.hex(),'declared_length':len(data),'return':got})
    # Intentionally inconsistent metadata: demonstrate what the predicate
    # consumes, NOT that input can forge std::string metadata in the program.
    for data,size in [(b'CMO{X}garbage',6),(b'CMO{X}garbage',13)]:
        p.putq(ctx+0x38,p.string(data,declared=size))
        got=p.call(BASE+0x396990,ctx,20,0)
        expect=size>4 and data[:size].startswith(b'CMO{') and data[size-1]==125
        assert got==int(expect)
        shape.append({'data_hex':data.hex(),'declared_length':size,'return':got,
                      'synthetic_metadata_only':True,'input_exploit_demonstrated':False})
    sha_calls=[]
    def sha_dependency():
        # Already-audited SHA is abstracted, never re-reversed here.
        out=reg(UC_X86_REG_RCX)
        data=p.strbytes(reg(UC_X86_REG_RDX))
        sha_calls.append(data.hex())
        encoded=hashlib.sha256(data).hexdigest().encode()
        buf=p.alloc(65)
        p.mu.mem_write(buf,encoded+b'\0')
        p.putq(out,buf);p.putq(out+16,64);p.putq(out+24,64)
        return out
    p.hooks[BASE+0x2831c0]=sha_dependency
    gates=[]
    for data in [b'',b'alice',b' A\0z ',bytes.fromhex('41610020c3b1ff')]:
        digest=hashlib.sha256(data).hexdigest().encode()
        altered=[digest, bytes([digest[0]^1])+digest[1:],digest[:-1]+bytes([digest[-1]^1]),digest[:-1]]
        for i,target in enumerate(altered):
            p.putq(ctx,p.string(target))
            p.putq(ctx+8,p.string(data))
            got=p.call(BASE+0x396990,ctx,8,0)
            assert got==int(i!=0)
            assert sha_calls[-1]==data.hex()
            gates.append({'user_hex':data.hex(),'target_case':i,
                          'return_0_is_match':got,'artificial_target':True})
    return {'scope':'original comparison instructions, stubbed decoder/SHA/CRT dependencies; no acceptance claim',
            'shape_cases':shape,'username_comparison_cases':gates,
            'compared_byte_counts':sorted(set(x['bytes_compared'] for x in comparisons)),
            'input_can_forge_string_metadata':False}

def test_control(native):
    results=[]
    for unused,tick,sha_fail,pad,shape in itertools.product([0,MASK],[1,0x12345678],[0,1],[0,1],[0,1]):
        env={k:v for k,v in os.environ.items() if k not in
             ('FAST_DES','TRACE_DES','TRACE_USER','LOG_SHA_BLOCK','LOG_SHA_ALL','POISON_TAIL')}
        env.update(PROBE_TICK=str(tick),SEMANTIC_LIVE='1',PROBE_VOID_RETURN=str(unused))
        args=['--script-control',str(sha_fail),str(pad),str(shape)]
        r=subprocess.run([str(native),*args],cwd=native.parent,env=env,
                         capture_output=True,text=True,timeout=20)
        assert r.returncode==0,r.stderr
        ops=[int(m) for m in re.findall(r'^SEMANTIC-HOST (\d+) ',r.stdout,re.M)]
        ret=int(re.search(r'^SEMANTIC-RETURN (-?\d+)',r.stdout,re.M)[1])
        if sha_fail:
            assert ops==list(range(10)) and ret==1
        else:
            assert ops[:14]==list(range(9))+list(range(10,15))
            assert (15 in ops)==bool(pad)
            assert ops.count(19)==3
            assert ops[-3:]==([20,21,22] if shape else [18,20,23])
            assert ret==int(not shape)
        live=[list(map(int,line.split()[1:])) for line in r.stdout.splitlines()
              if line.startswith('SEMANTIC-LIVE ')]
        assert len(live)==len(ops)
        results.append({'unused_host_return':unused,'tick':tick,'sha_fail':sha_fail,'pad_needed':pad,'shape_ok':shape,
                        'ops':ops,'pc_after_host':[v[1] for v in live],
                        'vm_opcode_at_host':[v[6] for v in live],
                        'program_return':ret,'stdout':r.stdout,'stderr':r.stderr})
    # PCs and host effects agree across independently varying runtime keys.
    for offset in [8,16,24]:
        for a,b in zip(results[:8],results[offset:offset+8]):
            assert a['ops']==b['ops'] and a['pc_after_host']==b['pc_after_host']
    return {'scope':'original outer VM with modeled host callbacks and clocks; NOT original acceptance',
            'cases':results,'native_host_opcodes_covered':sorted(set(op for r in results for op in r['ops'])),
            'exhaustive_internal_VM_coverage':False}

def test_user_control(native):
    results=[]
    for length,value in itertools.product([0,1,15,16,17,65],[0,0x7f,MASK-0x7f,MASK,0x7d]):
        args=['--user-control',str(length),str(value)]
        r=subprocess.run([str(native),*args],cwd=native.parent,capture_output=True,text=True,timeout=20)
        assert r.returncode==0 and 'SEMANTIC-USER-RETURN' in r.stdout,r.stderr
        ops=list(map(int,re.findall(r'^SEMANTIC-USER (\d+) ',r.stdout,re.M)))
        assert ops==[0,1,2]+[3,4,5,2,5]*length+[3,6]
        results.append({'length':length,'transformed_char_return':value,'ops':ops,
                        'stdout':r.stdout,'stderr':r.stderr})
    return {'scope':'original user VM with modeled native handlers; no KDF or real-input acceptance claim',
            'cases':results,'loop_count_tracks_modeled_length':True,
            'host_trace_unchanged_by_five_char_return_values':True,
            'exhaustive_internal_VM_coverage':False}

def test_live_accessor(pe):
    rng=random.Random(20261028)
    results=[]
    for mode,index in itertools.product([0,1],range(6)):
        p=IsolatedPE(pe)
        ctx=p.alloc(0x1100)
        a,b,c,nonce,value=[rng.getrandbits(64) for _ in range(5)]
        nonce &= 255
        mask=a ^ (((index+1)*b)&MASK) ^ ((nonce*c)&MASK)
        encoded=((value+mask)&MASK) if mode else value^mask
        p.putq(ctx+0x58,a);p.putq(ctx+0x60,b);p.putq(ctx+0x68,c)
        p.mu.mem_write(ctx+0x70,bytes([mode]));p.mu.mem_write(ctx+0xe8+index,bytes([nonce]))
        p.putq(ctx+0x78+index*8,encoded)
        p.putq(ctx+0x740,rng.getrandbits(64))
        got=p.call(BASE+0x381630,ctx,index)
        assert got==value
        newnonce=p.mu.mem_read(ctx+0xe8+index,1)[0]
        newmask=a^(((index+1)*b)&MASK)^((newnonce*c)&MASK)
        newencoded=p.q(ctx+0x78+index*8)
        assert ((newencoded-newmask)&MASK if mode else newencoded^newmask)==value
        results.append({'mode':mode,'index':index,'original_getter_returns_expected':True,
                        'nonce_refresh_preserves_value':True})
    return results

def test_opcode58(pe):
    # Independently locate all four compiled clones from their native calls.
    md=Cs(CS_ARCH_X86,CS_MODE_64)
    addresses=[]
    needed={'0x1403858a0','0x140382030','0x140381e60'}
    for e in pe.DIRECTORY_ENTRY_EXCEPTION:
        a,b=e.struct.BeginAddress,e.struct.EndAddress
        if not 0x385b30<=a<0x38d9d0:
            continue
        ins=list(md.disasm(pe.get_data(a,b-a),BASE+a))
        if needed<={i.op_str for i in ins if i.mnemonic=='call'} and any(i.mnemonic=='sar' for i in ins):
            addresses.append(BASE+a)
    assert addresses==[BASE+x for x in (0x386150,0x388310,0x38a270,0x38b8b0)]
    count=0
    for addr,width,value in itertools.product(addresses,[0,1,8,16,32,63],
                    [0,0x80,0x7fffffff,0x80000000,0xffffffff,0x100000001,MASK]):
        p=IsolatedPE(pe);ctx=p.alloc(0x1100);p.putq(ctx+0x698,0x123456789abcdef0)
        p.putq(ctx+0x530,0x234);p.mu.mem_write(ctx+0x55c,struct.pack('<I',1))
        pushed=[]
        p.hooks[BASE+0x3858a0]=lambda:width
        p.hooks[BASE+0x382030]=lambda:value
        p.hooks[BASE+0x381e60]=lambda:pushed.append(p.mu.reg_read(UC_X86_REG_RDX))
        p.call(addr,ctx)
        bits=width&63
        if bits:
            expected=value&((1<<bits)-1)
            if expected&(1<<(bits-1)):
                expected|=MASK^((1<<bits)-1)
        else:
            expected=value
        assert pushed==[expected],(hex(addr),width,value,pushed)
        count+=1
    return {'original_clone_addresses':[hex(x) for x in addresses],'cases':count,
            'core_semantics':'sign-extend low (immediate & 63) bits; effective width zero leaves the 64-bit value unchanged',
            'dependencies':'read-immediate, stack-pop and stack-push abstracted; original conversion instructions execute',
            'runtime_observed_width_in_main_loop':32,
            'not_a_credential_constraint':True}

def test_op_projection(native, control_cases):
    results=[]
    for sha_fail,pad,shape in itertools.product([0,1],[0,1],[0,1]):
        env={k:v for k,v in os.environ.items() if k not in
             ('FAST_DES','TRACE_DES','TRACE_USER','LOG_SHA_BLOCK','LOG_SHA_ALL','POISON_TAIL',
              'PROBE_VOID_RETURN','PROBE_TICK','SEMANTIC_LIVE','SEMANTIC_OPS')}
        env.update(SEMANTIC_OPS='1',PROBE_TICK='1',PROBE_VOID_RETURN='0')
        args=['--script-control',str(sha_fail),str(pad),str(shape)]
        r=subprocess.run([str(native),*args],cwd=native.parent,env=env,
                         capture_output=True,text=True,timeout=20)
        assert r.returncode==0,r.stderr
        host_ops=list(map(int,re.findall(r'^SEMANTIC-HOST (\d+) ',r.stdout,re.M)))
        reference=next(c for c in control_cases if c['tick']==1 and c['unused_host_return']==0
                       and c['sha_fail']==sha_fail and c['pad_needed']==pad and c['shape_ok']==shape)
        assert host_ops==reference['ops']
        assert int(re.search(r'^SEMANTIC-RETURN (-?\d+)',r.stdout,re.M)[1])==reference['program_return']
        records=[dict(zip(['pc_after_fetch','logical_opcode','clone_table','mapped_slot','thunk'],
                         [int(v,16) if i==4 else int(v) for i,v in enumerate(line.split()[1:])]))
                 for line in r.stdout.splitlines() if line.startswith('SEMANTIC-OP ')]
        operands=[list(map(int,m)) for m in re.findall(r'^SEMANTIC-ARG58 (\d+) (\d+)',r.stdout,re.M)]
        assert all(v==32 for _,v in operands)
        targets=[int(x,16) for x in re.findall(r'^SEMANTIC-TARGET58 ([0-9a-f]+)',r.stdout,re.M)]
        assert set(targets)<={BASE+x for x in (0x386150,0x388310,0x38a270,0x38b8b0)}
        results.append({'sha_fail':sha_fail,'pad_needed':pad,'shape_ok':shape,
                        'virtual_dispatches':records,'opcode58_operands':operands,
                        'opcode58_targets':[hex(x) for x in targets],
                        'host_trace_and_return_unchanged_by_lookup_instrumentation':True})
    observed=sorted({i['logical_opcode'] for r in results for i in r['virtual_dispatches']})
    return {'scope':'executed virtual instruction projection with abstract native hosts, not a complete static CFG',
            'observed_logical_opcodes':observed,'dispatcher_capacity':62,
            'unobserved_opcode_ids':[x for x in range(62) if x not in observed],
            'cases':results,'no_global_unreachability_claim':True}

def assess_revoid(path):
    files=[p for p in path.iterdir() if p.is_file()]
    s=(path/'password_check.vm.cpp').read_text()
    opcode_source=s[s.index('switch (C.op) {'):s.index('if (!C.done && C.state')]
    opcodes=sorted(set(map(int,re.findall(r'case (\d+):',opcode_source))))
    assert opcodes==list(range(50))
    return {'repository':subprocess.check_output(['git','remote','get-url','origin'],cwd=path,text=True).strip(),
            'commit':subprocess.check_output(['git','rev-parse','HEAD'],cwd=path,text=True).strip(),
            'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in files},
            'generator_engine_source_present':False,'generated_sample_present':True,
            'sample_opcode_cases':opcodes,
            'sample_contains_conditional_virtual_branches':'case 27:' in s and 'case 28:' in s,
            'sample_contains_exception_handlers':'case 45:' in s and 'case 48:' in s,
            'portable_VM_claim':'C++ source with Windows host thunks, 64-bit value cells and x86 MSVC calling-convention conditional',
            'binary_compatibility_demonstrated':False}

def test_tail(native):
    # Fixed artificial 65-byte fixture, not the challenge ciphertext. It was
    # selected from 256 possible final data bytes with a fixed artificial key;
    # no username/serial space was searched. Uses already-audited crypto only
    # to exercise the newly relevant memory-to-predicate path.
    key='7072784f4c494f57ef2aba7596016a020000000000000000'
    data='292671498c6526ea'+'205030ac4eb89a56'*7+'53'
    results=[]
    for poison in [False,True]:
        env={k:v for k,v in os.environ.items() if k not in
             ('FAST_DES','TRACE_DES','TRACE_USER','LOG_SHA_BLOCK','LOG_SHA_ALL','POISON_TAIL')}
        if poison:
            env['POISON_TAIL']='1'
        args=['--cipher',key,data,'1']
        r=subprocess.run([str(native),*args],cwd=native.parent,env=env,
                         capture_output=True,text=True,timeout=100)
        assert r.returncode==0,r.stderr
        output=bytes.fromhex(re.search(r'^STAGE 1 ([0-9a-f]+)$',r.stdout,re.M)[1])
        assert len(output)==65 and output[:64]==b'CMO{TEST'+b'A'*56
        assert output[-1]==(0xf4 if poison else 0x7d)
        results.append({'args':args,'FAST_DES':False,'POISON_TAIL':poison,
                        'output_hex':output.hex(),'stdout':r.stdout,'stderr':r.stderr})
    return {'scope':'original cipher-stage instructions on an artificial 65-byte intermediate; NOT the fixed 72-byte challenge ciphertext or original acceptance',
            'fixed_artificial_key':key,'real_credential_search':False,
            'requires_valid_username_for_original_path':True,
            'models_only_one_cipher_pass':True,'cases':results}

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--binary',type=Path,default=Path(__file__).resolve().parents[1]/'pafet.bin')
    ap.add_argument('--native',type=Path)
    ap.add_argument('--revoid',type=Path)
    ap.add_argument('--tail-validation',action='store_true',help='Two bounded original-cipher tail experiments; requires --native')
    ap.add_argument('--opcode-projection',action='store_true',help='Trace bounded outer VM instruction paths; requires --native')
    args=ap.parse_args()
    digest=hashlib.sha256(args.binary.read_bytes()).hexdigest()
    assert digest==EXPECTED_HASH,'Different binary; addresses must be re-audited'
    pe=pefile.PE(str(args.binary))
    records=decode_strings(pe)
    result={'binary_sha256':digest,'real_credential_searches':0,'DES_operations_executed':0,
            'strings':records,'original_string_loop_tests':test_decoder_loop(pe,records),
            'validation_handlers':test_validation_handlers(pe,records)}
    if args.native:
        result['control_projection']=test_control(args.native.resolve())
        result['user_control_projection']=test_user_control(args.native.resolve())
    if args.opcode_projection:
        if not args.native:
            ap.error('--opcode-projection requires --native')
        result['virtual_opcode_projection']=test_op_projection(args.native.resolve(),result['control_projection']['cases'])
    if args.tail_validation:
        if not args.native:
            ap.error('--tail-validation requires --native')
        result['tail_validation']=test_tail(args.native.resolve())
        outputs=[bytes.fromhex(x['output_hex']) for x in result['tail_validation']['cases']]
        result['validation_handlers']=test_validation_handlers(pe,records,outputs)
        result['DES_operations_executed']='two original DES3 passes on a fixed artificial intermediate (18 DES3 blocks / 54 DES block calls); no DES reversing'
    if args.revoid:
        result['revoid']=assess_revoid(args.revoid.resolve())
    result['live_accessor_expression_tests']=test_live_accessor(pe)
    result['opcode58_conversion_tests']=test_opcode58(pe)
    assert pe.get_data(0x38eb75,4)==bytes.fromhex('4183f83e')
    result['pafet_main_VM_dispatch_limit']=62
    result['all_assertions_passed']=True
    print(json.dumps(result,indent=2,ensure_ascii=False))

if __name__=='__main__':
    main()
