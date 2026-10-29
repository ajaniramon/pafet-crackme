#!/usr/bin/env python3
"""Decode the complete Pafet main bytecode and validate its logical dataflow.

Target-specific: 105 permuted 26-byte blocks, the original main interpreter,
and explicit abstract native contracts. No DES/SHA execution or credential
search. This does NOT prove complete Windows/runtime/native-wrapper coverage.
Requires pefile, unicorn and capstone via pafet_semantic_probe.
"""
import argparse
from collections import defaultdict
import hashlib
import itertools
import json
import os
from pathlib import Path
import struct
import subprocess
from dataclasses import dataclass

from pafet_semantic_probe import BASE, MASK, EXPECTED_HASH, IsolatedPE, mix
from unicorn.x86_const import UC_X86_REG_RDX
import pefile

SEEDS=(0x46485c751d92af14,0xe411d6be9c4c2b2b,
       0x02d948e01f07a73e,0xa0a2c3299ff12355)
FORMS={1:(4,),4:(2,),5:(2,),8:(),21:(),22:(),24:(),26:(4,),27:(4,),28:(4,),
       29:(),31:(),32:(2,1),41:(),44:(),58:(1,)}
NAMES={1:'CONST',4:'GET',5:'SET',8:'ADD',21:'NE',22:'SLT',24:'SGT',
       26:'JMP_BLOCK',27:'JZ_BLOCK',28:'JNZ_BLOCK',29:'RETURN',31:'DROP',
       32:'HOST',41:'XOR',44:'NOT',58:'SIGN_EXTEND'}
PREDICATE_HOSTS={8:'sha_fail',14:'padding_needed',20:'shape_ok'}

def permute8(x):
    left,right=x>>4,x&15
    for seed in SEEDS:
        left,right=right,left^((mix(right*0xd6e8feb86659fd93^seed)>>17)&15)
    return left<<4|right

def block_starts():
    result=[0]
    for i in range(1,105):
        v=permute8(i-1)
        for _ in range(64):
            if v<104:
                break
            v=permute8(v)
        else:
            raise AssertionError('Cycle-walk budget')
        result.append((v+1)*26)
    assert sorted(result)==list(range(0,2730,26))
    return result

def original_map_tests(pe):
    p=IsolatedPE(pe)
    for i in range(256):
        assert p.call(BASE+0x380590,i)==permute8(i)
    starts=block_starts()
    for i,start in enumerate(starts):
        assert p.call(BASE+0x380ad0,i)==start
    return {'raw_permutation_cases':256,'original_block_resolver_cases':105,
            'all_block_starts_unique':True,'block_starts':starts}

def pool_values(pe):
    values=[]
    for slot in struct.unpack('<21I',pe.get_data(0x3ea8b0,84)):
        a=struct.unpack('<Q',pe.get_data(0x3ea930+8*slot,8))[0]
        b=struct.unpack('<Q',pe.get_data(0x3ea9e0+8*slot,8))[0]
        values.append((b^a if slot%3==0 else b+a if slot%3==1 else b-a)&MASK)
    return values

def original_pool_tests(pe,pool):
    clones=(0x387750,0x388a40,0x38b210,0x38c670)
    p=IsolatedPE(pe);ctx=p.alloc(0x1100);p.putq(ctx+0x530,0x234)
    p.mu.mem_write(ctx+0x55c,struct.pack('<I',1))
    pushed=[]
    p.hooks[BASE+0x381e60]=lambda:pushed.append(p.mu.reg_read(UC_X86_REG_RDX))
    count=0
    for clone,index in itertools.product(clones,list(range(21))+[21,0xffffffff]):
        p.hooks[BASE+0x385590]=lambda:index
        pushed.clear();p.call(BASE+clone,ctx)
        assert pushed==[pool[index if index<21 else 0]],(clone,index,pushed)
        count+=1
    return {'original_constant_clones':[hex(BASE+a) for a in clones],
            'cases':count,'all_21_constants_and_invalid_index_clamping_checked':True,
            'dependencies':'original constant-assembly instructions; read-index and stack-push adapters'}

