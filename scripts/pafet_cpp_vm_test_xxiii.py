#!/usr/bin/env python3
"""Verify the compiled original-bytecode path against decoded native states.

Exports minimal, compressed reference projections from the prior full traces
on first use. Those are comparison data only; the C++ interpreter receives
the PE, username and initial untouched registers, never captured instructions.
"""
import argparse,gzip,hashlib,json,pathlib,struct,subprocess
import pefile
from pafet_materialize_xxiii import materialize

ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'

def references(source):
    dest=OUT/'reference_traces';dest.mkdir(exist_ok=True)
    for path in sorted(source.glob('*.jsonl.gz')):
        label=path.name.split('.')[0];summary=json.loads((source/(label+'.summary.json')).read_text())
        records=[];sha=hashlib.sha256(path.read_bytes()).hexdigest()
        with gzip.open(path,'rt') as f:
            for line in f:
                e=json.loads(line)
                if e['kind'] in ('handler_state','core_state'):
                    records.append({k:e[k] for k in ('kind','step','pc','stack','registers')})
                elif e['kind']=='handler_enter':
                    records.append({k:e[k] for k in ('kind','step','raw_op','entry')})
                elif e['kind']=='memory' and e['op']==6:
                    records.append(e)
        (dest/(label+'.jsonl.gz')).write_bytes(gzip.compress(('\n'.join(json.dumps(x,separators=(',',':')) for x in records)+'\n').encode(),mtime=0))
        summary['reference_projection']={'source_gzip_sha256':sha,
            'scope':'Decoded PC, stack, 256 registers, logical opcode and physical entry; omitted native encoding/guards.'}
        (dest/(label+'.summary.json')).write_text(json.dumps(summary,indent=2)+'\n')
    return dest

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--import-references',type=pathlib.Path);ap.add_argument('--references',type=pathlib.Path,default=OUT/'reference_traces');args=ap.parse_args()
    if args.import_references:args.references=references(args.import_references)
    subprocess.run(['sh',str(ROOT/'src/build_original_vm_xxiii.sh')],check=True)
    exe=OUT/'build/original_vm_xxiii';results=[]
    for path in sorted(args.references.glob('*.jsonl.gz')):
        label=path.name.split('.')[0];summary=json.loads((args.references/(label+'.summary.json')).read_text())
        es=[json.loads(x) for x in gzip.open(path,'rt')]
        pre={e['step']:e for e in es if e['kind']=='handler_state'};post={e['step']:e for e in es if e['kind']=='core_state'}
        op={e['step']:e['raw_op'] for e in es if e['kind']=='handler_enter'}
        initial=OUT/'build'/f'{label}_initial.bin';initial.write_bytes(struct.pack('<256Q',*pre[1]['registers']))
        trace=OUT/'build'/f'{label}_cpp.jsonl'
        r=subprocess.run([str(exe),str(ROOT/'pafet.bin'),summary['input_hex'],str(trace),str(initial)],check=True,capture_output=True,text=True)
        events=[json.loads(x) for x in trace.read_text().splitlines()]
        assert len(events)==len(pre)
        for e in events:
            step=e['step'];assert e['opcode_pc']+1==pre[step]['pc'] and e['opcode']==op[step],(label,step,'decode')
            if step in post:
                assert e['post_core_pc']==post[step]['pc'] and e['stack']==post[step]['stack'] and e['registers']==post[step]['registers'],(label,step,'post')
            if step+1 in pre:
                assert e['next_opcode_pc']+1==pre[step+1]['pc'] and e['stack']==pre[step+1]['stack'] and e['registers']==pre[step+1]['registers'],(label,step,'next')
        expected=summary.get('comparison_output_hex',summary['stdout'].split('SOL-OUTPUT ')[1].split('\n')[0])
        assert r.stdout.splitlines()[0]=='OUTPUT '+expected,(label,r.stdout,expected)
        actual_outputs=[e['hex'] for e in es if e['kind']=='memory' and e['op']==6]
        if actual_outputs:assert actual_outputs[-1]==expected
        results.append({'case':label,'steps':len(events),'core_post_states':len(post),'all_decoded_states_match':True,
            'native_output_hex':expected,'cpp_output_hex':expected,'initial_registers_are_only_capture_input':True,
            'cpp_trace_sha256':hashlib.sha256(trace.read_bytes()).hexdigest()})
        print(label,len(events),'C++ bytecode interpreter: all projected states + output match',flush=True)
    pe=pefile.PE(str(ROOT/'pafet.bin'));blob=pe.get_data(0x3e5020,1752);materializer=[]
    for mode,period,current in [('zero',0,0),('nonzero',0,0),('nonzero',24,17)]:
        dest=OUT/'build'/f'cpp_materialized_{mode}_{period}.bin'
        subprocess.run([str(exe),'--dump-bytecode',str(ROOT/'pafet.bin'),str(dest),str(period),str(current),mode],check=True)
        shadow=bytes(1752) if mode=='zero' else bytes((i*37+11)&255 for i in range(1752));expected=bytearray(1752)
        for block in range(73):
            lo,data=materialize(blob,block,shadow,period=period,current=current);expected[lo:lo+len(data)]=data
        actual=dest.read_bytes();assert actual==expected
        materializer.append({'mode':mode,'period':period,'current':current,'all_1752_bytes_match':True,'sha256':hashlib.sha256(actual).hexdigest()})
    assert results
    (OUT/'cpp_vm_differential.json').write_text(json.dumps({'cases':results,'materializer':materializer,
        'functional_writer_linked':False,'captured_ir_used_as_program':False,
        'contract':'Logical decoded states only; native encoded state, dispatcher scheduling and guards not fully ported.'},indent=2)+'\n')

if __name__=='__main__':main()
