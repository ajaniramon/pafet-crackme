#!/usr/bin/env python3
"""Windows hardware-breakpoint/TF trace of original User-VM instructions.

Entry memory is captured separately from post-instruction observations. The
offline replay consumes entry.json only; trace/return records are oracle data.
No Frida, software breakpoint, instruction patch or expected-output injection.
"""
import argparse
import ctypes as C
import gzip
import hashlib
import json
import pathlib
import struct
import subprocess
import time
import pefile
import capstone as cs
from capstone.x86 import X86_OP_MEM

ROOT=pathlib.Path(__file__).resolve().parents[1]
NAMES=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi']+[f'r{i}' for i in range(8,16)]
U32=C.c_uint32;U64=C.c_uint64;PTR=C.c_void_p


class Context(C.Structure):
    _fields_=[('Home',U64*6),('ContextFlags',U32),('MxCsr',U32),
              *[(n,C.c_uint16) for n in ('SegCs','SegDs','SegEs','SegFs','SegGs','SegSs')],('EFlags',U32),
              *[(n,U64) for n in ('Dr0','Dr1','Dr2','Dr3','Dr6','Dr7')],
              *[(n.capitalize(),U64) for n in NAMES],('Rip',U64),('Tail',C.c_ubyte*976)]


class ExceptionRecord(C.Structure):
    _fields_=[('Code',U32),('Flags',U32),('Record',PTR),('Address',PTR),('Parameters',U32),('Info',U64*15)]
class ExceptionInfo(C.Structure):_fields_=[('record',ExceptionRecord),('FirstChance',U32)]
class CreateProcess(C.Structure):
    _fields_=[('File',PTR),('Process',PTR),('Thread',PTR),('Image',PTR),('Offset',U32),('Size',U32),('TEB',PTR),('Start',PTR),('Name',PTR),('Unicode',C.c_uint16)]
class CreateThread(C.Structure):_fields_=[('Thread',PTR),('TEB',PTR),('Start',PTR)]
class EventUnion(C.Union):_fields_=[('exception',ExceptionInfo),('process',CreateProcess),('thread',CreateThread),('raw',C.c_ubyte*160)]
class Event(C.Structure):_fields_=[('Code',U32),('PID',U32),('TID',U32),('u',EventUnion)]
class MemoryInfo(C.Structure):
    _fields_=[('Base',PTR),('AllocationBase',PTR),('AllocationProtect',U32),('Partition',C.c_uint16),('Padding',C.c_uint16),('Size',C.c_size_t),('State',U32),('Protect',U32),('Type',U32)]


def context():
    backing=C.create_string_buffer(C.sizeof(Context)+16)
    result=Context.from_address((C.addressof(backing)+15)&~15);result.ContextFlags=0x10001f
    return backing,result


def state(c):
    raw=C.string_at(C.addressof(c),C.sizeof(c))
    return {'gprs':[getattr(c,n.capitalize()) for n in NAMES],'rip':c.Rip,
            'flags':c.EFlags&~0x10100,'xmm':raw[416:672].hex(),'mxcsr':c.MxCsr}


class Debugger:
    def __init__(self):
        self.k=C.WinDLL('kernel32',use_last_error=True)
        for name,args,result in [
            ('WaitForDebugEvent',[C.POINTER(Event),U32],C.c_int),
            ('ContinueDebugEvent',[U32,U32,U32],C.c_int),
            ('GetThreadContext',[PTR,C.POINTER(Context)],C.c_int),
            ('SetThreadContext',[PTR,C.POINTER(Context)],C.c_int),
            ('ReadProcessMemory',[PTR,PTR,PTR,C.c_size_t,C.POINTER(C.c_size_t)],C.c_int),
            ('VirtualQueryEx',[PTR,PTR,C.POINTER(MemoryInfo),C.c_size_t],C.c_size_t),
            ('CloseHandle',[PTR],C.c_int)]:
            f=getattr(self.k,name);f.argtypes=args;f.restype=result
        self.process=None
    def checked(self,result):
        if not result:raise C.WinError(C.get_last_error())
        return result
    def get(self,thread):
        backing,c=context();self.checked(self.k.GetThreadContext(thread,C.byref(c)));return backing,c
    def set(self,thread,c):self.checked(self.k.SetThreadContext(thread,C.byref(c)))
    def read(self,address,size):
        data=C.create_string_buffer(size);count=C.c_size_t()
        self.checked(self.k.ReadProcessMemory(self.process,address,data,size,C.byref(count)))
        assert count.value==size
        return data.raw
    def query(self,address):
        info=MemoryInfo();self.checked(self.k.VirtualQueryEx(self.process,address,C.byref(info),C.sizeof(info)))
        return info


