#!/usr/bin/env python3
"""Verify the recovered and regenerated evidence, without historical totals."""
import gzip,hashlib,json,pathlib
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
    assert len(materializer['results'])==3 and all(x['blocks']==73 and x['all_1752_bytes_match_after_every_call'] for x in materializer['results'])
    oracle=read('oracle_attribution.json')['vectors'];assert len(oracle)==12
    assert all(x['historical_oracle_result']['ok'] and int(x['rax_after'],16)==int(x['captured_rax_after'],16) and not x['output_store_events'] for x in oracle)
    drops=read('drop_core_differential.json');assert drops['cases']==12 and drops['all_match']
    assert all(x['context_8192_matches'] and x['encoded_stack_8192_matches'] and x['rax_matches'] and not x['whole_handler_continuation_ported'] for x in drops['results'])
    writer=read('writer_differential.json');assert writer['cases']==108 and writer['all_match'] and not writer['expected_output_uses_f_user_formula']
    assert all(x['all_five_registers_match'] and x['object_and_buffer_match'] and len(x['stores'])==1 and x['stores'][0]['rip']=='0x140048a3a' for x in writer['results'])
    ir=read('original_program_ir.json');assert ir['instructions']==339 and ir['physical_blocks']==73
    for node in ir['nodes']:
        assert code[node['opcode_pc']]==node['encoded_opcode']
        for operand in node['reader_events']:assert code[operand['pc']:operand['pc']+operand['width']].hex()==operand['encoded_hex']
    abstract=read('abstract_program.json');assert abstract['original']['reachable_instructions']==334 and not abstract['original']['block54_reachable']
    assert abstract['model_only_positive_control']['block54_reachable'] and abstract['model_only_positive_control']['reachable_instructions']==339
    gcc=read('windows_differential.json');msvc=read('windows_msvc_differential.json');cpp=read('cpp_vm_differential.json');decoder=read('decoder_differential.json')
    assert gcc['all_checks_pass'] and msvc['all_checks_pass'] and len(gcc['cases'])==len(msvc['cases'])==len(cpp['cases'])==len(decoder['captures'])==13
    assert gcc['total_steps']==msvc['total_steps']==sum(x['steps'] for x in cpp['cases'])==sum(x['operations'] for x in decoder['captures'])
    assert gcc['native_targets_union']==msvc['native_targets_union']
    assert not cpp['functional_writer_linked'] and not cpp['captured_ir_used_as_program']
    refs=steps=posts=stores=0;targets=set()
    for path in sorted((OUT/'reference_traces').glob('*.jsonl.gz')):
        label=path.name.split('.')[0];summary=json.loads(path.with_name(label+'.summary.json').read_text())
        events=[json.loads(l) for l in gzip.open(path,'rt')]
        pre=[x for x in events if x['kind']=='handler_state'];post=[x for x in events if x['kind']=='core_state']
        assert [x['step'] for x in pre]==list(range(1,len(pre)+1)) and pre[0]['registers'][:16]==[0]*16
        targets.update(x['entry'] for x in events if x['kind']=='handler_enter')
        expected=next(x for x in cpp['cases'] if x['case']==label)
        assert expected['steps']==len(pre) and expected['core_post_states']==len(post) and expected['all_decoded_states_match']
        native=OUT/'windows'/path.name
        assert hashlib.sha256(native.read_bytes()).hexdigest()==summary['reference_projection']['source_gzip_sha256']
        ns=json.loads(native.with_name(label+'.summary.json').read_text())
        assert ns['collector_sha256']==hashlib.sha256((ROOT/'scripts/pafet_windows_capture_xxiii.py').read_bytes()).hexdigest()
        natives=[json.loads(l) for l in gzip.open(native,'rt')]
        count=sum(x['kind']=='store_after' for x in natives);stores+=count
        assert count==len(bytes.fromhex(summary['input_hex']))
        refs+=1;steps+=len(pre);posts+=len(post)
    assert refs==13 and steps==gcc['total_steps'] and len(targets)==gcc['native_target_count']
    assert posts+len(gcc['missing_core_post_snapshots'])==steps
    assert [x['sha256'] for x in cpp['materializer']]==[x['sha256'] for x in materializer['results']]
    assert [x['extent_bytes'] for x in read('handler_cfg.json')]==[3593,3717,3717,3586,3705]
    coverage=read('dispatch_coverage_windows.json')
    assert coverage['invocations']==steps and coverage['native_target_count']==len(targets)
    assert coverage['observed_table_slots']==gcc['pairs_observed']==248
    assert coverage['slots_with_multiple_targets']==gcc['pairs_with_multiple_targets']
    assert sum(x['resolver_roots']+x['inline_call_r9_invocations'] for x in coverage['captures'])==steps
    assert not coverage['helper_invocations_in_denominator']
    report={'all_checks_pass':True,'original_sha256':PE_HASH,'materialized_bytes':1752,'materialized_blocks':73,
        'full_oracle_replays':12,'drop_core_native_state_cases':12,'writer_native_cases':108,
        'windows_executions':13,'logical_steps_compared':steps,'core_post_states_compared':posts,
        'core_post_snapshots_unavailable':steps-posts,'direct_store_sequences_observed':stores,
        'static_logical_instructions':339,'reachable_under_abstract_contract':334,
        'observed_native_targets':len(targets),'pairs_observed':gcc['pairs_observed'],
        'pairs_with_multiple_targets':gcc['pairs_with_multiple_targets'],
        'cpp_compilers':['MSVC Windows','GCC Linux'],'whole_five_handler_wrappers_ported':0,
        'historical_linux_traces_recovered':False,'git_commands_or_remote_mutations':0}
    (OUT/'verification.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':main()
