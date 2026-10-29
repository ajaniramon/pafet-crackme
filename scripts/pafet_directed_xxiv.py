#!/usr/bin/env python3
"""Directed entry states for native branches, never credential search."""
import argparse,ctypes,hashlib,importlib.util,json,pathlib,struct
import unicorn
from unicorn.x86_const import *
from pafet_native_diff_xxiv import ROOT,OUT,BASE,Cpu,library,run_vector,snapshot
MASK=(1<<64)-1
def q(data,off):return struct.unpack_from('<Q',data,off)[0]
def putq(data,off,value):struct.pack_into('<Q',data,off,value&MASK)
def live(data,slot,value):
    mask=q(data,0x1e8)^(((slot+1)*q(data,0x1f0))&MASK)^((data[0x278+slot]*q(data,0x1f8))&MASK)
    putq(data,0x208+8*slot,value+mask if data[0x200] else value^mask)
def mutation(changes):
    def apply(uc,vector):
        ctx=int(vector['regs']['rcx'],16);data=bytearray(uc.mem_read(ctx,8192))
        if changes.get('encoding_mode') is not None:
            values=[]
            for i in range(14):
                mask=q(data,0x1e8)^(((i+1)*q(data,0x1f0))&MASK)^((data[0x278+i]*q(data,0x1f8))&MASK)
                raw=q(data,0x208+8*i);values.append(((raw-mask) if data[0x200] else raw^mask)&MASK)
            data[0x200]=changes['encoding_mode']
            for i,v in enumerate(values):live(data,i,v)
        for name,slot in [('resume_slot',10),('pc',1),('guard_magic',0)]:
            if name in changes:live(data,slot,changes[name])
        for name,off in [('canary',0x1170),('opaque_nonce',0x688)]:
            if name in changes:putq(data,off,changes[name])
        for name,off in [('pending_work',0x5b8),('maintenance_period',0x1190),('maintenance_count',0x1194),('epoch',0x154)]:
            if name in changes:struct.pack_into('<I',data,off,changes[name])
        uc.mem_write(ctx,bytes(data))
        if 'tls_count' in changes:
            gs=0x50000000;array=gs+0x1000;tls=gs+0x2000
            uc.mem_map(gs,0x6000);uc.reg_write(UC_X86_REG_GS_BASE,gs)
            uc.mem_write(gs+0x58,struct.pack('<Q',array));uc.mem_write(array,struct.pack('<Q',tls))
            uc.mem_write(tls+0x15a0+0x500,struct.pack('<QQQ',0x123456789abcdef0,0x9e3779b97f4a7c15,0x2545f4914f6cdd1d))
            uc.mem_write(tls+0x15a0+0x520,bytes([changes.get('tls_mode',0)]))
            uc.mem_write(tls+0x15a0+0x524,struct.pack('<I',changes['tls_count']))
        if 'mode' in changes:uc.reg_write(UC_X86_REG_RDX,changes['mode'])
        if 'next_opcode' in changes:
            # Modify materialized input bytes, not PE instructions. Both x64
            # buffers evolve together afterwards; their XOR carries the byte.
            pc_mask=q(data,0x1e8)^((2*q(data,0x1f0))&MASK)^((data[0x279]*q(data,0x1f8))&MASK)
            raw=q(data,0x210);pc=((raw-pc_mask) if data[0x200] else raw^pc_mask)&MASK
            # The LUT is unchanged original .rdata; choose a concrete encoding.
            table=bytes(uc.mem_read(BASE+0x3dfcb0,256));wanted=changes['next_opcode']
            encoded=next(i for i in range(256) if table[i^0x33]^0xeb==wanted)
            shadow=uc.mem_read(q(data,0xa8)+pc,1)[0]
            uc.mem_write(q(data,0x1b0)+pc,bytes([encoded^shadow]))
    return apply
def old_oracle():
    spec=importlib.util.spec_from_file_location('historical_directed',ROOT/'scripts/pafet_h3bea0_unicorn_xiii.py');old=importlib.util.module_from_spec(spec);spec.loader.exec_module(old);return old
