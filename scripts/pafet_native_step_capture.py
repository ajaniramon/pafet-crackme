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
import uuid
import pefile
import capstone as cs
from capstone.x86 import X86_OP_MEM
from pafet_state_contract import PROFILES,ORIGINAL_SHA256,VARIANT_SHA256,require,validate_entry

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
        require(count.value==size,'Short native memory read','capture',address=hex(address),requested=size,obtained=count.value)
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


def inputs(debugger,c,base,teb,pe,profile='user-v1',stop_rva=None,roots=(),pointer_roots=()):
    pages={};labels={};protections={}
    def capture(address,size,label):
        lo=address&~4095;end=(address+size+4095)&~4095
        for at in range(lo,end,4096):
            data=debugger.read(at,4096)
            if at in pages:require(pages[at]==data,'Overlapping initial input differs','contradictory-memory',address=hex(at))
            pages[at]=data;labels.setdefault(at,[]).append(label)
            protections[at]=debugger.query(at).Protect
    stack=debugger.query(c.Rsp)
    require(stack.State==0x1000 and not stack.Protect&0x101,'Initial native stack is not readable committed memory','capture')
    capture(stack.Base,stack.Size,'committed native stack (includes pointed virtual arrays)')
    # Original relocated PE supplies code/readonly data; capture mutable globals.
    for section in pe.sections:
        if section.Characteristics&0x80000000:
            capture(base+section.VirtualAddress,section.Misc_VirtualSize,'PE writable section '+section.Name.decode(errors='replace').rstrip('\0'))
    iat=pe.OPTIONAL_HEADER.DATA_DIRECTORY[12]
    if iat.Size:capture(base+iat.VirtualAddress,iat.Size,'initialized IAT')
    ctx=debugger.read(c.Rcx,0x2000) if profile=='user-v1' else None
    if ctx is not None:capture(c.Rcx,0x2000,'declared User context window')
    def pointed(pointer,size,label):
        if pointer<0x100000 or pointer>0x7fffffffffff or base<=pointer<base+pe.OPTIONAL_HEADER.SizeOfImage:return
        try:info=debugger.query(pointer)
        except OSError:return
        if info.State!=0x1000 or info.Protect&0x101:return
        size=min(size,info.Base+info.Size-(pointer&~4095))
        capture(pointer&~4095,size,label)
    if ctx is not None:
        for offset in range(0,0x2000,8):pointed(struct.unpack_from('<Q',ctx,offset)[0],0x4000,'context pointer '+hex(offset))
        pointed(struct.unpack_from('<Q',ctx,0xf48)[0],0x20000,'trampoline pool')
    required=[]
    for register,size in roots:
        pointer=getattr(c,register.capitalize());capture(pointer,size,'declared root '+register)
        required.append({'address':pointer,'size':size,'role':'declared root '+register})
    pointers=[]
    for register,offset,size in pointer_roots:
        field=getattr(c,register.capitalize())+offset
        capture(field,8,'pointer-field provenance')
        pointer=struct.unpack('<Q',debugger.read(field,8))[0]
        capture(pointer,size,'pointed '+register+'+'+hex(offset))
        required.append({'address':pointer,'size':size,'role':'pointed '+register+'+'+hex(offset)})
        pointers.append({'field':field,'address':pointer,'size':size})
    capture(teb,4096,'GS base / TEB')
    tls=struct.unpack('<Q',debugger.read(teb+0x58,8))[0]
    pointed(tls,0x1000,'TLS pointer array')
    if tls:pointed(struct.unpack('<Q',debugger.read(tls,8))[0],0x4000,'TLS slot zero')
    expected=pefile.PE(str(ROOT/'pafet_pass8.exe')).get_memory_mapped_image(ImageBase=base)
    text=next(s for s in pe.sections if s.Name.rstrip(b'\0')==b'.text')
    actual=debugger.read(base+text.VirtualAddress,text.Misc_VirtualSize)
    require(actual==expected[text.VirtualAddress:text.VirtualAddress+text.Misc_VirtualSize],'.text differs from the verified two-byte gate variant','integrity')
    entry={'state':state(c),'base':base,'gs_base':teb,'context':c.Rcx if ctx is not None else None,
            'native_return':struct.unpack('<Q',debugger.read(c.Rsp,8))[0],
            'regions':[{'address':at,'hex':data.hex(),'labels':labels[at],'protection':protections[at]} for at,data in sorted(pages.items())],
            'variant_text_sha256':hashlib.sha256(actual).hexdigest(),
            'known_arrays':[{'address':struct.unpack_from('<Q',ctx,o)[0],'size':n,'role':role} for o,n,role in PROFILES[profile]['arrays']],
            'contract':{'version':1,'profile':profile,'stack':{'address':stack.Base,'size':stack.Size,'committed':True},
                        'selectors':{name:getattr(c,name) for name in ('SegCs','SegSs','SegDs','SegEs','SegFs','SegGs')},
                        'fs_base':None,'required_regions':required,'pointer_roots':pointers,
                        'scope':'Discovered declared roots, not a universal transitive memory closure.'}}
    if stop_rva is not None:entry['stop']=base+stop_rva
    validate_entry(entry,pefile.PE(str(ROOT/'pafet.bin')))
    return entry