def original_operand_tests(pe,code,program):
    p=IsolatedPE(pe);ctx=p.alloc(0x1100);buffer=p.alloc(len(code))
    p.mu.mem_write(buffer,code);p.putq(ctx+0xf40,buffer)
    p.mu.mem_write(ctx+0xf48,struct.pack('<I',len(code)))
    p.hooks[BASE+0x383e20]=lambda:None
    a,b,c=0x12345678,0x324321567,0xfedcba987654321
    p.putq(ctx+0x58,a);p.putq(ctx+0x60,b);p.putq(ctx+0x68,c)
    count=0
    for mode,ins in itertools.product((0,1),program.values()):
        pos=ins['pc']+1
        for width,expected in zip(FORMS[ins['opcode']],ins['args']):
            p.mu.mem_write(ctx+0x70,bytes([mode]));p.mu.mem_write(ctx+0xe9,b'\x25')
            mask=a^((2*b)&MASK)^((0x25*c)&MASK)
            p.putq(ctx+0x80,(pos+mask)&MASK if mode else pos^mask)
            p.putq(ctx+0x740,0x123456789)
            got=p.call(BASE+{1:0x3858a0,2:0x385720,4:0x385590}[width],ctx)
            assert got==expected,(mode,pos,width,got,expected)
            nonce=p.mu.mem_read(ctx+0xe9,1)[0]
            newmask=a^((2*b)&MASK)^((nonce*c)&MASK)
            encoded=p.q(ctx+0x80)
            assert ((encoded-newmask)&MASK if mode else encoded^newmask)==pos+width
            pos+=width;count+=1
    return {'cases':count,'live_field_modes':[0,1],
            'all_static_instruction_operands_checked':True,
            'dependencies':'original U8/U16/U32 readers with already-materialized bytes; segment-ensure adapter is a no-op'}

def native(native,args,**extra):
    env={k:v for k,v in os.environ.items() if not k.startswith(('SEMANTIC_','PROBE_'))
         and k not in ('FAST_DES','TRACE_DES','TRACE_USER','LOG_SHA_BLOCK','LOG_SHA_ALL','POISON_TAIL')}
    env.update({k:str(v) for k,v in extra.items()})
    r=subprocess.run([str(native),*map(str,args)],cwd=native.parent,env=env,
                     capture_output=True,text=True,timeout=30)
    assert r.returncode==0,{'args':args,'stderr':r.stderr,'stdout_tail':r.stdout[-1000:]}
    return r.stdout

def extract_code(text):
    code=bytearray(2730);seen=set()
    for line in text.splitlines():
        f=line.split()
        if f and f[0]=='SEMANTIC-BLOCK':
            pos=int(f[1]);data=bytes.fromhex(f[2])
            assert len(data)==26 and pos not in seen
            code[pos:pos+26]=data;seen.add(pos)
    assert seen==set(range(0,2730,26)) and 'SEMANTIC-DUMP-END' in text
    return bytes(code)

def operand(code,pos,width):
    data=code[pos:pos+width];salt=pos*0x88681d41&0xffffffff
    if width==1:
        return data[0]^0x21
    if width==2:
        return ((int.from_bytes(data,'big')^salt^(salt>>13)^0xffffdf50)*0xffff96d5)&0xffff
    if width==4:
        v=int.from_bytes(bytes(data[i] for i in (3,0,2,1)),'big')
        return ((v^salt^(salt>>13)^0xf2e6df50)*0x7af8e715)&0xffffffff
    raise AssertionError(width)

def decode(pe,code,starts,pool):
    mapping=pe.get_data(0x3e18a0,256)
    program={}
    padding=[]
    for block,start in enumerate(starts):
        pc=start
        while pc<start+26:
            address=pc;op=mapping[code[pc]^0xe7]^0xb9;pc+=1
            assert op in FORMS,(block,address,op)
            args=[]
            for width in FORMS[op]:
                args.append(operand(code,pc,width));pc+=width
            assert pc<=start+26
            ins={'pc':address,'block':block,'opcode':op,'name':NAMES[op],'args':args,'next':pc}
            if op==1:
                ins['constant']=pool[args[0] if args[0]<21 else 0]
            if op in (26,27,28):
                assert args[0]<105
                ins['target']=starts[args[0]]
            if op==32:
                assert args[0]<24 and args[1] in (0,1)
                assert (args[0]==17)==(args[1]==1)
            program[address]=ins
            if op in (26,29):
                padding.append({'block':block,'start':pc,'size':start+26-pc})
                break
        else:
            raise AssertionError(('Block lacks terminating jump/return',block))
    assert len(program)==482
    # Every unmodeled host return is discarded immediately in the static code.
    for ins in program.values():
        if ins['opcode']==32 and ins['args'][0] not in (8,14,18,20):
            assert program[ins['next']]['opcode']==31,ins
    return program,padding

