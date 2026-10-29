#!/usr/bin/env python3
"""Independent input/output tests: native Windows executor vs fresh C++ VM.

The C++ process starts at 0x804c0 from a synthetic ABI environment and builds
its own VM state. It receives no captured VM context or execution transcript.
Native inputs are injected into the caller's existing std::string before entry.
"""
import argparse,hashlib,json,pathlib,subprocess,threading,uuid
import frida,pefile
from pafet_hexvm_literal_diff_xxvi import ROOT,OUT,BUILD,linux
AGENT=r'''
const base=Process.enumerateModules().find(m=>m.name.toLowerCase().endsWith('.exe')).base;
function hex(p,n){return Array.from(new Uint8Array(p.readByteArray(n))).map(x=>x.toString(16).padStart(2,'0')).join('');}
function str(p){const n=p.add(16).readU64().toNumber(),cap=p.add(24).readU64().toNumber();if(n>4096)throw Error('string bound');return {size:n,hex:hex(cap>=16?p.readPointer():p,n)};}
Interceptor.attach(base.add(0x804c0),{
 onEnter(){try{const fun=this.context.r8.add(0x38).readPointer();this.output=fun.add(0x20).readPointer();this.regs=this.context.rcx;
 const source=fun.add(0x10).readPointer(),cap=source.add(24).readU64().toNumber(),data=cap>=16?source.readPointer():source;
 const text=INPUT;if(text.length>cap)throw Error('input exceeds existing native capacity');data.writeUtf8String(text);source.add(16).writeU64(text.length);
 this.before=str(source);
 }catch(e){send({kind:'done',error:String(e)});recv('ack',()=>{}).wait();}},
 onLeave(rv){try{send({kind:'done',input:this.before,output:str(this.output),registers_hex:hex(this.regs,128),return_value:rv.toString()});recv('ack',()=>{}).wait();}catch(e){send({kind:'done',error:String(e)});}}
});send({kind:'ready'});
'''

def native(text):
    dev=frida.get_local_device();pid=dev.spawn([str(ROOT/'pafet_pass8.exe')],stdio='pipe');ready=threading.Event();done=threading.Event();result={}
    session=dev.attach(pid);script=session.create_script(AGENT.replace('INPUT',json.dumps(text)))
    def message(m,data):
        if m['type']=='error':result['error']=m;done.set()
        elif m['type']=='send':
            if m['payload']['kind']=='ready':ready.set()
            elif m['payload']['kind']=='done':result.update(m['payload']);script.post({'type':'ack'});done.set()
    script.on('message',message)
    try:
        script.load();assert ready.wait(10),'native initialization';dev.resume(pid);dev.input(pid,b'alice\r\nserial01\r\n');assert done.wait(120),'native timeout';assert 'error' not in result,result
    finally:
        try:dev.kill(pid)
        except frida.ProcessNotFoundError:pass
        try:session.detach()
        except frida.InvalidOperationError:pass
    assert result['input']['hex']==text.encode().hex()
    return result

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--reuse-native',action='store_true');ap.add_argument('--no-build',action='store_true');ap.add_argument('--msvc',action='store_true');args=ap.parse_args()
    BUILD.mkdir(exist_ok=True)
    if not args.no_build:
        subprocess.run(['python',str(ROOT/'scripts/pafet_hexvm_build_msvc_xxvi.py')] if args.msvc else ['python',str(ROOT/'scripts/pafet_hexvm_executor_diff_xxvi.py'),'--standalone','--build-only'],check=True)
    pe=pefile.PE(str(ROOT/'pafet.bin'));image=BUILD/'original_mapped_image.bin';image.write_bytes(pe.get_memory_mapped_image())
    builtin=pe.get_data(0x3dbbc0,144).decode()
    cases={'builtin144':builtin,'empty':'','single':'00','deadbeef':'deadbeef','mixed':'DeAdBeEf','upper':'CAFE01FF',
           'random64':'f015abe391204587ddc810267baf0833569c42de8701fca513782d14b50ace29',
           'odd':'abc','invalid':'g0','whitespace':' a'}
    native_file=OUT/'standalone_native_cases.json'
    if args.reuse_native:
        saved=json.loads(native_file.read_bytes());assert saved['cases']==cases
        assert saved['target_sha256']==hashlib.sha256((ROOT/'pafet_pass8.exe').read_bytes()).hexdigest()
        captures=saved['captures']
    else:
        captures={}
        for label,text in cases.items():
            captures[label]=native(text);print('native',label,captures[label]['output']['hex'],flush=True)
            native_file.write_text(json.dumps({'run_id':str(uuid.uuid4()),'cases':cases,'captures':captures,
                                  'target_sha256':hashlib.sha256((ROOT/'pafet_pass8.exe').read_bytes()).hexdigest(),
                                  'agent_sha256':hashlib.sha256(AGENT.encode()).hexdigest()},indent=2)+'\n')
    results=[];exe=BUILD/('pafet_hexvm_xxvi.exe' if args.msvc else 'hexvm_standalone')
    for label,text in cases.items():
        command=[str(exe),image.name,text] if args.msvc else ['wsl','--exec',linux(exe),linux(image),text]
        cpp=subprocess.run(command,cwd=BUILD,capture_output=True,text=True)
        assert cpp.returncode==0,(label,cpp.stderr)
        lines=cpp.stdout.splitlines();assert len(lines)==3,cpp.stdout
        output=lines[0].removeprefix('output ')
        assert output==captures[label]['output']['hex'],(label,output,captures[label])
        registers=lines[1].removeprefix('registers ')
        assert registers==captures[label]['registers_hex'],(label,'128-byte registers',registers,captures[label]['registers_hex'])
        assert int(lines[2].split()[-1])==int(captures[label]['return_value'],16)
        results.append({'case':label,'input':text,'output_hex':output,'executor_128_bytes_match':True,'execution':lines[2]})
        print('C++',label,lines[2],flush=True)
    report={'native_cases_sha256':hashlib.sha256(native_file.read_bytes()).hexdigest(),'executable_sha256':hashlib.sha256(exe.read_bytes()).hexdigest(),
            'pe_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),'passes':len(results),'cases':results,
            'scope':'Full literal VM initialization, program execution, queue exceptions, callbacks, cleanup and native return from fresh synthetic ABI state; no VM snapshot or trace supplied to candidate.',
            'limitations':['finite corpus','native oracle uses preexisting two-byte gate variant',
                           'stdlib callback implemented with standard C++ stream/string operations',
                           'deterministic clock and arena allocator are explicit host services',
                           'literal translation is separate from the partial reduced core']}
    report['compiler']='MSVC /O2 /std:c++17' if args.msvc else 'g++ -O1 -std=c++17'
    (OUT/('standalone_msvc_differential.json' if args.msvc else 'standalone_differential.json')).write_text(json.dumps(report,indent=2)+'\n')
    print('PASS',len(results),'independent native/C++ executions')

if __name__=='__main__':main()
