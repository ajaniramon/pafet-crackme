"""Regenerate code; compare native Windows states, IR, original model and C++.

Run on Linux/WSL with GCC and jack_xxiii_evidence/requirements.txt installed.
python -m devirt.validate
"""
import copy
import dataclasses
import gzip
import hashlib
import json
import pathlib
import random
import struct
import subprocess
import sys
from .__main__ import generate
from .uservm import ROOT, Decoder, lift_decoder
from .ir import State, execute, evaluate, optimize
from .cpp import emit
import pefile

OUT = ROOT/'jack_xvii_evidence'
BUILD = OUT/'build'


def digest(path): return hashlib.sha256(path.read_bytes()).hexdigest()


def compile_program(source, target):
    subprocess.run(['g++', '-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror', '-I', str(ROOT/'devirt'),
                    str(ROOT/'devirt/driver.cpp'), str(source), '-o', str(target)], check=True)


def run_cpp(exe, data, registers, trace=None):
    initial = BUILD/'initial.bin'; initial.write_bytes(struct.pack('<256Q', *registers))
    args = [str(exe), data.hex(), str(initial)]
    if trace: args.append(str(trace))
    return json.loads(subprocess.check_output(args, text=True))


def snapshot(step, ins, s):
    return {'step': step, 'opcode_pc': ins['pc'], 'opcode': ins['logical_opcode'], 'pc': s.pc,
            'post_core_pc': s.post_core_pc, 'stack': s.stack.copy(), 'registers': s.registers.copy(),
            'working': s.working.hex(), 'output': s.output.hex(), 'index': s.index,
            'result': s.result, 'halted': s.halted}


def validate_native(program, optimized, path):
    label = path.name.split('.')[0]; summary = json.loads(path.with_name(label+'.summary.json').read_bytes())
    assert summary['original_sha256']==program['pe_sha256']
    assert summary['oracle_sha256']=='80a751350c8ed61ab25de6c8e81c2ec1c838af2126fe1eafbf1f89d0518407e7'
    assert summary['jsonl_gzip_sha256']==digest(path),(label,'capture provenance')
    events = [json.loads(line) for line in gzip.open(path, 'rt')]
    pre = {e['step']: e for e in events if e['kind']=='handler_state'}
    post = {e['step']: e for e in events if e['kind']=='core_state'}
    enters = {e['step']: e for e in events if e['kind']=='handler_enter'}
    assert len(pre) == len(enters) and sorted(pre) == list(range(1,len(pre)+1))
    registers = pre[1]['registers']; data = bytes.fromhex(summary['input_hex'])
    ir = State(source=data, registers=registers.copy()); projected = []; covered = set(); observed_edges = set()
    def trace(k, ins, state):
        before = pre[k]; covered.add(ins['pc'])
        if ins['logical_opcode'] != 29: observed_edges.add((ins['pc'],state.pc))
        assert ins['pc']+1 == before['pc'] and ins['logical_opcode']==enters[k]['raw_op'],(label,k,'decode')
        if k in post:
            assert state.stack==post[k]['stack'] and state.registers==post[k]['registers'] and state.post_core_pc==post[k]['pc'],(label,k,'post')
        if k+1 in pre:
            assert state.stack==pre[k+1]['stack'] and state.registers==pre[k+1]['registers'] and state.pc+1==pre[k+1]['pc'],(label,k,'next')
        projected.append(snapshot(k,ins,state))
    execute(program, ir, trace); assert len(projected)==len(pre)
    # Native memory observations are independent of the state decoder's arithmetic.
    native_stores = 0; native_objects = 0
    for event in events:
        k = event.get('step', 0)
        if event['kind']=='working_object':
            before = projected[k-2]['working'] if k>1 else ''
            assert before==event['hex'],(label,k,'native working before host4'); native_objects += 1
        elif event['kind']=='store_after':
            assert bytes.fromhex(projected[k-1]['working'])[event['index']]==event['byte'],(label,k,'native byte store'); native_stores += 1
        elif event['kind'] in ('memory','wrapper_output'):
            assert ir.output.hex()==event['hex'],(label,k,'native output')
    expected = summary.get('comparison_output_hex')
    if expected is None: expected = next(e['hex'] for e in reversed(events) if e['kind']=='wrapper_output')
    assert ir.output.hex()==expected
    trace_path = BUILD/(label+'.cpp.jsonl')
    final = run_cpp(BUILD/'user',data,registers,trace_path)
    cpp = [json.loads(line) for line in trace_path.read_text().splitlines()]
    assert cpp==projected,(label,'IR / generated C++')
    block_steps = []; block_ir = State(source=data, registers=registers.copy())
    execute(optimized, block_ir, lambda k,ins,s:block_steps.append(snapshot(k,ins,s)))
    opt_trace = BUILD/(label+'.optimized.jsonl')
    final_opt = run_cpp(BUILD/'user_optimized',data,registers,opt_trace)
    assert [json.loads(line) for line in opt_trace.read_text().splitlines()]==block_steps
    assert final_opt==final and dataclasses.asdict(ir)==dataclasses.asdict(block_ir)
    assert [projected[x['step']-1] for x in block_steps]==block_steps,(label,'optimizer block states')
    structured_trace = BUILD/(label+'.structured.jsonl')
    structured = run_cpp(BUILD/'user_structured',data,registers,structured_trace)
    assert structured==final and [json.loads(line) for line in structured_trace.read_text().splitlines()]==block_steps,(label,'structured CFG states')
    # Independently compiled pre-existing bytecode interpreter, not the new IR engine.
    original_trace = BUILD/(label+'.original.jsonl')
    result = subprocess.check_output([str(BUILD/'original_model'),str(ROOT/'pafet.bin'),data.hex(),str(original_trace),str(BUILD/'initial.bin')],text=True)
    old = [json.loads(line) for line in original_trace.read_text().splitlines()]
    assert len(old)==len(projected)
    for a,b in zip(old,projected):
        assert all(a[k]==b[k] for k in ('step','opcode_pc','opcode','post_core_pc','stack','registers'))
        assert a['next_opcode_pc']==b['pc']
    assert result.splitlines()[0]=='OUTPUT '+expected
    return {'case':label,'input_hex':data.hex(),'steps':len(pre),'native_post_states':len(post),
            'missing_native_post_steps':sorted(set(pre)-set(post)), 'native_stores':native_stores,'native_working_objects':native_objects,
            'native_projection_and_ir_match':True,'ir_and_generated_cpp_every_step_match':True,
            'optimized_all_block_states_match':True,'existing_bytecode_model_every_step_match':True,
            'structured_cpp_all_block_states_match':True,
            'output_hex':expected,'capture_sha256':digest(path),'summary_sha256':digest(path.with_name(label+'.summary.json')),
            'generated_trace_sha256':digest(trace_path)}, covered, observed_edges


