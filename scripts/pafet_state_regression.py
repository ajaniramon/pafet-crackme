#!/usr/bin/env python3
"""Strict fresh-frame C++/Unicorn/native regression after pointed-input capture fix."""
import argparse
import gzip
import hashlib
import importlib.util
import json
import pathlib
import capstone
import unicorn
from pafet_uservm_inputs import require_complete,IncompleteCapture
import pafet_cookie_diff_xxvii as cookie
import pafet_native_diff_xxiv as differential
from pafet_state_replay import Replay

ROOT=pathlib.Path(__file__).resolve().parents[1]
OUT=ROOT/'state_divergence_evidence'


def main():
    ap=argparse.ArgumentParser();ap.add_argument('--no-build',action='store_true');args=ap.parse_args()
    path=OUT/'frida/cookie_frames.json.gz';blob=path.read_bytes();captures=json.loads(gzip.decompress(blob))
    provenance=json.loads(path.with_name('capture_provenance.json').read_bytes())
    assert hashlib.sha256(blob).hexdigest()==provenance['capture_sha256']
    spec=importlib.util.spec_from_file_location('corrected_harness',ROOT/'scripts/pafet_h3bea0_unicorn_xiii.py')
    old=importlib.util.module_from_spec(spec);spec.loader.exec_module(old)
    differential.OUT=OUT;lib=differential.library(not args.no_build);cases=[]
    for label,capture in captures.items():
        runtime=int(capture['pe_base'],16)
        for index,vector in enumerate(capture['vectors']):
            require_complete(vector)
            result=differential.run_vector(lib,old,label,index,vector,runtime,lambda uc,v:cookie.prepare(uc,v,runtime,True))
            assert result['historical_capture_comparison']['ok'],result['historical_capture_comparison']
            assert all(int(result['final_gprs'][n],16)==int(vector['native_after_caller'][n],16) for n in differential.NAMES)
            cases.append({'case':label,'frame':index,'steps':result['steps'],'native_context_and_all_captured_regions_match':True,
                          'native_16_return_gprs_match':True,'cpp_original_x64_instruction_lockstep':result['all_instruction_states_match']})
            print(label,index,result['steps'],'strict inputs + C++/x64 lockstep + native state PASS',flush=True)
    rejected=[]
    old_captures=json.loads(gzip.decompress((ROOT/'jack_xxvii_evidence/cookie_frames.json.gz').read_bytes()))
    for label,c in old_captures.items():
        for index,v in enumerate(c['vectors']):
            try:require_complete(v)
            except IncompleteCapture as error:rejected.append({'case':label,'frame':index,'missing_inputs':error.args[0]})
            else:raise AssertionError('historically incomplete frame was accepted')
    stepped=[]
    for folder in ('drop_control','second_rekey'):
        for path in sorted((OUT/folder).glob('*.entry.json.gz')):
            entry=json.loads(gzip.decompress(path.read_bytes()));machine=Replay(entry);writes=[]
            machine.uc.hook_add(unicorn.UC_HOOK_MEM_WRITE,lambda uc,access,at,size,value,data:writes.append((at,size)))
            state={'branches':[],'calls':[],'original_writes':0,'steps':0}
            md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
            differential.lockstep(lib,machine.uc,machine.uc.emu_start,writes,entry['state']['rip'],entry['native_return'],
                                  entry['base'],state,{},md,folder,0,100000,False)
            # Open comparison-only observations after autonomous lockstep ends.
            oracle=json.loads(gzip.decompress(path.with_name(path.name.replace('.entry.','.trace.')).read_bytes()))
            assert all(int(state['final_gprs'][n],16)==oracle['trace'][-1]['after']['gprs'][i] for i,n in enumerate(differential.NAMES))
            assert bytes(machine.uc.mem_read(entry['context'],0x2000)).hex()==oracle['after_context_hex']
            for a in oracle['after_arrays']:assert bytes(machine.uc.mem_read(a['address'],len(a['hex'])//2)).hex()==a['hex']
            stepped.append({'entry':str(path.relative_to(ROOT)).replace('\\','/'),'steps':state['steps'],
                            'cpp_and_original_x64_instruction_lockstep':state['all_instruction_states_match'],
                            'windows_final_gprs_context_and_pointed_arrays_match':True})
            print(folder,path.stem,state['steps'],'C++ / Unicorn / Windows PASS',flush=True)
    report={'all_checks_pass':True,'fresh_frames':cases,'historical_frames_rejected':rejected,'windows_single_step_frames':stepped,
            'capture_sha256':provenance['capture_sha256'],'validation_source_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
            'runtime_source_sha256':{name:hashlib.sha256((ROOT/name).read_bytes()).hexdigest() for name in ('scripts/pafet_capture_native_xxiv.py','scripts/pafet_h3bea0_unicorn_xiii.py','scripts/pafet_uservm_inputs.py','src/pafet_lifted_xxiv.cpp','src/pafet_native_state_xxiv.h')},
            'scope':'Fresh native before-inputs only. Original incomplete snapshots are rejected, not repaired from their expected results. No complete VM/universal-equivalence claim.'}
    (OUT/'regression.json').write_bytes(json.dumps(report,indent=2).encode()+b'\n')


if __name__=='__main__':main()
