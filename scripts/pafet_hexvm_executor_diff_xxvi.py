#!/usr/bin/env python3
"""Replay initialized Hex-VM in portable C++, checking every native push."""
import argparse,concurrent.futures,gzip,hashlib,json,struct,subprocess
import pefile
from pafet_hexvm_literal_diff_xxvi import ROOT,OUT,BUILD,NAMES,linux

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--no-build',action='store_true');ap.add_argument('--build-only',action='store_true');ap.add_argument('--standalone',action='store_true');ap.add_argument('--msvc',action='store_true');args=ap.parse_args()
    BUILD.mkdir(exist_ok=True);exe=BUILD/('hexvm_executor.exe' if args.msvc else 'hexvm_standalone' if args.standalone else 'hexvm_executor')
    if args.msvc and not args.no_build:
        subprocess.run(['python',str(ROOT/'scripts/pafet_hexvm_build_msvc_xxvi.py'),'--probe'],check=True)
    elif not args.no_build:
        manifest=json.loads((OUT/'executor_lift_manifest.json').read_bytes())
        sources=[ROOT/p for p in manifest['sources']]+[ROOT/'src'/('main_hexvm_standalone_xxvi.cpp' if args.standalone else 'main_hexvm_literal_xxvi.cpp')]
        objects=BUILD/'executor_objects';objects.mkdir(exist_ok=True)
        def compile_one(source):
            target=objects/(source.stem+'.o')
            deps=[source,ROOT/'src/pafet_hexvm_cpu_xxvi.h']
            if source.name.startswith('main_'):deps.append(ROOT/'src/pafet_hexvm_host_xxvi.h')
            if not target.exists() or any(p.stat().st_mtime>target.stat().st_mtime for p in deps):
                subprocess.run(['wsl','--exec','g++','-std=c++17','-O1','-c','-o',linux(target),linux(source)],check=True)
            return target
        with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:built=list(pool.map(compile_one,sources))
        subprocess.run(['wsl','--exec','g++','-o',linux(exe),*[linux(p) for p in built]],check=True)
    if args.build_only:return
    blob=(OUT/'full_native_frame.json.gz').read_bytes();capture=json.loads(gzip.decompress(blob))
    assert not capture['errors'] and not capture['host_errors']
    frame=capture['full'];runtime=int(capture['base'],16);pe=pefile.PE(str(ROOT/'pafet.bin'))
    memory={int(s['base'],16):bytes.fromhex(s['hex']) for s in frame['memory']};memory[runtime]=pe.get_memory_mapped_image(ImageBase=runtime)
    regs=[int(frame['entry'][n],16) for n in NAMES];request=BUILD/'executor_input.bin';response=BUILD/'executor_output.bin'
    with request.open('wb') as f:
        f.write(struct.pack('<21Q',*regs,runtime+0x81540,runtime+0x815bf,runtime,500_000_000,len(memory)))
        for lo,data in sorted(memory.items()):f.write(struct.pack('<2Q',lo,len(data)));f.write(data)
        f.write(struct.pack('<3Q',int(frame['cookie']),int(frame['tls_array'],16),len(capture['clock'])))
        for row in capture['clock']:f.write(struct.pack('<2Q',row['rva'],int(row['value'],16)))
        f.write(struct.pack('<Q',len(capture['pushes'])))
        for row in capture['pushes']:f.write(struct.pack('<6Q',*(int(x) for x in row)))
    command=[str(exe),request.name,response.name] if args.msvc else ['wsl','--exec',linux(exe),linux(request),linux(response)]
    result=subprocess.run(command,cwd=BUILD,capture_output=True,text=True)
    if result.returncode:
        (OUT/'executor_gap.json').write_text(json.dumps({'run_id':capture['run_id'],'stderr':result.stderr},indent=2)+'\n')
        raise AssertionError(result.stderr)
    with response.open('rb') as f:
        def q():return struct.unpack('<Q',f.read(8))[0]
        status,steps=q(),q();cpp=[q() for _ in NAMES];rip,flags,defined,fault=q(),q(),q(),q();count=q();model={}
        for _ in range(count):lo,n=q(),q();model[lo]=f.read(n)
    def read(p,n):
        for lo,data in model.items():
            if lo<=p<lo+len(data) and p+n>lo+len(data):
                first=lo+len(data)-p
                return data[p-lo:]+read(p+first,n-first)
        for lo,data in model.items():
            if lo<=p and p+n<=lo+len(data):return data[p-lo:p-lo+n]
        raise ValueError(('unmapped result',hex(p),n))
    def uint(p):return struct.unpack('<Q',read(p,8))[0]
    def string(p):
        size=uint(p+16);return read(uint(p) if uint(p+24)>=16 else p,size)
    native=[int(frame['after'][n],16) for n in NAMES]
    differences={n:[hex(a),hex(b)] for n,a,b in zip(NAMES,cpp,native) if a!=b}
    ctx=int(frame['ctx'],16);expected_ctx=bytes.fromhex(frame['final_context']);got_ctx=read(ctx,len(expected_ctx))
    context_differences=[hex(i) for i,(a,b) in enumerate(zip(got_ctx,expected_ctx)) if a!=b]
    output=read(native[15],128)
    assert output.hex()==frame['output_hex'],'128-byte executor output mismatch'
    cb=frame['callback'];outstr=string(uint(int(cb['object'],16)+24))
    assert outstr.hex()==cb['output']['hex'],'final callback string mismatch'
    assert not context_differences,('context differences',context_differences[:50])
    assert not differences,('native GPRs',differences)
    original_after={int(s['base'],16):bytes.fromhex(s['hex']) for s in frame['after_memory']}
    def native_read(p,n):
        for lo,data in original_after.items():
            if lo<=p<lo+len(data):
                first=min(n,lo+len(data)-p)
                return data[p-lo:p-lo+first]+(native_read(p+first,n-first) if first<n else b'')
        raise ValueError(('uncaptured native buffer',hex(p),n))
    buffers={}
    for field,size,label in [(0x288,4096,'slots'),(0x4d8,992,'remap_table'),(0x730,1975,'bytecode'),(0x8f8,1975,'bytecode_mask')]:
        pointer=uint(ctx+field)
        assert read(pointer,size)==native_read(pointer,size),('native backing buffer',label)
        buffers[label]=size
    report={'run_id':capture['run_id'],'capture_sha256':hashlib.sha256(blob).hexdigest(),'executable_sha256':hashlib.sha256(exe.read_bytes()).hexdigest(),
            'result':result.stdout.strip(),'steps':steps,'all_native_pushes_match':len(capture['pushes']),
            'all_16_native_final_gprs_match':True,'full_0x1200_context_matches':True,
            'executor_output_128_bytes_match':True,'callback_output_size':len(outstr),'callback_output_hex':outstr.hex(),
            'native_backing_buffers_match':buffers,
            'limitations':['starts from captured initialized state','clock readings supplied as external inputs',
                           'host callback modeled separately with standard C++ stream/string operations',
                           'finite native corpus, not universal equivalence','queue qword EH adapter only']}
    report['compiler']='MSVC /O2 /std:c++17' if args.msvc else 'g++ -O1 -std=c++17'
    (OUT/('executor_msvc_differential.json' if args.msvc else 'executor_differential.json')).write_text(json.dumps(report,indent=2)+'\n')
    (OUT/'executor_gap.json').unlink(missing_ok=True)
    print(json.dumps(report,indent=2))

if __name__=='__main__':main()
