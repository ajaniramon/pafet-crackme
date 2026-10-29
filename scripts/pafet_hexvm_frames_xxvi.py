#!/usr/bin/env python3
"""Capture complete native decoder/remap frames for independent replay."""
import argparse, gzip, hashlib, json, pathlib, threading, time, uuid
import frida
ROOT=pathlib.Path(__file__).resolve().parents[1]
AGENT=r'''
const mod=Process.enumerateModules().find(m=>m.name.toLowerCase().endsWith('.exe')),base=mod.base;
const names=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi','r8','r9','r10','r11','r12','r13','r14','r15'];
let frames=[],errors=[],active=new Map(),counts={},pending=new Map();
function hex(p,n){return Array.from(new Uint8Array(p.readByteArray(n))).map(x=>x.toString(16).padStart(2,'0')).join('');}
function regs(c){let r={};for(const n of names)r[n]=c[n].toString();return r;}
function capture(c,ctx){
 const pages=new Map(),modules=Process.enumerateModules();
 function add(p,n){
  let start=p.and(ptr('0xfffffffffffff000')),end=p.add(n);
  for(let a=start;a.compare(end)<0;a=a.add(4096)){
   const key=a.toString();if(pages.has(key))continue;
   if(a.compare(base)>=0&&a.compare(base.add(mod.size))<0)continue;
   const range=Process.findRangeByAddress(a);if(!range||range.protection[0]!=='r')throw Error('unreadable capture '+a);
   pages.set(key,{base:key,hex:hex(a,4096)});
  }
 }
 add(c.rsp.sub(0x2000),0x8000);add(ctx,0x2000);
 // Capture backing stores reachable from context and enclosing executor frame.
 for(const [start,size] of [[ctx,0x1200],[c.rsp,0x5000]])for(let off=0;off<size;off+=8){
  const p=start.add(off).readPointer();if(p.compare(ptr('0x10000'))<0)continue;
  if(modules.some(m=>p.compare(m.base)>=0&&p.compare(m.base.add(m.size))<0))continue;
  const range=Process.findRangeByAddress(p);if(!range||range.protection[0]!=='r')continue;
  const remain=range.base.add(range.size).sub(p).toUInt32();add(p,Math.min(0x10000,remain));
 }
 return Array.from(pages.values());
}
function enter(kind,c,tid,ctx){
 const key=kind+':'+tid;const n=counts[kind]=(counts[kind]||0)+1;
 const counter=ctx.add(0x928).readU32();
 if(kind==='decoder'&&!(n<=2||counter===31||counter===63))return;
 if(kind==='remap'&&n>3)return;
 const f={kind,ordinal:n,counter,tid,ctx:ctx.toString(),entry:regs(c),memory:capture(c,ctx)};
 pending.set(key,f);frames.push(f);
}
function leave(kind,c,tid){const key=kind+':'+tid,f=pending.get(key);if(!f)return;
 f.after=regs(c);f.after_memory=f.memory.map(m=>({base:m.base,hex:hex(ptr(m.base),m.hex.length/2)}));pending.delete(key);
}
Interceptor.attach(base.add(0x804c0),{onEnter(){active.set(this.threadId,true);},onLeave(){active.delete(this.threadId);send({kind:'done',base:base.toString(),frames,errors,counts,open:pending.size});recv('ack',()=>{}).wait();}});
Interceptor.attach(base.add(0x80000),{onEnter(){if(!active.has(this.threadId))return;try{enter('decoder',this.context,this.threadId,this.context.rcx);}catch(e){errors.push(String(e));}}});
Interceptor.attach(base.add(0x4c880),{onEnter(){if(!active.has(this.threadId))return;try{leave('decoder',this.context,this.threadId);}catch(e){errors.push(String(e));}}});
const returnHooks=new Set(),waiting=new Map();
Interceptor.attach(base.add(0x7fb70),{onEnter(){if(!active.has(this.threadId))return;try{
 enter('remap',this.context,this.threadId,this.context.rcx);
 if(!pending.has('remap:'+this.threadId))return;
 const k=this.returnAddress.toString();waiting.set(k,this.threadId);
 if(!returnHooks.has(k)){returnHooks.add(k);Interceptor.attach(this.returnAddress,{onEnter(){try{const tid=waiting.get(k);if(tid!==undefined){leave('remap',this.context,tid);waiting.delete(k);}}catch(e){errors.push(String(e));}}});Interceptor.flush();}
 }catch(e){errors.push(String(e));}}});
send({kind:'ready'});
'''

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--out',type=pathlib.Path,default=ROOT/'jack_xxvi_evidence/native_frames.json.gz');args=ap.parse_args()
    result={'run_id':str(uuid.uuid4()),'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
            'agent_sha256':hashlib.sha256(AGENT.encode()).hexdigest(),'pe_sha256':hashlib.sha256((ROOT/'pafet_pass8.exe').read_bytes()).hexdigest(),'host_errors':[]}
    dev=frida.get_local_device();pid=dev.spawn([str(ROOT/'pafet_pass8.exe')],stdio='pipe');done=threading.Event();ready=threading.Event()
    session=dev.attach(pid);script=session.create_script(AGENT)
    def message(m,data):
        if m['type']=='error':result['host_errors'].append(m);done.set()
        elif m['type']=='send':
            if m['payload']['kind']=='ready':ready.set()
            elif m['payload']['kind']=='done':result.update(m['payload']);script.post({'type':'ack'});done.set()
    script.on('message',message)
    try:
        script.load();assert ready.wait(10),'initialization failed';dev.resume(pid);dev.input(pid,b'alice\r\nserial01\r\n')
        assert done.wait(120),'timeout'
        assert not result['host_errors'] and not result['errors'] and not result['open'],result.get('errors')
    finally:
        try:dev.kill(pid)
        except frida.ProcessNotFoundError:pass
        try:session.detach()
        except frida.InvalidOperationError:pass
        args.out.write_bytes(gzip.compress(json.dumps(result,separators=(',',':')).encode(),mtime=0))
    print([(f['kind'],f['ordinal'],len(f['memory'])) for f in result['frames']])

if __name__=='__main__':main()
