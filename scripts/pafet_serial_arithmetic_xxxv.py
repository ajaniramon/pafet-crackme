"""Isolated arithmetic differential against the original four-instruction slice."""
import sys,json,hashlib,random
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];sys.path.insert(0,str(ROOT));sys.path.insert(0,str(ROOT/'scripts'))
import pefile,unicorn
from unicorn.x86_const import UC_X86_REG_RAX,UC_X86_REG_RBX,UC_X86_REG_EFLAGS
from devirt.serial_signextend import sign_extend_low
from pafet_state_contract import ORIGINAL_SHA256,require

def main():
    raw=(ROOT/'pafet.bin').read_bytes();require(hashlib.sha256(raw).hexdigest()==ORIGINAL_SHA256,'Wrong PE','integrity')
    pe=pefile.PE(data=raw);code=pe.get_data(0x1f36da,13)
    require(code.hex()=='b9400000002bcb48d3e048d3f8','Wrong shift slice','static-shape')
    uc=unicorn.Uc(unicorn.UC_ARCH_X86,unicorn.UC_MODE_64);uc.mem_map(0x100000,0x1000);uc.mem_write(0x100000,code)
    rng=random.Random(35);values=[0,1,0xffffffffffffffff,0x8000000000000000,0x7fffffffffffffff,0x80000000,0xffffffff,0x8000]+[rng.getrandbits(64) for _ in range(8)]
    checks=0
    for operand in range(256):
        for value in values:
            candidate=sign_extend_low(value,operand)
            uc.reg_write(UC_X86_REG_RAX,value);uc.reg_write(UC_X86_REG_RBX,operand&63);uc.reg_write(UC_X86_REG_EFLAGS,2)
            uc.emu_start(0x100000,0x100000+len(code));native=uc.reg_read(UC_X86_REG_RAX)
            require(candidate==native,'Sign-extension arithmetic differs','model',operand=operand,value=hex(value))
            checks+=1
    out=dict(status='PASS',cases=checks,operands=256,values_per_operand=len(values),original_sha256=ORIGINAL_SHA256,slice_rva='0x1f36da',slice_hex=code.hex(),scope='Synthetic isolated arithmetic, not natural Windows VM coverage. No native values enter the candidate.')
    (ROOT/'jack_xxxv_evidence/arithmetic.json').write_bytes((json.dumps(out,indent=2)+'\n').encode())
    print('PASS',checks,'isolated original-x64 arithmetic comparisons')
if __name__=='__main__':main()
