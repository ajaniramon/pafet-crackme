"""JACK XXX: separate A replay, B local transitions and C continuous steps."""
import argparse
import copy
import gzip
import hashlib
import json
import pathlib
import sys
import pefile
from .serial import SerialVMState
from .serial_continuous import SerialDecoderWithMapProbe,UnsupportedSerialRoute,capture_roots
from .serial_regions import REGIONS

ROOT=pathlib.Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT/'scripts'))
from pafet_state_contract import Memory,load_frames,load_verified,require,ContractError,validate_entry
from pafet_state_compare import compare
OUT=ROOT/'jack_xxx_evidence'
def read(path):return json.loads(gzip.decompress(path.read_bytes()))
def digest(data):return hashlib.sha256(data).hexdigest()
def memory(entry):
    m=Memory()
    for r in entry['regions']:m.add(r['address'],bytes.fromhex(r['hex']))
    return m

def require_complete_capture(folder):
    manifest=load_frames(folder)
    require(manifest.get('status')=='complete','Native capture did not reach its declared boundary','incomplete-capture')
    return manifest

def compare_events(entry,events,oracle):
    native=memory(entry);position=0;rows=[];first=None
    for event in events:
        boundary=entry['base']+event['boundary_rva']
        while position<len(oracle['trace']) and oracle['trace'][position]['pc']!=boundary:
            for at,data in oracle['trace'][position]['writes']:native.add(at,bytes.fromhex(data),overwrite=True)
            position+=1
        present=(position<len(oracle['trace']) or oracle['trace'][-1]['after']['rip']==boundary)
        row={'name':event['name'],'native_rva':hex(event['boundary_rva']),'native_instructions':position,'boundary_found':present,'pc':event['pc'],'sp':event['sp'],'regions':[]}
        if not present:
            row['all_bytes_match']=False
            if first is None:first={'classification':'boundary','event':event['name'],'rva':hex(event['boundary_rva'])}
        else:
            for index,(at,data) in enumerate(event['regions']):
                expected=native.read(at,len(data));different=sum(x!=y for x,y in zip(data,expected))
                row['regions'].append({'role':event.get('roles',['unspecified']*len(event['regions']))[index],'address':hex(at),'size':len(data),'different_bytes':different,'candidate_sha256':digest(data),'native_sha256':digest(expected)})
                if different and first is None:
                    offset=next(i for i,(x,y) in enumerate(zip(data,expected)) if x!=y)
                    first={'classification':'model','event':event['name'],'native_rva':hex(event['boundary_rva']),'native_instructions':position,'address':hex(at+offset),'context_offset':hex(at+offset-entry['state']['gprs'][1]),'candidate':data[offset],'native':expected[offset]}
            row['all_bytes_match']=not any(x['different_bytes'] for x in row['regions'])
        rows.append(row)
    return {'all_events_match':bool(events) and first is None,'first_divergence':first,'boundaries':rows}

