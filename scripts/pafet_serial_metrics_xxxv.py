"""Finite proof metrics, cumulative domain coverage and rejected-run diagnostics."""
import hashlib,json,pathlib,sys
ROOT=pathlib.Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT))
from devirt.serial_program_validate import candidate
from devirt.serial_continuous_validate import read
from devirt.serial_regions_xxxv import REGIONS
from devirt.serial_jobs_xxxii import JOBS
from pafet_state_contract import require
OUT=ROOT/'jack_xxxv_evidence'


def write(name,value):(OUT/name).write_bytes((json.dumps(value,indent=2)+'\n').encode())


def main():
    report=json.loads((OUT/'validation.json').read_bytes());require(report['status']=='PASS','Proof incomplete','coverage')
    rows=report['rows'];accepted=[r for r in rows if r['level_C']]
    progress=json.loads((OUT/'progress.json').read_bytes())
    old=json.loads((ROOT/'jack_xxxiv_evidence/status.json').read_bytes())
    current={int(s['native_body'],16) for r in accepted for s in r['steps']}
    previous={int(p,16) for p in old['observed_handler_bindings']}
    # XXXIV's union already covers the pre-existing four-domain XOR evidence
    # through its earlier regressions; retain those historical bindings too.
    for operation in ('xxxii','xxxiii'):
        p=ROOT/f'jack_{operation}_evidence/validation.json'
        for row in json.loads(p.read_bytes())['rows']:
            if row.get('status')=='PASS':previous.update(int(s['native_body'],16) for s in row.get('steps',[]))
    cumulative=(current|previous)&REGIONS.keys()
    domains={}
    for body in sorted(cumulative):
        spec=REGIONS[body];domains.setdefault(hex(spec['opcode']),[]).append(spec['domain'])
    domains={op:sorted(set(values)) for op,values in domains.items()}
    oldkernels=json.loads((ROOT/'jack_xxxiv_evidence/kernel_coverage.json').read_bytes())
    observed={int(job,16) for row in accepted for job in row['jobs']} & JOBS.keys()
    union=observed|{int(v,16) for v in oldkernels['observed_labels']}
    write('coverage.json',dict(new_verified_bindings=len(current),cumulative_verified_bindings=len(cumulative),static_bindings=len(REGIONS),
          cumulative_domains=domains,unverified_bindings=[dict(rva=hex(b),opcode=s['opcode'],domain=s['domain']) for b,s in REGIONS.items() if b not in cumulative],
          generated_kernels=len(JOBS),observed_generated_kernels=len(union),observed_labels=list(map(hex,sorted(union))),
          unobserved_generated_labels=list(map(hex,sorted(JOBS.keys()-union))),scope='Finite complete prefixes only. Rejected capture contributes no verified binding/kernel coverage.'))
    provenance=[]
    for row in rows:
        manifest=json.loads((ROOT/row['case']/'manifest.json').read_bytes())
        for key,file in [('collector_sha256','collector_source.py'),('contract_sha256','contract_source.py')]:
            require(hashlib.sha256((ROOT/'jack_xxxiii_evidence'/file).read_bytes()).hexdigest()==manifest[key],'Capture source differs','integrity')
        provenance.append(dict(case=row['case'],run_id=manifest['run_id'],status=row['status'],collector_sha256=manifest['collector_sha256'],contract_sha256=manifest['contract_sha256']))
    require(len({p['run_id'] for p in provenance})==len(provenance),'Repeated process identity','coverage')
    write('source_provenance.json',provenance)
    rejected=next(r for r in rows if r['status']=='REJECTED_INCOMPLETE')
    entry=read(ROOT/rejected['case']/'frame_00.entry.json.gz');state,steps,failure=candidate(entry,17)
    counter=state.u(0xad8);predicate=((-1003*counter)^state.u(0xac8,4))&0xfff
    write('counterexamples.json',dict(scheduler_exception=dict(case=rejected['case'],status='REJECTED_INCOMPLETE',
          completed_candidate_steps=len(steps),virtual_pc=state.peek(1)&0xffffffff,reason=failure,
          enqueue_counter=counter,throw_predicate=predicate,throws=counter==1 or predicate==31,
          observed_native_instructions=rejected['observed_native_prefix'],terminal=rejected['terminal'],
          prefix_root_diagnostic_match=rejected['prefix_diagnostic']['all_events_match'],
          treatment='Preserved, rejected as a complete proof, not repaired or included in maximum-depth/kernel/domain counts.'),
          unsupported_eighteenth=dict(opcode='0x16',virtual_pc=1753,decoded_pc=1754,executed=False,
                cases=[r['case'] for r in accepted if r['executed_opcodes']==17]),
          synthetic_controls=['nonzero sign-extension values/zero-width masking','nonzero/signed callback values','TLS-frame tag corruption','missing TLS input byte','unbalanced TLS-depth unwind','unsupported callback ID','one-byte context/queue/TLS/host-index comparison changes'],
          scope='Model guard controls are synthetic. No natural exception/guard-failure delivery equivalence is claimed.'))
    maximum=report['maximum_verified_prefix']
    write('status.json',dict(baseline_commit='5d9b29767feb32520548c63e53ba5c2741026974',maximum_verified_prefix=maximum,
          independent_maximum_depth_processes=sum(r['executed_opcodes']==maximum for r in accepted),
          accepted_prefix_processes=len(accepted),rejected_capture_attempts=len(rows)-len(accepted),
          native_instruction_observations=sum(r['native']['instructions_compared'] for r in accepted),
          semantic_instruction_instances=sum(len(r['steps']) for r in accepted),semantic_memory_boundaries=sum(len(r['semantic']['boundaries']) for r in accepted),
          natural_remap_processes=sum(bool(r['remaps']) for r in accepted),distinct_implemented_opcodes=progress['implemented_opcodes'],
          virtual_pcs_observed=progress['distinct_virtual_pcs_observed'],verified_executed_pcs=progress['distinct_pcs_executed_in_candidate'],
          known_branch_destinations=progress['known_branch_destinations'],explored_units=progress['explored_materialization_units'],
          observed_kernels=len(union),total_generated_kernels=64,pending_outer_states=7,
          global_progress_percentage=None,instructions_remaining=None,reason=progress['reason'],
          VM_status=dict(User='unchanged: logical program IR and selected native mechanisms',Serial='PARTIAL: seventeen-instruction prefix, callback/TLS protocol, partial native-derived CFG',SHA='unchanged: functional digest and initialization evidence; virtual program unknown',Hex='unchanged: finite literal execution proof; compact semantics partial'),
          source_sha256={p:hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in ['scripts/pafet_serial_graph_xxxv.py','scripts/pafet_serial_metrics_xxxv.py','scripts/pafet_serial_audit_xxxv.py','scripts/pafet_serial_arithmetic_xxxv.py']}))
    print('PASS: maximum',maximum,'native',sum(r['native']['instructions_compared'] for r in accepted),'bindings',len(cumulative),'/',len(REGIONS),'kernels',len(union),'/',len(JOBS))


if __name__=='__main__':main()
