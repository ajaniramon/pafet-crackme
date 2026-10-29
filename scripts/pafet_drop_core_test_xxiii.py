#!/usr/bin/env python3
"""Compare two C++ DROP cores to six historical vectors each.

Stops before JNS at 0x14003bfa4 or 0x140014afd. No claim that the threaded/guard
continuation after this boundary has been ported.
"""
import ctypes,importlib.util,json,pathlib,struct
import unicorn
from unicorn.x86_const import UC_X86_REG_RAX,UC_X86_REG_RIP
from pafet_writer_test_xxiii import build
ROOT=pathlib.Path(__file__).resolve().parents[1]

def test(lib,script,vectors,boundary,function):
    spec=importlib.util.spec_from_file_location('old',ROOT/'scripts'/script);old=importlib.util.module_from_spec(spec);spec.loader.exec_module(old)
    caps=json.loads((ROOT/'vm_pools_evidence'/vectors).read_text());results=[]
    for label,capture in caps.items():
        if 'vectors' not in capture:continue
        for n,vector in enumerate(capture['vectors']):
            ctx=int(vector['regs']['rcx'],16);state={}
            def make_uc(*a,**k):
                uc=unicorn.Uc(*a,**k);original_start=uc.emu_start
                def start(*a,**k):
                    initial=bytes(uc.mem_read(ctx,0x2000));stackptr=struct.unpack_from('<Q',initial,0x1160)[0]
                    stack=bytes(uc.mem_read(stackptr,8192))
                    cctx=ctypes.create_string_buffer(initial,len(initial));cstack=ctypes.create_string_buffer(stack,len(stack))
                    cpp_rax=function(cctx,cstack)
                    original_start(a[0],boundary,timeout=10000000,count=500000)
                    assert uc.reg_read(UC_X86_REG_RIP)==boundary
                    assert bytes(uc.mem_read(ctx,0x2000))==cctx.raw
                    assert bytes(uc.mem_read(stackptr,8192))==cstack.raw
                    assert uc.reg_read(UC_X86_REG_RAX)==cpp_rax
                    state.update({'context_8192_matches':True,'encoded_stack_8192_matches':True,'rax_matches':True,
                        'rax':hex(cpp_rax),'boundary':hex(boundary)+' before JNS',
                        'whole_handler_continuation_ported':False})
                uc.emu_start=start
                return uc
            old.Uc=make_uc
            old.emulate_one(vector,pe_runtime_base=int(capture['pe_base'],16))
            assert state
            results.append({'capture':label,'vector':n,**state})
    return results
def main():
    lib=build();results=[]
    results+=test(lib,'pafet_h3bea0_unicorn_xiii.py','h3bea0_vectors_xiii.json',0x14003bfa4,lib.pafet_drop_core_xxiii)
    results+=test(lib,'pafet_h14a00_unicorn_xvi.py','h14a00_vectors_xvi.json',0x140014afd,lib.pafet_drop14_core_xxiii)
    (ROOT/'jack_xxiii_evidence/drop_core_differential.json').write_text(json.dumps({'cases':len(results),'all_match':True,'results':results},indent=2)+'\n')
    print('Two DROP cores:',len(results),'contexts, encoded stacks and RAX all match')
if __name__=='__main__':main()
