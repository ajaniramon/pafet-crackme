#!/usr/bin/env python3
"""C++ vs original host4 x64: SSO/heap stores and five volatile body results.

Binary values below are injected into component objects, not asserted to be
accepted by the console. There is no f_user expected-output formula.
"""
import ctypes
import hashlib
import json
import pathlib
import struct
import subprocess
import pefile
from unicorn import UC_HOOK_MEM_WRITE
from unicorn.x86_const import *
from pafet_semantic_probe import IsolatedPE,BASE

ROOT=pathlib.Path(__file__).resolve().parents[1]
OUT=ROOT/'jack_xxiii_evidence'

class Result(ctypes.Structure):
    _fields_=[(x,ctypes.c_uint64) for x in ('rax','rcx','rdx','r8','r9','read_address','write_address')]

def build():
    OUT.mkdir(exist_ok=True)
    so=OUT/'libpafet_writer_xxiii.so'
    subprocess.run(['g++','-std=c++17','-O2','-fPIC','-shared','-fno-strict-aliasing',
        str(ROOT/'src/pafet_native_writer_xxiii.cpp'),str(ROOT/'src/pafet_h3a50_native.cpp'),'-o',str(so)],check=True)
    lib=ctypes.CDLL(str(so))
    lib.pafet_host4_xxiii.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint64,ctypes.c_uint64,ctypes.POINTER(Result)]
    lib.pafet_drop_core_xxiii.argtypes=[ctypes.c_void_p,ctypes.c_void_p]
    lib.pafet_drop_core_xxiii.restype=ctypes.c_uint64
    lib.pafet_drop14_core_xxiii.argtypes=[ctypes.c_void_p,ctypes.c_void_p]
    lib.pafet_drop14_core_xxiii.restype=ctypes.c_uint64
    return lib

def main():
    assert hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest()=='fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'
    lib=build();pe=pefile.PE(str(ROOT/'pafet.bin'));results=[]
    for index in [0,1,7,14,15,16,22,23,24,25,127,128,255,256]:
        for mode in (['sso','heap'] if index<15 else ['heap']):
            for byte in [0,1,65,127,128,255]:
                p=IsolatedPE(pe)
                n=15 if mode=='sso' else max(index+1,32)
                data=bytearray((i*19+7)&255 for i in range(n));data[index]=byte
                obj=p.string(bytes(data));host=p.alloc(32);idx=p.alloc(8)
                p.putq(host,obj);p.putq(host+16,idx);p.putq(idx,index)
                initial=bytes(p.mu.mem_read(obj,32));buf=p.q(obj) if mode=='heap' else obj
                physical=bytes(p.mu.mem_read(buf,n+1));stores=[]
                p.mu.hook_add(UC_HOOK_MEM_WRITE,lambda u,a,addr,size,value,_:stores.append(
                    {'rip':hex(u.reg_read(UC_X86_REG_RIP)),'address':addr,'size':size,'value':value&((1<<(size*8))-1)}) if buf<=addr<buf+n+1 else None)
                native_rax=p.call(BASE+0x48960,host,4,0x12345678)
                native={name:p.mu.reg_read(reg) for name,reg in [('rax',UC_X86_REG_RAX),('rcx',UC_X86_REG_RCX),('rdx',UC_X86_REG_RDX),('r8',UC_X86_REG_R8),('r9',UC_X86_REG_R9)]}
                cobj=ctypes.create_string_buffer(initial,32);cheap=ctypes.create_string_buffer(physical,len(physical));r=Result()
                lib.pafet_host4_xxiii(cobj,cheap,obj,index,ctypes.byref(r))
                actual=bytes(p.mu.mem_read(buf,n+1));port=cheap.raw if mode=='heap' else cobj.raw[:n+1]
                assert actual==port,(index,mode,byte,'bytes')
                assert all(native[k]==getattr(r,k) for k in native),(index,mode,byte,native)
                assert bytes(p.mu.mem_read(obj,32))==cobj.raw
                assert len(stores)==1 and stores[0]['rip']=='0x140048a3a' and stores[0]['address']==buf+index and stores[0]['size']==1
                assert p.q(idx)==index and p.q(host)==obj
                results.append({'index':index,'mode':mode,'input_byte':byte,'rax':native_rax,
                    'all_five_registers_match':True,'object_and_buffer_match':True,'stores':stores})
    (OUT/'writer_differential.json').write_text(json.dumps({'cases':len(results),'all_match':True,
        'native_entry':'0x140048960 op=4','store':'0x140048a3a',
        'expected_output_uses_f_user_formula':False,'scope':'Component objects; no Windows/console acceptance claim',
        'results':results},indent=2)+'\n')
    print('writer',len(results),'cases: bytes, object, five registers and single actual store all match')

if __name__=='__main__':main()
