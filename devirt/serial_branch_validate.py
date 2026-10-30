"""JACK XXXIV: native observations versus uninterrupted semantic execution."""
import argparse,copy,hashlib,json
import pefile
from .serial_windows import WindowSerialVMState
from .serial_continuous_validate import ROOT,read,compare_events,require_complete_capture
from .serial_scheduler_validate import compact_comparison
from pafet_state_contract import load_verified,require
from pafet_state_compare import compare

OUT=ROOT/'jack_xxxiv_evidence'


def candidate(entry,depth):
    s=WindowSerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')))
    steps=[];failure=None
    try:
        for _ in range(depth):steps.append(copy.deepcopy(s.step()))
    except ValueError as error:failure=str(error)
    return s,steps,failure


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output',type=__import__('pathlib').Path,default=OUT/'validation.json')
    args=ap.parse_args();corpus=json.loads((OUT/'corpus.json').read_bytes())
    for path,sha in corpus['artifacts'].items():load_verified(ROOT/path,sha)
    rows=[];negative=[]
    for case in corpus['cases']:
        folder=ROOT/case['path'];manifest=require_complete_capture(folder)
        entry=read(folder/'frame_00.entry.json.gz')
        state,steps,failure=candidate(entry,case['depth'])
        blocked=case.get('expected')=='unsupported-eleventh'
        if blocked and failure and failure.startswith('Unknown opcode/body association '):
            state.record('unsupported_handler_entry',int(failure.rsplit(' ',1)[1],16))
        if failure is None and case['depth']==7:
            try:state.dispatch_next()
            except ValueError as error:failure=str(error)
        # Candidate and all its effects exist before any observation is opened.
        oracle=read(folder/'frame_00.trace.json.gz')
        native=compare(entry,oracle)
        semantic=compare_events(entry,state.events,oracle)
        terminal=bool(semantic['boundaries']) and semantic['boundaries'][-1]['native_instructions']==len(oracle['trace'])
        passed=failure is None and native['all_match'] and semantic['all_events_match'] and terminal
        stopped=blocked and len(steps)==10 and failure is not None and native['all_match'] and semantic['all_events_match'] and terminal
        row=dict(case=case['path'],run_id=manifest['run_id'],status='EXPECTED_UNSUPPORTED' if stopped else 'PASS' if passed else 'PARTIAL',
                 depth_requested=case['depth'],steps=steps,unsupported=failure,
                 native=native,semantic=compact_comparison(semantic),terminal_boundary_matches=terminal,
                 level_C=passed,final_pc=state.peek(1)&0xffffffff,final_sp=state.peek(2)&0xffffffff,
                 jobs=list(map(hex,state.jobs)),callbacks=state.callbacks,remaps=state.remaps,rekeys=state.rekeys)
        rows.append(row)
        if not negative and passed:
            index=next(i for i,e in enumerate(state.events) if e['name']=='opcode_core')
            for label,region,offset in [('key',0,0x20),('queue key',0,0xac8),('queue count',0,0xad0),
                                         ('encoded control',0,0xf8),('dispatch entry',next(i for i,r in enumerate(state.roots) if r['role']=='dispatch table'),0)]:
                bad=copy.deepcopy(state.events);at,data=bad[index]['regions'][region]
                altered=bytearray(data);altered[offset]^=1;bad[index]['regions'][region]=(at,bytes(altered))
                result=compare_events(entry,bad,oracle)
                require(not result['all_events_match'],'One-byte corruption escaped comparison','negative-control')
                negative.append(dict(field=label,first_divergence=result['first_divergence']))
        print(folder.name,row['status'],'virtual',len(steps),'native',native['instructions_compared'],'remaps',len(state.remaps),'failure',failure,flush=True)
    accepted=[r for r in rows if r['level_C']]
    deep=[r for r in accepted if len(r['steps'])>=7]
    success=len({r['run_id'] for r in deep})>=3 and all(r['status'] in ('PASS','EXPECTED_UNSUPPORTED') for r in rows)
    sources=['devirt/serial_branch.py','devirt/serial_windows.py','devirt/serial_continuous.py','devirt/serial_depth.py','devirt/serial_alu.py','devirt/serial_regions_xxxiii.py',
             'devirt/serial_branch_validate.py','devirt/serial_scheduler.py','devirt/serial_remap.py',
             'scripts/pafet_native_step_capture.py','scripts/pafet_state_contract.py',
             'scripts/pafet_state_replay.py','scripts/pafet_state_compare.py']
    report=dict(status='PASS' if success else 'PARTIAL',rows=rows,negative_controls=negative,
                max_continuous_depth=max((len(r['steps']) for r in accepted),default=0),
                independent_processes=len({r['run_id'] for r in deep}),
                integrated_remap_processes=sum(bool(r['remaps']) for r in accepted),
                source_sha256={p:hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in sources},
                scope='Finite natural Windows pass8 paths; original x64 Level A is separate from semantic Level C. Complete declared virtual roots at named boundaries; no whole-process or universal equivalence.')
    args.output.write_bytes((json.dumps(report,indent=2)+'\n').encode())
    require(success,'Required depth cases did not all close','coverage')


if __name__=='__main__':main()