def candidate(entry):
    state=SerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')));steps=[];failure=None
    try:
        for _ in range(2):steps.append(state.step())
    except UnsupportedSerialRoute as error:failure=str(error)
    return state,copy.deepcopy(steps),failure

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--output',type=pathlib.Path,default=OUT/'validation.json');args=ap.parse_args()
    registry=json.loads((OUT/'corpus.json').read_bytes())
    for path,h in registry['artifacts'].items():load_verified(ROOT/path,h)
    rows=[];control=None
    for case in registry['cases']:
        folder=ROOT/case['path'];row={'case':case['path'],'expectation':case['expected']}
        try:manifest=require_complete_capture(folder)
        except ContractError as error:
            require(error.kind=='incomplete-capture','Malformed capture inventory','integrity')
            manifest=load_frames(folder)
            require(case['expected']=='rejected-incomplete','Unexpected incomplete capture','capture')
            row.update(status='rejected-incomplete',level_A='not-claimed',level_C=False,reason=manifest.get('error','capture did not reach its declared boundary'),observed_prefix_instructions=sum(f['steps'] for f in manifest['frames']))
            rows.append(row);print(folder.name,'REJECTED incomplete; no A/C claim',flush=True);continue
        require(len(manifest['frames'])==1,'Expected one natural region per process','integrity')
        row['run_id']=manifest['run_id']
        entry=read(folder/'frame_00.entry.json.gz')
        if case['expected']=='map-probe':
            m,_,_=validate_entry(entry,pefile.PE(str(ROOT/'pafet.bin')));pe=pefile.PE(str(ROOT/'pafet.bin'));roots=capture_roots(entry,m,pe,False)
            model=SerialDecoderWithMapProbe(m,entry['state']['gprs'][1],pe);result=model.run()
            event={'name':'map_probe_decoder','boundary_rva':entry['stop']-entry['base'],'pc':1,'sp':0,'regions':[(r['address'],m.read(r['address'],r['size'])) for r in roots]}
            events=[event];steps=[];failure=None
        else:
            state,steps,failure=candidate(entry);events=state.events
        # Neither candidate execution above receives an observation object.
        oracle=read(folder/'frame_00.trace.json.gz');a=compare(entry,oracle);b=compare_events(entry,events,oracle)
        require(a['all_match'],'Level A replay differs','emulation',case=str(folder),first=a['first_state_difference'])
        require(b['all_events_match'],'Semantic boundary differs','model',case=str(folder),first=b['first_divergence'])
        row.update(level_A=a,level_B=b,logical_steps=steps,unsupported=failure)
        if case['expected']=='map-probe':
            row.update(level_C=False,map_probes=model.map_probes,result=result,status='level-B-map-probe')
            require(model.map_probes==1,'Probe path not exercised','coverage')
        elif case['expected']=='return-resume-blocked':
            require(len(steps)==1 and failure=='Native return continuation is not modeled','Expected return-continuation counterexample changed','coverage')
            row.update(level_C=False,status='level-B-return-handoff')
        else:
            require(failure is None and len(steps)==2,'Two-step candidate incomplete','model',case=str(folder),reason=failure)
            row.update(level_C=True,status='level-C',final_phase=state.phase,domains=[REGIONS[int(s['native_body'],16)]['domain'] for s in steps],map_probes=state.map_probes,final_pc=state.peek(1),final_sp=state.peek(2))
            require((steps[0]['virtual_pc'],steps[1]['virtual_pc'],state.peek(1),state.peek(2))==(0,5,8,0),'Unexpected logical flow','model')
            if control is None:
                bad=copy.deepcopy(events);at,data=bad[1]['regions'][0];changed=bytearray(data);changed[0x1b0]^=1;bad[1]['regions'][0]=(at,bytes(changed))
                control=compare_events(entry,bad,oracle);require(not control['all_events_match'] and control['first_divergence']['context_offset']=='0x1b0','One-byte corruption was not detected','regression')
        rows.append(row);print(folder.name,row['status'],'A=',a['instructions_compared'],'boundaries=',len(events),flush=True)
    fresh=[r for r in rows if r.get('level_C') and r['case'].startswith('jack_xxx_evidence/')]
    inline=[r for r in fresh if r['final_phase']=='decode']
    require(len(inline)>=2 and len({r['run_id'] for r in fresh})==len(fresh),'Need two fresh independent complete chains to inline decoder boundaries','coverage')
    report={'all_required_checks_pass':True,'rows':rows,'fresh_level_C_processes':len(fresh),'fresh_inline_decoder_chains':len(inline),'fresh_level_C_instructions_to_final_boundary':sum(r['level_B']['boundaries'][-1]['native_instructions'] for r in fresh),'one_byte_negative_control':control,
            'source_sha256':{p:digest((ROOT/p).read_bytes()) for p in ['devirt/serial.py','devirt/serial_continuous.py','devirt/serial_regions.py','devirt/serial_continuous_validate.py','scripts/pafet_serial_audit_xxx.py','scripts/pafet_native_step_capture.py','scripts/pafet_state_compare.py','scripts/pafet_state_replay.py','scripts/pafet_state_contract.py']},
            'scope':'C: two dependent virtual steps from one before-state. No intermediate restoration or native handler execution. Complete captures only. A wrapper return handoff is observable; resuming its caller is still unsupported.'}
    args.output.write_bytes(json.dumps(report,indent=2).encode()+b'\n')
if __name__=='__main__':main()
