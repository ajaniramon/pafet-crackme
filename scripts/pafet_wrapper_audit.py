#!/usr/bin/env python3
"""Wrapper-only original-byte tests; no SHA compression, DES or Windows matrix.

RC4 is only exercised through its existing serial wrapper, never reimplemented.
Native SHA mode uses documented compression/stream adapters. Not acceptance.
"""
import argparse,hashlib,json,os,struct,subprocess
from pathlib import Path
import pefile
from capstone import Cs,CS_ARCH_X86,CS_MODE_64
from unicorn import UC_HOOK_MEM_READ
from unicorn.x86_const import *
from pafet_semantic_probe import IsolatedPE,BASE,EXPECTED_HASH
from pafet_des3_offline import g_serial

FIXTURES=[b'',b'A\0\xff\x80z',bytes(range(33)),bytes(range(65))]
REGIONS={'sha':(0x27aba0,0x283192,0x26e250,0x3e3f10,0xdb6),
         'serial_outer':(0x264a60,0x26d9b6,0x2338d0,0x3e12b0,0x433),
         'serial_inner':(0x22a120,0x232df8,0x1ed830,0x3e9c10,0xa76)}

def components(pe):
    result=[]
    for data in FIXTURES:
        p=IsolatedPE(pe);reg=lambda r:p.mu.reg_read(r)
        p.hooks[BASE+0x3a3dc0]=lambda:None
        p.hooks[BASE+0x3a6720]=lambda:p.mu.mem_write(reg(UC_X86_REG_RCX),bytes([reg(UC_X86_REG_RDX)&255])*reg(UC_X86_REG_R8))
        allocations=[]
        def allocate():
            a=p.alloc(reg(UC_X86_REG_RCX));allocations.append(a);return a
        p.hooks[BASE+0x3a4080]=allocate
        string=p.string(data);ctx=p.alloc(0x90);p.putq(ctx+0x10,string)
        ptr=p.call(BASE+0x2834d0,ctx,2,0);n=p.call(BASE+0x2834d0,ctx,4,0)
        assert n==len(data) and ptr==(p.q(string) if len(data)>=16 else string)
        count,index,source,block=[p.alloc(z) for z in (8,8,8,64)]
        p.putq(ctx,count);p.putq(ctx+0x18,index);p.putq(ctx+0x28,source);p.putq(ctx+0x30,block);p.putq(source,ptr)
        # Poison logical slack and monitor original host's source reads.
        p.mu.mem_write(ptr+len(data)+1,b'\xa5'*8);reads=[]
        def read_hook(mu,access,address,size,value,ud):
            if ptr<=address<ptr+len(data)+9:reads.extend(range(address,address+size))
        h=p.mu.hook_add(UC_HOOK_MEM_READ,read_hook)
        for i,b in enumerate(data):
            p.putq(index,i);p.putq(count,0)
            assert p.call(BASE+0x2834d0,ctx,9,0)==b
            assert p.mu.mem_read(block,1)[0]==b and p.q(count)==1
        p.mu.hook_del(h)
        assert reads==list(range(ptr,ptr+len(data)))
        # Original serial adapter, inner VM substituted at its call boundary.
        outer=p.alloc(48);key=p.string(b'');output=p.string(b'')
        p.putq(outer+8,string);p.putq(outer+0x18,key);p.putq(outer+0x20,output)
        captured=[]
        def inner_boundary():
            obj=allocations[-1];c=obj+8
            length=p.q(p.q(c+0x48));raw=p.q(p.q(c+0x58));k=p.q(c+0x18)
            locals_ptr=reg(UC_X86_REG_RCX)
            captured.append({'data_hex':bytes(p.mu.mem_read(raw,length)).hex(),'length':length,
                             'key_hex':p.strbytes(k).hex(),'locals_count':reg(UC_X86_REG_RDX),
                             'locals_zero':bytes(p.mu.mem_read(locals_ptr,192))==bytes(192)})
            return 0
        p.hooks[BASE+0x22a120]=inner_boundary
        op=p.alloc(8);p.putq(op,1);assert p.call(BASE+0x39d740,outer,op,0)==0
        assert captured==[{'data_hex':data.hex(),'length':len(data),'key_hex':'','locals_count':24,'locals_zero':True}]
        result.append({'input_hex':data.hex(),'size':n,'storage':'heap' if n>=16 else 'SSO',
                       'sha_copied_exactly_N_source_bytes':True,'serial_inner_boundary':captured[0]})
    return result