def validate_writer(program):
    from pafet_semantic_probe import IsolatedPE, BASE
    from unicorn import UC_HOOK_MEM_WRITE
    from unicorn.x86_const import UC_X86_REG_RIP
    native = IsolatedPE(pefile.PE(str(ROOT/'pafet.bin')))
    obj = native.alloc(32); host = native.alloc(32); index_ptr = native.alloc(8); buf = native.alloc(2048)
    native.putq(host,obj); native.putq(host+16,index_ptr)
    stores = []
    native.mu.hook_add(UC_HOOK_MEM_WRITE, lambda u,a,p,n,v,d:stores.append((u.reg_read(UC_X86_REG_RIP),p,n,v&255)) if (buf<=p<buf+2048 or obj<=p<obj+16) else None)
    trials = [(index, byte) for index in (0,256) for byte in range(256)]
    trials += [(index,byte) for index in (1,14,15,16,23,24,127,128,255,511,1024) for byte in (0,0x7f,0x80,0xff)]
    transcript = []
    function = program['functions']['host_4']
    for index, byte in trials:
        n = index+1; data = bytes((byte+i*37)&255 for i in range(n))
        # Put the selected byte at index, with a canary after the string.
        data = data[:index]+bytes([byte]); heap_mode = n>=16
        native.mu.mem_write(obj,bytes(32)); native.putq(obj+16,n); native.putq(obj+24,n if heap_mode else 15)
        start = buf if heap_mode else obj
        if heap_mode: native.putq(obj,buf)
        native.mu.mem_write(start,data+b'\xa5'); native.putq(index_ptr,index); stores.clear()
        expected_return = native.call(BASE+0x48960,host,4,0)
        expected_memory = bytes(native.mu.mem_read(start,n+1))
        state = State(working=bytearray(data),index=index); values = {}
        evaluate(function['body'],values,state,program['functions'])
        assert bytes(state.working)+b'\xa5'==expected_memory and values[function['return']]==expected_return
        assert stores==[(BASE+0x48a3a,start+index,1,state.working[index])]
        got = json.loads(subprocess.check_output([str(BUILD/'user'),'--host4',str(index),data.hex()],text=True))
        assert got['working']==state.working.hex() and got['result']==expected_return
        transcript.append((index,byte,expected_return,expected_memory.hex()))
    return {'cases':len(trials),'all_match':True,'oracle':'original pafet.bin x64 at 0x140048960 op4 under Unicorn',
            'comparisons':['entire byte buffer and canary','sign-extended uint64 return','single native store at 0x140048a3a','IR and generated C++'],
            'transcript_sha256':hashlib.sha256(json.dumps(transcript).encode()).hexdigest(),
            'scope':'Valid component objects, SSO and heap; includes all 256 input bytes and index wrap; no console acceptance claim.'}


