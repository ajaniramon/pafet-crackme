#!/usr/bin/env python3
"""Root entry states of the VM wrappers, produced by the original program itself.

Each fresh Windows frame enters 0x14003bea0 with its real return address on the
stack instead of the sentinel. Unicorn keeps executing the original resolver,
which decodes the next opcodes and calls the next wrappers with their real
(ctx, mode, canary) arguments. At every root entry of a selected wrapper the
complete machine state is saved: GPRs, RFLAGS, XMM, GS base, every non-image
region and the image pages that differ from the PE. No state is synthesized.
"""
import argparse,collections,gzip,hashlib,importlib.util,json,struct
import unicorn
from unicorn.x86_const import *
from pafet_native_diff_xxiv import ROOT,OUT,BASE,NAMES
PAGE=0x1000;IMAGE=0x460000
WRAPPERS=(0x14003bea0,0x140014a00,0x140015820,0x140025020,0x1400216d0)
def harness():
    spec=importlib.util.spec_from_file_location('continue_harness',ROOT/'scripts/pafet_h3bea0_unicorn_xiii.py');old=importlib.util.module_from_spec(spec);spec.loader.exec_module(old);return old
def image(address,runtime):return BASE<=address<BASE+IMAGE or runtime<=address<runtime+IMAGE
def regions(uc):
    for lo,hi,prot in uc.mem_regions():yield lo,bytes(uc.mem_read(lo,hi-lo+1))
def snapshot(uc,runtime,pristine,entry,source,frame,order):
    rsp=uc.reg_read(UC_X86_REG_RSP);memory=[];pages=[]
    for lo,data in regions(uc):
        if not image(lo,runtime):memory.append({'base':hex(lo),'hex':data.hex()});continue
        for off in range(0,len(data),PAGE):
            page=data[off:off+PAGE]
            if pristine.get(lo+off)!=page:pages.append({'base':hex(lo+off),'hex':page.hex()})
    return {'source':source,'frame':frame,'order':order,'entry':hex(entry),'runtime_base':hex(runtime),
        'gprs':{n:hex(uc.reg_read(globals()['UC_X86_REG_'+n.upper()])) for n in NAMES},
        'rip':hex(uc.reg_read(UC_X86_REG_RIP)),'rflags':hex(uc.reg_read(UC_X86_REG_EFLAGS)),'gs_base':hex(uc.reg_read(UC_X86_REG_GS_BASE)),
        'xmm':[uc.reg_read(globals()['UC_X86_REG_XMM'+str(i)]).to_bytes(16,'little').hex() for i in range(16)],
        'return_address':hex(struct.unpack('<Q',bytes(uc.mem_read(rsp,8)))[0]),'memory':memory,'image_pages':pages}
def continue_frame(old,source,label,index,vector,runtime,wanted,per_wrapper,budget):
    found=[];counts=collections.Counter();saved=unicorn.Uc;state={}
    def factory(*a,**k):
        uc=saved(*a,**k);original_start=uc.emu_start
        def hook(u,address,size,data):
            pc=address-runtime+BASE if runtime<=address<runtime+IMAGE else address
            if pc in wanted and u.reg_read(UC_X86_REG_RSP)==state['root_rsp'] and counts[pc]<per_wrapper:
                counts[pc]+=1;found.append(snapshot(u,runtime,state['pristine'],pc,source,f'{label}/{index}',len(found)))
        def start(entry,stop,*a,**k):
            before=vector['native_before']
            for name in NAMES:uc.reg_write(globals()['UC_X86_REG_'+name.upper()],int(before[name],16))
            rsp=int(before['rsp'],16);uc.mem_write(rsp,struct.pack('<Q',int(vector['native_return_pc'],16)))
            gs=0x50000000;uc.mem_map(gs,PAGE);uc.mem_write(gs+0x58,struct.pack('<Q',int(vector['tls_array'],16)));uc.reg_write(UC_X86_REG_GS_BASE,gs)
            state['root_rsp']=rsp;state['pristine']={lo+off:data[off:off+PAGE] for lo,data in regions(uc) if image(lo,runtime) for off in range(0,len(data),PAGE)}
            uc.hook_add(unicorn.UC_HOOK_CODE,hook)
            try:original_start(entry,0,count=budget)
            except unicorn.UcError as error:state['stopped']=(str(error),hex(uc.reg_read(UC_X86_REG_RIP)))
        uc.emu_start=start;return uc
    old.Uc=factory
    try:old.emulate_one(vector,pe_runtime_base=runtime)
    except Exception:pass
    finally:old.Uc=saved
    return found,state.get('stopped')
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--wrappers',default=','.join(hex(w) for w in WRAPPERS[2:]))
    ap.add_argument('--per-wrapper',type=int,default=2);ap.add_argument('--budget',type=int,default=300000);args=ap.parse_args()
    wanted={int(x,16) for x in args.wrappers.split(',')};old=harness();entries=[];summary=[]
    for source in ('fresh_transfer_vectors.json.gz','fresh_native_vectors.json.gz'):
        captures=json.loads(gzip.decompress((OUT/source).read_bytes()))
        for label,capture in captures.items():
            for index,vector in enumerate(capture['vectors']):
                found,stopped=continue_frame(old,source,label,index,vector,int(capture['pe_base'],16),wanted,args.per_wrapper,args.budget)
                entries+=found;summary.append({'source':source,'frame':f'{label}/{index}','entries':[e['entry'] for e in found],'stopped':stopped})
                print(source,label,index,collections.Counter(e['entry'] for e in found),stopped or '',flush=True)
    blob=gzip.compress(json.dumps(entries).encode(),mtime=0);(OUT/'continued_entries.json.gz').write_bytes(blob)
    (OUT/'continued_entries_provenance.json').write_text(json.dumps({'original_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),
        'entries_sha256':hashlib.sha256(blob).hexdigest(),'budget':args.budget,'per_wrapper':args.per_wrapper,'count':dict(collections.Counter(e['entry'] for e in entries)),
        'frames':summary,'scope':'Original resolver continued in Unicorn from fresh Windows frames with their real return address. Root entries only (RSP of the captured root call). Memory outside the captured regions is unavailable.'},indent=2)+'\n')
if __name__=='__main__':main()
