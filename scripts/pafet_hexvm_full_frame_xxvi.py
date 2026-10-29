#!/usr/bin/env python3
"""Full initialized executor frame, native callbacks, clocks and final buffers."""
import gzip,hashlib,json,pathlib,threading,uuid
import frida
from pafet_hexvm_frames_xxvi import AGENT as FRAME_AGENT,ROOT
AGENT=FRAME_AGENT.split('Interceptor.attach(base.add(0x804c0)')[0]+r'''
let full=null,clock=[],callbacks=[],pushes=[],caller=null,output=null,cb=null,started=false;
const gsCode=Memory.alloc(Process.pageSize);gsCode.writeByteArray([0x65,0x48,0x8b,0x04,0x25,0x58,0,0,0,0xc3]);Memory.protect(gsCode,Process.pageSize,'r-x');const getTlsArray=new NativeFunction(gsCode,'pointer',[]);
function str(p){const n=p.add(16).readU64().toNumber(),cap=p.add(24).readU64().toNumber();if(n>4096)throw Error('string too large');return {address:p.toString(),size:n,capacity:cap,hex:hex(cap>=16?p.readPointer():p,n)};}
function callback(c){const p=c.rcx;return {object:p.toString(),operation:c.rdx.toUInt32(),arg:c.r8.toString(),position:p.readPointer().readU64().toString(),input:str(p.add(8).readPointer()),value:hex(p.add(16).readPointer(),8),output:str(p.add(24).readPointer())};}
Interceptor.attach(base.add(0x804c0),{onEnter(){active.set(this.threadId,true);output=this.context.rcx;caller=this.returnAddress;},onLeave(){active.delete(this.threadId);}});
Interceptor.attach(base.add(0x81540),{onEnter(){if(started||!active.has(this.threadId))return;try{started=true;const c=this.context,ctx=c.rsp.add(0x180),tls=getTlsArray();full={kind:'executor',entry:regs(c),ctx:ctx.toString(),memory:capture(c,ctx),cookie:base.add(0x40d020).readU64().toString(),tls_array:tls.toString()};
const seen=new Set(full.memory.map(m=>m.base));for(const [p,n] of [[tls,4096],[tls.readPointer(),0x4000]])for(let a=p.and(ptr('0xfffffffffffff000'));a.compare(p.add(n))<0;a=a.add(4096))if(!seen.has(a.toString())){full.memory.push({base:a.toString(),hex:hex(a,4096)});seen.add(a.toString());}
}catch(e){errors.push(String(e));}}});
Interceptor.attach(base.add(0x88a00),{
 onEnter(){if(!started||!active.has(this.threadId))return;try{this.row={before:callback(this.context)};this.object=this.context.rcx;callbacks.push(this.row);cb=this.object;}catch(e){errors.push(String(e));}},
 onLeave(rv){if(!this.row)return;try{const c={rcx:this.object,rdx:ptr(this.row.before.operation),r8:ptr(this.row.before.arg)};this.row.after=callback(c);this.row.result=rv.toString();}catch(e){errors.push(String(e));}}
});
for(const rva of [0x3a1474,0x3a1490])Interceptor.attach(base.add(rva),{onEnter(){this.live=started&&active.has(this.threadId);},onLeave(rv){if(this.live)clock.push({rva,value:rv.toString()});}});
Interceptor.attach(base.add(0x4c880),{onEnter(){if(!started||!active.has(this.threadId))return;try{const c=this.context.rcx;pushes.push([this.context.rdx.toUInt32(),...[0x4b0,0x230,0x940,0x4c0].map(o=>c.add(o).readU64().toString()),c.add(0x4b8).readU32()]);}catch(e){errors.push(String(e));}}});
Interceptor.attach(base.add(0x815bf),{onEnter(){if(!started||!active.has(this.threadId))return;try{
 full.after=regs(this.context);full.after_memory=full.memory.map(m=>({base:m.base,hex:hex(ptr(m.base),m.hex.length/2)}));full.final_context=hex(ptr(full.ctx),0x1200);full.output_hex=hex(output,128);full.callback=callback({rcx:cb,rdx:ptr(0),r8:ptr(0)});
 send({kind:'done',base:base.toString(),full,clock,callbacks,pushes,errors});recv('ack',()=>{}).wait();
}catch(e){send({kind:'done',errors:[String(e)]});}}});
send({kind:'ready'});
'''

def main():
    out=ROOT/'jack_xxvi_evidence/full_native_frame.json.gz'
    result={'run_id':str(uuid.uuid4()),'agent_sha256':hashlib.sha256(AGENT.encode()).hexdigest(),'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),'pe_sha256':hashlib.sha256((ROOT/'pafet_pass8.exe').read_bytes()).hexdigest(),'host_errors':[]}
    dev=frida.get_local_device();pid=dev.spawn([str(ROOT/'pafet_pass8.exe')],stdio='pipe');done=threading.Event();ready=threading.Event();session=dev.attach(pid);script=session.create_script(AGENT)
    def message(m,data):
        if m['type']=='error':result['host_errors'].append(m);done.set()
        elif m['type']=='send':
            if m['payload']['kind']=='ready':ready.set()
            elif m['payload']['kind']=='done':result.update(m['payload']);script.post({'type':'ack'});done.set()
    script.on('message',message)
    try:
        script.load();assert ready.wait(10),'initialization';dev.resume(pid);dev.input(pid,b'alice\r\nserial01\r\n');assert done.wait(120),'timeout'
        assert not result['host_errors'] and not result['errors'],result.get('errors')
    finally:
        try:dev.kill(pid)
        except frida.ProcessNotFoundError:pass
        try:session.detach()
        except frida.InvalidOperationError:pass
        out.write_bytes(gzip.compress(json.dumps(result,separators=(',',':')).encode(),mtime=0))
    print('clocks',result['clock']);print('callbacks',len(result['callbacks']),'pushes',len(result['pushes']));print('final',result['full']['callback'])

if __name__=='__main__':main()