def formatting_requests(pe):
    p=IsolatedPE(pe);reg=lambda r:p.mu.reg_read(r)
    ctx=p.alloc(0x80);stream=p.alloc(0x100);vtable=p.alloc(16);p.putq(stream,vtable)
    data=p.alloc(32);index=p.alloc(8);p.putq(ctx+0x50,data);p.putq(ctx+0x58,index);p.putq(ctx+0x60,stream)
    manip=p.alloc(16);p.putq(manip,p.stop+0x100);p.putq(manip+8,2);events=[]
    p.hooks[BASE+0x3a3dc0]=lambda:None
    def make_manip():
        assert reg(UC_X86_REG_RDX)==2;events.append('width=2');return manip
    p.hooks[BASE+0x3a2fac]=make_manip
    p.hooks[p.stop+0x100]=lambda:reg(UC_X86_REG_RCX)
    # Execute original std::hex helper, intercept only the integer insertion.
    p.hooks[BASE+0x3973e0]=lambda:events.append({'value':reg(UC_X86_REG_RDX),'fill':p.mu.mem_read(stream+0x58,1)[0]}) or stream
    records=[]
    for b in (0,1,15,16,127,128,255):
        p.mu.mem_write(data,bytes([b]));p.putq(index,0);events.clear()
        p.call(BASE+0x2834d0,ctx,38,0)
        assert events==['width=2',{'value':b,'fill':48}]
        records.append({'byte':b,'requests':list(events),'stream_flags':struct.unpack('<I',p.mu.mem_read(stream+0x18,4))[0]})
    return records

def timing_helpers(pe):
    result=[]
    for address in (0x236210,0x1f0160,0x270b50):
        for ticks in ((1,1),(1,100000),(100000,1)):
            p=IsolatedPE(pe);it=iter(ticks)
            p.hooks[BASE+0x3a1490]=lambda:10000000
            p.hooks[BASE+0x3a1474]=lambda:next(it)
            got=p.call(BASE+address)
            if ticks[1]>=ticks[0]:assert got==1
            result.append({'address':hex(BASE+address),'QPC_ticks':ticks,'QPF':10000000,'return':got})
    return result

def guard_fragments(pe):
    # Original conditional fragments; artificial VM metadata/register values.
    # The failure helper is replaced by a recorder, not an acceptance oracle.
    result=[]
    specs=[('serial_outer',0x2338d0,0x265bba,0x265bd6,0x838,UC_X86_REG_RDI,
            0x2693fe,0x26941a,0xa4,0x26ae2f,0x26ae55,0xe0,0xc3bc185686624b81,0x26d6b6,0x26d6d2),
           ('serial_inner',0x1ed830,0x22b250,0x22b26c,0x1348,UC_X86_REG_RDI,
            0x22b4ac,0x22b4c8,0xa4,0x22f4f9,0x22f51f,0xd8,0xd46023193b81faaa,0x2301e4,0x230200),
           ('sha',0x26e250,0x27bd0a,0x27bd26,0xf88,UC_X86_REG_RAX,
            0x281aea,0x281b06,0xa8,0x27e33e,0x27e364,0xd8,0xfa0cd896d41a6139,0x281e0a,0x281e26)]
    for name,fail,cstart,cend,coff,creg,lstart,lend,loff,astart,aend,aoff,expected,bstart,bend in specs:
        for kind in ('CANY','ATTL','ATT2','BRAN'):
            for value in (range(4) if kind=='BRAN' else range(2)):
                p=IsolatedPE(pe);sp=p.stack+0x10000;hits=[]
                p.mu.reg_write(UC_X86_REG_RSP,sp)
                p.hooks[BASE+fail]=lambda:hits.append(p.mu.reg_read(UC_X86_REG_RDX))
                if kind=='CANY':
                    p.mu.reg_write(creg,0x1122334455667788);p.putq(sp+coff,0x1122334455667788^value)
                    start,end,want=cstart,cend,bool(value)
                elif kind=='ATTL':
                    p.mu.mem_write(sp+loff,struct.pack('<I',value));start,end,want=lstart,lend,value==0
                elif kind=='ATT2':
                    p.putq(sp+aoff,expected^value);start,end,want=astart,aend,bool(value)
                else:
                    p.mu.reg_write(UC_X86_REG_R12,value&1);p.mu.reg_write(UC_X86_REG_R14,value>>1)
                    start,end,want=bstart,bend,value==1
                p.mu.emu_start(BASE+start,BASE+end,count=100)
                assert p.mu.reg_read(UC_X86_REG_RIP)==BASE+end and bool(hits)==want
                if hits:assert hits==[int.from_bytes(kind.encode(),'big')]
                result.append({'region':name,'guard':kind,'artificial_state':value,'failure_called':bool(hits)})
    return result

