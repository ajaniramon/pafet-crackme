#!/usr/bin/env python3
"""Regenerate native user-VM evidence on Windows using the existing pass8 oracle.

The two-byte SHA-gate research variant already in the desktop repository is
used unchanged. All user-VM bytes are checked against the original PE before
running. Instrumentation changes process memory only. No acceptance claim.
"""
import argparse, gzip, hashlib, json, pathlib, threading
import frida

ROOT=pathlib.Path(__file__).resolve().parents[1]
OUT=ROOT/'jack_xxiii_evidence/windows'
AGENT=r'''
const base=Process.enumerateModules().find(m=>m.name.toLowerCase().endsWith('.exe')).base;
const B=BigInt(base.toString()),MASK=(1n<<64n)-1n;
let active=false,vm=null,step=0,pending=null,records=[],seen=new Set(),cores=new Set(),lastStore=null;
const qp=(p,o)=>BigInt(p.add(o).readU64().toString());
const dp=(p,o)=>p.add(o).readU32();
const vp=(p,o)=>p.add(o).readPointer();
const canon=p=>Number(BigInt(p.toString())-B+0x140000000n);
function emit(e){records.push(e);if(records.length>=24)flush();}
function flush(){if(records.length){send({kind:'batch',records});records=[];}}
function bytes(p,n){return Array.from(new Uint8Array(p.readByteArray(n))).map(x=>x.toString(16).padStart(2,'0')).join('');}
function live(c,i){let mask=qp(c,0x1e8)^(BigInt(i+1)*qp(c,0x1f0)&MASK)^(BigInt(c.add(0x278+i).readU8())*qp(c,0x1f8)&MASK);let v=qp(c,0x208+8*i);return (c.add(0x200).readU8()?v-mask:v^mask)&MASK;}
function state(kind){
 const c=vm,registers=[],stack=[];
 for(let i=0;i<256;i++){
  let mask=qp(c,0x178)^(BigInt(i)*qp(c,0x180)&MASK)^(BigInt(c.add(0x69f+i).readU8())*qp(c,0x18)&MASK);
  let index=(((dp(c,0x1188)+i)&1)<<8)+i;
  let v=BigInt(vp(c,0x1158).add(8*index).readU64().toString());
  registers.push(((c.add(0x118c).readU8()?v-mask:v^mask)&MASK).toString());
 }
 let sp=Number(live(c,2));if(sp>1024)throw new Error('invalid decoded SP '+sp);
 for(let i=0;i<sp;i++){
  let mask=qp(c,0x188)^(BigInt(i+1)*qp(c,0x190)&MASK)^(BigInt(c.add(0x89f+i).readU8())*qp(c,0x20)&MASK);
  let v=BigInt(vp(c,0x1160).add(i*8).readU64().toString())^mask,n=mask>>58n;
  if(n)v=((v>>n)|(v<<(64n-n)))&MASK;
  stack.push(v.toString());
 }
 emit({kind,step,pc:Number(live(c,1)),registers,stack});
}
function target(h){
 let n=BigInt(h.toString());if(n>=B&&n<B+0x460000n)return h;
 if(h.readU8()==0x48&&h.add(1).readU8()==0xb8)return h.add(2).readPointer();
 if(bytes(h,3)=='4c8b1d'){
  let ref=h.add(7+h.add(3).readS32()),v=qp(h,9),k=qp(ref,0),op=bytes(h.add(17),3);
  if(op=='4c31d8')return ptr('0x'+(v^k).toString(16));
  if(op=='4c01d8')return ptr('0x'+((v+k)&MASK).toString(16));
 }
 throw new Error('unknown trampoline '+h+' '+bytes(h,24));
}
function observe(context,site){
  if(!active||!pending)return;
  const t=site.target||target(context[site.reg]),targetkey=t.toString();
  const args=[context.rcx,context.rdx,context.r8,context.r9];
  vm=args[0];step++;
  if(!pending)throw new Error('handler without selector');
  const c=vm,s=pending;pending=null;
  const table=vp(c,0xf40),alias=c.add(0xf64+2*(s.ch*62+s.raw_op)).readU16();
  const key=dp(c,0xf50),baseHandler=qp(c,0xf48);
  const entry=table.add(4*(s.ch*62+alias)).readS32();
  const trampoline=ptr('0x'+(((BigInt(entry)^BigInt(key|0))+baseHandler)&MASK).toString(16));
  emit({kind:'handler_enter',step,raw_op:s.raw_op,ch:s.ch,alias,entry:canon(t),
   caller:site.ret,root:site.root,trampoline:trampoline.toString(),
   r9:args[3].toString(),mode:args[1].toString(),ctx_seed:dp(c,12),ctx_e0:qp(c,0xe0).toString(),
   table_entry_i32:entry,key_u32:key,handler_base:baseHandler.toString(),
   selected_target:canon(target(trampoline))});
  state('handler_state');
}
function hook(h){
 const t=target(h),key=t.toString();if(seen.has(key))return;seen.add(key);
 // The first JNS follows the semantic core in these flattened handlers.
 let p=t;
 for(let i=0;i<640;i++){
  let ins=Instruction.parse(p);
  if(ins.mnemonic=='jns'){
   if(!cores.has(p.toString())){cores.add(p.toString());try{Interceptor.attach(p,{onEnter(){if(active)state('core_state');}});}catch(e){emit({kind:'unhooked_core',address:canon(p),error:String(e)});}}
   break;
  }
  if(ins.mnemonic=='ret'||ins.mnemonic=='int3')break;p=ins.next;
 }
 Interceptor.attach(t,{onEnter(){if(active)observe(this.context,{target:t,ret:canon(this.returnAddress),root:pending?pending.root:false});}});
 Interceptor.flush();
}
Interceptor.attach(base.add(0x74d0),{
 onEnter(args){this.enabled=active;if(!active)return;this.ctx=args[0];this.selection={ch:args[1].toUInt32(),raw_op:args[2].toUInt32(),root:false};},
 onLeave(ret){if(this.enabled){this.selection.alias=ret.toUInt32();pending=this.selection;
  const c=this.ctx,at=this.selection.ch*62+ret.toUInt32();
  const entry=vp(c,0xf40).add(at*4).readS32(),key=dp(c,0xf50)|0;
  const trampoline=ptr('0x'+(((BigInt(entry)^BigInt(key))+qp(c,0xf48))&MASK).toString(16));hook(trampoline);
 }}
});
Interceptor.attach(base.add(0x3ebb0),{
 onEnter(args){this.enabled=active;},
 onLeave(ret){if(this.enabled){if(pending)pending.root=true;hook(ret);}}
});
function object(p){let size=Number(qp(p,16)),capacity=Number(qp(p,24)),buffer=capacity>=16?vp(p,0):p;if(size>10000)throw new Error('bad string');return {address:p.toString(),buffer:buffer.toString(),size,capacity,hex:bytes(buffer,size)};}
Interceptor.attach(base.add(0x48a28),{onEnter(){if(active){const c=this.context;lastStore={step,index:Number(BigInt(c.r8.toString())),address:c.r9.add(c.r8)};emit({kind:'store_before',step,index:lastStore.index,address:lastStore.address.toString(),buffer:c.r9.toString(),before:lastStore.address.readU8(),sequence_start:0x140048a28,store_rip:0x140048a3a});}}});
Interceptor.attach(base.add(0x48a3e),{onEnter(){if(active)emit({kind:'store_after',step,index:lastStore.index,address:lastStore.address.toString(),byte:lastStore.address.readU8(),next_rip:0x140048a3e});}});
Interceptor.attach(base.add(0x48960),{
 onEnter(args){this.enabled=active;this.op=args[1].toUInt32();this.host=args[0];if(active&&this.op==4)emit({kind:'working_object',step,...object(vp(this.host,0))});},
 onLeave(ret){if(this.enabled&&this.op==6)emit({kind:'memory',step,op:6,hex:object(vp(this.host,24)).hex});}
});
Interceptor.attach(base.add(0x396990),{
 onEnter(args){this.user=args[1].toUInt32()==10;if(this.user){
  active=true;this.host=args[0];this.tid=Process.getCurrentThreadId();
 }},
 onLeave(){if(this.user){emit({kind:'wrapper_output',step,...object(vp(this.host,24))});active=false;flush();send({kind:'done',steps:step,targets:Array.from(seen).map(s=>canon(ptr(s)))});}}
});
send({kind:'ready',base:base.toString()});
'''

