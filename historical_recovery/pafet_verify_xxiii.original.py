#!/usr/bin/env python3
"""Check saved evidence and denominators without executing PE instructions."""
import collections,gzip,hashlib,json,pathlib
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'
PE_HASH='fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'
def read(name):return json.loads((OUT/name).read_text())

def main():
    assert hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest()==PE_HASH
    materializer=read('materializer_differential.json');code=(OUT/'bytecode_1752.bin').read_bytes()
    assert len(code)==1752 and materializer['blocks']==73 and materializer['permute8_native_cases']==256
    assert hashlib.sha256(code).hexdigest()==materializer['canonical_sha256']=='a15f43b7d8afa2b3ea2b4cbb77c5ae740a9b4ccc240fbd49fcb9bd8492d5d815'
    old=(ROOT/'vm_pools_evidence/user_bytecode_canonical_vi.bin').read_bytes()
    assert sum(a==b for a,b in zip(code,old))==materializer['old_canonical_byte_matches']==89
    assert len(materializer['results'])==3
    assert all(x['blocks']==73 and x['all_1752_bytes_match_after_every_call'] for x in materializer['results'])
    oracle=read('oracle_attribution.json')['vectors'];assert len(oracle)==12
    assert all(x['historical_oracle_result']['ok'] and int(x['rax_after'],16)==int(x['captured_rax_after'],16) and not x['output_store_events'] for x in oracle)
    drops=read('drop_core_differential.json');assert drops['cases']==12 and drops['all_match']
    assert all(x['context_8192_matches'] and x['encoded_stack_8192_matches'] and x['rax_matches'] and not x['whole_handler_continuation_ported'] for x in drops['results'])
    writer=read('writer_differential.json');assert writer['cases']==108 and writer['all_match'] and not writer['expected_output_uses_f_user_formula']
    for case in writer['results']:
        assert case['all_five_registers_match'] and case['object_and_buffer_match']
        assert len(case['stores'])==1 and case['stores'][0]['rip']=='0x140048a3a' and case['stores'][0]['size']==1
    ir=read('original_program_ir.json');assert ir['instructions']==339 and ir['physical_blocks']==73
    assert len({x['opcode_pc'] for x in ir['nodes']})==339
    for node in ir['nodes']:
        assert code[node['opcode_pc']]==node['encoded_opcode']
        for operand in node['reader_events']:
            assert code[operand['pc']:operand['pc']+operand['width']].hex()==operand['encoded_hex']
    abstract=read('abstract_program.json');assert abstract['original']['reachable_instructions']==334 and not abstract['original']['block54_reachable']
    assert abstract['model_only_positive_control']['block54_reachable'] and abstract['model_only_positive_control']['reachable_instructions']==339
    cpp=read('cpp_vm_differential.json');assert len(cpp['cases'])==13 and not cpp['functional_writer_linked'] and not cpp['captured_ir_used_as_program']
    assert sum(x['steps'] for x in cpp['cases'])==43826 and sum(x['core_post_states'] for x in cpp['cases'])==43819
    assert all(x['all_decoded_states_match'] and x['native_output_hex']==x['cpp_output_hex'] for x in cpp['cases'])
    assert [x['sha256'] for x in cpp['materializer']]==[x['sha256'] for x in materializer['results']]
    union=set();reference_count=0;refsteps=0
    for path in sorted((OUT/'reference_traces').glob('*.jsonl.gz')):
        first=None;steps=[]
        for line in gzip.open(path,'rt'):
            e=json.loads(line)
            if e['kind']=='handler_state':
                if first is None:first=e
                steps.append(e['step'])
            if e['kind']=='handler_enter':union.add(e['entry'])
        assert first and first['registers'][:16]==[0]*16
        assert steps==list(range(1,len(steps)+1))
        reference_count+=1;refsteps+=len(steps)
    assert reference_count==13 and refsteps==43826 and len(union)==60
    coverage=read('dispatch_coverage.json');assert coverage['observations']==34516 and coverage['pairs_union']==248 and coverage['native_target_count']==59
    assert coverage['main_catalog_native_target_count']==35 and len(coverage['fresh_native_addresses_outside_main_catalog'])==24
    assert all(coverage['same_length_family_sequences_equal'].values())
    assert sum(x['root_resolver_calls'] for x in coverage['captures'])==17910
    assert sum(x['inline_calls'] for x in coverage['captures'])==16606
    assert sum(len(x['channel_requires_root_pc_for_cases']) for x in coverage['captures'])==20
    for case in coverage['captures']:
        assert case['all_root_lookup_returns_match'] and case['all_inline_r9_targets_and_budget_decrements_match'] and case['all_runtime_aliases_match']
        assert case['native_handler_entries']==case['native_handler_returns']+case['native_handler_exception_unwinds']
        balance=case['tracked_call_balance'];assert balance['open']==0 and balance['entries']==balance['returns']+balance['unwinds']+balance['tails']
    catalog=json.loads(gzip.decompress((OUT/'dispatch_catalog.json.gz').read_bytes()));obs=catalog['observations'];index=catalog['pair_index']
    assert len(obs)==34516 and sorted(i for v in index.values() for i in v)==list(range(len(obs)))
    for key,values in index.items():assert all(key==f"{obs[i]['channel']},{obs[i]['alias']}" for i in values)
    multiple=sum(len({obs[i]['native_target'] for i in values})>1 for values in index.values())
    per_case=collections.defaultdict(lambda:collections.defaultdict(set))
    for e in obs:per_case[e['case']][(e['channel'],e['alias'])].add(e['native_target'])
    per_case_multiple={case:sum(len(v)>1 for v in pairs.values()) for case,pairs in per_case.items()}
    assert per_case_multiple['long_a23']==248 and per_case_multiple['control_alice']==185
    steps={(x['case'],x['step']):x for x in obs}
    long=read('long_store_differential.json');assert long['cases_executed']==8 and long['windows_executions']==0
    stores=0
    for case in long['cases']:
        assert case['cpp_output_matches'] and case['outer_wrapper_export_matches_vm_output']
        assert len(case['single_step_stores'])==len(bytes.fromhex(case['user_hex']))
        output=bytes.fromhex(case['native_output_hex'])
        for i,store in enumerate(case['single_step_stores']):
            assert store['index']==i and store['written']==output[i] and store['rip']=='0x140048a3a' and store['next_rip']=='0x140048a3e'
            assert steps[(case['case'],store['step'])]['family']=='host_callback'
            stores+=1
        before=case['export_boundaries'][0];after=case['export_boundaries'][1]
        assert before['rip']==0x140396bbb and after['rip']==0x140396bc0 and before['source_address']==after['source_address']
    assert stores==154
    failure=read('export_before_metadata_fix.json')
    assert not failure['outer_wrapper_export_matches_vm_output'] and failure['wrapper_stdout_output_hex']==''
    fixed=next(x for x in long['cases'] if x['case']=='long_a23')
    assert failure['export_boundaries'][0]['source_address']!=fixed['export_boundaries'][1]['source_address']
    cfg=read('handler_cfg.json');assert [x['extent_bytes'] for x in cfg]==[3593,3717,3717,3586,3705]
    report={'all_checks_pass':True,'original_sha256':PE_HASH,'materialized_bytes':1752,'materialized_blocks':73,
        'full_oracle_replays':12,'drop_core_native_state_cases':12,'writer_native_cases':108,
        'fresh_actual_store_observations':stores,'cpp_reference_executions':13,'logical_steps_compared':43826,
        'core_post_states_compared':43819,'core_post_states_missing_by_exception':7,
        'static_logical_instructions':339,'reachable_under_abstract_contract':334,
        'fresh_native_handler_observations':34516,'fresh_physical_targets':59,'physical_targets_in_combined_cohort':60,
        'pairs_with_multiple_native_targets':multiple,'whole_five_handler_wrappers_ported':0,
        'same_run_pairs_with_multiple_native_targets':per_case_multiple,
        'windows_executions':0,'git_commands_or_remote_mutations':0}
    (OUT/'verification.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))

if __name__=='__main__':main()
