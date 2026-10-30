#!/usr/bin/env python3
"""Initial state only -> independent original-x64 Unicorn replay.

This module never opens native trace or after-state files. Counterfactual
coverage modes alter entry stack coverage only, never feed an expected result.
"""
import argparse
import gzip
import hashlib
import json
import pathlib
import struct
import pefile
import unicorn as u
import capstone as cs
from unicorn.x86_const import *
from pafet_state_contract import validate_entry,ContractError,require

ROOT=pathlib.Path(__file__).resolve().parents[1]
NAMES=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi']+[f'r{i}' for i in range(8,16)]
GPRS=[globals()['UC_X86_REG_'+n.upper()] for n in NAMES]


def snapshot(uc):
    return {'gprs':[uc.reg_read(n) for n in GPRS],'rip':uc.reg_read(UC_X86_REG_RIP),
            'flags':uc.reg_read(UC_X86_REG_EFLAGS)&~0x10100,
            'xmm':b''.join(uc.reg_read(globals()['UC_X86_REG_XMM'+str(i)]).to_bytes(16,'little') for i in range(16)).hex(),
            'mxcsr':uc.reg_read(UC_X86_REG_MXCSR)}


class Replay:
    def __init__(self,entry,coverage='complete'):
        self.entry=entry
        self.md=cs.Cs(cs.CS_ARCH_X86,cs.CS_MODE_64);self.md.detail=True
        original=(ROOT/'pafet.bin').read_bytes()
        if hashlib.sha256(original).hexdigest()!='fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a':
            raise ValueError('Replay requires the original PE identity')
        pe=pefile.PE(data=original)
        _,self.initialized,self.contract=validate_entry(entry,pe)
        self.uc=u.Uc(u.UC_ARCH_X86,u.UC_MODE_64);base=entry['base'];size=pe.OPTIONAL_HEADER.SizeOfImage
        self.uc.mem_map(base,(size+4095)&~4095)
        self.uc.mem_write(base,pe.get_memory_mapped_image(ImageBase=base))
        pages=set(range(base,base+((size+4095)&~4095),4096))
        for region in entry['regions']:
            address=region['address'];data=bytes.fromhex(region['hex'])
            for page in range(address&~4095,(address+len(data)+4095)&~4095,4096):
                if page not in pages:self.uc.mem_map(page,4096);pages.add(page)
            self.uc.mem_write(address,data)
        initial=entry['state'];rsp=initial['gprs'][4];ctx=entry.get('context')
        require(coverage=='complete' or self.contract['profile']=='user-v1','User ablation requested for another profile','unsupported-profile')
        if coverage=='legacy':
            # Reproduce the old loader's captured stack coverage; unspecified
            # committed stack bytes used to be silently supplied as zero.
            keep=[(ctx,ctx+0x2000),(rsp-0x800,rsp+0x800)]
            for region in entry['regions']:
                if not any('committed native stack' in label for label in region['labels']):continue
                address=region['address'];data=bytearray(4096)
                original=bytes.fromhex(region['hex'])
                for lo,hi in keep:
                    a=max(address,lo);b=min(address+4096,hi)
                    if a<b:data[a-address:b-address]=original[a-address:b-address]
                self.uc.mem_write(address,bytes(data))
        elif coverage=='missing-register-tail':
            table=entry['known_arrays'][0];lo=max(ctx+0x2000,table['address'])
            self.uc.mem_write(lo,bytes(table['address']+table['size']-lo))
        elif coverage!='complete':raise ValueError(coverage)
        for reg,value in zip(GPRS,initial['gprs']):self.uc.reg_write(reg,value)
        self.uc.reg_write(UC_X86_REG_RIP,initial['rip'])
        self.uc.reg_write(UC_X86_REG_EFLAGS,initial['flags'])
        self.uc.reg_write(UC_X86_REG_GS_BASE,entry['gs_base'])
        self.uc.reg_write(UC_X86_REG_MXCSR,initial['mxcsr'])
        for i in range(16):self.uc.reg_write(globals()['UC_X86_REG_XMM'+str(i)],int.from_bytes(bytes.fromhex(initial['xmm'])[16*i:16*i+16],'little'))
        self.reads=[];self.writes=[]
        def read(uc,access,address,size,value,data):
            require(self.initialized.covered(address,size),'Read before captured input or prior write','missing-initial-memory',pc=hex(uc.reg_read(UC_X86_REG_RIP)),address=hex(address),size=size)
            self.reads.append((address,bytes(uc.mem_read(address,size))))
        def write(uc,access,address,size,value,data):
            self.initialized.mark(address,size);self.writes.append((address,size))
        def code(uc,address,size,data):
            require(self.initialized.covered(address,size),'Instruction fetch from uncaptured code','missing-code',pc=hex(address),size=size)
        def invalid(uc,access,address,size,value,data):
            raise ContractError('unmapped-dependency','Unmapped memory dependency; never synthesize zero input',pc=hex(uc.reg_read(UC_X86_REG_RIP)),address=hex(address),size=size,access=access)
        self.uc.hook_add(u.UC_HOOK_MEM_READ,read);self.uc.hook_add(u.UC_HOOK_MEM_WRITE,write)
        self.uc.hook_add(u.UC_HOOK_CODE,code);self.uc.hook_add(u.UC_HOOK_MEM_UNMAPPED,invalid)
        self.defined=0x8d5

    def step(self):
        pc=self.uc.reg_read(UC_X86_REG_RIP)
        ins=next(self.md.disasm(bytes(self.uc.mem_read(pc,15)),pc))
        unsupported_groups=[getattr(cs.x86,n) for n in ('X86_GRP_FPU','X86_GRP_MMX','X86_GRP_AVX','X86_GRP_AVX2','X86_GRP_AVX512')]
        require(not any(g in ins.groups for g in unsupported_groups) and not ins.mnemonic.startswith(('xsave','xrstor','fxsave','fxrstor','rdpkru','wrpkru')) and ins.mnemonic not in ('rdtsc','rdtscp','rdrand','rdseed','cpuid','syscall','sysenter','int','vzeroupper'),
                'Instruction needs uncaptured extended, nondeterministic or OS state','unsupported-state',pc=hex(pc),instruction=ins.mnemonic)
        for op in ins.operands:
            if op.type==cs.x86.X86_OP_MEM and ins.reg_name(op.mem.segment)=='fs':
                raise ContractError('unsupported-state','Route requires uncaptured FS base',pc=hex(pc))
            if op.type==cs.x86.X86_OP_REG and ins.reg_name(op.reg) in ('cs','ss','ds','es','fs','gs'):
                raise ContractError('unsupported-state','Explicit segment-selector semantics not modeled',pc=hex(pc))
        before_defined=self.defined
        shift_count=None
        if ins.mnemonic in ('rol','ror','shl','sal','shr','sar'):
            op=ins.operands[-1]
            shift_count=op.imm if op.type==cs.x86.X86_OP_IMM else self.uc.reg_read(globals()['UC_X86_REG_'+ins.reg_name(op.reg).upper()])
            shift_count&=63 if ins.operands[0].size==8 else 31
        self.reads.clear();self.writes.clear()
        self.uc.emu_start(pc,0,count=1)
        for name,bit in [('CF',1),('PF',4),('AF',16),('ZF',64),('SF',128),('OF',2048)]:
            if ins.eflags&getattr(cs.x86,'X86_EFLAGS_UNDEFINED_'+name):self.defined&=~bit
            elif any(ins.eflags&getattr(cs.x86,'X86_EFLAGS_'+kind+'_'+name,0) for kind in ('MODIFY','SET','RESET')):self.defined|=bit
        # Intel SDM: MUL/IMUL define only CF/OF. Capstone 5.0.9 incorrectly
        # advertises MODIFY_SF for two-operand IMUL; never compare that SF.
        if ins.mnemonic in ('mul','imul'):self.defined=0x801
        elif ins.mnemonic in ('div','idiv'):self.defined=0
        elif shift_count==0:self.defined=before_defined
        return {'pc':pc,'bytes':ins.bytes.hex(),'instruction':ins.mnemonic+' '+ins.op_str,
                'after':snapshot(self.uc),'defined_flags_mask':self.defined,
                'reads':[(at,data.hex()) for at,data in self.reads],
                'writes':[(at,bytes(self.uc.mem_read(at,size)).hex()) for at,size in self.writes]}

    def run(self,budget=100000):
        for _ in range(budget):
            if self.uc.reg_read(UC_X86_REG_RIP) in self.entry.get('stop_any',[self.entry.get('stop',self.entry['native_return'])]):return
            yield self.step()
        if self.uc.reg_read(UC_X86_REG_RIP) in self.entry.get('stop_any',[self.entry.get('stop',self.entry['native_return'])]):return
        raise RuntimeError('replay instruction budget')


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--entry',type=pathlib.Path,required=True)
    ap.add_argument('--output',type=pathlib.Path,required=True);args=ap.parse_args()
    blob=args.entry.read_bytes();entry=json.loads(gzip.decompress(blob));model=Replay(entry)
    count=sum(1 for _ in model.run())
    result={'entry_sha256':hashlib.sha256(blob).hexdigest(),'steps':count,'final_state':snapshot(model.uc),
            'context_hex':bytes(model.uc.mem_read(entry['context'],0x2000)).hex() if entry.get('context') else None,
            'arrays':[{'role':a['role'],'sha256':hashlib.sha256(bytes(model.uc.mem_read(a['address'],a['size']))).hexdigest()} for a in entry['known_arrays']],
            'scope':'Autonomous replay: this executable does not open or receive a native trace/after-state.'}
    args.output.parent.mkdir(parents=True,exist_ok=True);args.output.write_bytes(json.dumps(result,indent=2).encode()+b'\n')
    print('PASS autonomous input-only replay',count,'instructions')


if __name__=='__main__':main()
