#!/usr/bin/env python3
"""Native Windows frames vs original x64 under Unicorn vs literal C++ (WSL)."""
import argparse,gzip,hashlib,json,pathlib,struct,subprocess
import pefile,unicorn
from unicorn.x86_const import *
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxvi_evidence';BUILD=OUT/'build'
NAMES=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi']+[f'r{i}' for i in range(8,16)]
def linux(p):return '/mnt/'+str(p.resolve())[0].lower()+str(p.resolve())[2:].replace('\\','/')
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--no-build',action='store_true');args=ap.parse_args()
    BUILD.mkdir(exist_ok=True)
    exe=BUILD/'hexvm_literal'
    if not args.no_build:
        subprocess.run(['wsl','--exec','g++','-std=c++17','-O1','-o',linux(exe),linux(ROOT/'src/main_hexvm_literal_xxvi.cpp'),linux(ROOT/'src/pafet_hexvm_lifted_xxvi.cpp')],check=True)
    packed=(OUT/'native_frames.json.gz').read_bytes();capture=json.loads(gzip.decompress(packed));runtime=int(capture['base'],16)
    assert not capture['errors'] and not capture['host_errors'] and not capture['open']
    pe=pefile.PE(str(ROOT/'pafet.bin'));image=pe.get_memory_mapped_image(ImageBase=runtime)
    reports=[]
    for index,frame in enumerate(capture['frames']):
        entry=runtime+(0x80000 if frame['kind']=='decoder' else 0x7fb70)
        stop=runtime+0x4c880 if frame['kind']=='decoder' else int(frame['after']['rip'],16) if 'rip' in frame['after'] else None
        memory={int(s['base'],16):bytes.fromhex(s['hex']) for s in frame['memory']}
        def read(p,n):
            for lo,data in memory.items():
                if lo<=p and p+n<=lo+len(data):return data[p-lo:p-lo+n]
            raise ValueError(('missing snapshot memory',hex(p),n))
        if stop is None:stop=struct.unpack('<Q',read(int(frame['entry']['rsp'],16),8))[0]
        memory[runtime]=image
        uc=unicorn.Uc(unicorn.UC_ARCH_X86,unicorn.UC_MODE_64)
        for lo,data in memory.items():uc.mem_map(lo,(len(data)+4095)&~4095);uc.mem_write(lo,data)
        regs=[int(frame['entry'][n],16) for n in NAMES]
        for n,r in zip(NAMES,regs):uc.reg_write(globals()['UC_X86_REG_'+n.upper()],r)
        uc.reg_write(UC_X86_REG_RIP,entry)
        uc.emu_start(entry,stop,count=2_000_000)
        assert uc.reg_read(UC_X86_REG_RIP)==stop,('instruction budget',frame['kind'])
        original=[uc.reg_read(globals()['UC_X86_REG_'+n.upper()]) for n in NAMES]
        native=[int(frame['after'][n],16) for n in NAMES]
        differences={n:[hex(a),hex(b)] for n,a,b in zip(NAMES,original,native) if a!=b}
        assert not differences,('native GPRs',frame['kind'],index,differences)
        request=BUILD/'literal_input.bin';response=BUILD/'literal_output.bin'
        with request.open('wb') as f:
            f.write(struct.pack('<21Q',*regs,entry,stop,runtime,2_000_000,len(memory)))
            for lo,data in sorted(memory.items()):f.write(struct.pack('<2Q',lo,len(data)));f.write(data)
        result=subprocess.run(['wsl','--exec',linux(exe),linux(request),linux(response)],capture_output=True,text=True)
        if result.returncode:raise AssertionError(result.stderr)
        with response.open('rb') as f:
            def q():return struct.unpack('<Q',f.read(8))[0]
            status,steps=q(),q();cpp=[q() for _ in NAMES];rip,flags,defined,fault=q(),q(),q(),q()
            assert status==0 and cpp==original and rip==stop,('C++ GPRs',frame['kind'],index)
            assert (flags^uc.reg_read(UC_X86_REG_EFLAGS))&defined&0x8d5==0,'defined flags'
            count=q();model={}
            for _ in range(count):lo,n=q(),q();model[lo]=f.read(n)
        # Stack scratch can contain instrumentation frames. Compare every
        # non-stack captured page to Windows, and ALL mapped bytes to Unicorn.
        rsp=int(frame['entry']['rsp'],16);native_pages=0
        for lo,data in model.items():
            assert data==bytes(uc.mem_read(lo,len(data))),('C++ memory',frame['kind'],index,hex(lo))
        for segment in frame['after_memory']:
            lo=int(segment['base'],16)
            if rsp-0x3000<=lo<rsp+0x8000:continue
            expected=bytes.fromhex(segment['hex']);got=bytes(uc.mem_read(lo,len(expected)))
            assert got==expected,('native memory',frame['kind'],index,hex(lo),next((j for j,(a,b) in enumerate(zip(got,expected)) if a!=b),None))
            native_pages+=1
        reports.append({'kind':frame['kind'],'ordinal':frame['ordinal'],'instructions':steps,'all_16_native_gprs_match':True,'all_cpp_unicorn_memory_match':True,'native_nonstack_pages':native_pages})
        print(reports[-1],flush=True)
    report={'capture_sha256':hashlib.sha256(packed).hexdigest(),'literal_executable_sha256':hashlib.sha256(exe.read_bytes()).hexdigest(),'frames':reports,
            'limitations':['finite captured frames','native initial RFLAGS/XMM unavailable','literal translation, not reduced decoder IR','not complete executor']}
    (OUT/'decoder_literal_differential.json').write_text(json.dumps(report,indent=2)+'\n')

if __name__=='__main__':main()
