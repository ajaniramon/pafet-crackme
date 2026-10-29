#!/usr/bin/env python3
"""Windows Hex-VM boundary capture. Bounded samples, explicit errors, host ACK.

Does not patch the target. Default oracle is the existing two-byte gate variant;
--exe accepts a different executable and always records its hash/differences.
Counts cover the invocation; samples intentionally cover only its prefix.
"""
import argparse
import hashlib
import json
import pathlib
import threading
import time
import uuid

import frida

ROOT = pathlib.Path(__file__).resolve().parents[1]
AGENT = r'''
const base=Process.enumerateModules().find(m=>m.name.toLowerCase().endsWith('.exe')).base;
const stacks=new Map(),counts={},events=[],errors=[];
let tick=0, finished=false;
function hex(p,n){return Array.from(new Uint8Array(p.readByteArray(n))).map(x=>x.toString(16).padStart(2,'0')).join('');}
function active(tid){const s=stacks.get(tid);return s&&s[s.length-1];}
function state(c){
 const q=o=>'0x'+c.add(o).readU64().toString(16);
 const len=c.add(0x4b8).readU32();
 if(len>64)throw Error('invalid queue length '+len);
 return {ctx:c.toString(),k:q(0x4b0),a:q(0x230),b:q(0x940),length:len,
 counter:q(0x4c0),lcg:q(0x1180),steps:q(0x1188),vpc:q(0x10d0),tag:c.add(0x1140).readU8(),
 mult:q(0x10c0),mask1:q(0x10b8),mask2:q(0x10b0),additive:c.add(0x10c8).readU8(),
 table:Array.from({length:8},(_,i)=>c.add(0x9b8+8*i).readPointer().sub(base).toString()),
 pending:Array.from({length:len},(_,i)=>q(0x2b0+8*i))};
}
function record(kind,tid,data,always=false){
 const n=counts[kind]=(counts[kind]||0)+1;
 const t=tick++;
 if(always||n<=128)events.push({tick:t,kind,tid,depth:(stacks.get(tid)||[]).length,...data});
}
function guard(fn){try{return fn();}catch(e){errors.push(String(e));return null;}}
function context(f,c){if(f.ctx&&!f.ctx.equals(c))throw Error('context mismatch');f.ctx=c;return c;}
Interceptor.attach(base.add(0x804c0),{
 onEnter(){const tid=this.threadId,s=stacks.get(tid)||[];this.f={arg:this.context.rcx,ctx:null};s.push(this.f);stacks.set(tid,s);record('executor_enter',tid,{argument:this.context.rcx.toString()},true);},
 onLeave(rv){guard(()=>{const tid=this.threadId,f=this.f;
 record('executor_leave',tid,{retval:rv.toString(),output_hex:hex(f.arg,128)},true);
 stacks.get(tid).pop();if(!finished){finished=true;send({kind:'done',base:base.toString(),counts,events,errors,ticks:tick,sampling:'first 128 of each frequent event kind; all remaps, throws, catches, slots and executor boundaries'});recv('ack',()=>{}).wait();}});}
});
Interceptor.attach(base.add(0x80426),{onEnter(){guard(()=>{const f=active(this.threadId);if(!f)return;
 f.captureCommit=(counts.decoder_commit||0)<128;
 record('decoder_commit',this.threadId,{state:state(f.ctx),next_index:this.context.r14.toUInt32(),opcode:this.context.r8.toUInt32()&255,counter:this.context.rdx.toInt32()});
});}});
Interceptor.attach(base.add(0x815bf),{onEnter(){guard(()=>{const f=active(this.threadId);if(f)record('before_cleanup',this.threadId,{state:state(f.ctx),output_hex:hex(f.arg,128)},true);});}});
for(const [kind,rva] of [['push',0x4c880],['drain',0x4c720],['remap',0x7fb70]]){
 Interceptor.attach(base.add(rva),{
  onEnter(){guard(()=>{const f=active(this.threadId);if(!f)return;this.c=context(f,this.context.rcx);
   if(kind==='push'&&f.captureCommit){record('decoder_next_push',this.threadId,{state:state(this.c),item:this.context.rdx.toUInt32()},true);f.captureCommit=false;}
   this.sample=kind==='remap'||(counts[kind+'_enter']||0)<128;
   record(kind+'_enter',this.threadId,this.sample?{state:state(this.c),item:this.context.rdx.toUInt32(),return_rva:this.returnAddress.sub(base).toString()}: {},kind==='remap');});},
  onLeave(){guard(()=>{if(this.c)record(kind+'_leave',this.threadId,this.sample?{state:state(this.c)}:{},kind==='remap');});}
 });
}
const handlers=[0x4c490,0x4c4f0,0x4c560,0x4c5b0,0x4c5d0,0x4c630,0x4c690,0x4c6a0];
handlers.forEach((rva,h)=>Interceptor.attach(base.add(rva),{
 onEnter(){guard(()=>{const f=active(this.threadId);if(!f)return;this.c=context(f,this.context.rcx);this.sample=(counts.handler_enter||0)<128;
 record('handler_enter',this.threadId,this.sample?{h,rva,state:state(this.c)}:{});});},
 onLeave(){guard(()=>{if(this.c)record('handler_leave',this.threadId,this.sample?{h,state:state(this.c)}:{});});}
}));
Interceptor.attach(base.add(0x49a30),{
 onEnter(){guard(()=>{const f=active(this.threadId);if(f)this.c=context(f,this.context.rcx);});},
 onLeave(rv){guard(()=>{if(this.c)record('vpc_read',this.threadId,{pc:rv.toUInt32(),encoded:this.c.add(0x10d0).readU64().toString()});});}
});
Interceptor.attach(base.add(0x889e0),{
 onEnter(){guard(()=>{const f=active(this.threadId);if(!f)return;this.c=context(f,this.context.rcx.readPointer());this.index=this.context.rdx.toUInt32()&255;
 record('slot_enter',this.threadId,{index:this.index,state:state(this.c),return_rva:this.returnAddress.sub(base).toString()},true);});},
 onLeave(rv){guard(()=>{if(this.c)record('slot_leave',this.threadId,{index:this.index,value:rv.toString(),state:state(this.c)},true);});}
});
Interceptor.attach(base.add(0x3a5fa0),{onEnter(){guard(()=>{const f=active(this.threadId);if(f)record('throw',this.threadId,{payload:hex(this.context.rcx,8),type:this.context.rdx.sub(base).toString(),state:f.ctx?state(f.ctx):null},true);});}});
// FH4 handler/continuation obtained from the original PE metadata, not guessed.
for(const rva of CATCH_RVAS)Interceptor.attach(base.add(rva),{onEnter(){guard(()=>{const f=active(this.threadId);if(f)record('catch',this.threadId,{rva,state:f.ctx?state(f.ctx):null},true);});}});
send({kind:'ready'});
'''


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--exe', type=pathlib.Path, default=ROOT/'pafet_pass8.exe')
    ap.add_argument('--user', default='alice')
    ap.add_argument('--serial', default='serial01')
    ap.add_argument('--timeout', type=int, default=120)
    ap.add_argument('--out', type=pathlib.Path, default=ROOT/'jack_xxvi_evidence/windows_capture.json')
    args = ap.parse_args()
    import sys
    sys.path.insert(0, str(ROOT/'scripts/native'))
    from fh4_metadata import MetadataReader
    m = MetadataReader()
    entry = next(e for e in m.rf if e.struct.BeginAddress <= 0x804c0 < e.struct.EndAddress)
    catches = sorted({va-0x140000000 for _,_,_,fn,cont in m.handlers(entry) for va in [fn,*cont]})
    agent = AGENT.replace('CATCH_RVAS', json.dumps(catches))
    original = (ROOT/'pafet.bin').read_bytes()
    target = args.exe.resolve().read_bytes()
    result = {'run_id':str(uuid.uuid4()), 'original_sha256':hashlib.sha256(original).hexdigest(),
              'target_sha256':hashlib.sha256(target).hexdigest(),
              'agent_sha256':hashlib.sha256(agent.encode()).hexdigest(),
              'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
              'target':str(args.exe.resolve()), 'frida':frida.__version__,
              'patch_offsets':[i for i,(a,b) in enumerate(zip(original,target)) if a!=b],
              'same_file_size':len(original)==len(target), 'user':args.user, 'serial':args.serial,
              'host_errors':[], 'stdout_hex':'', 'stderr_hex':''}
    device = frida.get_local_device()
    done = threading.Event()
    ready = threading.Event()
    output = {1:bytearray(), 2:bytearray()}
    pid = device.spawn([str(args.exe.resolve())], stdio='pipe')
    def on_output(p, fd, data):
        if p == pid and fd in output: output[fd].extend(data)
    device.on('output', on_output)
    session = device.attach(pid)
    script = session.create_script(agent)
    def message(msg, data):
        if msg['type'] == 'error':
            result['host_errors'].append(msg); done.set()
        elif msg['type'] == 'send':
            payload = msg['payload']
            if payload['kind'] == 'ready': ready.set()
            elif payload['kind'] == 'done':
                result['capture'] = payload
                script.post({'type':'ack'})
                done.set()
    script.on('message', message)
    start = time.monotonic()
    try:
        script.load()
        if not ready.wait(10): raise RuntimeError('agent did not initialize')
        device.resume(pid)
        device.input(pid, (args.user+'\r\n'+args.serial+'\r\n').encode())
        if not done.wait(args.timeout): result['host_errors'].append('capture timeout')
    finally:
        result['elapsed_seconds'] = time.monotonic()-start
        result['stdout_hex'] = output[1].hex()
        result['stderr_hex'] = output[2].hex()
        try: device.kill(pid)
        except frida.ProcessNotFoundError: pass
        device.off('output', on_output)
        try: session.detach()
        except frida.InvalidOperationError: pass
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    capture = result.get('capture', {})
    print(json.dumps({'out':str(args.out),'counts':capture.get('counts'),
                      'errors':result['host_errors']+capture.get('errors',[]),
                      'seconds':result['elapsed_seconds']},indent=2))
    if result['host_errors'] or capture.get('errors') or not capture: raise SystemExit(1)


if __name__ == '__main__': main()
