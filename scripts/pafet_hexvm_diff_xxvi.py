#!/usr/bin/env python3
"""Compare compiled C++ with original PE instructions; errors never count as passes."""
import hashlib
import json
import pathlib
import random
import struct
import subprocess
import unicorn
from unicorn.x86_const import UC_X86_REG_RCX, UC_X86_REG_RSP, UC_X86_REG_RIP
from pafet_hexvm_handlers_unicorn_xxv import setup_unicorn, HANDLERS

ROOT = pathlib.Path(__file__).resolve().parents[1]
SENTINEL = 0x10001000

def main():
    build = ROOT / 'jack_xxvi_evidence' / 'build'
    build.mkdir(parents=True, exist_ok=True)
    exe = build / 'hexvm_probe'
    subprocess.run(['g++', '-std=c++17', '-O2', '-Wall', '-Wextra', '-Werror',
                    str(ROOT/'src/main_hexvm_probe_xxvi.cpp'), '-o', str(exe)], check=True)
    uc, ctx = setup_unicorn()
    assert list(struct.unpack('<8Q', bytes(uc.mem_read(0x1403dbca0,64)))) == HANDLERS
    rng = random.Random(0x260026)
    requests, expected, kinds = [], [], []
    def execute(address, context):
        uc.mem_write(ctx, bytes(context))
        uc.mem_write(0x1000f008, struct.pack('<Q', SENTINEL))
        uc.reg_write(UC_X86_REG_RSP, 0x1000f008)  # Windows ABI entry alignment
        uc.reg_write(UC_X86_REG_RCX, ctx)
        uc.emu_start(address, SENTINEL, count=20000)
        if uc.reg_read(UC_X86_REG_RIP) != SENTINEL:
            raise RuntimeError('original did not return within instruction budget')
        return bytes(uc.mem_read(ctx, 0x2000))
    def put(c, off, x, fmt='Q'): struct.pack_into('<'+fmt, c, off, x)
    def get(c, off, fmt='Q'): return struct.unpack_from('<'+fmt, c, off)[0]
    for h,address in enumerate(HANDLERS):
        for trial in range(64):
            c=bytearray(rng.randbytes(0x2000))
            values=[rng.getrandbits(64) for _ in range(3)]
            if trial < 4: values=[(0,1,(1<<64)-1,1<<63)[trial]]*3
            for off,x in zip((0x4b0,0x230,0x940),values): put(c,off,x)
            out=execute(address,c)
            want=[get(out,o) for o in (0x4b0,0x230,0x940)]
            restored=bytearray(out)
            for off in (0x4b0,0x230,0x940): restored[off:off+8]=c[off:off+8]
            assert restored==c, ('unexpected handler context write',h)
            requests.append([0,h,*values]); expected.append(want); kinds.append('handler')
    for trial in range(256):
        c=bytearray(rng.randbytes(0x2000))
        values=[rng.getrandbits(64) for _ in range(8)]
        for off,x in zip((0x4b0,0x230,0x940,0x1180,0x1188,0x10c0,0x10b8,0x10b0),values):put(c,off,x)
        flag=trial&1; rotation=(trial>>1)&7; length=trial%17
        put(c,0x10c8,flag,'B'); put(c,0x4b8,length,'I')
        queue=[rng.getrandbits(64) for _ in range(length)]
        for i,x in enumerate(queue):put(c,0x2b0+8*i,x)
        for i in range(8):put(c,0x9b8+8*i,HANDLERS[(i+rotation)&7])
        # Empty drain leaves VPC/tag untouched: make the probe's defaults explicit.
        put(c,0x10d0,0);put(c,0x1140,0,'B')
        out=execute(0x14004c720,c)
        expected.append([get(out,o) for o in (0x4b0,0x230,0x940,0x1180,0x1188,0x10d0)]
                        +[get(out,0x1140,'B'),get(out,0x4b8,'I')])
        requests.append([1,*values,flag,rotation,length,*queue]);kinds.append('dispatcher')
    # Separate backing table: it must not overlap the context mapping.
    slots_address = 0x21000000
    uc.mem_map(slots_address, 0x1000)
    for trial in range(256):
        c=bytearray(rng.randbytes(0x2000))
        index=trial; flag=trial&1; bank=rng.getrandbits(32)
        lcg,steps,im,tm,mask,encoded=[rng.getrandbits(64) for _ in range(6)]
        tag=rng.randrange(256)
        for off,x in ((0x1180,lcg),(0x1188,steps),(0x268,im),(0x1170,tm),
                      (0x260,mask),(0x288,slots_address)):put(c,off,x)
        put(c,0x750,bank,'I');put(c,0x754,flag,'B');put(c,0xa15+index,tag,'B')
        cell=(((bank+index)&1)<<8)+index
        uc.mem_write(slots_address,bytes(0x1000))
        uc.mem_write(slots_address+8*cell,struct.pack('<Q',encoded))
        # The adapter dereferences its rcx once; test its actual instructions too.
        wrapper=0x10002000
        uc.mem_write(wrapper,struct.pack('<Q',ctx))
        from unicorn.x86_const import UC_X86_REG_RDX, UC_X86_REG_RAX
        uc.mem_write(ctx,bytes(c));uc.mem_write(0x1000f008,struct.pack('<Q',SENTINEL))
        uc.reg_write(UC_X86_REG_RSP,0x1000f008);uc.reg_write(UC_X86_REG_RCX,wrapper)
        uc.reg_write(UC_X86_REG_RDX,index)
        uc.emu_start(0x1400889e0,SENTINEL,count=1000)
        assert uc.reg_read(UC_X86_REG_RIP)==SENTINEL
        out=bytes(uc.mem_read(ctx,0x2000))
        expected.append([uc.reg_read(UC_X86_REG_RAX),get(out,0x1180),get(out,0x1188),
                         get(out,0xa15+index,'B'),get(bytes(uc.mem_read(slots_address,0x1000)),8*cell)])
        requests.append([2,index,lcg,steps,bank,im,tm,mask,flag,tag,encoded]);kinds.append('slot_adapter')
    from unicorn.x86_const import UC_X86_REG_R13
    for trial in range(64):
        a=rng.getrandbits(64);rsp=0x10004000
        uc.mem_write(rsp,bytes(0x2000))
        uc.mem_write(rsp+0x3b0,struct.pack('<Q',a))
        uc.reg_write(UC_X86_REG_RSP,rsp);uc.reg_write(UC_X86_REG_R13,0)
        uc.emu_start(0x14008735f,0x140085f7c,count=10000)
        assert uc.reg_read(UC_X86_REG_RIP)==0x140085f7c
        expected.append([struct.unpack('<Q',uc.mem_read(rsp+0x3b0,8))[0],uc.reg_read(UC_X86_REG_RDX)])
        requests.append([3,a]);kinds.append('block_2d409a')
    result=subprocess.run([str(exe)],input=''.join(' '.join(format(x,'x') for x in r)+'\n' for r in requests),
                          text=True,capture_output=True,check=True)
    rows=result.stdout.splitlines()
    assert len(rows)==len(expected)
    counts={'handler':0,'dispatcher':0,'slot_adapter':0,'block_2d409a':0}
    for n,(line,want,kind) in enumerate(zip(rows,expected,kinds)):
        got=[int(x,16) for x in line.split()]
        assert got==want, {'case':n,'kind':kind,'cpp':got,'x64':want}
        counts[kind]+=1
    report={'pe_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),
            'seed':0x260026,'passes':counts,'oracle':'original pafet.bin x64 under Unicorn',
            'candidate':'compiled src/pafet_hexvm_core_xxvi.h',
            'limitations':['finite synthetic states','no Windows unwind','no complete virtual program',
                           'no final buffer comparison']}
    (ROOT/'jack_xxvi_evidence/differential.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))

if __name__=='__main__': main()
