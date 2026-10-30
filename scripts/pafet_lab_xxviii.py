#!/usr/bin/env python3
"""Pinned corpus runner: Windows observations, autonomous replay, optional C++.

Never use this runner to bless new hashes automatically. Review new capture
manifests/provenance, then explicitly extend the version-controlled corpus.
"""
import argparse
import gzip
import hashlib
import json
import pathlib
import platform
import sys
from pafet_state_contract import load_verified,load_frames,require,ContractError
from pafet_state_compare import compare,read
from pafet_state_replay import Replay

ROOT=pathlib.Path(__file__).resolve().parents[1]
OUT=ROOT/'jack_xxviii_evidence'

def inventory(registry):
    require(registry.get('corpora'),'Empty pinned registry','empty-corpus')
    for relative,digest in registry['artifacts'].items():
        path=(ROOT/relative).resolve();require(ROOT in path.parents,'Artifact outside repository','integrity')
        load_verified(path,digest)
    for corpus in registry['corpora']:
        manifest=load_frames(ROOT/corpus['path'])
        required=['manifest.json']+[r['stem']+'.'+kind+'.json.gz' for r in manifest['frames'] for kind in ('entry','trace')]
        for name in required:require(corpus['path']+'/'+name in registry['artifacts'],'Unpinned artifact','integrity',file=name)
    return registry

