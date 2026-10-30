"""JACK XXXII: independent native replay and autonomous scheduler evidence."""
import argparse,copy,json,pathlib,hashlib
import pefile
from .serial_scheduler import ScheduledSerialVMState
from .serial_continuous import SerialVMState,capture_roots,UnsupportedSerialRoute
from .serial_continuous_validate import ROOT,read,compare_events,require_complete_capture
from .serial_remap import rebuild
from pafet_state_contract import require,validate_entry,load_verified
from pafet_state_compare import compare

OUT=ROOT/'jack_xxxii_evidence'
def candidate(entry,kind):
    s=ScheduledSerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')));steps=[];failure=None;work=None
    try:
        if kind=='four':
            for _ in range(4):steps.append(copy.deepcopy(s.step()))
        else:
            for _ in range(3):
                steps.append(copy.deepcopy(s.step()))
                if s.phase=='outer_dispatch':break
            work=s.dispatch_next()
    except ValueError as error:failure=str(error)
    return s,steps,failure,work

def remap_candidate(entry):
    m,_,_=validate_entry(entry,pefile.PE(str(ROOT/'pafet.bin')))
    s=SerialVMState(m,entry['state']['gprs'][1],pefile.PE(str(ROOT/'pafet.bin')))
    s.runtime_base=entry['base'];s.roots=capture_roots(entry,m,s.pe);s.events=[]
    result=rebuild(s)
    s.record('remap_return',entry['native_return']-entry['base'])
    return s,result

def compact_comparison(result):
    for event in result['boundaries']:
        regions=event.pop('regions')
        event['bytes_compared']=sum(r['size'] for r in regions)
        event['different_bytes']=sum(r['different_bytes'] for r in regions)
        event['region_roles']=[r['role'] for r in regions]
    return result

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--output',type=pathlib.Path,default=OUT/'validation.json');args=ap.parse_args()
    registry=json.loads((OUT/'corpus.json').read_bytes())
    for path,sha in registry['artifacts'].items():load_verified(ROOT/path,sha)
    rows=[];negative=None
    for case in registry['cases']:
        folder=ROOT/case['path'];row=dict(case=case['path'],kind=case['kind'])
        if case['kind'] in ('incomplete','selection-miss'):
            manifest=json.loads((folder/'manifest.json').read_bytes())
            require(manifest['status']!='complete','Rejected capture unexpectedly complete','coverage')
            row.update(status='REJECTED',level_A=False,level_C=False,reason=manifest.get('error'),observed_prefix=sum(f['steps'] for f in manifest['frames']))
            rows.append(row);print(folder.name,'REJECTED',row['reason'],flush=True);continue
        manifest=require_complete_capture(folder);entry=read(folder/'frame_00.entry.json.gz')
        if case['kind']=='remap':
            state,result=remap_candidate(entry);steps=[];failure=None;work=None
        else:state,steps,failure,work=candidate(entry,case['kind']);result=None
        # Observation files are first opened after candidate execution.
        oracle=read(folder/'frame_00.trace.json.gz')
        native=compare(entry,oracle,instruction_budget=case.get('replay_limit'))
        semantic=compare_events(entry,state.events,oracle)
        row.update(native=native,semantic=compact_comparison(semantic),steps=steps,unsupported=failure,work=work,
                   status='PASS' if failure is None and native['all_match'] and semantic['all_events_match'] else 'PARTIAL',
                   run_id=manifest['run_id'],level_C=case['kind']!='remap' and failure is None and semantic['all_events_match'],
                   final_pc=state.peek(1)&0xffffffff,final_sp=state.peek(2)&0xffffffff)
        if case['kind']=='remap':row['remap']=result
        else:
            row.update(jobs=list(map(hex,state.jobs)),callbacks=state.callbacks,remaps=state.remaps,
                       resumed_returns=[dict(rva=hex(e['boundary_rva']),pc=e['pc']) for i,e in enumerate(state.events) if e['name']=='outer_dispatch' and i+1<len(state.events) and state.events[i+1]['name']=='post_wrapper'])
            if negative is None and failure is None:
                bad=copy.deepcopy(state.events);index=next(i for i,e in enumerate(bad) if e['name']=='job_entry')
                at,data=bad[index]['regions'][0];changed=bytearray(data);changed[0xac8]^=1;bad[index]['regions'][0]=(at,bytes(changed))
                negative=compare_events(entry,bad,oracle)
                require(negative['first_divergence']['context_offset']=='0xac8','Queue-key corruption not detected','regression')
                negative=compact_comparison(negative)
        rows.append(row);print(folder.name,row['status'],'native',native['instructions_compared'],'steps',len(steps),flush=True)
    four=[r for r in rows if r['kind']=='four' and r['status']=='PASS']
    helpers=[r for r in rows if r['kind']=='remap' and r['status']=='PASS']
    resumes={r['rva'] for row in rows if row['status']=='PASS' for r in row.get('resumed_returns',[])}
    success=len(four)>=3 and len({r['run_id'] for r in four})==len(four) and len(helpers)>=2 and {'0x22bc87','0x231c09'}<=resumes
    sources=['devirt/serial.py','devirt/serial_continuous.py','devirt/serial_extended.py','devirt/serial_scheduler.py','devirt/serial_remap.py','devirt/serial_jobs_xxxii.py','devirt/serial_scheduler_validate.py','scripts/pafet_serial_jobs_xxxii.py','scripts/pafet_state_contract.py','scripts/pafet_state_replay.py','scripts/pafet_state_compare.py','scripts/pafet_native_step_capture.py']
    report=dict(status='PASS' if success else 'PARTIAL',rows=rows,negative_control=negative,four_instruction_processes=len(four),bounded_remap_processes=len(helpers),resumed_returns=sorted(resumes),
                four_instruction_native_observations=sum(r['native']['instructions_compared'] for r in four),
                source_sha256={p:hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in sources},
                scope='Autonomous scheduler/decoder/handler selection from one before-state. Native replay is an oracle only. Full declared virtual-memory equality at boundaries, not universal or whole-process equivalence.')
    args.output.write_bytes(json.dumps(report,indent=2).encode()+b'\n')
    require(success,'Required scheduler/remap/continuous cases are not all closed','coverage')
if __name__=='__main__':main()