def validate_synthetic(program, optimized):
    rng = random.Random(0x175117); rows = []
    sizes = [0,1,2,14,15,16,17,23,24,25,31,32,127,128,255,256,257,511]
    for n in sizes:
        data = bytes(rng.getrandbits(8) for _ in range(n)); registers = [rng.getrandbits(64) for _ in range(256)]
        a = State(source=data,registers=registers.copy()); b = copy.deepcopy(a)
        execute(program,a); execute(optimized,b); assert a==b
        raw = run_cpp(BUILD/'user',data,registers); opt = run_cpp(BUILD/'user_optimized',data,registers)
        assert raw==opt
        assert raw['registers']==a.registers and raw['stack']==a.stack and raw['output']==a.output.hex() and raw['index']==a.index and raw['result']==a.result
        rows.append({'bytes':n,'steps':raw['step'],'all_states_match':True})
    return {'seed':'0x175117','cases':rows,'scope':'Model/IR/compiler differential with arbitrary initial registers and binary inputs; not new native whole-VM coverage.'}


def validate_dead_arm():
    decoder = Decoder(pefile.PE(str(ROOT/'pafet.bin'))); decoder.constants[3]=decoder.constants[2]^6
    control = lift_decoder(decoder,'model-only constant C3 mutation'); optimized = optimize(control)
    source = BUILD/'control.cpp'; source.write_text(emit(control)); compile_program(source,BUILD/'control')
    data = b'control'; regs = [0]*256; state = State(source=data); seen = set()
    execute(control,state,lambda k,i,s:seen.add(i['pc'])); other = State(source=data); execute(optimized,other)
    assert state==other and all(pc in seen for pc in (384,387,392,393,394))
    cpp = run_cpp(BUILD/'control',data,regs)
    assert cpp['registers']==state.registers and cpp['stack']==state.stack and cpp['output']==state.output.hex()
    return {'model_only':True,'constant':'C3 = C2 XOR 6','block54_pcs_executed':[384,387,392,393,394],
            'all_static_instructions_visited_in_control':len(seen),
            'scope':'Falsification control for a previously dead arm. No modified PE was written or executed.'}, seen


def negative_controls(program):
    path = ROOT/'jack_xxiii_evidence/windows/alice.jsonl.gz'
    events = [json.loads(line) for line in gzip.open(path,'rt')]
    pre = next(e for e in events if e['kind']=='handler_state')
    store = next(e for e in events if e['kind']=='store_after')
    cases = []
    for name in ('wrong_xor_key','missing_byte_store'):
        mutant = copy.deepcopy(program); body = mutant['functions']['host_4']['body']
        if name=='wrong_xor_key': next(n for n in body if n.get('id')=='key')['value'] ^= 1
        else: mutant['functions']['host_4']['body'] = [n for n in body if n['op']!='store8']
        actual = []; state=State(source=b'alice',registers=pre['registers'].copy())
        execute(mutant,state,lambda k,i,s:actual.append((k,s.working[store['index']])) if k==store['step'] else None)
        assert len(actual)==1 and actual[0][1]!=store['byte']
        cases.append({'mutation':name,'detected_at_native_store_step':store['step'],'native_byte':store['byte'],'mutant_byte':actual[0][1],
                      'scope':'IR-only falsification; original PE and native capture unchanged.'})
    return cases


