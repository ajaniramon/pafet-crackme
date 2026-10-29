#!/usr/bin/env python3
"""Run the original hex-VM inside Unicorn, called by the original controller.

The PE is mapped at its preferred base, so no relocation is applied. Execution
starts in the main-controller handler at 0x140396f96: it builds the std::string
from the 144 ASCII characters at 0x1403dbbc0, builds the callback object at
rsp+0x58 (table 0x1403f1ba0) and calls the executor 0x1400804c0. It stops when
the executor returns to 0x140397071.

Every IAT slot points to its own stub. Only the imports implemented below run;
any other import stops the emulation with an explicit error. Inputs are injected
the way a debugger would: the data at 0x1403dbbc0 and the length in R8D before
the copy at 0x140396fbd. No instruction is changed.
"""
import collections,struct
import pefile,unicorn
from unicorn.x86_const import *
import pathlib
ROOT=pathlib.Path(__file__).resolve().parents[1];BASE=0x140000000
HANDLER=0x140396f96;COPY=0x140396fbd;EXECUTOR=0x1400804c0;RETURN=0x140397071;SOURCE=0x1403dbbc0
STACK=0x10000000;STACK_SIZE=0x100000;HEAP=0x20000000;HEAP_SIZE=0x1000000;TEB=0x30000000;STUBS=0x40000000;OBJECT=0x50000000;VIRTUAL=0x60000000
class Unsupported(Exception):pass
class Host:
    def __init__(self):
        self.pe=pefile.PE(str(ROOT/'pafet.bin'));uc=self.uc=unicorn.Uc(unicorn.UC_ARCH_X86,unicorn.UC_MODE_64)
        end=max(s.VirtualAddress+s.Misc_VirtualSize for s in self.pe.sections);uc.mem_map(BASE,(end+0xfff)&~0xfff,unicorn.UC_PROT_ALL)
        uc.mem_write(BASE,self.pe.header)
        for s in self.pe.sections:uc.mem_write(BASE+s.VirtualAddress,s.get_data()[:s.Misc_VirtualSize])
        for lo,size in ((STACK,STACK_SIZE),(HEAP,HEAP_SIZE),(TEB,0x10000),(STUBS,0x10000),(OBJECT,0x10000)):uc.mem_map(lo,size)
        # TEB: self pointer, stack base/limit, TLS array; enough for __chkstk and the CRT's TLS reads.
        uc.mem_write(TEB+0x30,struct.pack('<Q',TEB));uc.mem_write(TEB+0x8,struct.pack('<QQ',STACK+STACK_SIZE,STACK))
        uc.mem_write(TEB+0x58,struct.pack('<Q',TEB+0x1000));uc.mem_write(TEB+0x1000,struct.pack('<Q',TEB+0x2000))
        uc.reg_write(UC_X86_REG_GS_BASE,TEB)
        self.stubs={};self.heap=HEAP;self.fls=collections.defaultdict(int);self.last_error=0;self.imports=collections.Counter();self.clock=0;self.tick=1000;self.clock_reads=[];self.virtual=VIRTUAL;self.allocations=[];self.frees=[]
        for d in self.pe.DIRECTORY_ENTRY_IMPORT:
            for k,imp in enumerate(d.imports):
                stub=STUBS+16*len(self.stubs);self.stubs[stub]=(d.dll.decode(),(imp.name or b'#%d'%imp.ordinal).decode())
                uc.mem_write(stub,b'\xc3');uc.mem_write(imp.address,struct.pack('<Q',stub))
        uc.hook_add(unicorn.UC_HOOK_CODE,self.on_stub,begin=STUBS,end=STUBS+0xffff)
    def arg(self,n):return self.uc.reg_read([UC_X86_REG_RCX,UC_X86_REG_RDX,UC_X86_REG_R8,UC_X86_REG_R9][n])
    def ret(self,value):self.uc.reg_write(UC_X86_REG_RAX,value)
    def alloc(self,size):
        address=(self.heap+15)&~15;self.heap=address+max(size,1)
        if self.heap>HEAP+HEAP_SIZE:raise Unsupported('heap exhausted')
        return address
    def on_stub(self,uc,address,size,data):
        dll,name=self.stubs[address];self.imports[name]+=1
        if name=='HeapAlloc':
            p=self.alloc(self.arg(2))
            if self.arg(1)&8:uc.mem_write(p,bytes(self.arg(2)))
            self.ret(p)
        elif name=='HeapFree':self.ret(1)
        elif name=='GetProcessHeap':self.ret(0x1000)
        elif name=='GetLastError':self.ret(self.last_error)
        elif name=='SetLastError':self.last_error=self.arg(0)
        elif name=='FlsGetValue':self.ret(self.fls[self.arg(0)])
        elif name=='FlsSetValue':self.fls[self.arg(0)]=self.arg(1);self.ret(1)
        elif name in ('EnterCriticalSection','LeaveCriticalSection'):pass
        # std::chrono::steady_clock: deterministic 10 MHz counter, one fixed tick per read, every read recorded.
        elif name=='VirtualAlloc':
            size=(self.arg(1)+0xfff)&~0xfff;address=self.virtual;self.virtual+=size+0x1000
            uc.mem_map(address,size,unicorn.UC_PROT_ALL);self.allocations.append({'address':address,'size':self.arg(1),'type':self.arg(2),'protect':self.arg(3)});self.ret(address)
        elif name=='VirtualFree':self.frees.append((self.arg(0),self.arg(1),self.arg(2)));self.ret(1)
        elif name=='QueryPerformanceFrequency':uc.mem_write(self.arg(0),struct.pack('<Q',10_000_000));self.ret(1)
        elif name=='QueryPerformanceCounter':
            self.clock+=self.tick;self.clock_reads.append(self.clock);uc.mem_write(self.arg(0),struct.pack('<Q',self.clock));self.ret(1)
        else:uc.emu_stop();self.unsupported=(dll,name)
    def run(self,text=None,hooks=(),limit=20_000_000):
        """Execute the controller handler with TEXT (bytes) as the hex-VM source; None keeps the original."""
        uc=self.uc;self.unsupported=None
        if text is not None:
            uc.mem_write(SOURCE,bytes(text)+b'\0')
            def length(u,address,size,data):u.reg_write(UC_X86_REG_R8,len(text))
            uc.hook_add(unicorn.UC_HOOK_CODE,length,begin=COPY,end=COPY)
        for kind,callback,begin,end in hooks:uc.hook_add(kind,callback,begin=begin,end=end)
        rsp=STACK+STACK_SIZE-0x2000;uc.reg_write(UC_X86_REG_RSP,rsp);uc.reg_write(UC_X86_REG_RBP,rsp+0x100);uc.reg_write(UC_X86_REG_RDI,OBJECT)
        uc.emu_start(HANDLER,RETURN,count=limit)
        if self.unsupported:raise Unsupported(self.unsupported)
        if uc.reg_read(UC_X86_REG_RIP)!=RETURN:raise Unsupported(('did not return',hex(uc.reg_read(UC_X86_REG_RIP))))
        return rsp
if __name__=='__main__':
    host=Host();count=[0]
    host.uc.hook_add(unicorn.UC_HOOK_CODE,lambda u,a,s,d:count.__setitem__(0,count[0]+1))
    rsp=host.run();rbp=rsp+0x100
    print('instructions',count[0],'imports',dict(host.imports),'allocations',[(hex(a['address']),hex(a['size']),hex(a['protect'])) for a in host.allocations],'frees',host.frees,'clock reads',len(host.clock_reads))
    print('state rbp+0x20',bytes(host.uc.mem_read(rbp+0x20,0x80)).hex())