def find_nonces(lib,old,vector,runtime):
    result={};saved_uc=unicorn.Uc
    def factory(*a,**k):
        uc=saved_uc(*a,**k)
        def start(entry,stop,*a,**k):
            uc.reg_write(UC_X86_REG_RIP,entry);initial=snapshot(uc,runtime);model=lib.xxiv_new();regions=[]
            try:
                for lo,hi,prot in uc.mem_regions():
                    data=bytes(uc.mem_read(lo,hi-lo+1));buf=ctypes.create_string_buffer(data,len(data));assert lib.xxiv_map(model,lo,buf,len(data))==0
                    if not (BASE<=lo<BASE+0x460000 or runtime<=lo<runtime+0x460000):regions.append((lo,buf,len(data)))
                ctx=int(vector['regs']['rcx'],16);base=bytes(uc.mem_read(ctx,8192));origin=q(base,0x688)
                for trial in range(8192):
                    lib.xxiv_set_cpu(model,ctypes.byref(initial))
                    for lo,buf,size in regions:assert lib.xxiv_write(model,lo,buf,size)==0
                    nonce=(origin+trial)&MASK;buf=ctypes.create_string_buffer(struct.pack('<Q',nonce));assert lib.xxiv_write(model,ctx+0x688,buf,8)==0
                    status=lib.xxiv_run_until(model,BASE+0x3c73d,2500)
                    if status:continue
                    c=Cpu();lib.xxiv_get_cpu(model,ctypes.byref(c));value=c.r[10]
                    for label,condition in [('table_remap',(value&1023)==0x2c5),('dummy_lookup',(value&31)==0x15)]:
                        if condition and label not in result:result[label]={'nonce':nonce,'trial':trial,'r10_at_predicate':value}
                    if len(result)==2:break
                result['trials']=trial+1
            finally:lib.xxiv_delete(model)
        uc.emu_start=start;return uc
    old.Uc=factory;old.emulate_one(vector,pe_runtime_base=runtime)
    assert 'table_remap' in result and 'dummy_lookup' in result,result
    return result
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--no-build',action='store_true');ap.add_argument('--only');ap.add_argument('--search',action='store_true');args=ap.parse_args();lib=library(not args.no_build)
    caps=json.loads((ROOT/'vm_pools_evidence/h3bea0_vectors_xiii.json').read_text());vector=caps['alice']['vectors'][1];runtime=int(caps['alice']['pe_base'],16)
    old=old_oracle();saved=OUT/'directed_nonces.json'
    nonces=find_nonces(lib,old,vector,runtime) if args.search or not saved.exists() else json.loads(saved.read_text())
    saved.write_text(json.dumps(nonces,indent=2)+'\n');print('Native-state branch inputs',nonces,flush=True)
    cases=[('positive_mode_guard',{'mode':3},True),('canary_guard',{'canary':0},True),
        ('resume_slot_exit',{'resume_slot':1},False),('pending_work_exit',{'pending_work':1},False),
        ('guard_magic_exit',{'guard_magic':0},False),('budget_zero',{'mode':0x80000000},False),
        ('budget_one',{'mode':0x80000001},False),('cursor_out_of_bounds',{'pc':1752},False),
        ('alternate_live_encoding',{'encoding_mode':1},False),
        ('maintenance_missing_tls',{'maintenance_period':1,'maintenance_count':0},True),
        ('periodic_register_maintenance',{'maintenance_period':1,'maintenance_count':0,'tls_count':0},False),
        ('maintenance_tls_active',{'maintenance_period':1,'maintenance_count':0,'tls_count':2},False),
        ('maintenance_tls_add_encoding',{'maintenance_period':1,'maintenance_count':0,'tls_count':2,'tls_mode':1},False),
        ('periodic_epoch',{'epoch':31},False),
        ('table_remap',{'opaque_nonce':nonces['table_remap']['nonce']},False),
        ('dummy_lookup',{'opaque_nonce':nonces['dummy_lookup']['nonce']},False)]
    results=[];failures=[]
    for label,changes,fault in cases:
        if args.only and label!=args.only:continue
        try:r=run_vector(lib,old,label,1,vector,runtime,mutation(changes),limit=500000 if label=='table_remap' else 100000,allow_fault=fault)
        except Exception as error:
            failures.append({'case':label,'failure':repr(error),'mutation':changes});print('FAILED',label,repr(error),flush=True);continue
        r['entry_mutation']=changes;results.append(r)
        (OUT/'directed.partial.json').write_text(json.dumps({'cases':results},indent=2)+'\n')
        print(label,r['steps'],'instruction states match',r.get('terminal_native_error','normal return'),flush=True)
    (OUT/('directed_native.json' if not args.only else 'directed_'+args.only+'.json')).write_text(json.dumps({'cases':results,'all_match':not failures,'failures':failures,
        'scope':'Mutated component entry states. Fault paths use the original harness unmapped low-page contract.'},indent=2)+'\n')
    if failures:raise SystemExit(1)
if __name__=='__main__':main()