@dataclass(frozen=True)
class Value:
    number:int
    deps:frozenset=frozenset()

def signed(x):
    return x if x<1<<63 else x-(1<<64)

def replay(program,inputs,unused=0):
    # Original main clears 0xc0 bytes (24 64-bit locals) at 0x1403967c6..
    # 0x1403967d5 before calling the VM with nlocals=24. No other registers
    # are assumed initialized; a read outside this known set still fails.
    stack=[];regs={i:Value(0) for i in range(24)};counter=Value(0);pc=0;steps=[];branches=[];calls=[]
    for step in range(8192):
        assert pc in program,('Reached unknown instruction',pc)
        ins=program[pc];op=ins['opcode'];args=ins['args'];nxt=ins['next']
        events=[]
        def push(v):
            stack.append(v);events.append(('PUSH',v.number))
        def pop():
            assert stack,('Underflow',pc)
            v=stack.pop();events.append(('POP',v.number));return v
        if op==1:
            push(Value(ins['constant']))
        elif op==4:
            assert args[0] in regs,('Uninitialized register read',pc,args[0])
            push(regs[args[0]])
        elif op==5:
            regs[args[0]]=pop()
        elif op in (8,21,22,24,41):
            b,a=pop(),pop()
            value={8:lambda:(a.number+b.number)&MASK,
                   21:lambda:int(a.number!=b.number),
                   22:lambda:int(signed(a.number)<signed(b.number)),
                   24:lambda:int(signed(a.number)>signed(b.number)),
                   41:lambda:a.number^b.number}[op]()
            push(Value(value,a.deps|b.deps))
        elif op==44:
            a=pop();push(Value(a.number^MASK,a.deps))
        elif op==58:
            a=pop();width=args[0]&63
            value=a.number
            if width:
                value&=(1<<width)-1
                if value&(1<<(width-1)):
                    value|=MASK^((1<<width)-1)
            push(Value(value,a.deps))
        elif op==31:
            pop()
        elif op==32:
            host,argc=args
            argv=[pop() for _ in range(argc)][::-1]
            assert not any(any(d.startswith('void:') for d in a.deps) for a in argv)
            if host in PREDICATE_HOSTS:
                name=PREDICATE_HOSTS[host];value=Value(inputs[name],frozenset([name]))
            elif host==17:
                a=argv[0];n=a.number&0xffffffff
                counter=Value(n-(1<<32) if n&0x80000000 else n,a.deps)
                value=Value(unused,frozenset([f'void:{step}:{host}']))
            elif host==18:
                value=Value(counter.number&MASK,counter.deps)
            else:
                value=Value(unused,frozenset([f'void:{step}:{host}']))
            calls.append({'pc':pc,'host':host,'args':[a.number for a in argv],
                          'arg_dependencies':[sorted(a.deps) for a in argv],
                          'return':value.number})
            push(value)
        elif op==26:
            nxt=ins['target']
        elif op in (27,28):
            value=pop()
            assert not any(d.startswith('void:') for d in value.deps),('Unknown return affects branch',pc)
            false=value.number in (0,1<<63,1<<31)
            taken=false if op==27 else not false
            if taken:nxt=ins['target']
            branches.append({'pc':pc,'opcode':op,'value':value.number,
                             'dependencies':sorted(value.deps),'taken':taken,'next':nxt})
        elif op==29:
            value=pop()
            assert not any(d.startswith('void:') for d in value.deps)
            steps.append({'pc':pc,'opcode':op,'events':events})
            return {'return':value.number,'steps':steps,'branches':branches,'host_calls':calls,
                    'read_registers_initialized_by_main_zeroing_or_program':True,
                    'unknown_host_returns_do_not_affect_observables':True}
        else:
            raise AssertionError(op)
        steps.append({'pc':pc,'opcode':op,'events':events})
        pc=nxt
    raise AssertionError('Replay budget exceeded')

