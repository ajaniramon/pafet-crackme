"""Four-VM static inventory and original-x64 blob-seed region differential.

These loops hash encrypted blob bytes during initialization. Recovering them is
not recovering the Serial/SHA ISA or decrypting their bytecode.
"""
import hashlib
import json
import pathlib
import random
import subprocess
import capstone
import pefile
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *
from .uservm import ROOT, ORIGINAL_SHA256, value
from .ir import State, execute
from .cpp import emit
from pafet_semantic_probe import IsolatedPE, BASE

OUT=ROOT/'jack_xvii_evidence/regions'
BUILD=ROOT/'jack_xvii_evidence/build'
# Instruction anchors, verified below against the PE's LEA and MOV encodings.
SPECS={
    'User': dict(executor=0x3f540,seed_pc=0x3f6e5,lea_pc=0x3f6f1,count_pc=0x3f6f8,
                 blob=0x3e5020,size=0x6d8,seed=0xf7002e5d6b6ed339,start=0x3f700,branch=0x3f719,end=0x3f71b),
    'Serial': dict(executor=0x22a120,seed_pc=0x22a2c5,lea_pc=0x22a2d1,count_pc=0x22a2d8,
                   blob=0x3e9c10,size=0xa76,seed=0x3f7bc48565f9022a,start=0x22a2e0,branch=0x22a2f9,end=0x22a2fb),
    'SHA': dict(executor=0x27aba0,seed_pc=0x27ad87,lea_pc=0x27ad93,count_pc=0x27ad9a,
                blob=0x3e3f10,size=0xdb6,seed=0xe0f078b65dfb2724,start=0x27ada0,branch=0x27adb9,end=0x27adbb),
    'Hex': dict(executor=0x804c0,seed_pc=0x80682,lea_pc=0x80692,count_pc=0x80699,
                blob=0x3ec120,size=0x7b7,seed=0x671ae3e65cd34f0d,start=0x806b0,branch=0x806eb,end=0x806ed),
}


def region_ir(name, spec):
    """Three IR blocks; registers 0..2 here are compiler scratch, not VM slots."""
    body=[value('acc','reg.read',index=0),value('i','reg.read',index=1),
          value('byte','load8',['i'],bits=8,buffer='source'),value('x','xor',['acc','i']),
          value('y','xor',['x','byte']),value('shift','const',value=33),
          value('m1','const',value=0xff51afd7ed558ccd),value('m2','const',value=0xc4ceb9fe1a85ec53),
          value('a','shr',['y','shift']),value('b','xor',['a','y']),value('c','mul',['b','m1']),
          value('d','shr',['c','shift']),value('e','xor',['d','c']),value('f','mul',['e','m2']),
          value('g','shr',['f','shift']),value('next','xor',['g','f']),
          value('one','const',value=1),value('inc','add',['i','one']),value('size','reg.read',index=2),
          value('more','ult',['inc','size']),dict(op='reg.write',index=0,args=['next']),dict(op='reg.write',index=1,args=['inc'])]
    def block(pc,effects,control):
        return dict(pc=pc,stack_in=0,instructions=[dict(pc=pc,logical_opcode=0,operation='NATIVE_INITIALIZATION_REGION',
            encoded_hex='native-region',operands=[],fallthrough_pc=pc+1,stack_after=[],effects=effects,control=control)])
    return {'schema':'pafet-effect-ir-v1','vm':name+' native initialization region','pe_sha256':ORIGINAL_SHA256,'entry':0,
            'functions':{},'blocks':[
                block(0,[value('seed','const',value=spec['seed']),dict(op='reg.write',index=0,args=['seed']),
                         value('zero','const',value=0),dict(op='reg.write',index=1,args=['zero']),
                         value('size','buffer.size',buffer='source'),dict(op='reg.write',index=2,args=['size'])],dict(op='jump',target=1)),
                block(1,body,dict(op='branch',condition='more',zero=False,target=1,fallthrough=2)),
                block(2,[value('ret','reg.read',index=0)],dict(op='return',value='ret'))],
            'contract':{'input':'nonempty bytes; original seed from PE','state':'Compiler scratch r0=accumulator,r1=index,r2=length; not virtual ISA registers.',
                        'scope':'Blob seed fold only; not bytecode materialization, opcode decoding or RC4/SHA semantic recovery.'}}


def native_fold(pe,spec,data):
    native=IsolatedPE(pe); uc=native.mu; pointer=native.alloc(len(data)); uc.mem_write(pointer,data)
    uc.reg_write(UC_X86_REG_RSP,native.stack+0x1f008)
    if spec['executor']==0x804c0:
        pairs=[(UC_X86_REG_RCX,spec['seed']),(UC_X86_REG_RDX,0),(UC_X86_REG_R8,pointer),
               (UC_X86_REG_R9,len(data)),(UC_X86_REG_RBX,0xff51afd7ed558ccd),(UC_X86_REG_R10,0xc4ceb9fe1a85ec53)]
        accumulator,index,count,ptr=UC_X86_REG_RCX,UC_X86_REG_RDX,UC_X86_REG_R9,UC_X86_REG_R8
    else:
        pairs=[(UC_X86_REG_RAX,spec['seed']),(UC_X86_REG_RBX,0),(UC_X86_REG_RDI,pointer),(UC_X86_REG_RSI,len(data))]
        accumulator,index,count,ptr=UC_X86_REG_RAX,UC_X86_REG_RBX,UC_X86_REG_RSI,UC_X86_REG_RDI
    for reg,val in pairs: uc.reg_write(reg,val)
    states=[]
    def observe(u,pc,size,unused):
        if pc==BASE+spec['branch']:
            states.append([u.reg_read(accumulator),u.reg_read(index),u.reg_read(count),u.reg_read(ptr)-pointer])
    uc.hook_add(UC_HOOK_CODE,observe)
    uc.emu_start(BASE+spec['start'],BASE+spec['end'],count=200000)
    assert uc.reg_read(UC_X86_REG_RIP)==BASE+spec['end'] and len(states)==len(data)
    assert bytes(uc.mem_read(pointer,len(data)))==data
    return states


