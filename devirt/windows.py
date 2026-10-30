"""Build and validate all three generated User backends with native MSVC.

Requires Visual Studio 2022 Community C++ tools (or PAFET_VCVARS override).
python -m devirt.windows
"""
import gzip
import hashlib
import json
import os
import pathlib
import struct
import subprocess
from .uservm import ROOT
from .__main__ import generate

OUT=ROOT/'jack_xvii_evidence'
BUILD=OUT/'build/windows'


def main():
    if os.name!='nt': raise RuntimeError('Run this module with native Windows Python')
    BUILD.mkdir(parents=True,exist_ok=True)
    _,_,manifest=generate(ROOT/'pafet.bin',OUT/'generated')
    default=pathlib.Path(os.environ.get('ProgramFiles','C:/Program Files'))/'Microsoft Visual Studio/2022/Community/VC/Auxiliary/Build/vcvars64.bat'
    vcvars=pathlib.Path(os.environ.get('PAFET_VCVARS',str(default)))
    env_script=BUILD/'environment.bat'
    env_script.write_text('@echo off\ncall "'+str(vcvars)+'" >nul\nif errorlevel 1 exit /b 1\nset\n')
    result=subprocess.run(['cmd','/c',str(env_script)],capture_output=True,check=True)
    env=dict(os.environ)
    for line in result.stdout.decode('mbcs',errors='replace').splitlines():
        if '=' in line and not line.startswith('='):
            name,value=line.split('=',1);env[name]=value
    compiler=pathlib.Path(env['VCToolsInstallDir'])/'bin/Hostx64/x64/cl.exe'
    def compile_one(source,target):
        done=subprocess.run([str(compiler),'/nologo','/c','/EHsc','/O2','/std:c++17','/utf-8','/W4','/WX',
            '/D_CRT_SECURE_NO_WARNINGS','/I'+str(ROOT/'devirt'),str(source),'/Fo:'+str(target)],env=env,capture_output=True)
        if done.returncode: raise RuntimeError(done.stdout.decode('mbcs',errors='replace')+done.stderr.decode('mbcs',errors='replace'))
    driver=BUILD/'driver.obj';compile_one(ROOT/'devirt/driver.cpp',driver)
    executables={}
    for suffix in ('','optimized','structured'):
        stem='user'+('.'+suffix if suffix else '');obj=BUILD/(stem+'.obj');exe=BUILD/(stem+'.exe')
        compile_one(OUT/'generated'/(stem+'.cpp'),obj)
        subprocess.run([str(compiler),'/nologo','/EHsc',str(driver),str(obj),'/Fe:'+str(exe)],env=env,cwd=BUILD,check=True,capture_output=True)
        executables[stem]=exe
    rows=[]
    paths=sorted((ROOT/'jack_xxiii_evidence/windows').glob('*.jsonl.gz'))+sorted((OUT/'windows').glob('*.jsonl.gz'))
    for path in paths:
        label=path.name.split('.')[0];summary=json.loads(path.with_name(label+'.summary.json').read_bytes())
        assert summary['original_sha256']==manifest['pe_sha256']
        assert summary['oracle_sha256']=='80a751350c8ed61ab25de6c8e81c2ec1c838af2126fe1eafbf1f89d0518407e7'
        assert hashlib.sha256(path.read_bytes()).hexdigest()==summary['jsonl_gzip_sha256']
        events=[json.loads(line) for line in gzip.open(path,'rt')]
        pre={e['step']:e for e in events if e['kind']=='handler_state'}
        post={e['step']:e for e in events if e['kind']=='core_state'}
        initial=BUILD/'initial.bin';initial.write_bytes(struct.pack('<256Q',*pre[1]['registers']))
        raw=None;final_raw=None
        for stem,exe in executables.items():
            trace=BUILD/(stem+'.jsonl')
            final=json.loads(subprocess.check_output([str(exe),summary['input_hex'],str(initial),str(trace)],text=True))
            records=[json.loads(line) for line in trace.read_text().splitlines()]
            if stem=='user':
                raw=records;final_raw=final;assert len(raw)==len(pre)
                for r in raw:
                    k=r['step'];assert r['opcode_pc']+1==pre[k]['pc']
                    if k in post:assert r['stack']==post[k]['stack'] and r['registers']==post[k]['registers'] and r['post_core_pc']==post[k]['pc']
                    if k+1 in pre:assert r['pc']+1==pre[k+1]['pc'] and r['stack']==pre[k+1]['stack'] and r['registers']==pre[k+1]['registers']
                for e in events:
                    if e['kind']=='store_after':assert bytes.fromhex(raw[e['step']-1]['working'])[e['index']]==e['byte']
                    if e['kind']=='working_object':assert raw[e['step']-2]['working']==e['hex']
                    if e['kind'] in ('memory','wrapper_output'):assert final['output']==e['hex']
            else:assert final==final_raw and all(r==raw[r['step']-1] for r in records)
        rows.append({'case':label,'steps':len(pre),'native_post_states':len(post),'all_three_backends_match_native_projection':True})
        print(label,len(pre),'MSVC direct / optimized / structured PASS',flush=True)
    report={'all_checks_pass':True,'compiler':'MSVC '+env['VCToolsVersion'].strip(),
            'flags':'/O2 /std:c++17 /W4 /WX','cases':rows,'native_executions':len(rows),
            'logical_steps':sum(r['steps'] for r in rows),'native_post_states':sum(r['native_post_states'] for r in rows),
            'generated_source_sha256':{name:digest for name,digest in manifest['artifacts'].items() if name.endswith('.cpp')},
            'executable_sha256':{name:hashlib.sha256(path.read_bytes()).hexdigest() for name,path in executables.items()},
            'validation_source_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
            'scope':'Native Windows MSVC execution of generated logical User program; comparison to pass8 decoded states and memory, not full native encoded state.'}
    (OUT/'windows_cpp_validation.json').write_bytes(json.dumps(report,indent=2).encode()+b'\n')
    print('PASS',len(rows),'native captures with three MSVC backends')


if __name__=='__main__':main()
