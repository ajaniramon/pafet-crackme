"""Summarize proved depth, finite kernel coverage and capture provenance."""
import hashlib,json,pathlib,sys
ROOT=pathlib.Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT))
from devirt.serial_jobs_xxxii import JOBS,TAILS
from devirt.serial_regions_xxxiii import REGIONS
from devirt.serial_depth_validate import candidate
from devirt.serial_continuous_validate import read,compare_events
from pafet_state_contract import require
OUT=ROOT/'jack_xxxiii_evidence'


def write(name,value):
    (OUT/name).write_bytes((json.dumps(value,indent=2)+'\n').encode())


def main():
    report=json.loads((OUT/'validation.json').read_bytes())
    require(report['status']=='PASS','Depth validation incomplete','coverage')
    rows=report['rows'];accepted=[r for r in rows if r['level_C']]
    old=json.loads((ROOT/'jack_xxxii_evidence/kernel_coverage.json').read_bytes())
    observed={int(label,16) for row in rows for label in row['jobs']} & JOBS.keys()
    union=observed|{int(label,16) for label in old['observed_labels']}
    missing=JOBS.keys()-union
    def leaves(tree):
        if 'condition' in tree:return leaves(tree['yes'])+leaves(tree['no'])
        return [tree]
    edges=[]
    for label,kernel in JOBS.items():edges.append((hex(label),kernel))
    for label,tail in TAILS.items():edges.extend((hex(label),leaf) for leaf in leaves(tail['tree']))
    incoming={hex(target):[dict(source=label,selector=kernel.get('selector'),replaced=kernel.get('replace_with_decoder'))
                           for label,kernel in edges if kernel.get('next_job')==target or target in kernel.get('selector',[])]
              for target in sorted(missing)}
    write('kernel_coverage.json',dict(generated_kernels=len(JOBS),observed_in_new_corpus=len(observed),
          observed_union=len(union),observed_labels=list(map(hex,sorted(union))),unobserved_generated_labels=list(map(hex,sorted(missing))),
          incoming_from_64_kernels_and_four_post_opcode_tails=incoming,
          entry_conditions={'0xaf41e':'Post-opcode job 0xf6105 with ctx+0x348 low two bits != 1; this job is the domain-2 budget-exit target. No such budget exit observed in the new corpus.',
                            '0x2c1549':'Control 0 must select this label; no incoming literal target found in the 64 kernels/four tails. External/computed provenance remains unknown.',
                            '0x32a5e8':'Control 0 must select this label; no incoming literal target found in the 64 kernels/four tails. External/computed provenance remains unknown.'},
          limit='Lack of an incoming literal edge is not whole-program unreachability. Seven other outer jobs, initialization, computed targets and later routes are not fully reconstructed.',
          experiment='Seven independent natural processes; no forced state or synthetic kernel coverage. Bounded search stopped at the depth blocker.'))
    provenance=[]
    for row in rows:
        folder=ROOT/row['case'];m=json.loads((folder/'manifest.json').read_bytes())
        for name,archive in [('collector','collector_source.py'),('contract','contract_source.py')]:
            expected=m[name+'_sha256'];actual=hashlib.sha256((OUT/archive).read_bytes()).hexdigest()
            require(expected==actual,'Collector provenance mismatch','integrity',case=row['case'],source=name)
        provenance.append(dict(case=row['case'],run_id=m['run_id'],collector_sha256=m['collector_sha256'],contract_sha256=m['contract_sha256']))
    require(len({p['run_id'] for p in provenance})==len(provenance),'Process identities repeat','coverage')
    write('source_provenance.json',provenance)
    remaps=[]
    for row in accepted:
        if not row['remaps']:continue
        folder=ROOT/row['case'];entry=read(folder/'frame_00.entry.json.gz')
        state,_,failure=candidate(entry,row['depth_requested'])
        require(failure is None,'Integrated remap candidate changed','coverage')
        events=[e for e in state.events if e['name'] in ('remap_entry','remap_exit')]
        comparison=compare_events(entry,events,read(folder/'frame_00.trace.json.gz'))
        require(comparison['all_events_match'],'Integrated remap roots differ','model')
        data=events[0]['regions'][0][1]
        u=lambda at,size=8:int.from_bytes(data[at:at+size],'little')
        remaps.append(dict(case=row['case'],virtual_pc=events[0]['pc'],fetch_count=u(0x11e0,4),
                           enqueue_counter=u(0xad8),live_key=hex(u(0x260)),
                           enqueue_trigger=(u(0xad8)^u(0x260))&0x1ff,
                           native_call_rva='0x1f0de9',helper_entry_rva='0x2297e0',
                           native_helper_instructions=comparison['boundaries'][1]['native_instructions']-comparison['boundaries'][0]['native_instructions'],
                           boundaries=comparison,
                           subsequent_virtual_cores=sum(e['name']=='opcode_core' for e in state.events[state.events.index(events[1])+1:])))
    write('remap_integration.json',remaps)
    opcodes=sorted({s['opcode'] for r in accepted for s in r['steps']})
    dynamic_bindings=sorted({int(s['native_body'],16) for r in rows for s in r['steps']})
    write('status.json',dict(baseline_commit='735a747a128e3688b1aedf3e699e414e5c6fa907',
          consecutive_instructions=report['max_continuous_depth'],distinct_opcodes=opcodes,
          five_or_more_processes=report['independent_processes'],six_instruction_processes=sum(len(r['steps'])==6 for r in accepted),
          natural_integrated_rebuild_processes=report['integrated_remap_processes'],
          new_native_instruction_observations=sum(r['native']['instructions_compared'] for r in rows),
          accepted_continuous_native_observations=sum(r['native']['instructions_compared'] for r in accepted),
          accepted_virtual_instruction_instances=sum(len(r['steps']) for r in accepted),
          accepted_memory_boundaries=sum(len(r['semantic']['boundaries']) for r in accepted),
          generated_kernels=64,observed_generated_kernels=len(union),remaining_outer_states=7,
          newly_supported_outer_state='0x2e0073',
          xor_observed_domains=sorted({REGIONS[int(s['native_body'],16)]['domain'] for r in accepted for s in r['steps'] if s['opcode']==41}),
          observed_handler_bindings=list(map(hex,dynamic_bindings)),
          state_matrix=dict(User='unchanged: logical program IR; selected native mechanisms only',
                            Serial='PARTIAL: six continuous instructions, four opcodes, two integrated natural rebuilds; next opcode 0x1a unresolved',
                            SHA='unchanged: functional behavior and initialization; virtual program not recovered',
                            Hex='unchanged: literal executor for finite validated corpus; compact semantics partial'),
          next='Recover opcode 0x1a at PC20, helper 1ed270 and deferred request helper 1f10a0, then pending-queue wrapper return and autonomous scheduling.'))
    print('PASS: depth',report['max_continuous_depth'],'kernel coverage',len(union),'of',len(JOBS),'integrated rebuilds',report['integrated_remap_processes'])


if __name__=='__main__':main()