def dump(path,value):path.write_bytes(gzip.compress(json.dumps(value,separators=(',',':')).encode(),mtime=0))


def save_frame(out,index,active,debugger,terminal):
    """Preserve observations and partial failures; never synthesize after states."""
    entry=active['entry'];oracle={k:v for k,v in active.items() if k not in ('entry','pending','writes')}
    oracle['terminal']=terminal;oracle['complete']=terminal['kind'] in ('return','stop-rva','stop-any')
    oracle['after_context_hex']=debugger.read(entry['context'],0x2000).hex() if entry.get('context') else None
    oracle['after_arrays']=[{'address':a['address'],'hex':debugger.read(a['address'],a['size']).hex(),'role':a['role']} for a in entry['known_arrays']]
    oracle['final_regions']=[{'address':a['address'],'hex':debugger.read(a['address'],a['size']).hex(),'role':a['role']} for a in entry.get('contract',{}).get('required_regions',[])]
    if 'pending' in active:oracle['pending_instruction']=active['pending']
    stem=f'frame_{index:02d}';a=out/(stem+'.entry.json.gz');b=out/(stem+'.trace.json.gz')
    dump(a,entry);dump(b,oracle)
    return {'stem':stem,'steps':len(oracle['trace']),'rekey':active['rekey'],'status':'complete' if oracle['complete'] else 'blocked',
            'entry_sha256':hashlib.sha256(a.read_bytes()).hexdigest(),'trace_sha256':hashlib.sha256(b.read_bytes()).hexdigest(),
            'terminal':terminal}


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--user',default='alice');ap.add_argument('--frames',type=int,default=8)
    ap.add_argument('--out',type=pathlib.Path,default=ROOT/'jack_xxviii_evidence/captures'/uuid.uuid4().hex)
    ap.add_argument('--near-rekey',action='store_true',help='after first control, select entries whose input counter is within 16 of its threshold')
    ap.add_argument('--entry',type=lambda s:int(s,0),default=0x3bea0,help='original native entry RVA (default DROP; 0x4930 for natural register rekey)')
    ap.add_argument('--profile',choices=sorted(PROFILES),default='user-v1')
    ap.add_argument('--stop-rva',type=lambda s:int(s,0),help='Explicit region boundary, instead of the entry return address')
    ap.add_argument('--stop-any',action='append',type=lambda s:int(s,0),default=[],help='Alternative static terminal RVAs; stop at the first naturally reached one')
    ap.add_argument('--region',action='append',default=[],help='Discovered required root REGISTER:SIZE, e.g. rdx:32')
    ap.add_argument('--pointer-region',action='append',default=[],help='Discovered pointer field REGISTER:OFFSET:SIZE; verify its before value and capture its pointee')
    ap.add_argument('--entry-any',action='append',type=lambda s:int(s,0),default=[],help='Up to four alternative entry RVAs, using DR0..DR3')
    ap.add_argument('--stop-next',action='store_true',help='For a CALL-site entry, stop at its following instruction after the callee returns')
    ap.add_argument('--select-counter',help='Capture only when dword [RCX+OFFSET] equals VALUE; read-only selection OFFSET:VALUE')
    args=ap.parse_args()
    require(C.sizeof(Context)==1232 and Context.Rip.offset==248 and C.sizeof(Event)==176 and C.sizeof(MemoryInfo)==48,'Unsupported Windows x64 context layout')
    require(args.frames>0,'Frame count must be positive','malformed-input')
    require(not args.near_rekey or args.profile=='user-v1','Rekey selection is specific to User profile','unsupported-profile')
    roots=[]
    for text in args.region:
        name,n=text.split(':');require(name in NAMES,'Unknown root register','malformed-input',register=name);roots.append((name,int(n,0)))
    pointer_roots=[]
    for text in args.pointer_region:
        name,offset,n=text.split(':');require(name in NAMES and int(n,0)>0,'Invalid pointer root','malformed-input');pointer_roots.append((name,int(offset,0),int(n,0)))
    entries=args.entry_any or [args.entry]
    require(0<len(entries)<=4 and len(set(entries))==len(entries),'Hardware entry inventory must contain 1..4 distinct RVAs','malformed-input')
    require(not(args.stop_next and args.stop_rva is not None),'Select one stop policy','malformed-input')
    require(not args.stop_any or (not args.stop_next and args.stop_rva is None),'Select one stop policy','malformed-input')
    selection=tuple(int(n,0) for n in args.select_counter.split(':')) if args.select_counter else None
    require(selection is None or len(selection)==2,'Counter selection needs OFFSET:VALUE','malformed-input')
    original=(ROOT/'pafet.bin').read_bytes();variant=(ROOT/'pafet_pass8.exe').read_bytes()
    require(hashlib.sha256(original).hexdigest()==ORIGINAL_SHA256 and hashlib.sha256(variant).hexdigest()==VARIANT_SHA256,'Research executable identity differs','integrity')
    require(len(original)==len(variant) and [i for i,(a,b) in enumerate(zip(original,variant)) if a!=b]==[0x395efb,0x395efc],'Unexpected executable changes','integrity')
    require(not args.out.exists() or not any(args.out.iterdir()),'Capture output must be a fresh directory','integrity',path=str(args.out))
    args.out.mkdir(parents=True,exist_ok=True)
    debug=Debugger();pe=pefile.PE(str(ROOT/'pafet.bin'));md=cs.Cs(cs.CS_ARCH_X86,cs.CS_MODE_64);md.detail=True
    proc=subprocess.Popen([str(ROOT/'pafet_pass8.exe')],stdin=subprocess.PIPE,stdout=subprocess.PIPE,stderr=subprocess.PIPE,creationflags=0x2|0x08000000)
    proc.stdin.write(args.user.encode()+b'\r\nserial01\r\n');proc.stdin.flush()
    threads={};base=None;active=None;frames=[];event=Event();deadline=time.monotonic()+120;continued=True;invocations=0
    def arm(c):
        for i in range(4):setattr(c,'Dr'+str(i),base+entries[i] if i<len(entries) else 0)
        c.Dr7=sum(1<<(2*i) for i in range(len(entries)));c.Dr6=0
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
                h,_=threads[event.TID];backing,c=debug.get(h);arm(c);debug.set(h,c)
            elif event.Code==1:
                code=event.u.exception.record.Code
                if code==0x80000003:
                    # Initial loader breakpoint; hardware registers remain armed.
                    pass
                elif code==0x80000004:
                    h,teb=threads[event.TID];backing,c=debug.get(h)
                    if active is None and c.Rip-base in entries:
                        invocations+=1
                        if selection and struct.unpack('<I',debug.read(c.Rcx+selection[0],4))[0]!=selection[1]:
                            c.Dr6=0;c.EFlags|=0x10000;debug.set(h,c)
                            debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True
                            continue
                        if args.near_rekey and frames:
                            threshold,counter=struct.unpack('<II',debug.read(c.Rcx+0x1190,8))
                            if counter+16<threshold:
                                c.Dr6=0;c.EFlags|=0x10000;debug.set(h,c)
                                debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True
                                continue
                        stop_rva=args.stop_rva
                        if args.stop_next:
                            call=next(md.disasm(debug.read(c.Rip,15),c.Rip));require(call.mnemonic=='call','--stop-next requires a CALL-site entry','capture')
                            stop_rva=c.Rip-base+call.size
                        captured=inputs(debug,c,base,teb,pe,args.profile,stop_rva,roots,pointer_roots)
                        if args.stop_any:captured['stop_any']=[base+x for x in args.stop_any];validate_entry(captured,pefile.PE(str(ROOT/'pafet.bin')))
                        captured['invocation']=invocations
                        active={'entry':captured,'trace':[],'thread':event.TID,'writes':[],'rekey':False}
                        print('entry',len(frames),hex(c.Rcx),'captured pages',len(captured['regions']),flush=True)
                        c.Dr7=0;c.Dr6=0
                    elif active is not None:
                        require(event.TID==active['thread'],'Unexpected tracing thread','capture')
                        active['pending']['after']=state(c)
                        active['pending']['writes']=[[at,debug.read(at,size).hex()] for at,size in active['writes']]
                        active['trace'].append(active.pop('pending'))
                        if c.Rip in active['entry'].get('stop_any',[active['entry'].get('stop',active['entry']['native_return'])]):
                            frame=save_frame(args.out,len(frames),active,debug,{'kind':'stop-any' if 'stop_any' in active['entry'] else 'stop-rva' if 'stop' in active['entry'] else 'return','pc':hex(c.Rip)})
                            frames.append(frame)
                            print(frame['stem'],frame['steps'],'instructions; rekey',active['rekey'],flush=True)
                            finish=len(frames)>=args.frames
                            active=None;c.EFlags&=~0x100;arm(c);debug.set(h,c)
                            debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True
                            if finish:break
                            continue
                    if active is not None:
                        # Do not trace arbitrary OS code as if it were a VM path.
                        internal=base<=c.Rip<base+pe.OPTIONAL_HEADER.SizeOfImage
                        generated=any(r['address']<=c.Rip<r['address']+len(r['hex'])//2 and r.get('protection',0)&0xf0 for r in active['entry']['regions'])
                        if not internal and not generated:
                            frames.append(save_frame(args.out,len(frames),active,debug,{'kind':'external-code-boundary','pc':hex(c.Rip)}));active=None
                            debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True;break
                        ins=next(md.disasm(debug.read(c.Rip,15),c.Rip));reads,writes=operands(ins,c,teb)
                        active['pending']={'pc':c.Rip,'bytes':ins.bytes.hex(),'instruction':ins.mnemonic+' '+ins.op_str,
                                           'reads':[[at,debug.read(at,size).hex()] for at,size in reads]}
                        active['writes']=writes
                        if c.Rip==base+0x4930:active['rekey']=True
                        if len(active['trace'])>100000:raise RuntimeError('frame trace limit')
                        c.EFlags=(c.EFlags|0x100)&~0x10000;c.Dr6=0;debug.set(h,c)
                else:
                    if active is not None:
                        frames.append(save_frame(args.out,len(frames),active,debug,{'kind':'native-exception','code':hex(code),'pc':hex(event.u.exception.record.Address)}));active=None
                        debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,0x80010001));continued=True;break
                    status=0x80010001
            debug.checked(debug.k.ContinueDebugEvent(event.PID,event.TID,status));continued=True
        if active is not None:
            frames.append(save_frame(args.out,len(frames),active,debug,{'kind':'timeout','pc':hex(active['pending']['pc']) if 'pending' in active else None}));active=None
        complete=len(frames)==args.frames and all(f['status']=='complete' for f in frames)
        manifest={'schema':'pafet-capture-v2','run_id':uuid.uuid4().hex,'status':'complete' if complete else 'blocked',
                  'requested_frames':args.frames,'frames':frames,'user_hex':args.user.encode().hex(),'original_sha256':hashlib.sha256(original).hexdigest(),
                  'variant_sha256':hashlib.sha256(variant).hexdigest(),'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
                  'contract_sha256':hashlib.sha256((ROOT/'scripts/pafet_state_contract.py').read_bytes()).hexdigest(),
                  'method':'Windows debug API; execution hardware breakpoint then trap-flag single step; no instruction patching',
                  'selection':'first control then counter within 16 of rekey threshold' if args.near_rekey else 'consecutive handler invocations',
                  'entry_rva':hex(entries[0]) if len(entries)==1 else None,
                  'entry_rvas':list(map(hex,entries)),'select_counter':selection,'stop_next':args.stop_next,
                  'stop_any_rvas':list(map(hex,args.stop_any)),
                  'profile':args.profile,'stop_rva':hex(args.stop_rva) if args.stop_rva is not None else None,
                  'inputs':'Entry GPRs, RFLAGS, XMM, GS base and memory only; oracle after-state/reads are separate trace data.'}
        (args.out/'manifest.json').write_bytes(json.dumps(manifest,indent=2).encode()+b'\n')
        if not complete:raise RuntimeError('Capture blocked/incomplete; before inputs and observed prefix preserved in '+str(args.out))
    except Exception as error:
        # Failures before an entry contract can be validated are captures too,
        # but never complete inputs. Preserve diagnostics without fabricating it.
        if active is not None:
            # Do not read the failing process again: preserve only measurements
            # already obtained, with no claimed final state.
            stem=f'frame_{len(frames):02d}';a=args.out/(stem+'.entry.json.gz');b=args.out/(stem+'.trace.json.gz')
            observed={k:v for k,v in active.items() if k not in ('entry','writes')}
            observed.update(complete=False,terminal={'kind':'capture-error','error':str(error)})
            dump(a,active['entry']);dump(b,observed)
            frames.append({'stem':stem,'status':'blocked','steps':len(active['trace']),'entry_sha256':hashlib.sha256(a.read_bytes()).hexdigest(),'trace_sha256':hashlib.sha256(b.read_bytes()).hexdigest()})
        failure={'status':'blocked','classification':'capture','error':str(error),'frames':frames,'entry_rva':hex(args.entry),'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest()}
        (args.out/'capture_error.json').write_text(json.dumps(failure,indent=2)+'\n',encoding='utf-8')
        if not (args.out/'manifest.json').exists():(args.out/'manifest.json').write_text(json.dumps(failure,indent=2)+'\n',encoding='utf-8')
        raise
    finally:
        if not continued:debug.k.ContinueDebugEvent(event.PID,event.TID,0x10002)
        if proc.poll() is None:proc.kill()
        try:proc.wait(timeout=3)
        except subprocess.TimeoutExpired:pass


if __name__=='__main__':main()