def operands(ins,c,teb):
    """Explicit memory reads and writes, plus implicit ABI stack accesses."""
    reads=[];writes=[]
    def register(name):
        if name=='rip':return c.Rip+ins.size
        if not name:return 0
        if name in NAMES:return getattr(c,name.capitalize())
        if name.startswith('e') and 'r'+name[1:] in NAMES:return getattr(c,('r'+name[1:]).capitalize())&0xffffffff
        raise ValueError(('unsupported address register',name))
    if ins.mnemonic not in ('lea','nop'):
        for op in ins.operands:
            if op.type!=X86_OP_MEM:continue
            m=op.mem;address=(register(ins.reg_name(m.base))+register(ins.reg_name(m.index))*m.scale+m.disp)&((1<<64)-1)
            segment=ins.reg_name(m.segment)
            if segment=='gs':address+=teb
            elif segment:raise ValueError(('unsupported segment',segment))
            if op.access&cs.CS_AC_READ:reads.append((address,op.size))
            if op.access&cs.CS_AC_WRITE:writes.append((address,op.size))
    if ins.mnemonic in ('push','call'):writes.append((c.Rsp-8,8))
    if ins.mnemonic in ('pop','ret'):reads.append((c.Rsp,8))
    if ins.mnemonic in ('pushfq','popfq','syscall','sysenter'):raise ValueError(('debugger-sensitive instruction',hex(ins.address),ins.mnemonic))
    return reads,writes


def inputs(debugger,c,base,teb,pe):
    pages={};labels={}
    def capture(address,size,label):
        lo=address&~4095;end=(address+size+4095)&~4095
        for at in range(lo,end,4096):
            data=debugger.read(at,4096)
            if at in pages:assert pages[at]==data,('overlapping initial input differs',hex(at))
            pages[at]=data;labels.setdefault(at,[]).append(label)
    stack=debugger.query(c.Rsp)
    assert stack.State==0x1000 and not stack.Protect&0x101
    capture(stack.Base,stack.Size,'committed native stack (includes pointed virtual arrays)')
    # Original relocated PE supplies code/readonly data; capture mutable globals.
    for section in pe.sections:
        if section.Characteristics&0x80000000:
            capture(base+section.VirtualAddress,section.Misc_VirtualSize,'PE writable section '+section.Name.decode(errors='replace').rstrip('\0'))
    ctx=debugger.read(c.Rcx,0x2000)
    def pointed(pointer,size,label):
        if pointer<0x100000 or pointer>0x7fffffffffff or base<=pointer<base+pe.OPTIONAL_HEADER.SizeOfImage:return
        try:info=debugger.query(pointer)
        except OSError:return
        if info.State!=0x1000 or info.Protect&0x101:return
        size=min(size,info.Base+info.Size-(pointer&~4095))
        capture(pointer&~4095,size,label)
    for offset in range(0,0x2000,8):pointed(struct.unpack_from('<Q',ctx,offset)[0],0x4000,'context pointer '+hex(offset))
    pointed(struct.unpack_from('<Q',ctx,0xf48)[0],0x20000,'trampoline pool')
    capture(teb,4096,'GS base / TEB')
    tls=struct.unpack('<Q',debugger.read(teb+0x58,8))[0]
    pointed(tls,0x1000,'TLS pointer array')
    if tls:pointed(struct.unpack('<Q',debugger.read(tls,8))[0],0x4000,'TLS slot zero')
    expected=pefile.PE(str(ROOT/'pafet_pass8.exe')).get_memory_mapped_image(ImageBase=base)
    text=next(s for s in pe.sections if s.Name.rstrip(b'\0')==b'.text')
    actual=debugger.read(base+text.VirtualAddress,text.Misc_VirtualSize)
    assert actual==expected[text.VirtualAddress:text.VirtualAddress+text.Misc_VirtualSize],'.text differs from the verified two-byte gate variant'
    return {'state':state(c),'base':base,'gs_base':teb,'context':c.Rcx,
            'native_return':struct.unpack('<Q',debugger.read(c.Rsp,8))[0],
            'regions':[{'address':at,'hex':data.hex(),'labels':labels[at]} for at,data in sorted(pages.items())],
            'variant_text_sha256':hashlib.sha256(actual).hexdigest(),
            'known_arrays':[{'address':struct.unpack_from('<Q',ctx,o)[0],'size':n,'role':role} for o,n,role in [(0x1158,0x1000,'encoded register banks'),(0x1160,0x2000,'encoded virtual stack')]]}