def static_inventory(pe,out):
    md=Cs(CS_ARCH_X86,CS_MODE_64);records={}
    for name,(start,end,fail,blob,size) in REGIONS.items():
        ins=list(md.disasm(pe.get_data(start,end-start),BASE+start));guards=[]
        for k,i in enumerate(ins):
            if i.mnemonic=='call' and i.op_str==hex(BASE+fail):
                seq=ins[max(0,k-10):k+1]
                tags=[int(j.op_str.split(', ')[1],16) for j in seq if j.mnemonic=='mov' and j.op_str.startswith('edx, 0x')]
                guards.append({'call':hex(i.address),'tag':hex(tags[-1]),'instructions':[f'{j.address:x} {j.mnemonic} {j.op_str}' for j in seq]})
        assert len(guards)==5
        records[name]={'VM':[hex(BASE+start),hex(BASE+end)],'fail_stop':hex(BASE+fail),
                       'encrypted_blob':hex(BASE+blob),'blob_size':size,'blob_sha256':hashlib.sha256(pe.get_data(blob,size)).hexdigest(),'guards':guards}
        failure=list(md.disasm(pe.get_data(fail,1327),BASE+fail))
        assert not any(i.mnemonic.startswith('ret') for i in failure)
        assert failure[-1].mnemonic=='jmp' and int(failure[-1].op_str,16)<failure[-1].address
        records[name]['fail_stop_has_no_RET']=True
        records[name]['fail_stop_terminal_back_edge']=[hex(failure[-1].address),failure[-1].op_str]
    # Focused functions only; SHA/RC4/DES algorithm interiors are excluded.
    ranges={'sha_wrapper':(0x2831c0,0x30a),'sha_host':(0x2834d0,0x4bf),
            'serial_adapter':(0x39d740,0x1b3),'serial_buffer_host':(0x232e20,0x1cf),
            'main_serial':(0x396c36,0x151),'timing_serial_outer':(0x236210,292),
            'timing_serial_inner':(0x1f0160,292),'timing_sha':(0x270b50,292)}
    ranges.update({'failstop_'+name:(r[2],1327) for name,r in REGIONS.items()})
    out.mkdir(parents=True,exist_ok=True)
    for name,(a,n) in ranges.items():
        (out/(name+'.asm')).write_text('\n'.join(f'{i.address:x} {i.bytes.hex()} {i.mnemonic} {i.op_str}' for i in md.disasm(pe.get_data(a,n),BASE+a))+'\n')
    return records

