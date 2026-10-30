#!/usr/bin/env python3
"""Compare an autonomous input-only replay with separately stored Windows observations."""
import argparse
import gzip
import hashlib
import json
import pathlib
from pafet_state_replay import Replay,NAMES,snapshot

ROOT=pathlib.Path(__file__).resolve().parents[1]


def read(path):return json.loads(gzip.decompress(path.read_bytes()))


def byte_map(items):return {address+i:b for address,data in items for i,b in enumerate(bytes.fromhex(data))}


def compare(entry,oracle,coverage):
    replay=Replay(entry,coverage);first_read=None;first_state=None;first_raw_flags=None;completed=0
    for number,native in enumerate(oracle['trace'],1):
        # Address values from oracle are used only for read-only comparison.
        before_reads=[]
        for address,data in native['reads']:
            actual=bytes(replay.uc.mem_read(address,len(data)//2)).hex()
            if actual!=data:before_reads.append({'address':hex(address),'native':data,'replay':actual})
        actual=replay.step();completed=number
        if first_read is None and before_reads:
            first_read={'step':number,'pc':hex(native['pc']),'instruction':native['instruction'],'differences':before_reads}
        a=actual['after'];b=native['after']
        raw_difference=(a['flags']^b['flags'])&0x8d5
        if first_raw_flags is None and raw_difference:
            first_raw_flags={'step':number,'pc':hex(native['pc']),'instruction':native['instruction'],
                             'replay':hex(a['flags']),'native':hex(b['flags']),'different_bits':hex(raw_difference),
                             'defined_mask':hex(actual['defined_flags_mask']),
                             'only_architecturally_undefined_bits':not bool(raw_difference&actual['defined_flags_mask'])}
        differences={name:[hex(x),hex(y)] for name,x,y in zip(NAMES,a['gprs'],b['gprs']) if x!=y}
        for key in ('rip','xmm','mxcsr'):
            if a[key]!=b[key]:differences[key]=[a[key],b[key]]
        if (a['flags']^b['flags'])&actual['defined_flags_mask']:differences['defined_flags']=[hex(a['flags']),hex(b['flags']),hex(actual['defined_flags_mask'])]
        if actual['pc']!=native['pc'] or actual['bytes']!=native['bytes']:differences['instruction']=[hex(actual['pc']),actual['bytes'],hex(native['pc']),native['bytes']]
        if byte_map(actual['reads'])!=byte_map(native['reads']):differences['memory_reads']={'replay':actual['reads'],'native':native['reads']}
        if byte_map(actual['writes'])!=byte_map(native['writes']):differences['written_memory']={'replay':actual['writes'],'native':native['writes']}
        if differences:
            first_state={'step':number,'pc':hex(native['pc']),'preferred_pc':hex(native['pc']-entry['base']+0x140000000),
                         'instruction':native['instruction'],'preceding_instructions_match':number-1,'differences':differences}
            break
    terminal=Replay(entry,coverage);end_error=None
    try:steps=sum(1 for _ in terminal.run())
    except Exception as error:steps=None;end_error=repr(error)
    expected=bytes.fromhex(oracle['after_context_hex']);actual=bytes(terminal.uc.mem_read(entry['context'],len(expected)))
    final={'steps':steps,'error':end_error,'context_different_bytes':sum(a!=b for a,b in zip(actual,expected)),
           'array_different_bytes':{a['role']:sum(x!=y for x,y in zip(bytes(terminal.uc.mem_read(a['address'],len(a['hex'])//2)),bytes.fromhex(a['hex']))) for a in oracle['after_arrays']}}
    all_match=(first_state is None and first_read is None and completed==len(oracle['trace']) and
               end_error is None and final['context_different_bytes']==0 and not any(final['array_different_bytes'].values()))
    result={'coverage':coverage,'instructions_compared':completed,'all_match':all_match,
            'first_read_difference':first_read,'first_state_difference':first_state,'terminal_comparison':final}
    result['first_raw_arithmetic_flag_difference']=first_raw_flags
    return result


def main():
    ap=argparse.ArgumentParser();ap.add_argument('--captures',type=pathlib.Path,default=ROOT/'state_divergence_evidence/debugger');args=ap.parse_args()
    rows=[]
    for path in sorted(args.captures.glob('*.entry.json.gz')):
        stem=path.name.split('.')[0];entry=read(path);oracle=read(path.with_name(stem+'.trace.json.gz'))
        rows.append({'frame':stem,'rekey':oracle['rekey'],'entry_sha256':hashlib.sha256(path.read_bytes()).hexdigest(),
                     'trace_sha256':hashlib.sha256(path.with_name(stem+'.trace.json.gz').read_bytes()).hexdigest(),
                     'complete':compare(entry,oracle,'complete'),
                     'legacy':compare(entry,oracle,'legacy'),
                     'missing_register_tail':compare(entry,oracle,'missing-register-tail')})
        print(json.dumps(rows[-1]),flush=True)
    report={'frames':rows,'all_complete_inputs_match':all(r['complete']['all_match'] for r in rows),
            'comparison_source_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
            'replay_source_sha256':hashlib.sha256((ROOT/'scripts/pafet_state_replay.py').read_bytes()).hexdigest(),
            'scope':'16 GPRs, RIP, XMM, MXCSR, architecturally defined arithmetic flags, native operand reads and written memory after every instruction. Oracle values are comparison-only.'}
    (args.captures/'comparison.json').write_bytes(json.dumps(report,indent=2).encode()+b'\n')
    assert report['all_complete_inputs_match'],'complete-input replay diverged; see comparison.json'


if __name__=='__main__':main()
