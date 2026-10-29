#!/usr/bin/env python3
"""Lockstep from the wrapper root entries saved by pafet_continue_xxiv.py.

Every snapshot is restored on a fresh Unicorn: the PE at its canonical and
runtime bases, the changed image pages and the saved regions, GPRs, RFLAGS, XMM
and GS base. C++ and original x64 then run together until the wrapper returns
to its saved return address with the caller's RSP.
"""
import argparse,collections,gzip,hashlib,json
import capstone,pefile,unicorn
from unicorn.x86_const import *
from pafet_native_diff_xxiv import ROOT,OUT,BASE,NAMES,library,lockstep
from pafet_directed_xxiv import mutation
def restore(pe,snap):
    uc=unicorn.Uc(unicorn.UC_ARCH_X86,unicorn.UC_MODE_64);runtime=int(snap['runtime_base'],16)
    for base in {BASE,runtime}:
        for sec in pe.sections:
            va=base+sec.VirtualAddress;lo=va&~0xfff;hi=(va+sec.Misc_VirtualSize+0xfff)&~0xfff
            try:uc.mem_map(lo,hi-lo,unicorn.UC_PROT_ALL)
            except unicorn.UcError:pass
            uc.mem_write(va,sec.get_data()[:sec.Misc_VirtualSize])
    for region in snap['memory']:
        lo=int(region['base'],16);data=bytes.fromhex(region['hex'])
        uc.mem_map(lo,len(data),unicorn.UC_PROT_ALL);uc.mem_write(lo,data)
    for page in snap['image_pages']:uc.mem_write(int(page['base'],16),bytes.fromhex(page['hex']))
    for name in NAMES:uc.reg_write(globals()['UC_X86_REG_'+name.upper()],int(snap['gprs'][name],16))
    uc.reg_write(UC_X86_REG_EFLAGS,int(snap['rflags'],16));uc.reg_write(UC_X86_REG_GS_BASE,int(snap['gs_base'],16))
    for i,x in enumerate(snap['xmm']):uc.reg_write(globals()['UC_X86_REG_XMM'+str(i)],int.from_bytes(bytes.fromhex(x),'little'))
    return uc,runtime
# Guards and early exit of the shared skeleton, applied to the first root entry of each wrapper.
DIRECTED=[('positive_mode_guard',{'mode':3},True),('canary_guard',{'canary':0},True),('resume_slot_exit',{'resume_slot':1},False)]
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--no-build',action='store_true');ap.add_argument('--entry');ap.add_argument('--directed',action='store_true');args=ap.parse_args();lib=library(not args.no_build)
    pe=pefile.PE(str(ROOT/'pafet.bin'));md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    snaps=json.loads(gzip.decompress((OUT/'continued_entries.json.gz').read_bytes()));results=[];failures=[]
    runs=[(snap,None,{},False) for snap in snaps]
    if args.directed:
        first={}
        for snap in snaps:first.setdefault(snap['entry'],snap)
        runs=[(snap,name,changes,fault) for snap in first.values() for name,changes,fault in DIRECTED]
    for snap,name,changes,fault in runs:
        if args.entry and int(snap['entry'],16)!=int(args.entry,16):continue
        uc,runtime=restore(pe,snap);native_writes=[]
        if name:mutation(changes)(uc,{'regs':{'rcx':snap['gprs']['rcx']}})
        uc.hook_add(unicorn.UC_HOOK_MEM_WRITE,lambda u,access,address,size,value,data:native_writes.append((address,size)))
        label=f"{snap['entry']}@{snap['frame']}#{snap['order']}"+(f':{name}' if name else '')
        state={'case':label,'vector':snap['order'],'entry':snap['entry'],'source':snap['source'],'frame':snap['frame'],'steps':0,'branches':[],'calls':[],'original_writes':0,'defined_flags_only':True,'entry_mutation':changes}
        try:lockstep(lib,uc,uc.emu_start,native_writes,int(snap['rip'],16),int(snap['return_address'],16),runtime,state,{},md,label,snap['order'],500000,True if not name else fault,
            stop_rsp=int(snap['gprs']['rsp'],16)+8)
        except Exception as error:failures.append({'case':label,'failure':repr(error)});print('FAILED',label,repr(error)[:300],flush=True);continue
        results.append(state);print(label,state['steps'],'instruction states match',state.get('terminal_native_error','normal return'),flush=True)
    (OUT/('continued_directed.json' if args.directed else 'continued_lockstep.json')).write_text(json.dumps({'cases':results,'all_match':not failures,'failures':failures,
        'original_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),
        'scope':'Root wrapper entries reached by the original resolver from fresh Windows frames; C++/Unicorn instruction lockstep until the wrapper returns.'},indent=2)+'\n')
    if failures:raise SystemExit(1)
if __name__=='__main__':main()