def configuration():
    return AGENT

def capture(label,user,exe,timeout=75):
    OUT.mkdir(parents=True,exist_ok=True)
    path=OUT/(label+'.jsonl.gz');done=threading.Event();summary={};errors=[];stdout=[]
    device=frida.get_local_device()
    def on_output(pid,fd,data):
        if data:stdout.append({'fd':fd,'text':data.decode('utf-8','replace')})
    device.on('output',on_output)
    pid=device.spawn([str(exe)],stdio='pipe')
    session=None
    try:
        with gzip.open(path,'wt',encoding='utf-8',newline='\n') as stream:
            def on_message(message,data):
                if message['type']=='error':errors.append(message);done.set();return
                if message['type']!='send':return
                p=message['payload']
                if p['kind']=='batch':
                    for e in p['records']:
                        for key in ('registers','stack'):
                            if key in e:e[key]=list(map(int,e[key]))
                        stream.write(json.dumps(e,separators=(',',':'))+'\n')
                elif p['kind']=='done':summary.update(p);done.set()
            session=device.attach(pid);script=session.create_script(configuration());script.on('message',on_message);script.load()
            device.resume(pid);device.input(pid,user+b'\r\nserial01\r\n')
            assert done.wait(timeout),('capture timeout',label,stdout)
            assert not errors,errors
            assert summary,('capture incomplete',stdout)
    finally:
        try:device.kill(pid)
        except frida.ProcessNotFoundError:pass
        if session:
            try:session.detach()
            except frida.InvalidOperationError:pass
        device.off('output',on_output)
    summary.update({'label':label,'input_hex':user.hex(),'stdout':stdout,'platform':'Windows native, existing pass8 gate variant',
        'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
        'original_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),
        'oracle_sha256':hashlib.sha256(exe.read_bytes()).hexdigest(),'jsonl_gzip_sha256':hashlib.sha256(path.read_bytes()).hexdigest()})
    (OUT/(label+'.summary.json')).write_text(json.dumps(summary,indent=2)+'\n',encoding='utf-8')
    print(label,'steps',summary['steps'],'native targets',len(summary['targets']),flush=True)

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--only');ap.add_argument('--exe',type=pathlib.Path,default=ROOT/'pafet_pass8.exe');ap.add_argument('--skip-existing',action='store_true');args=ap.parse_args()
    original=(ROOT/'pafet.bin').read_bytes();variant=args.exe.read_bytes()
    differences=[i for i,(a,b) in enumerate(zip(original,variant)) if a!=b]
    assert len(original)==len(variant) and differences==[0x395efb,0x395efc],differences
    cases=[('a8',b'abcdefgh'),('empty',b''),('a1',b'a'),('alice',b'alice'),('ramon',b'ramon'),('alice123',b'alice123'),('ramonbarcelona',b'ramonbarcelona')]+[(f'long_a{n}',b'a'*n) for n in (23,24,25)]+[(f'long_pattern{n}',bytes(65+i for i in range(n))) for n in (23,24,25)]
    for label,user in cases:
        if args.only and label!=args.only:continue
        if args.skip_existing and (OUT/(label+'.summary.json')).exists():continue
        capture(label,user,args.exe)

if __name__=='__main__':main()