def dump(path,value):path.write_bytes(gzip.compress(json.dumps(value,separators=(',',':')).encode(),mtime=0))


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--user',default='alice');ap.add_argument('--frames',type=int,default=8)
    ap.add_argument('--out',type=pathlib.Path,default=ROOT/'state_divergence_evidence/debugger')
    ap.add_argument('--near-rekey',action='store_true',help='after first control, select entries whose input counter is within 16 of its threshold')
    ap.add_argument('--entry',type=lambda s:int(s,0),default=0x3bea0,help='original native entry RVA (default DROP; 0x4930 for natural register rekey)')
    args=ap.parse_args()
    assert C.sizeof(Context)==1232 and Context.Rip.offset==248 and C.sizeof(Event)==176 and C.sizeof(MemoryInfo)==48
    original=(ROOT/'pafet.bin').read_bytes();variant=(ROOT/'pafet_pass8.exe').read_bytes()
    assert len(original)==len(variant) and [i for i,(a,b) in enumerate(zip(original,variant)) if a!=b]==[0x395efb,0x395efc]
    args.out.mkdir(parents=True,exist_ok=True)
    debug=Debugger();pe=pefile.PE(str(ROOT/'pafet.bin'));md=cs.Cs(cs.CS_ARCH_X86,cs.CS_MODE_64);md.detail=True
    proc=subprocess.Popen([str(ROOT/'pafet_pass8.exe')],stdin=subprocess.PIPE,stdout=subprocess.PIPE,stderr=subprocess.PIPE,creationflags=0x2|0x08000000)
    proc.stdin.write(args.user.encode()+b'\r\nserial01\r\n');proc.stdin.flush()
    threads={};base=None;active=None;frames=[];event=Event();deadline=time.monotonic()+120;continued=True;invocations=0
    try:
        while time.monotonic()<deadline:
            if not debug.k.WaitForDebugEvent(C.byref(event),1000):continue
            continued=False;status=0x10002
            if event.Code==3:
                info=event.u.process;debug.process=info.Process;base=info.Image;threads[event.TID]=(info.Thread,info.TEB)
                if info.File:debug.k.CloseHandle(info.File)
            elif event.Code==2:threads[event.TID]=(event.u.thread.Thread,event.u.thread.TEB)
            elif event.Code==6:
                h=C.cast(C.byref(event.u),C.POINTER(PTR))[0]
                if h:debug.k.CloseHandle(h)
            elif event.Code==5:break
            if event.Code in (2,3):
                h,_=threads[event.TID];backing,c=debug.get(h);c.Dr0=base+args.entry;c.Dr7=1;c.Dr6=0;debug.set(h,c)
            elif event.Code==1:
                code=event.u.exception.record.Code
                if code==0x80000003:
                    # Initial loader breakpoint; hardware registers remain armed.
                    pass
                elif code==0x80000004:
                    h,teb=threads[event.TID];backing,c=debug.get(h)
                    if active is None and c.Rip==base+args.entry:
                        invocations+=1
                        if args.near_rekey and frames:
                            threshold,counter=struct.unpack('<II',debug.read(c.Rcx+0x1190,8))
                            if counter+16<threshold:
                                c.Dr6=0;c.EFlags|=0x10000;debug.set(h,c)
                                debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True
                                continue
                        captured=inputs(debug,c,base,teb,pe)
                        captured['invocation']=invocations
                        active={'entry':captured,'trace':[],'thread':event.TID,'writes':[],'rekey':False}
                        print('entry',len(frames),hex(c.Rcx),'captured pages',len(captured['regions']),flush=True)
                        c.Dr7=0;c.Dr6=0
                    elif active is not None:
                        assert event.TID==active['thread'],'unexpected tracing thread'
                        active['pending']['after']=state(c)
                        active['pending']['writes']=[[at,debug.read(at,size).hex()] for at,size in active['writes']]
                        active['trace'].append(active.pop('pending'))
                        if c.Rip==active['entry']['native_return']:
                            ctx=active['entry']['context'];active['after_context_hex']=debug.read(ctx,0x2000).hex()
                            active['after_arrays']=[{'address':a['address'],'hex':debug.read(a['address'],a['size']).hex(),'role':a['role']} for a in active['entry']['known_arrays']]
                            index=len(frames);stem=f'frame_{index:02d}'
                            dump(args.out/(stem+'.entry.json.gz'),active['entry'])
                            dump(args.out/(stem+'.trace.json.gz'),{k:v for k,v in active.items() if k!='entry'})
                            frames.append({'stem':stem,'steps':len(active['trace']),'rekey':active['rekey']})
                            print(stem,len(active['trace']),'instructions; rekey',active['rekey'],flush=True)
                            finish=(active['rekey'] and args.entry!=0x4930) or len(frames)>=args.frames
                            active=None;c.EFlags&=~0x100;c.Dr0=base+args.entry;c.Dr7=1;c.Dr6=0;debug.set(h,c)
                            debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True
                            if finish:break
                            continue
                    if active is not None:
                        ins=next(md.disasm(debug.read(c.Rip,15),c.Rip));reads,writes=operands(ins,c,teb)
                        active['pending']={'pc':c.Rip,'bytes':ins.bytes.hex(),'instruction':ins.mnemonic+' '+ins.op_str,
                                           'reads':[[at,debug.read(at,size).hex()] for at,size in reads]}
                        active['writes']=writes
                        if c.Rip==base+0x4930:active['rekey']=True
                        if len(active['trace'])>100000:raise RuntimeError('frame trace limit')
                        c.EFlags=(c.EFlags|0x100)&~0x10000;c.Dr6=0;debug.set(h,c)
                else:
                    if active is not None:raise RuntimeError(('exception inside traced frame',hex(code),hex(event.u.exception.record.Address)))
                    status=0x80010001
            debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True
        assert frames,('no complete native frame',frames)
        manifest={'frames':frames,'user_hex':args.user.encode().hex(),'original_sha256':hashlib.sha256(original).hexdigest(),
                  'variant_sha256':hashlib.sha256(variant).hexdigest(),'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
                  'method':'Windows debug API; execution hardware breakpoint then trap-flag single step; no instruction patching',
                  'selection':'first control then counter within 16 of rekey threshold' if args.near_rekey else 'consecutive handler invocations',
                  'entry_rva':hex(args.entry),
                  'inputs':'Entry GPRs, RFLAGS, XMM, GS base and memory only; oracle after-state/reads are separate trace data.'}
        (args.out/'manifest.json').write_bytes(json.dumps(manifest,indent=2).encode()+b'\n')
    finally:
        if not continued:debug.k.ContinueDebugEvent(event.PID,event.TID,0x10002)
        if proc.poll() is None:proc.kill()
        try:proc.wait(timeout=3)
        except subprocess.TimeoutExpired:pass


if __name__=='__main__':main()