def cpp_compare(lib,entry,label):
    import capstone,unicorn
    import pafet_native_diff_xxiv as diff
    machine=Replay(entry);writes=[]
    machine.uc.hook_add(unicorn.UC_HOOK_MEM_WRITE,lambda uc,access,at,size,value,data:writes.append((at,size)))
    state={'branches':[],'calls':[],'original_writes':0,'steps':0}
    try:
        diff.lockstep(lib,machine.uc,machine.uc.emu_start,writes,entry['state']['rip'],entry.get('stop',entry['native_return']),entry['base'],state,{},capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64),label,0,100000,False)
        return {'status':'pass','instructions':state['steps'],'scope':'C++/original x64 GPR/RIP/defined flags/XMM/writes; this API has no MXCSR field.'}
    except Exception as error:
        detail=error.args[0] if error.args else None
        missing=isinstance(detail,tuple) and detail[0]=='C++ translation failed' and detail[6]==3 and detail[7]=='instruction not in translated CFG'
        return {'status':'blocked','classification':'missing-translation' if missing else 'translation-or-lockstep','instructions_before_failure':state['steps'],'first_failure':repr(error),'rva':hex(int(detail[3],16)-entry['base']) if missing else None}

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--cpp',action='store_true');ap.add_argument('--no-build',action='store_true');ap.add_argument('--output',type=pathlib.Path,default=OUT/'regression.json');args=ap.parse_args()
    require(not args.cpp or sys.flags.optimize==0,'Legacy C++ lockstep uses assertions; run it without python -O','unsupported-runtime')
    registry=inventory(json.loads((OUT/'corpus.json').read_bytes()));lib=None
    if args.cpp:
        import pafet_native_diff_xxiv as diff
        diff.OUT=OUT;lib=diff.library(not args.no_build)
    rows=[];pcs={'baseline':set(),'additional':set()};edges={'baseline':set(),'additional':set()}
    for corpus in registry['corpora']:
        folder=ROOT/corpus['path'];manifest=load_frames(folder)
        for item in manifest['frames']:
            stem=item['stem'];entry=read(folder/(stem+'.entry.json.gz'));oracle=read(folder/(stem+'.trace.json.gz'))
            label=folder.name+'/'+stem;row={'case':label,'category':corpus['category'],'component':corpus['component']}
            require(item['steps']==len(oracle['trace']),'Trace/manifest instruction count disagrees','observation',case=label)
            result=compare(entry,oracle);row['native_replay']=result
            if corpus['category']=='blocked':
                first=result['first_state_difference'];failure=result['failure'] or {}
                # Unicorn may fetch a CALL target before returning count=1:
                # retain that failure; do not invent its missing after record.
                prefix_ok=first is None or (set(first['differences'])=={'trace_length'} and first['step']==len(oracle['trace']))
                row['expected_block_preserved']=(not result['native_complete'] and prefix_ok and failure.get('classification')=='unmapped-dependency' and failure.get('pc')==oracle.get('terminal',{}).get('pc') and oracle['terminal']['kind']=='external-code-boundary')
            else:
                key=corpus['category'];base=entry['base']
                pcs[key].update(t['pc']-base for t in oracle['trace'])
                edges[key].update((t['pc']-base,t['after']['rip']-base) for t in oracle['trace'] if t['instruction'].startswith(('j','call','ret')))
            if lib:
                if corpus['category']=='blocked' or corpus['component']=='Serial':row['cpp']={'status':'unavailable','reason':'Region outside translated User/cookie bodies; blocked queue not a complete route.'}
                else:row['cpp']=cpp_compare(lib,entry,label)
                if corpus.get('cpp_known_missing_rva'):
                    row['expected_translation_gap_preserved']=(row['cpp']['classification']=='missing-translation' and row['cpp']['rva']==corpus['cpp_known_missing_rva']) if row['cpp']['status']=='blocked' else row['cpp']['status']=='pass'
            if corpus['category']=='baseline':
                row['negative_controls']={mode:compare(entry,oracle,mode) for mode in ('legacy','missing-register-tail')}
            rows.append(row);print(label,'PASS' if result['all_match'] else 'BLOCKED' if row.get('expected_block_preserved') else 'FAIL',result['instructions_compared'],'cpp='+row.get('cpp',{}).get('status','not-run'),flush=True)
    negatives=[r['negative_controls'] for r in rows if 'negative_controls' in r]
    # Each deliberate corruption must have a real counterexample somewhere;
    # unchanged paths are reported rather than falsely required to diverge.
    controls={mode:any(not n[mode]['all_match'] for n in negatives) for mode in ('legacy','missing-register-tail')}
    required=all(r['native_replay']['all_match'] if r['category']!='blocked' else r['expected_block_preserved'] for r in rows) and all(controls.values())
    if lib:required=required and all(r['cpp']['status']=='pass' or r.get('expected_translation_gap_preserved',False) for r in rows if r['category']!='blocked' and r['component']!='Serial')
    report={'all_required_checks_pass':required,'rows':rows,'negative_controls_detected':controls,
            'additional_complete_instructions':sum(r['native_replay']['instructions_compared'] for r in rows if r['category']=='additional'),
            'additional_complete_regions':sum(r['category']=='additional' for r in rows),
            'additional_user_instructions':sum(r['native_replay']['instructions_compared'] for r in rows if r['category']=='additional' and r['component']=='User'),
            'new_unique_native_pcs':len(pcs['additional']-pcs['baseline']),'new_observed_control_edges':len(edges['additional']-edges['baseline']),
            'new_unique_native_pcs_rva':[hex(p) for p in sorted(pcs['additional']-pcs['baseline'])],
            'environment':{'python':sys.version,'platform':platform.platform()},
            'source_sha256':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [pathlib.Path(__file__),ROOT/'scripts/pafet_state_contract.py',ROOT/'scripts/pafet_state_replay.py',ROOT/'scripts/pafet_state_compare.py']},
            'scope':'Finite observed paths. Expected trace is consumed only for comparisons; replay uses entry inputs. Blocked prefixes never count as complete routes.'}
    import capstone,unicorn
    report['environment'].update(capstone=capstone.__version__,unicorn=unicorn.__version__)
    if lib:report['cpp_artifact_sha256']={p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [OUT/'build/libpafet_xxiv.so',ROOT/'src/pafet_lifted_xxiv.cpp',ROOT/'src/pafet_native_state_xxiv.h',ROOT/'src/pafet_native_api_xxiv.cpp']}
    args.output.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    require(required,'Regression failed; inspect '+str(args.output),'regression')
if __name__=='__main__':main()
