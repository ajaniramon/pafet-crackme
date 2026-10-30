"""Reproduce static native-ALU decryption and all-input XOR proof (offline Z3)."""
import sys,json,hashlib
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT));sys.path.insert(0,str(ROOT/'jack_xxxii_evidence/build/deps'))
import pefile,z3
from devirt.serial_alu import decode,evaluate
from pafet_state_contract import require,ORIGINAL_SHA256

def main():
    raw=(ROOT/'pafet.bin').read_bytes();require(hashlib.sha256(raw).hexdigest()==ORIGINAL_SHA256,'Wrong PE','integrity')
    p=pefile.PE(data=raw);a,b,m=z3.BitVecs('a b mask',64);proofs=[]
    for program in (6,11):
        solver=z3.Solver();solver.add(evaluate(p,program,a,b)!=(a^b))
        result=str(solver.check());require(result=='unsat','ALU identity not proved','static-proof')
        proofs.append(dict(program=program,result=result,property='output == a XOR b for all uint64 a,b'))
    solver=z3.Solver();solver.add(((a^m)^(b^m))!=(a^b));result=str(solver.check())
    require(result=='unsat','Shared mask identity not proved','static-proof')
    proofs.append(dict(property='shared mask cancels for all uint64 a,b,mask',result=result))
    table=p.get_data(0x3edc08,8);require(table[2]==6 and table[6]==11,'Unknown XOR selector binding','static-shape')
    report=dict(programs={k:decode(p,k) for k in range(12)},proofs=proofs,selector_table_rva='0x3edc08',selector_bytes=table.hex(),source='original PE tables; static semantic reconstruction, not native dynamic coverage',original_sha256=ORIGINAL_SHA256,z3_version=z3.get_full_version())
    (ROOT/'jack_xxxiii_evidence/alu_static_proof.json').write_bytes((json.dumps(report,indent=2)+'\n').encode())
    print('PASS: 12 decoded microprograms; both selector-2 variants prove XOR for all input words')
if __name__=='__main__':main()
