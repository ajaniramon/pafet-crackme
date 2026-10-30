"""JACK XXXV: independent continuous prefixes, including next-entry closure."""
import argparse,copy,hashlib,json,pathlib
import pefile
from .serial_hostcall import HostCallSerialVMState
from .serial_continuous_validate import ROOT,read,compare_events,require_complete_capture
from .serial_scheduler_validate import compact_comparison
from pafet_state_contract import load_verified,require
from pafet_state_compare import compare

OUT=ROOT/'jack_xxxv_evidence'


def candidate(entry,depth,prepare=True):
    s=HostCallSerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')))
    steps=[];failure=None
    try:
        for _ in range(depth):steps.append(copy.deepcopy(s.step()))
        if prepare:s.prepare_next_instruction()
    except ValueError as error:
        failure=str(error)
        if len(steps)==depth and failure.startswith('Unknown opcode/body association '):
            s.record('unsupported_handler_entry',int(failure.rsplit(' ',1)[1],16))
    return s,steps,failure


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--output',type=pathlib.Path,default=OUT/'validation.json');args=ap.parse_args()
    corpus=json.loads((OUT/'corpus.json').read_bytes())
    for path,sha in corpus['artifacts'].items():load_verified(ROOT/path,sha)
    rows=[];negative=[]
    for case in corpus['cases']:
        folder=ROOT/case['path'];entry=read(folder/'frame_00.entry.json.gz')
        state,steps,failure=candidate(entry,case['depth'])
        # Observations are first opened after the entire candidate prefix.
        oracle=read(folder/'frame_00.trace.json.gz')
        semantic=compare_events(entry,state.events,oracle)
        manifest=json.loads((folder/'manifest.json').read_bytes())
        row=dict(case=case['path'],run_id=manifest['run_id'],steps=steps,unsupported_after_prefix=failure,
                 jobs=list(map(hex,state.jobs)),callbacks=state.callbacks,remaps=state.remaps,rekeys=state.rekeys,
                 final_pc=state.peek(1)&0xffffffff,final_sp=state.peek(2)&0xffffffff,
                 next_opcode=state.u(0x4ad,1),declared_roots=state.roots)
        if manifest['status']!='complete':
            require(case.get('expected')=='incomplete','Unexpected incomplete capture','coverage')
            row.update(status='REJECTED_INCOMPLETE',level_C=False,native_A='not-claimed',
                       observed_native_prefix=len(oracle['trace']),terminal=oracle.get('terminal'),
                       prefix_diagnostic=compact_comparison(semantic))
            rows.append(row);print(folder.name,row['status'],failure,flush=True);continue
        require_complete_capture(folder)
        native=compare(entry,oracle)
        terminal=bool(semantic['boundaries']) and semantic['boundaries'][-1]['native_instructions']==len(oracle['trace'])
        expected_stop=failure is None or (failure.startswith('Unknown opcode/body association ') and state.u(0x4ad,1)==case.get('unsupported_next_opcode'))
        passed=len(steps)==case['depth'] and expected_stop and native['all_match'] and semantic['all_events_match'] and terminal
        row.update(status='PREFIX_EQUIVALENT' if passed else 'PARTIAL',level_C=passed,native=native,
                   semantic=compact_comparison(semantic),terminal_boundary_matches=terminal,
                   executed_opcodes=len(steps),next_handler_executed=False)
        rows.append(row)
        if passed and not negative:
            end=next(i for i,e in enumerate(state.events) if e['name']=='opcode_core')
            for label,region,offset in [('key',0,0x20),('control',0,0xf8),('queue',0,0xad0),
                    ('TLS frame',next(i for i,r in enumerate(state.roots) if r['role']=='encoded TLS callback frames'),0),
                    ('host index',next(i for i,r in enumerate(state.roots) if r['role']=='native callback index'),0)]:
                events=copy.deepcopy(state.events[:end+1]);at,data=events[-1]['regions'][region]
                changed=bytearray(data);changed[offset]^=1;events[-1]['regions'][region]=(at,bytes(changed))
                result=compare_events(entry,events,oracle)
                require(not result['all_events_match'],'Corruption escaped comparison','negative-control')
                negative.append(dict(field=label,first_divergence=result['first_divergence']))
        print(folder.name,row['status'],'executed',len(steps),'native',native['instructions_compared'],'failure',failure,flush=True)
    accepted=[r for r in rows if r['level_C']];maximum=max((r['executed_opcodes'] for r in accepted),default=0)
    success=maximum>=11 and len({r['run_id'] for r in accepted if r['executed_opcodes']==maximum})>=3 and all(r['status'] in ('PREFIX_EQUIVALENT','REJECTED_INCOMPLETE') for r in rows)
    sources=['devirt/serial_program_validate.py','devirt/serial_signextend.py','devirt/serial_hostcall.py',
             'devirt/serial_regions_xxxv.py','devirt/serial_scheduler.py','devirt/serial_windows.py','devirt/serial_branch.py',
             'scripts/pafet_native_step_capture.py','scripts/pafet_state_contract.py','scripts/pafet_state_replay.py','scripts/pafet_state_compare.py']
    report=dict(status='PASS' if success else 'PARTIAL',maximum_verified_prefix=maximum,rows=rows,negative_controls=negative,
                source_sha256={p:hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in sources},
                scope='Executed prefix plus its continuations through the next handler entry. Reaching that entry is not executing another opcode. Finite declared-memory equivalence; native x64 replay remains separate.')
    args.output.write_bytes((json.dumps(report,indent=2)+'\n').encode());require(success,'Required prefix proofs not closed','coverage')


if __name__=='__main__':main()
