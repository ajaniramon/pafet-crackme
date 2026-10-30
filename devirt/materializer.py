"""Recheck the reused extractor against original x64 without changing XXIII evidence."""
import hashlib
import json
import pathlib
import struct
import pefile
from .uservm import ROOT, ORIGINAL_SHA256, lift
from pafet_materialize_xxiii import materialize, permute8, invoke
from pafet_semantic_probe import IsolatedPE, BASE


def main():
    pe_path=ROOT/'pafet.bin';assert hashlib.sha256(pe_path.read_bytes()).hexdigest()==ORIGINAL_SHA256
    pe=pefile.PE(str(pe_path));blob=pe.get_data(0x3e5020,1752);_,lifted=lift(pe_path)
    permutation=IsolatedPE(pe)
    for i in range(256):assert permute8(i)==permutation.call(BASE+0x2080,i)
    cases=[]
    for pattern,period,current in [('zero',0,0),('nonzero',0,0),('nonzero',24,17)]:
        native=IsolatedPE(pe);ctx=native.alloc(0x2000);buffer=native.alloc(1752)
        shadow_ptr=native.alloc(1752);bitmap=native.alloc(73)
        shadow=bytes(1752) if pattern=='zero' else bytes((i*37+11)&255 for i in range(1752))
        native.mu.mem_write(shadow_ptr,shadow)
        for offset,pointer in [(0x1b0,buffer),(0xa8,shadow_ptr),(0x140,bitmap)]:native.putq(ctx+offset,pointer)
        for offset,n in [(0x1b8,1752),(0x130,period),(0x12c,current)]:native.mu.mem_write(ctx+offset,struct.pack('<I',n))
        expected=bytearray(1752)
        for block in range(73):
            lo,data=materialize(blob,block,shadow,period=period,current=current)
            expected[lo:lo+len(data)]=data;invoke(native,ctx,block)
            actual=bytes(native.mu.mem_read(buffer,1752))
            assert actual==expected and native.q(ctx+0xcb8)==block+1
            assert bytes(native.mu.mem_read(bitmap+lo//24,1))==b'\1'
        if pattern=='zero':assert actual==lifted
        cases.append({'shadow':pattern,'period':period,'current':current,'blocks':73,
                      'all_1752_bytes_match_after_every_request':True,'counter_and_bitmap_match':True,
                      'sha256':hashlib.sha256(actual).hexdigest()})
    report={'all_checks_pass':True,'original_sha256':ORIGINAL_SHA256,'permutation_inputs':256,
            'native_materializer_calls':219,'cases':cases,
            'validation_source_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
            'scope':'Original x64 native materializer versus reused scalar extractor; default result equals devirtualizer input. Not complete VM-context initialization.'}
    (ROOT/'jack_xvii_evidence/materializer_validation.json').write_bytes(json.dumps(report,indent=2).encode()+b'\n')
    print('PASS: 256 permutation inputs; 219 native materializations; full buffer, counter and bitmap after every call')


if __name__=='__main__':main()
