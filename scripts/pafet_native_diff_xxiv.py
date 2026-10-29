#!/usr/bin/env python3
"""Instruction lockstep: generated C++ vs original x64 in Unicorn.

Compare every GPR, RIP, all currently defined arithmetic flags, all XMMs and
all bytes written by either engine after each instruction. A missing native
translation is a failure, never delegated to Unicorn by the C++ engine.
"""
import argparse,collections,ctypes,hashlib,importlib.util,json,pathlib,struct,subprocess
import capstone,unicorn
from unicorn.x86_const import *
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiv_evidence';BASE=0x140000000
NAMES=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi']+[f'r{i}' for i in range(8,16)]
UCREGS=[globals()['UC_X86_REG_'+n.upper()] for n in NAMES]
class Cpu(ctypes.Structure):
    _fields_=[('r',ctypes.c_uint64*16)]+[(n,ctypes.c_uint64) for n in ('rip','flags','defined','runtime_base','gs_base')]+[('xmm',(ctypes.c_uint8*16)*16)]
class Write(ctypes.Structure):
    _fields_=[('address',ctypes.c_uint64),('size',ctypes.c_uint32),('bytes',ctypes.c_uint8*16)]
def library(build=True):
    path=OUT/'build';path.mkdir(parents=True,exist_ok=True);target=path/'libpafet_xxiv.so'
    if build:subprocess.run(['g++','-std=c++17','-O1','-fPIC','-shared','-o',str(target),str(ROOT/'src/pafet_lifted_xxiv.cpp'),str(ROOT/'src/pafet_native_api_xxiv.cpp')],check=True)
    lib=ctypes.CDLL(str(target));lib.xxiv_new.restype=ctypes.c_void_p
    for name,args,result in [('xxiv_delete',[ctypes.c_void_p],None),('xxiv_map',[ctypes.c_void_p,ctypes.c_uint64,ctypes.c_void_p,ctypes.c_size_t],ctypes.c_int),
        ('xxiv_set_cpu',[ctypes.c_void_p,ctypes.POINTER(Cpu)],None),('xxiv_get_cpu',[ctypes.c_void_p,ctypes.POINTER(Cpu)],None),
        ('xxiv_read',[ctypes.c_void_p,ctypes.c_uint64,ctypes.c_void_p,ctypes.c_size_t],ctypes.c_int),
        ('xxiv_write',[ctypes.c_void_p,ctypes.c_uint64,ctypes.c_void_p,ctypes.c_size_t],ctypes.c_int),
        ('xxiv_step',[ctypes.c_void_p],ctypes.c_int),('xxiv_error',[ctypes.c_void_p],ctypes.c_char_p),
        ('xxiv_run_until',[ctypes.c_void_p,ctypes.c_uint64,ctypes.c_size_t],ctypes.c_int),
        ('xxiv_fault_address',[ctypes.c_void_p],ctypes.c_uint64),('xxiv_writes',[ctypes.c_void_p,ctypes.POINTER(Write),ctypes.c_size_t],ctypes.c_size_t)]:
        f=getattr(lib,name);f.argtypes=args;f.restype=result
    return lib
def snapshot(uc,runtime):
    c=Cpu();c.r[:]=[uc.reg_read(r) for r in UCREGS];c.rip=uc.reg_read(UC_X86_REG_RIP);c.flags=uc.reg_read(UC_X86_REG_EFLAGS);c.defined=0x8d5;c.runtime_base=runtime;c.gs_base=uc.reg_read(UC_X86_REG_GS_BASE)
    for i in range(16):c.xmm[i][:]=uc.reg_read(globals()['UC_X86_REG_XMM'+str(i)]).to_bytes(16,'little')
    return c
