#!/usr/bin/env python3
"""Compare autonomous entry-only x64 execution with separate Windows evidence."""
import argparse
import gzip
import json
import pathlib
from pafet_state_replay import Replay,NAMES,snapshot,u
from pafet_state_contract import require,load_frames,ContractError

ROOT=pathlib.Path(__file__).resolve().parents[1]
def read(path):return json.loads(gzip.decompress(path.read_bytes()))
def byte_map(items):
    result={}
    for address,data in items:
        for i,value in enumerate(bytes.fromhex(data)):
            require(address+i not in result or result[address+i]==value,'Contradictory memory observations','observation',address=hex(address+i))
            result[address+i]=value
    return result

def validate_oracle(entry,oracle):
    trace=oracle.get('trace')
    require(isinstance(trace,list) and trace,'Empty native trace','observation')
    pc=entry['state']['rip']
    for number,row in enumerate(trace,1):
        require(row['pc']==pc,'Broken native observation chain','observation',step=number)
        require(len(row['after']['gprs'])==16 and len(bytes.fromhex(row['after']['xmm']))==256,'Incomplete observed CPU','observation',step=number)
        require(0<len(bytes.fromhex(row['bytes']))<=15,'Invalid observed instruction','observation',step=number)
        pc=row['after']['rip']
    complete=oracle.get('complete',True)
    if complete:require(pc==entry.get('stop',entry['native_return']),'Truncated native trace','observation',last_pc=hex(pc))
    return complete

def compare(entry,oracle,coverage='complete'):
    native_complete=validate_oracle(entry,oracle)
    replay=Replay(entry,coverage);candidate=[];failure=None
    # No observed trace length, branch or expected value drives execution.
    try:
        for row in replay.run():candidate.append(row)
    except Exception as error:
        failure=error.report() if isinstance(error,ContractError) else {'classification':'unmapped-dependency' if isinstance(error,u.UcError) and error.errno in (u.UC_ERR_FETCH_UNMAPPED,u.UC_ERR_READ_UNMAPPED,u.UC_ERR_WRITE_UNMAPPED) else 'emulation','message':str(error),'pc':hex(snapshot(replay.uc)['rip'])}
    first=None;raw=None;read_difference=None
    for number,(actual,native) in enumerate(zip(candidate,oracle['trace']),1):
        a=actual['after'];b=native['after'];different={}
        for name,x,y in zip(NAMES,a['gprs'],b['gprs']):
            if x!=y:different[name]=[hex(x),hex(y)]
        for key in ('rip','xmm','mxcsr'):
            if a[key]!=b[key]:different[key]=[a[key],b[key]]
        bits=(a['flags']^b['flags'])&0x8d5
        if (a['flags']^b['flags'])&~0x8d5:different['non_arithmetic_flags']=[hex(a['flags']),hex(b['flags'])]
        if bits and raw is None:raw={'step':number,'pc':hex(native['pc']),'different_bits':hex(bits),'defined_mask':hex(actual['defined_flags_mask']),'only_architecturally_undefined_bits':not bool(bits&actual['defined_flags_mask'])}
        if bits&actual['defined_flags_mask']:different['defined_flags']=[hex(a['flags']),hex(b['flags']),hex(actual['defined_flags_mask'])]
        if (actual['pc'],actual['bytes'])!=(native['pc'],native['bytes']):different['instruction']=[actual['pc'],actual['bytes'],native['pc'],native['bytes']]
        for key in ('reads','writes'):
            if byte_map(actual[key])!=byte_map(native[key]):different['memory_'+key]={'replay':actual[key],'native':native[key]}
        if read_difference is None and 'memory_reads' in different:read_difference={'step':number,'pc':hex(native['pc']),'differences':different['memory_reads']}
        if different and first is None:first={'step':number,'pc':hex(native['pc']),'preferred_pc':hex(native['pc']-entry['base']+0x140000000),'instruction':native['instruction'],'preceding_instructions_match':number-1,'differences':different}
    if first is None and len(candidate)!=len(oracle['trace']):first={'step':min(len(candidate),len(oracle['trace']))+1,'differences':{'trace_length':[len(candidate),len(oracle['trace'])]}}
    regions=list(oracle.get('after_arrays',[]))+list(oracle.get('final_regions',[]))
    if oracle.get('after_context_hex') is not None:regions.append({'role':'context','address':entry['context'],'hex':oracle['after_context_hex']})
    finals=[]
    for region in regions:
        expected=bytes.fromhex(region['hex'])
        try:actual=bytes(replay.uc.mem_read(region['address'],len(expected)));delta=sum(a!=b for a,b in zip(actual,expected))
        except Exception:delta=len(expected)
        finals.append({'role':region['role'],'different_bytes':delta})
    ok=native_complete and failure is None and first is None and not any(r['different_bytes'] for r in finals)
    return {'coverage':coverage,'instructions_compared':min(len(candidate),len(oracle['trace'])),'candidate_instructions':len(candidate),'native_complete':native_complete,'all_match':ok,
            'first_state_difference':first,'first_read_difference':read_difference,'first_raw_arithmetic_flag_difference':raw,'failure':failure,
            'terminal_comparison':{'steps':len(candidate),'error':failure,'regions':finals},'contract':replay.contract}

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--captures',type=pathlib.Path,default=ROOT/'state_divergence_evidence/drop_control');ap.add_argument('--output',type=pathlib.Path);ap.add_argument('--negative-controls',action='store_true');args=ap.parse_args()
    manifest=load_frames(args.captures);rows=[]
    for item in manifest['frames']:
        stem=item['stem'];entry=read(args.captures/(stem+'.entry.json.gz'));oracle=read(args.captures/(stem+'.trace.json.gz'))
        row={'frame':stem,'complete':compare(entry,oracle)}
        if args.negative_controls:
            for label,mode in [('legacy','legacy'),('missing_register_tail','missing-register-tail')]:row[label]=compare(entry,oracle,mode)
        rows.append(row);print(stem,'PASS' if row['complete']['all_match'] else 'FAIL',row['complete']['instructions_compared'],flush=True)
    report={'frames':rows,'all_complete_inputs_match':bool(rows) and all(r['complete']['all_match'] for r in rows),'scope':'Windows instruction observations; defined arithmetic flags; memory read/write events. Candidate uses captured inputs only.'}
    output=args.output or args.captures/'comparison.json';output.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    require(report['all_complete_inputs_match'],'Native comparison failed; see '+str(output),'comparison')
if __name__=='__main__':main()