def run_native(native,out):
    results=[]
    for mode in ('sha','serial'):
        for i,data in enumerate(FIXTURES):
            settings=[{}]+([{'PROBE_TICK':'305419896','POISON_TAIL':'1'}] if i==1 else [])
            for variant,extra in enumerate(settings):
                env={k:v for k,v in os.environ.items() if k not in ('FAST_DES','LOG_SHA_ALL','LOG_SHA_BLOCK','TRACE_USER','TRACE_DES','POISON_TAIL','WRAPPER_FAULT','PROBE_TICK') and not k.startswith('SEMANTIC_')};env.update(extra)
                r=subprocess.run([str(native),'--wrapper-'+mode,data.hex()],cwd=native.parent,env=env,capture_output=True,text=True,timeout=30)
                assert r.returncode==0,r.stderr+r.stdout
                if mode=='sha':
                    blocks=[bytes.fromhex(l.split()[2]) for l in r.stdout.splitlines() if l.startswith('WRAPPER-SHA-BLOCK ')]
                    padded=data+b'\x80';padded+=bytes((56-len(padded))%64)+(8*len(data)).to_bytes(8,'big')
                    assert b''.join(blocks)==padded
                    copied=[int(l.split()[2],16) for l in r.stdout.splitlines() if l.startswith('WRAPPER-SHA-COPY ')]
                    assert bytes(copied)==data
                    output=next(l.split(' ',1)[1] for l in r.stdout.splitlines() if l.startswith('WRAPPER-SHA-OUTPUT '))
                    assert bytes.fromhex(output)==b'6a09e667bb67ae853c6ef372a54ff53a510e527f9b05688c1f83d9ab5be0cd19'
                    assert 'WRAPPER-SHA-INPUT-AFTER '+data.hex()+'\n' in r.stdout
                else:
                    line=next(l for l in r.stdout.splitlines() if l.startswith('WRAPPER-SERIAL-OUTPUT '));output=line.split(' ',1)[1]
                    assert bytes.fromhex(output)==g_serial(data)
                    assert 'key_reads=0 empty_updates=256 xor_writes='+str(len(data)) in r.stdout
                    assert 'WRAPPER-KEY-LENGTH 0' in r.stdout and 'WRAPPER-KEY-DIVISOR 0' in r.stdout
                    assert 'WRAPPER-SERIAL-ORIGINAL '+data.hex()+'\n' in r.stdout
                name=f'{mode}_{i}_{variant}.txt';(out/name).write_text(r.stdout+r.stderr)
                results.append({'mode':mode,'input_hex':data.hex(),'settings':extra,'trace':name,'output_hex':output,'matches':True})
    faults=[]
    for name,(_,_,_,blob,_) in REGIONS.items():
        mode='sha' if name=='sha' else 'serial';env=os.environ.copy();env['WRAPPER_FAULT']=hex(blob)
        r=subprocess.run([str(native),'--wrapper-'+mode,FIXTURES[1].hex()],cwd=native.parent,env=env,capture_output=True,text=True,timeout=30)
        assert r.returncode==79 and 'WRAPPER-GUARD-FAIL 41545453' in r.stdout
        assert 'WRAPPER-SHA-OUTPUT ' not in r.stdout and 'WRAPPER-SERIAL-OUTPUT ' not in r.stdout
        (out/('fault_'+name+'.txt')).write_text(r.stdout+r.stderr)
        faults.append({'region':name,'mutated_RVA':hex(blob),'returncode':r.returncode,'guard':'ATTS','normal_output_produced':False})
    return {'cases':results,'fault_injections':faults}

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--binary',type=Path,default=Path(__file__).resolve().parents[1]/'pafet.bin');ap.add_argument('--native',type=Path,required=True);ap.add_argument('--out',type=Path,required=True);a=ap.parse_args();a.out.mkdir(parents=True,exist_ok=True)
    assert hashlib.sha256(a.binary.read_bytes()).hexdigest()==EXPECTED_HASH
    pe=pefile.PE(str(a.binary));r={'original_binary_sha256':EXPECTED_HASH,'scope':'wrapper components and adapted original VMs; not Windows/original acceptance','SHA_compression_executions':0,'DES_executions':0,'credential_searches':0,'Windows_matrix_executions':0}
    r['static']=static_inventory(pe,a.out/'static');r['components']=components(pe);r['hex_format_requests']=formatting_requests(pe);r['timing_helpers']=timing_helpers(pe);r['guard_fragments']=guard_fragments(pe);r['native']=run_native(a.native.resolve(),a.out);r['all_assertions_passed']=True
    (a.out/'wrapper_tests.json').write_text(json.dumps(r,indent=2)+'\n');print(json.dumps({'all_assertions_passed':True,'native_cases':len(r['native']['cases']),'faults':len(r['native']['fault_injections'])}))
if __name__=='__main__':main()
