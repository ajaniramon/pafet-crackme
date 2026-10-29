#!/usr/bin/env python3
"""Keep native VAs, aliases, table slots and nested calls separate."""
import collections,gzip,hashlib,json,pathlib
import pefile,capstone
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'
ROOTS={0x140041187:3,0x140042be5:1,0x140042cb2:2,0x1400479f3:0}
def main():
    pe=pefile.PE(str(ROOT/'pafet.bin'));code=pe.get_data(0x1000,0x3f540-0x1000)
    inline_returns={0x140001000+i+3 for i in range(len(code)-2) if code[i:i+3]==b'\x41\xff\xd1'}
    old=json.loads((ROOT/'vm_pools_evidence/usuario_vm_handlers_full.json').read_text())
    baseline={int(v,16) for v in old['resolved'].values()}
    observations=[];index=collections.defaultdict(list);targets=collections.defaultdict(set);cases=[]
    for path in sorted((OUT/'windows').glob('*.jsonl.gz')):
        label=path.name.split('.')[0];roots=nested=0;physical=set();slots=set();count=0
        for line in gzip.open(path,'rt'):
            e=json.loads(line)
            if e['kind']!='handler_enter':continue
            assert e['entry']==e['selected_target']
            assert 0<=e['ch']<4 and 0<=e['alias']<62
            if e['root']:
                assert ROOTS[e['caller']]==e['ch'];roots+=1
            else:
                assert e['caller'] in inline_returns and e['r9']==e['trampoline'];nested+=1
            key=f"{e['ch']},{e['alias']}"
            index[key].append(len(observations));observations.append({'case':label,**e})
            targets[e['entry']].add(e['raw_op']);physical.add(e['entry']);slots.add(key);count+=1
        assert count==roots+nested
        cases.append({'case':label,'handler_invocations':count,'resolver_roots':roots,'inline_call_r9_invocations':nested,
            'native_addresses':len(physical),'table_slots_observed':len(slots),
            'trace_gzip_sha256':hashlib.sha256(path.read_bytes()).hexdigest()})
    body={'observations':observations,'pair_index':index}
    (OUT/'dispatch_observations_windows.json.gz').write_bytes(gzip.compress(json.dumps(body,separators=(',',':')).encode(),mtime=0))
    report={'captures':cases,'invocations':len(observations),'native_target_count':len(targets),
        'native_targets':{hex(k):sorted(v) for k,v in sorted(targets.items())},
        'observed_table_slots':len(index),'possible_non_escape_table_slots':4*62,
        'slots_with_multiple_targets':sum(len({observations[i]['entry'] for i in ids})>1 for ids in index.values()),
        'baseline_catalog_native_addresses':len(baseline),
        'observed_addresses_outside_baseline':list(map(hex,sorted(set(targets)-baseline))),
        'baseline_addresses_not_observed':list(map(hex,sorted(baseline-set(targets)))),
        'native_vas_are_unique_code_entries':True,'trampolines_and_aliases_kept_separate':True,
        'inline_call_sites_checked_against_original_code':True,
        'helper_invocations_in_denominator':False,'helper_invocations_instrumented':False,
        'parent_ids_and_budget_decrements_verified':False,
        'coverage_limit':'Observed selected handler entries in thirteen inputs. Not all native branches, guard states or escape opcodes.'}
    (OUT/'dispatch_coverage_windows.json').write_text(json.dumps(report,indent=2)+'\n')
    print('Invocations',len(observations),'native entries',len(targets),'table slots',len(index))
if __name__=='__main__':main()
