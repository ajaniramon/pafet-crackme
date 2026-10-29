#!/usr/bin/env python3
"""Build the literal VM as a native Windows executable with MSVC."""
import argparse,concurrent.futures,hashlib,json,os,pathlib,subprocess
import pefile
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxvi_evidence';BUILD=OUT/'build'

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--probe',action='store_true');ap.add_argument('--wide',action='store_true');args=ap.parse_args()
    BUILD.mkdir(exist_ok=True)
    vcvars=pathlib.Path(os.environ.get('ProgramFiles','C:/Program Files'))/'Microsoft Visual Studio/2022/Community/VC/Auxiliary/Build/vcvars64.bat'
    env_script=BUILD/'msvc_environment.bat';env_script.write_text('@echo off\ncall "'+str(vcvars)+'" >nul\nif errorlevel 1 exit /b 1\nset\n',encoding='utf-8')
    result=subprocess.run(['cmd','/c',str(env_script)],capture_output=True,check=True)
    env=dict(os.environ)
    for line in result.stdout.decode('mbcs',errors='replace').splitlines():
        if '=' in line and not line.startswith('='):
            name,value=line.split('=',1);env[name]=value
    compiler=pathlib.Path(env['VCToolsInstallDir'])/'bin/Hostx64/x64/cl.exe'
    manifest=json.loads((OUT/'executor_lift_manifest.json').read_bytes())
    assert manifest['pe_sha256']==hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),'PE differs: regenerate the lift'
    for name,digest in {**manifest['source_hashes'],**manifest['runtime_hashes']}.items():
        assert hashlib.sha256((ROOT/name).read_bytes()).hexdigest()==digest,('source differs: regenerate the lift',name)
    main=ROOT/'src'/('main_hexvm_wide_test_xxvi.cpp' if args.wide else 'main_hexvm_literal_xxvi.cpp' if args.probe else 'main_hexvm_standalone_xxvi.cpp')
    sources=([ROOT/p for p in manifest['sources']] if not args.wide else [])+[main]
    objects=BUILD/'msvc_objects';objects.mkdir(exist_ok=True)
    def compile_one(source):
        target=objects/(source.stem+'.obj');deps=[source,ROOT/'src/pafet_hexvm_cpu_xxvi.h']
        if source.name.startswith('main_'):deps.append(ROOT/'src/pafet_hexvm_host_xxvi.h')
        if not target.exists() or any(p.stat().st_mtime>target.stat().st_mtime for p in deps):
            command=[str(compiler),'/nologo','/EHsc','/O2','/std:c++17','/bigobj','/W0','/c',str(source),'/Fo:'+str(target)]
            done=subprocess.run(command,env=env,capture_output=True)
            if done.returncode:raise RuntimeError(done.stdout.decode('mbcs',errors='replace')+done.stderr.decode('mbcs',errors='replace'))
        return target
    with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:built=list(pool.map(compile_one,sources))
    exe=BUILD/('hexvm_wide_probe.exe' if args.wide else 'hexvm_executor.exe' if args.probe else 'pafet_hexvm_xxvi.exe')
    if not exe.exists() or any(p.stat().st_mtime>exe.stat().st_mtime for p in built):
        done=subprocess.run([str(compiler),'/nologo','/EHsc',*[str(p) for p in built],'/Fe:'+str(exe)],env=env,cwd=BUILD,capture_output=True)
        if done.returncode:raise RuntimeError(done.stdout.decode('mbcs',errors='replace')+done.stderr.decode('mbcs',errors='replace'))
    (BUILD/'original_mapped_image.bin').write_bytes(pefile.PE(str(ROOT/'pafet.bin')).get_memory_mapped_image())
    print(exe)

if __name__=='__main__':main()