def validate_trace(text,pe,code,program,model):
    groups=[];operands=0
    for line in text.splitlines():
        f=line.split()
        if not f:continue
        if f[0]=='SEMANTIC-OP':
            groups.append({'pc':int(f[1])-1,'opcode':int(f[2]),'events':[]})
        elif f[0]=='SEMANTIC-OPERAND':
            index,pos,width,value=map(int,f[1:])
            assert index==len(groups) and operand(code,pos,width)==value,(pos,width,value)
            operands+=1
        elif f[0]=='SEMANTIC-STACK':
            index=int(f[1]);assert index==len(groups)
            groups[-1]['events'].append((f[2],int(f[3])))
    assert len(groups)==len(model['steps'])
    for observed,predicted in zip(groups,model['steps']):
        assert observed==predicted,(observed,predicted)
    host=[int(line.split()[1]) for line in text.splitlines() if line.startswith('SEMANTIC-HOST ')]
    assert host==[h['host'] for h in model['host_calls']]
    returned=int(next(line.split()[1] for line in text.splitlines() if line.startswith('SEMANTIC-RETURN ')))
    assert returned==model['return']
    return {'native_dispatches_checked':len(groups),'native_operands_checked':operands,
            'native_stack_events_checked':sum(len(g['events']) for g in groups),
            'all_instruction_PCs_and_values_match':True}

def validate_observable_contract(model,inputs):
    """Check the recovered program's security-relevant effects explicitly."""
    calls=model['host_calls'];hosts=[c['host'] for c in calls]
    assert hosts[:9]==list(range(9))
    if inputs['sha_fail']:
        assert hosts==list(range(10)) and model['return']==1
    else:
        assert hosts[9:14]==list(range(10,15))
        assert hosts.count(15)==inputs['padding_needed']
        assert hosts.count(19)==3
        assert [c['args'] for c in calls if c['host']==17]==[[0],[1],[2],[3]]
        assert (hosts[-3:]==[20,21,22] if inputs['shape_ok'] else hosts[-2:]==[20,23])
        assert model['return']==(0 if inputs['shape_ok'] else 1)
    assert all(set(b['dependencies'])<=set(PREDICATE_HOSTS.values()) for b in model['branches'])