def main():
    OUT.mkdir(parents=True,exist_ok=True);BUILD.mkdir(parents=True,exist_ok=True)
    assert hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest()==ORIGINAL_SHA256
    pe=pefile.PE(str(ROOT/'pafet.bin')); md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
    report={'pe_sha256':ORIGINAL_SHA256,'regions':{},'all_checks_pass':True,
            'scope':'Verified initialization blob references, lengths, seed recurrence and per-iteration state. Serial/SHA bytecode format and ISA remain unproved.'}
    rng=random.Random(0x175104)
    for name,spec in SPECS.items():
        at=lambda pc:next(md.disasm(pe.get_data(pc,15),BASE+pc))
        seed,lea,count=map(at,(spec['seed_pc'],spec['lea_pc'],spec['count_pc']))
        assert seed.mnemonic=='movabs' and seed.operands[1].imm&((1<<64)-1)==spec['seed']
        assert lea.mnemonic=='lea' and lea.address+lea.size+lea.operands[1].mem.disp==BASE+spec['blob']
        assert count.mnemonic=='mov' and count.operands[1].imm==spec['size']
        blob=pe.get_data(spec['blob'],spec['size']);assert len(blob)==spec['size']
        (OUT/(name.lower()+'.encrypted.bin')).write_bytes(blob)
        lines=[f'{i.address:x} {i.bytes.hex()} {i.mnemonic} {i.op_str}'.rstrip() for i in md.disasm(pe.get_data(spec['seed_pc'],spec['end']-spec['seed_pc']),BASE+spec['seed_pc'])]
        (OUT/(name.lower()+'.asm')).write_bytes(('\n'.join(lines)+'\n').encode())
        program=region_ir(name,spec); stem=name.lower()+'.seed'
        (OUT/(stem+'.ir.json')).write_bytes(json.dumps(program,indent=2).encode()+b'\n')
        source=OUT/(stem+'.cpp');source.write_bytes(emit(program).encode());exe=BUILD/(stem)
        subprocess.run(['g++','-std=c++17','-O2','-Wall','-Wextra','-Werror','-I',str(ROOT/'devirt'),
                        str(ROOT/'devirt/region_driver.cpp'),str(source),'-o',str(exe)],check=True)
        trials=[]
        for label,data in [('original_blob',blob),('one_byte',b'\xff'),('synthetic_65',bytes(rng.getrandbits(8) for _ in range(65)))]:
            native=native_fold(pe,spec,data);ir=[];state=State(source=data)
            execute(program,state,lambda k,i,s:ir.append([s.registers[0],s.registers[1],len(data)-s.registers[1],s.registers[1]]) if i['pc']==1 else None)
            assert native==ir,(name,label,'iteration states')
            cpp=[line.split() for line in subprocess.check_output([str(exe),data.hex()],text=True).splitlines()]
            assert cpp[-1][0]=='R' and int(cpp[-1][1],16)==state.result and int(cpp[-1][2])==len(data)
            assert [[int(row[1],16),*[int(x) for x in row[2:]]] for row in cpp[:-1]]==native
            trials.append({'case':label,'bytes':len(data),'every_iteration_accumulator_index_remaining_pointer_match':True,
                           'final_hash':hex(state.result),'cpp_matches_every_iteration':True,
                           'iteration_states_sha256':hashlib.sha256(json.dumps(native).encode()).hexdigest()})
        report['regions'][name]={**{k:hex(v) for k,v in spec.items()},'raw_blob_sha256':hashlib.sha256(blob).hexdigest(),
                                 'trials':trials,'ir_sha256':hashlib.sha256((OUT/(stem+'.ir.json')).read_bytes()).hexdigest(),
                                 'generated_cpp_sha256':hashlib.sha256(source.read_bytes()).hexdigest()}
        print(name,spec['size'],'blob bytes; 3 original-x64 / IR / C++ region cases PASS',flush=True)
    report['validation_source_sha256']=hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest()
    report['sources_sha256']={str(p.relative_to(ROOT)):hashlib.sha256(p.read_bytes()).hexdigest()
                              for p in (ROOT/'devirt/ir.py',ROOT/'devirt/cpp.py',ROOT/'devirt/runtime.hpp',ROOT/'devirt/region_driver.cpp')}
    (OUT/'validation.json').write_bytes(json.dumps(report,indent=2).encode()+b'\n')


if __name__=='__main__':main()