def run_vector(lib,old,label,index,vector,runtime,mutate=None,limit=100000,allow_fault=False):
    state={'case':label,'vector':index,'steps':0,'branches':[],'calls':[],'original_writes':0,'defined_flags_only':True};cached={};md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    original_uc=unicorn.Uc
    def factory(*a,**k):
        uc=original_uc(*a,**k);original_start=uc.emu_start
        native_writes=[]
        def on_write(u,access,address,size,value,data):native_writes.append((address,size))
        uc.hook_add(unicorn.UC_HOOK_MEM_WRITE,on_write)
        def start(entry,stop,*a,**k):
            if mutate:mutate(uc,vector)
            model=lib.xxiv_new()
            try:
                for lo,hi,prot in uc.mem_regions():
                    data=bytes(uc.mem_read(lo,hi-lo+1));buf=ctypes.create_string_buffer(data,len(data));assert lib.xxiv_map(model,lo,buf,len(data))==0
                uc.reg_write(UC_X86_REG_RIP,entry);initial=snapshot(uc,runtime);lib.xxiv_set_cpu(model,ctypes.byref(initial))
                for step in range(limit):
                    pc=uc.reg_read(UC_X86_REG_RIP)
                    if pc==stop:break
                    if pc not in cached:cached[pc]=next(md.disasm(bytes(uc.mem_read(pc,15)),pc))
                    ins=cached[pc];native_writes.clear()
                    status=lib.xxiv_step(model)
                    if status:
                        if not allow_fault or status not in (2,4,5):raise AssertionError(('C++ translation failed',label,index,hex(pc),ins.mnemonic,ins.op_str,status,lib.xxiv_error(model).decode(),hex(lib.xxiv_fault_address(model))))
                        try:original_start(pc,stop,count=1)
                        except unicorn.UcError as error:
                            state.update({'terminal_fault_matches':True,'terminal_pc':hex(pc),'terminal_model_code':status,
                                'terminal_native_error':str(error),'terminal_address':hex(lib.xxiv_fault_address(model)),
                                'all_instruction_states_match':True,'reached_original_return_sentinel':False,'executed_pcs':list(map(hex,sorted(cached)))})
                            return
                        raise AssertionError(('C++ fault but original executes',label,hex(pc),status))
                    original_start(pc,stop,count=1)
                    c=Cpu();lib.xxiv_get_cpu(model,ctypes.byref(c));native=snapshot(uc,runtime)
                    differences={n:(hex(c.r[j]),hex(native.r[j])) for j,n in enumerate(NAMES) if c.r[j]!=native.r[j]}
                    assert not differences,(label,index,step,hex(pc),ins.mnemonic,ins.op_str,differences)
                    assert c.rip==native.rip,(label,index,step,hex(pc),'RIP',hex(c.rip),hex(native.rip))
                    assert ((c.flags^native.flags)&c.defined&0x8d5)==0,(label,index,step,hex(pc),ins.mnemonic,'flags',hex(c.flags),hex(native.flags),hex(c.defined))
                    assert bytes(c.xmm)==bytes(native.xmm),(label,index,step,hex(pc),'XMM')
                    writes=(Write*64)();count=lib.xxiv_writes(model,writes,64);assert count<=64
                    ma={a for w in writes[:count] for a in range(w.address,w.address+w.size)}
                    na={a for address,size in native_writes for a in range(address,address+size)}
                    assert ma==na,(label,index,step,hex(pc),'write addresses',list(map(hex,sorted(ma-na)))[:10],list(map(hex,sorted(na-ma)))[:10])
                    for address,size in native_writes:
                        buf=ctypes.create_string_buffer(size);assert lib.xxiv_read(model,address,buf,size)==0
                        assert buf.raw==bytes(uc.mem_read(address,size)),(label,index,step,hex(pc),'write bytes',hex(address))
                    if ins.mnemonic.startswith('j'):state['branches'].append({'from':pc,'to':c.rip})
                    if ins.mnemonic=='call':state['calls'].append({'site':pc,'target':c.rip})
                    state['original_writes']+=len(native_writes);state['steps']=step+1
                else:raise AssertionError(('instruction limit',label,index,hex(uc.reg_read(UC_X86_REG_RIP))))
                assert uc.reg_read(UC_X86_REG_RIP)==stop
                state['reached_original_return_sentinel']=True;state['final_rax']=hex(uc.reg_read(UC_X86_REG_RAX));state['all_instruction_states_match']=True
                state['final_gprs']={name:hex(uc.reg_read(reg)) for name,reg in zip(NAMES,UCREGS)}
                state['executed_pcs']=list(map(hex,sorted(cached)))
            finally:lib.xxiv_delete(model)
        uc.emu_start=start;return uc
    old.Uc=factory
    result=old.emulate_one(vector,pe_runtime_base=runtime)
    state['historical_capture_comparison']=result
    if mutate is None:assert result['ok'],result
    return state
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--no-build',action='store_true');args=ap.parse_args();lib=library(not args.no_build)
    spec=importlib.util.spec_from_file_location('historical',ROOT/'scripts/pafet_h3bea0_unicorn_xiii.py');old=importlib.util.module_from_spec(spec);spec.loader.exec_module(old)
    caps=json.loads((ROOT/'vm_pools_evidence/h3bea0_vectors_xiii.json').read_text());results=[]
    for label,capture in caps.items():
        if not isinstance(capture,dict) or 'vectors' not in capture:continue
        for i,v in enumerate(capture['vectors']):
            try:result=run_vector(lib,old,label,i,v,int(capture['pe_base'],16))
            except Exception as error:
                (OUT/'native_lockstep.partial.json').write_text(json.dumps({'completed_cases':results,'failure':repr(error)},indent=2)+'\n');raise
            results.append(result)
            (OUT/'native_lockstep.partial.json').write_text(json.dumps({'completed_cases':results},indent=2)+'\n')
            print(label,i,result['steps'],'every instruction: registers, defined flags, XMM, writes and flow match',flush=True)
    report={'cases':results,'all_match':True,'original_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),
        'scope':'Lockstep native instruction semantics. Historical component contexts, not all possible branches or original acceptance.'}
    (OUT/'native_lockstep.json').write_text(json.dumps(report,indent=2)+'\n')
if __name__=='__main__':main()