def validate_unknown_backend():
    decoder=Decoder(pefile.PE(str(ROOT/'pafet.bin')))
    byte=next(i for i in range(256) if decoder.table[i^0x33]^0xeb==2)
    decoder.code=bytes([byte]);unknown=lift_decoder(decoder,'model-only unknown opcode')
    source=BUILD/'unknown.cpp';source.write_bytes(emit(unknown).encode())
    compile_program(source,BUILD/'unknown')
    result=subprocess.run([str(BUILD/'unknown'),''],text=True,capture_output=True)
    assert result.returncode!=0 and 'Unknown semantics' in result.stderr
    return {'model_only':True,'unknown_opcode':2,'compiled_backend_stops':True,'returncode':result.returncode,
            'scope':'Synthetic unproved instruction; no guessed length, output or successor.'}


def main():
    BUILD.mkdir(parents=True,exist_ok=True)
    program, optimized, manifest = generate(ROOT/'pafet.bin',OUT/'generated')
    compile_program(OUT/'generated/user.cpp',BUILD/'user')
    compile_program(OUT/'generated/user.optimized.cpp',BUILD/'user_optimized')
    compile_program(OUT/'generated/user.structured.cpp',BUILD/'user_structured')
    sources = ['main_original_vm_xxiii.cpp','pafet_original_vm_xxiii.cpp','pafet_canonical_bridge_xxiii.cpp','pafet_native_writer_xxiii.cpp','pafet_h3a50_native.cpp']
    subprocess.run(['g++','-std=c++17','-O2','-fno-strict-aliasing',*[str(ROOT/'src'/s) for s in sources],'-o',str(BUILD/'original_model')],check=True)
    cases = []; covered = set(); edges = set()
    paths = sorted((ROOT/'jack_xxiii_evidence/windows').glob('*.jsonl.gz')) + sorted((OUT/'windows').glob('*.jsonl.gz'))
    assert len(paths)>=13,'native traces absent'
    for path in paths:
        row, pcs, observed = validate_native(program,optimized,path); covered |= pcs; edges |= observed; cases.append(row)
        print(row['case'],row['steps'],'native / model / IR / generated C++ PASS',flush=True)
    writer = validate_writer(program); print('writer region',writer['cases'],'original-x64 cases PASS',flush=True)
    synthetic = validate_synthetic(program,optimized)
    control, control_pcs = validate_dead_arm()
    all_pcs = {i['pc'] for b in program['blocks'] for i in b['instructions']}
    report = {'all_checks_pass':True,'pe_sha256':program['pe_sha256'],'static_instructions':len(all_pcs),
              'native_executions':len(cases),'native_logical_steps':sum(c['steps'] for c in cases),
              'native_post_snapshots':sum(c['native_post_states'] for c in cases),'native_instruction_pcs_covered':len(covered),
              'native_instruction_pcs_uncovered':sorted(all_pcs-covered),
              'native_observed_logical_edges':sorted([list(e) for e in edges if e[0]!=e[1] and e[1] in all_pcs]),
              'model_control_and_native_union':len(covered|control_pcs),'cases':cases,'writer_region':writer,
              'synthetic':synthetic,'dead_arm_control':control,'optimization':manifest['optimization'],
              'negative_controls':negative_controls(program),
              'unknown_backend_control':validate_unknown_backend(),
              'compiler':subprocess.check_output(['g++','--version'],text=True).splitlines()[0],
              'validation_source_sha256':digest(pathlib.Path(__file__)),
              'limitations':['Native captures use the two-byte gate variant.', 'Native encoded state, flags, guards and scheduling are excluded.',
                             'Missing post snapshots are listed, never invented.', 'Optimized code is checked at block exits, host effects and final state.',
                             'No universal equivalence or complete four-VM devirtualization claim.']}
    (OUT/'validation.json').write_bytes(json.dumps(report,indent=2).encode()+b'\n')
    print('PASS',report['native_executions'],'native executions;',report['native_logical_steps'],'logical steps;',len(covered),'static PCs covered',flush=True)


if __name__ == '__main__': main()
