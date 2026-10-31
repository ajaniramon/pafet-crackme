#!/usr/bin/env python3
"""Locate the exact byte of a late divergence (diagnosis only, not a proof).

The candidate runs without recording up to --from-step, then records full
roots. Original x64 runs in Unicorn WITHOUT the replay's per-access coverage
hooks (fast), aligned on the first recorded handler entry by decode counter,
then compared event by event. Use serial_loop_validate for proofs.
"""
import argparse,gzip,json,pathlib,sys
import pefile
import unicorn as u
from unicorn.x86_const import *
ROOT=pathlib.Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT));sys.path.insert(0,str(ROOT/'scripts'))
from devirt.serial_loop import LoopSerialVMState
from pafet_eh_stub import CxxDelivery

NAMES=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi']+[f'r{i}' for i in range(8,16)]


class Recording(LoopSerialVMState):
    start=None
    def record(self,name,boundary):
        if self.steps<self.start:return
        LoopSerialVMState.record(self,name,boundary)
        self.events[-1]['counter']=self.u(0x11e0,4)


def fast_unicorn(entry):
    pe=pefile.PE(str(ROOT/'pafet.bin'));base=entry['base'];size=(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095
    uc=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64);uc.mem_map(base,size);uc.mem_write(base,pe.get_memory_mapped_image(ImageBase=base))
    pages=set(range(base,base+size,4096))
    for r in entry['regions']:
        a=r['address'];d=bytes.fromhex(r['hex'])
        for p in range(a&~4095,(a+len(d)+4095)&~4095,4096):
            if p not in pages:uc.mem_map(p,4096);pages.add(p)
        uc.mem_write(a,d)
    s=entry['state']
    for n,v in zip(NAMES,s['gprs']):uc.reg_write(globals()['UC_X86_REG_'+n.upper()],v)
    uc.reg_write(UC_X86_REG_RIP,s['rip']);uc.reg_write(UC_X86_REG_EFLAGS,s['flags']);uc.reg_write(UC_X86_REG_GS_BASE,entry['gs_base'])
    uc.reg_write(UC_X86_REG_MXCSR,s['mxcsr'])
    for i in range(16):uc.reg_write(globals()['UC_X86_REG_XMM%d'%i],int.from_bytes(bytes.fromhex(s['xmm'])[16*i:16*i+16],'little'))
    return uc


THROW=0x3a5fa0


def run_to(uc,eh,target,predicate=lambda:True,same_ok=True):
    """Advance to the next arrival at target using exact Unicorn exits."""
    base=eh.base
    if same_ok and uc.reg_read(UC_X86_REG_RIP)==target and predicate():return
    def step_one():
        uc.ctl_exits_enabled(False);uc.emu_start(uc.reg_read(UC_X86_REG_RIP),0,count=1);uc.ctl_exits_enabled(True)
    uc.ctl_exits_enabled(True);uc.ctl_set_exits([target,base+THROW]);uc.ctl_flush_tb()
    if uc.reg_read(UC_X86_REG_RIP)==target:step_one()
    while True:
        pc=uc.reg_read(UC_X86_REG_RIP)
        if pc==base+THROW:
            uc.ctl_exits_enabled(False);eh.deliver()
            uc.ctl_exits_enabled(True);uc.ctl_set_exits([target,base+THROW]);uc.ctl_flush_tb()
            if uc.reg_read(UC_X86_REG_RIP)==target and predicate():break
            continue
        uc.emu_start(pc,0)
        pc=uc.reg_read(UC_X86_REG_RIP)
        if pc==target:
            if predicate():break
            step_one()
        elif pc!=base+THROW:raise RuntimeError('stopped outside an exit at '+hex(pc))
    uc.ctl_exits_enabled(False)


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--case',default='seventeen_b')
    ap.add_argument('--from-step',type=int,required=True);ap.add_argument('--steps',type=int,default=8);a=ap.parse_args()
    entry=json.loads(gzip.decompress((ROOT/f'jack_xxxv_evidence/captures/{a.case}/frame_00.entry.json.gz').read_bytes()))
    Recording.start=a.from_step
    s=Recording.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')));s.full_events=None;failure=None
    try:
        while s.steps<a.from_step+a.steps:s.step();s.ir.clear()
    except ValueError as e:failure=str(e)
    events=s.events;print('candidate steps',s.steps,'events',len(events),'failure',failure,flush=True)
    uc=fast_unicorn(entry);eh=CxxDelivery(uc,entry['base']);eh.base=entry['base'];ctx=entry['state']['gprs'][1];base=entry['base']
    first=next(i for i,e in enumerate(events) if e['name']=='handler_entry')
    c0=events[first]['counter']
    run_to(uc,eh,base+events[first]['boundary_rva'],lambda:int.from_bytes(uc.mem_read(ctx+0x11e0,4),'little')==c0,same_ok=False)
    for i in range(first,len(events)):
        e=events[i]
        if i>first:run_to(uc,eh,base+e['boundary_rva'])
        diffs=[]
        for role,(at,data) in zip(e['roles'],e['regions']):
            nat=bytes(uc.mem_read(at,len(data)))
            for k,(x,y) in enumerate(zip(data,nat)):
                if x!=y:diffs.append(dict(role=role,offset=hex(k),ctx_offset=hex(at+k-ctx),candidate=x,native=y))
        print(i,e['name'],hex(e['boundary_rva']),'pc',e['pc'],'counter',e['counter'],'diffs',len(diffs),diffs[:12],flush=True)
        if diffs:break


if __name__=='__main__':main()