def write_listing(path,program,padding,unreachable):
    lines=['# Logical main program; PCs are byte offsets, not native addresses.',
           '# UNREACHED means unreachable only under the documented host contracts.']
    for ins in sorted(program.values(),key=lambda i:i['pc']):
        args=' '.join(map(str,ins['args']))
        detail=f" -> PC {ins['target']}" if 'target' in ins else ''
        if 'constant' in ins:detail+=f" = 0x{ins['constant']:016x}"
        if ins['pc'] in unreachable:detail+=' [UNREACHED under contracts]'
        lines.append(f"{ins['pc']:04d} block={ins['block']:03d} {ins['name']:<12} {args}{detail}")
    lines.append('# Padding ranges after each block terminal (start, length):')
    lines.extend(f"# {p['start']} {p['size']}" for p in padding)
    path.write_text('\n'.join(lines)+'\n')

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--native',type=Path,required=True)
    ap.add_argument('--binary',type=Path,default=Path(__file__).resolve().parents[1]/'pafet.bin')
    ap.add_argument('--out',type=Path,required=True)
    args=ap.parse_args();native_path=args.native.resolve();args.out.mkdir(parents=True,exist_ok=True)
    assert hashlib.sha256(args.binary.read_bytes()).hexdigest()==EXPECTED_HASH
    pe=pefile.PE(str(args.binary));maps=original_map_tests(pe);pool=pool_values(pe)
    pool_tests=original_pool_tests(pe,pool)
    dumps=[];code=None
    for tick,unused in itertools.product((1,0x12345678),(0,MASK)):
        text=native(native_path,['--script-control',0,1,1],SEMANTIC_DUMP_WIRE=1,
                    PROBE_TICK=tick,PROBE_VOID_RETURN=unused)
        current=extract_code(text)
        if code is None:
            code=current;(args.out/'materializer_dump.txt').write_text(text)
        assert current==code
        dumps.append({'tick':tick,'unused_host_return':unused,'sha256':hashlib.sha256(current).hexdigest()})
    (args.out/'main_bytecode_wire.bin').write_bytes(code)
    program,padding=decode(pe,code,maps['block_starts'],pool)
    operand_tests=original_operand_tests(pe,code,program)
    (args.out/'decoded_main_program.json').write_text(json.dumps({'scope':'logical bytecode only',
          'instructions':[program[p] for p in sorted(program)],'constants':pool,
          'block_starts':maps['block_starts'],'padding':padding},indent=2)+'\n')
    cases=[];all_reached=set();all_branches=defaultdict(lambda:{'deps':set(),'values':set(),'successors':set()})
    for sha,pad,shape,unused,tick in itertools.product((0,1),(0,1),(0,1),(0,MASK),(1,0x12345678)):
        inputs={'sha_fail':sha,'padding_needed':pad,'shape_ok':shape}
        model=replay(program,inputs,unused)
        validate_observable_contract(model,inputs)
        text=native(native_path,['--script-control',sha,pad,shape],SEMANTIC_OPS=1,
                    SEMANTIC_OPERANDS=1,PROBE_TICK=tick,PROBE_VOID_RETURN=unused)
        checks=validate_trace(text,pe,code,program,model)
        all_reached.update(s['pc'] for s in model['steps'])
        for branch in model['branches']:
            item=all_branches[branch['pc']];item['deps'].update(branch['dependencies'])
            item['values'].add(branch['value']);item['successors'].add(branch['next'])
        cases.append({'inputs':inputs,'unused_host_return':unused,'tick':tick,
                      'program_return':model['return'],'host_sequence':[h['host'] for h in model['host_calls']],
                      **checks,'trace_sha256':hashlib.sha256(text.encode()).hexdigest()})
        if (sha,pad,shape,unused,tick)==(0,1,1,0,1):
            (args.out/'operand_trace_success.txt').write_text(text)
        if (sha,pad,shape,unused,tick)==(1,0,0,0,1):
            (args.out/'operand_trace_username_reject.txt').write_text(text)
    branches=[{'pc':pc,'dependencies':sorted(v['deps']),'values':sorted(v['values']),
               'successors':sorted(v['successors'])} for pc,v in sorted(all_branches.items())]
    write_listing(args.out/'main_program.txt',program,padding,set(program)-all_reached)
    report={'scope':'complete main logical bytecode under explicit native-host contracts; not complete original runtime or acceptance',
            'binary_sha256':EXPECTED_HASH,'bytecode_sha256':hashlib.sha256(code).hexdigest(),
            'all_assertions_passed':True,'real_credential_searches':0,'DES_SHA_executions':0,
            'block_map_tests':maps,'dumps':dumps,'constant_pool':pool,
            'constant_pool_tests':pool_tests,'operand_reader_tests':operand_tests,
            'initialization_contract':'original main clears 24 64-bit locals before VM entry; no other register is assumed initialized',
            'unmodeled_host_returns':'arbitrary 64-bit values; every corresponding static HOST is immediately followed by DROP',
            'observable_properties_checked':'SHA failure exits before KDF; otherwise exactly three cipher calls; optional key padding; counter 0,1,2,3; shape selects output and return',
            'static_instruction_count':len(program),'logical_blocks':105,
            'reachable_instruction_count_in_contract_model':len(all_reached),
            'unreachable_instruction_PCs_in_contract_model':sorted(set(program)-all_reached),
            'total_unused_padding_bytes':sum(p['size'] for p in padding),
            'branch_dependencies':branches,'cases':cases,
            'global_original_runtime_coverage':'INCOMPLETE',
            'global_classification':'D',
            'original_credential_acceptance_demonstrated':False}
    (args.out/'controller_slice_tests.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({'assertions_passed':True,'static_instructions':len(program),
                      'reached_under_contracts':len(all_reached),'cases':len(cases),
                      'branch_dependencies':branches},indent=2))

if __name__=='__main__':
    main()
