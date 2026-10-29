#!/usr/bin/env python3
"""MSVC portable CPU arithmetic vs independent x64 instruction execution."""
import hashlib,json,random,subprocess
import unicorn
from unicorn.x86_const import *
from pafet_hexvm_literal_diff_xxvi import ROOT,OUT,BUILD
def main():
    subprocess.run(['python',str(ROOT/'scripts/pafet_hexvm_build_msvc_xxvi.py'),'--wide'],check=True)
    code=['48f7eb','48f7e3','48f7f3','48f7fb','480fafc3','4801d8','4829d8','0fafc3']
    rng=random.Random(0x26c0de);requests=[];expected=[]
    edges=[0,1,(1<<64)-1,1<<63,(1<<63)-1,0xffffffff,0x80000000]
    for op,encoded in enumerate(code):
        values=[(a,b) for a in edges for b in edges]+[(rng.getrandbits(64),rng.getrandbits(64)) for _ in range(79)]
        for trial,(a,b) in enumerate(values):
            uc=unicorn.Uc(unicorn.UC_ARCH_X86,unicorn.UC_MODE_64);uc.mem_map(0x10000000,4096)
            hi=((1<<64)-1 if a>>63 else 0) if op==3 and trial&1 else rng.getrandbits(64)
            if op==2 and trial&1:hi=hi%b if b else 0
            uc.mem_write(0x10000000,bytes.fromhex(encoded))
            for reg,value in [(UC_X86_REG_RAX,a),(UC_X86_REG_RBX,b),(UC_X86_REG_RDX,hi),(UC_X86_REG_EFLAGS,2)]:uc.reg_write(reg,value)
            status=0
            try:uc.emu_start(0x10000000,0x10000000+len(encoded)//2,count=1)
            except unicorn.UcError:status=4
            if not status:assert uc.reg_read(UC_X86_REG_RIP)==0x10000000+len(encoded)//2
            expected.append([status,uc.reg_read(UC_X86_REG_RAX),uc.reg_read(UC_X86_REG_RDX),uc.reg_read(UC_X86_REG_EFLAGS)])
            requests.append([op,a,b,hi])
    exe=BUILD/'hexvm_wide_probe.exe'
    result=subprocess.run([str(exe)],input=''.join(' '.join(format(x,'x') for x in r)+'\n' for r in requests),text=True,capture_output=True,check=True)
    rows=result.stdout.splitlines();assert len(rows)==len(expected)
    for i,(line,want) in enumerate(zip(rows,expected)):
        got=[int(x,16) for x in line.split()]
        assert got[:3]==want[:3],(i,requests[i],got,want)
        if not want[0]:assert (got[3]^want[3])&got[4]&0x8d5==0,(i,'defined flags',got,want)
    report={'seed':0x26c0de,'passes':len(rows),'cases_per_operation':128,'operations':code,
            'executable_sha256':hashlib.sha256(exe.read_bytes()).hexdigest(),
            'oracle':'independent x64 instructions under Unicorn','candidate':'MSVC CPU runtime, _mul128/_umul128/_udiv128',
            'scope':'signed/unsigned wide multiply/divide, overflow faults, 32-bit multiply, carry/overflow/arithmetic flags'}
    (OUT/'wide_arithmetic_differential.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':main()
