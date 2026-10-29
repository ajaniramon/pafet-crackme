#!/usr/bin/env python3
"""Compare native Windows projections to the restored C++ interpreter.

Run using Linux/WSL with g++ and the three PE analysis dependencies installed.
Only the initial decoded register bank is supplied to the C++ interpreter;
the PE supplies its program and constants. No recorded IR is executed.
"""
import argparse,collections,gzip,hashlib,json,os,pathlib,struct,subprocess
from pafet_materialize_xxiii import mid,PHI,MUL,MASK
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--exe',type=pathlib.Path);args=ap.parse_args()
    if args.exe:exe=args.exe.resolve()
    else:
        subprocess.run(['sh',str(ROOT/'src/build_original_vm_xxiii.sh')],check=True)
        exe=OUT/'build/original_vm_xxiii'
    results=[];union=set();pairs=collections.defaultdict(set);rootpcs=set();post_missing=[]
    for path in sorted((OUT/'windows').glob('*.jsonl.gz')):
        label=path.name.split('.')[0];summary=json.loads(path.with_name(label+'.summary.json').read_text())
        events=[json.loads(l) for l in gzip.open(path,'rt')]
        pre={e['step']:e for e in events if e['kind']=='handler_state'}
        post={e['step']:e for e in events if e['kind']=='core_state'}
        handlers={e['step']:e for e in events if e['kind']=='handler_enter'}
        assert pre and len(pre)==summary['steps'] and sorted(pre)==list(range(1,len(pre)+1))
        initial=OUT/'build'/f'{label}_windows_initial.bin';initial.write_bytes(struct.pack('<256Q',*pre[1]['registers']))
        trace=OUT/'build'/f'{label}_windows_cpp.jsonl'
        run=subprocess.run([str(exe),str(ROOT/'pafet.bin'),summary['input_hex'],str(trace),str(initial)],check=True,capture_output=True,text=True)
        cpp=[json.loads(l) for l in trace.read_text().splitlines()]
        assert len(cpp)==len(pre),(label,len(cpp),len(pre))
        for e in cpp:
            n=e['step'];a=pre[n];h=handlers[n]
            assert e['opcode_pc']+1==a['pc'] and e['opcode']==h['raw_op'],(label,n,'opcode',e,a)
            assert h['entry']==h['selected_target'],(label,n,'target')
            union.add(h['entry']);pairs[(h['ch'],h['alias'])].add(h['entry'])
            if h['root']:rootpcs.add(h['caller'])
            else:
                ch=(mid(((h['ctx_seed']*MUL)&MASK)^((h['raw_op']*PHI)&MASK)^int(h['ctx_e0']))>>33)&3
                assert ch==h['ch'],(label,n,'inline channel')
            if n in post:
                b=post[n]
                assert (e['post_core_pc'],e['stack'],e['registers'])==(b['pc'],b['stack'],b['registers']),(label,n,'post')
            else:post_missing.append({'case':label,'step':n})
            if n+1 in pre:
                b=pre[n+1]
                assert (e['next_opcode_pc']+1,e['stack'],e['registers'])==(b['pc'],b['stack'],b['registers']),(label,n,'next')
        native=[e for e in events if e['kind']=='wrapper_output'][-1]
        assert run.stdout.splitlines()[0]=='OUTPUT '+native['hex'],(label,'output')
        before=[e for e in events if e['kind']=='store_before'];after=[e for e in events if e['kind']=='store_after']
        assert len(before)==len(after)==len(bytes.fromhex(summary['input_hex']))
        objects={e['step']:e for e in events if e['kind']=='working_object'}
        for i,(a,b) in enumerate(zip(before,after)):
            assert a['index']==b['index']==i and a['step']==b['step'] and a['address']==b['address']
            assert a['store_rip']==0x140048a3a and b['next_rip']==0x140048a3e
            assert b['byte']==bytes.fromhex(native['hex'])[i]
            obj=objects[a['step']];assert obj['buffer']==a['buffer']
            assert int(obj['buffer'],16)+i==int(a['address'],16)
            assert (obj['capacity']>=16)==(obj['size']>=16)
        results.append({'case':label,'input_hex':summary['input_hex'],'steps':len(cpp),'core_post_states':len(post),
            'all_decoded_states_match':True,'actual_store_sequences':len(after),'native_output_hex':native['hex'],
            'cpp_output_hex':native['hex'],'native_targets':len({h['entry'] for h in handlers.values()}),
            'trace_gzip_sha256':hashlib.sha256(path.read_bytes()).hexdigest(),
            'cpp_trace_sha256':hashlib.sha256(trace.read_bytes()).hexdigest()})
        print(label,len(cpp),'native Windows states and output match;',len(after),'store sequences',flush=True)
    assert results
    report={'cases':results,'all_checks_pass':True,'windows_executions':len(results),
        'total_steps':sum(x['steps'] for x in results),'native_targets_union':list(map(hex,sorted(union))),
        'native_target_count':len(union),'pairs_observed':len(pairs),'pairs_with_multiple_targets':sum(len(x)>1 for x in pairs.values()),
        'root_return_pcs':list(map(hex,sorted(rootpcs))),'missing_core_post_snapshots':post_missing,
        'store_validation':'Direct before-sequence and immediate after-store hooks; not single-step.',
        'oracle':'Existing pass8.exe: two SHA-gate bytes differ; user-VM instruction bytes equal original.',
        'functional_writer_linked':False,'captured_ir_used_as_program':False,
        'contract':'Decoded logical PC, stack and 256 registers. Native encoded guards and scheduling not fully ported.'}
    report['compiler_path']='MSVC Windows executable' if exe.suffix=='.exe' else 'g++ Linux executable'
    (OUT/('windows_msvc_differential.json' if exe.suffix=='.exe' else 'windows_differential.json')).write_text(json.dumps(report,indent=2)+'\n')

if __name__=='__main__':main()
