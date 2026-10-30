#!/usr/bin/env python3
"""Fresh Windows entry/return GPR and memory snapshots for the full handler."""
import argparse,gzip,hashlib,json,pathlib,threading
import frida
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiv_evidence'
AGENT=r'''
const mod=Process.enumerateModules().find(m=>m.name.toLowerCase().endsWith('.exe')),base=mod.base;
const names=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi','r8','r9','r10','r11','r12','r13','r14','r15'];
function hex(p,n){return Array.from(new Uint8Array(p.readByteArray(n))).map(x=>x.toString(16).padStart(2,'0')).join('');}
function regs(c){let o={};for(const n of names)o[n]=c[n].toString();return o;}
let vectors=[],entries=0,open=0,errors=[],pendingReturns=new Map(),returnHooks=new Set();
const code=Memory.alloc(Process.pageSize);code.writeByteArray([0x65,0x48,0x8b,0x04,0x25,0x58,0,0,0,0xc3]);Memory.protect(code,Process.pageSize,'r-x');
const getTlsArray=new NativeFunction(code,'pointer',[]);
Interceptor.attach(base.add(0x3bea0),{
 onEnter(){
  TRANSFER_FILTER
  if(entries>=2)return;entries++;open++;
  const c=this.context,ctx=c.rcx,rsp=c.rsp;
  let v={regs:regs(c),ctx_hex:hex(ctx,8192),stack_hex:hex(rsp,2048),stack_below_hex:hex(rsp.sub(2048),2048),extra:{},native_before:regs(c),native_return_pc:this.returnAddress.toString()};
  this.v=v;this.ctx=ctx;this.rsp=rsp;
  const returnKey=this.returnAddress.toString();this.returnKey=returnKey;
  if(!returnHooks.has(returnKey)){
   returnHooks.add(returnKey);
   Interceptor.attach(this.returnAddress,{onEnter(){const waiting=pendingReturns.get(returnKey);if(waiting){waiting.native_after_caller=regs(this.context);pendingReturns.delete(returnKey);}}});
   Interceptor.flush();
  }
  const stackRange=Process.findRangeByAddress(rsp);
  function capture(p,size,src,allowStack=false,exact=false){
   try{
    if(p.isNull()||p.compare(ptr('0x100000'))<0||p.compare(ptr('0x7fffffffffff'))>0)return;
    if(p.compare(base)>=0&&p.compare(base.add(mod.size))<0)return;
    if(!allowStack&&stackRange&&p.compare(stackRange.base)>=0&&p.compare(stackRange.base.add(stackRange.size))<0)return;
    const lo=exact?p:p.and(ptr('0xfffffffffffff000')),range=Process.findRangeByAddress(p);if(!range||range.protection[0]!='r')return;
    const end=range.base.add(range.size),available=end.sub(lo).toUInt32();
    if(exact&&available<size){errors.push('short required input: '+src);return;}
    size=Math.min(size,available);const key=lo.toString();
    if(v.extra[key]&&v.extra[key].size>=size)return;
    v.extra[key]={size,before_hex:hex(lo,size),src};
   }catch(e){}
  }
  // These are separate state buffers, even when they reside on the native
  // stack. The 8-KiB context window does not contain either complete array.
  capture(ctx.add(0x1158).readPointer(),0x1000,'encoded register banks',true,true);
  capture(ctx.add(0x1160).readPointer(),0x2000,'encoded virtual stack',true,true);
  v.input_contract='complete-pointed-uservm-arrays-v1';
  for(const [offset,size] of [[0x1158,0x1000],[0x1160,0x2000]]){
   const key=ctx.add(offset).readPointer().toString();
   if(!v.extra[key]||v.extra[key].size<size)errors.push('missing required pointed input '+offset.toString(16));
  }
  capture(ctx.add(0xf48).readPointer(),0x20000,'trampoline pool');
  for(let i=0;i<8192;i+=8)capture(ctx.add(i).readPointer(),0x4000,'context pointer '+i.toString(16));
  const tls=getTlsArray();v.tls_array=tls.toString();capture(tls,0x1000,'GS:58 TLS array');capture(tls.readPointer(),0x4000,'TLS slot zero');
 },
 onLeave(ret){
  if(!this.v)return;const v=this.v;
  v.native_after=regs(this.context);v.after={rax:ret.toString(),ctx_hex:hex(this.ctx,8192),stack_hex:hex(this.rsp,2048)};
  for(const [address,info] of Object.entries(v.extra)){
   try{info.after_hex=hex(ptr(address),info.size);}catch(e){errors.push(String(e));info.after_hex=null;}
  }
  vectors.push(v);open--;
  pendingReturns.set(this.returnKey,v);
 }
});
Interceptor.attach(base.add(0x396990),{
 onEnter(args){this.user=args[1].toUInt32()==10;},
 onLeave(){if(this.user)send({kind:'done',pe_base:base.toString(),vectors,entries,open,errors});}
});
'''
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--transfer-only',action='store_true');args=ap.parse_args()
    exe=ROOT/'pafet_pass8.exe';original=(ROOT/'pafet.bin').read_bytes();variant=exe.read_bytes()
    assert [i for i,(a,b) in enumerate(zip(original,variant)) if a!=b]==[0x395efb,0x395efc]
    OUT.mkdir(exist_ok=True);device=frida.get_local_device();captures={}
    for label,user in [('alice',b'alice'),('ramon',b'ramon'),('long_a23',b'a'*23)]:
        done=threading.Event();result={};errors=[];pid=device.spawn([str(exe)],stdio='pipe');session=None
        def on_message(m,data):
            if m['type']=='error':errors.append(m);done.set()
            elif m['type']=='send':result.update(m['payload']);done.set()
        try:
            filter_code='''{const q=(o)=>BigInt(this.context.rcx.add(o).readU64().toString());
            const c=this.context.rcx,mask=q(0x1e8)^(2n*q(0x1f0)&((1n<<64n)-1n))^(BigInt(c.add(0x279).readU8())*q(0x1f8)&((1n<<64n)-1n));
            const raw=q(0x210),pc=Number((c.add(0x200).readU8()?raw-mask:raw^mask)&((1n<<64n)-1n));
            if(pc>=1752)return;
            const plain=c.add(0x1b0).readPointer().add(pc).readU8()^c.add(0xa8).readPointer().add(pc).readU8();
            const logical=base.add(0x3dfcb0+(plain^0x33)).readU8()^0xeb;if(logical!=26)return;}''' if args.transfer_only else ''
            session=device.attach(pid);script=session.create_script(AGENT.replace('TRANSFER_FILTER',filter_code));script.on('message',on_message);script.load();device.resume(pid);device.input(pid,user+b'\r\nserial01\r\n')
            assert done.wait(60),label
            assert not errors,errors
            assert result['vectors'] and not result['open'] and not result['errors'],result
            assert all('native_after_caller' in v for v in result['vectors']),('missing return probe',label)
            captures[label]=result
            print(label,'fresh complete native frames',len(result['vectors']),flush=True)
        finally:
            try:device.kill(pid)
            except frida.ProcessNotFoundError:pass
            if session:
                try:session.detach()
                except frida.InvalidOperationError:pass
        (OUT/('fresh_transfer_vectors.json.gz' if args.transfer_only else 'fresh_native_vectors.json.gz')).write_bytes(gzip.compress(json.dumps(captures,separators=(',',':')).encode(),mtime=0))
    (OUT/('fresh_transfer_provenance.json' if args.transfer_only else 'fresh_native_provenance.json')).write_text(json.dumps({'original_sha256':hashlib.sha256(original).hexdigest(),
        'oracle_sha256':hashlib.sha256(variant).hexdigest(),'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
        'frames':sum(len(x['vectors']) for x in captures.values()),'selection_policy':'entry next opcode is block transfer' if args.transfer_only else 'first two handler invocations',
        'scope':'Windows original user-VM instructions in preexisting two-byte gate variant. All GPRs and selected memory at native entry/return; initial RFLAGS/XMM not exposed by Frida.'},indent=2)+'\n')
if __name__=='__main__':main()
