#!/usr/bin/env python3
"""Lossless fresh-run dispatch audit; physical VAs are never grouped away.

The root caller PC is explicit state. The inline selector's common hash is
not silently assumed to select every dispatcher root channel.
"""
import collections,gzip,hashlib,json,pathlib,struct
from pafet_materialize_xxiii import mid,PHI,MUL,MASK
from pafet_decode_xxiii import runtime_selection

ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'
ROOT_CHANNEL={0x140041187:3,0x140042be5:1,0x140042cb2:2,0x1400479f3:0}

def main():
    groups=json.loads((ROOT/'native_xxiii/handler_classification.json').read_text())['groups']
    types={int(a,16):name for name,values in groups.items() for a in values}
    inline={x+3 for x in json.loads((ROOT/'native_xxiii/probe_inventory.json').read_text())['inline_call_r9_sites']}
    old=json.loads((ROOT/'vm_pools_evidence/usuario_vm_handlers_full.json').read_text())
    old_targets={int(a,16) for a in old['resolved'].values()}
    observations=[];pairs=collections.defaultdict(list);cases=[];sequence={};all_targets=set();all_pairs=set();branches=[]
    paths=sorted((OUT/'native_long').glob('*.jsonl.gz'))
    if not paths:raise SystemExit('No full native captures: extract the native-traces package or run pafet_long_store_xxiii.py first.')
    for path in paths:
        label=path.name.split('.')[0];handlers={};lookups={};pending=None;counts=collections.Counter();helpers=collections.Counter();nreturns=nunwind=0;uniform_mismatches=[];targets=set();pairset=set();start=len(observations);family=[];balance=None
        for line in gzip.open(path,'rt'):
            e=json.loads(line);counts[e['kind']]+=1
            if e['kind']=='helper_enter':helpers[hex(e['entry'])]+=1
            elif e['kind']=='resolver_observation':lookups[e['step']]=e
            elif e['kind']=='handler_enter':handlers[e['id']]=e;pending=e
            elif e['kind']=='native_return' and e['id'] in handlers:nreturns+=1
            elif e['kind']=='exception_unwind' and e['id'] in handlers:nunwind+=1
            elif e['kind']=='call_balance':balance=e
            elif e['kind']=='branch':branches.append({'case':label,**e})
            elif e['kind']=='handler_state':
                h=pending;assert h['step']==e['step'];raw=bytes.fromhex(e['ctx_hex'])
                seed=struct.unpack_from('<I',raw,12)[0];e0=struct.unpack_from('<Q',raw,0xe0)[0]
                formula=(mid(((seed*MUL)&MASK)^((h['raw_op']*PHI)&MASK)^e0)>>33)&3
                root=h['external_resolver_for_step']
                if root:
                    channel=ROOT_CHANNEL[h['caller']]
                    assert lookups[h['step']]['trampoline']==h['selected_trampoline'] and lookups[h['step']]['target']==h['entry']
                else:
                    channel=formula
                    assert h['caller'] in inline and h['args'][3]==h['selected_trampoline']
                    assert (h['args'][1]&0xffffffff)==((handlers[h['parent_handler']]['args'][1]-1)&0xffffffff)
                assert channel==h['ch'],(label,h['step'],'channel')
                alias=struct.unpack_from('<H',raw,0xf64+2*(channel*62+h['raw_op']))[0]
                assert alias==h['alias'] and h['entry']==h['selected_target']
                projection=runtime_selection(raw,h['raw_op'],h['caller'],root)
                assert projection['channel']==channel and projection['alias']==alias
                if formula!=channel:uniform_mismatches.append({'step':h['step'],'formula_channel':formula,'actual_channel':channel,'root':root,'caller':hex(h['caller'])})
                target=h['entry'];targets.add(target);pair=(channel,alias);pairset.add(pair)
                item={'case':label,'step':h['step'],'call_id':h['id'],'parent_handler':h['parent_handler'],
                    'channel':channel,'channel_origin':'root caller PC' if root else 'inline context hash',
                    'logical_opcode':h['raw_op'],'alias':alias,'native_target':hex(target),'family':types[target],
                    'trampoline':hex(h['selected_trampoline']),'root':root,'caller':hex(h['caller']),
                    'mode':hex(h['args'][1]&0xffffffff),'pc':e['pc'],'channel_seed_u32':seed,'ctx_e0':e0,
                    'table_address':hex(struct.unpack_from('<Q',raw,0xf40)[0]),
                    'handler_base':hex(struct.unpack_from('<Q',raw,0xf48)[0]),
                    'key_u32':struct.unpack_from('<I',raw,0xf50)[0],
                    'table_entry_i32':'not separately captured in this projection'}
                pairs[f'{channel},{alias}'].append(len(observations));observations.append(item);family.append(types[target])
        roots=sum(x['root'] for x in observations[start:]);entries=len(observations)-start
        assert entries==counts['operand']==counts['handler_enter'] and roots==counts['resolve']
        assert nreturns+nunwind==entries
        assert balance and balance['open']==0 and balance['entries']==balance['returns']+balance['unwinds']+balance['tails']
        assert not counts['unexplained_unwind']
        all_targets|=targets;all_pairs|=pairset;sequence[label]=family
        cases.append({'case':label,'selector_calls':counts['operand'],'root_resolver_calls':roots,
            'inline_calls':entries-roots,'native_handler_entries':entries,'native_handler_returns':nreturns,
            'native_handler_exception_unwinds':nunwind,'physical_native_targets':len(targets),'pairs':len(pairset),
            'helpers_by_native_entry':dict(helpers),'tracked_call_balance':balance,
            'all_root_lookup_returns_match':True,'all_inline_r9_targets_and_budget_decrements_match':True,
            'all_runtime_aliases_match':True,'channel_requires_root_pc_for_cases':uniform_mismatches,
            'source_gzip_sha256':hashlib.sha256(path.read_bytes()).hexdigest()})
        print(label,'native entries',entries,'physical targets',len(targets),'uniform channel exceptions',len(uniform_mismatches),flush=True)
    indexed=[i for values in pairs.values() for i in values];assert sorted(indexed)==list(range(len(observations)))
    body=json.dumps({'observations':observations,'pair_index':pairs},separators=(',',':')).encode()
    (OUT/'dispatch_catalog.json.gz').write_bytes(gzip.compress(body,mtime=0))
    (OUT/'directed_branches.json.gz').write_bytes(gzip.compress(json.dumps(branches,separators=(',',':')).encode(),mtime=0))
    result={'captures':cases,'observations':len(observations),'pairs_union':len(all_pairs),
        'native_targets_union':list(map(hex,sorted(all_targets))),'native_target_count':len(all_targets),
        'static_native_target_count':len(types),'unexecuted_catalogued_targets':list(map(hex,sorted(set(types)-all_targets))),
        'main_catalog_pairs':len(old['resolved']),'main_catalog_native_target_count':len(old_targets),
        'main_catalog_unresolved_pairs':len(old.get('unresolved',[])),
        'main_catalog_unrepresented_pairs':248-len(old['resolved']),
        'fresh_native_addresses_outside_main_catalog':list(map(hex,sorted(all_targets-old_targets))),
        'same_length_family_sequences_equal':{str(n):sequence[f'long_a{n}']==sequence[f'long_pattern{n}'] for n in (23,24,25)},
        'qualification':'Coverage of physical targets and observed transitions; not all branches, guard states, or Windows paths.'}
    (OUT/'dispatch_coverage.json').write_text(json.dumps(result,indent=2)+'\n')

if __name__=='__main__':main()
