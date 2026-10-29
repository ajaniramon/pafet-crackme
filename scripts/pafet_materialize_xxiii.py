#!/usr/bin/env python3
"""Scalar transcription of 0x140007610, including the final XOR and tail.

The 24-byte unit is a materialization/cache unit, not an ISA instruction.
Pure extraction reads only original PE data, never a captured plaintext.
"""
import hashlib
import json
import pathlib
import struct
import pefile
from unicorn.x86_const import UC_X86_REG_RSP, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_RIP
from decode_user_blob_vi import SEEDS_PERMUTE
from pafet_semantic_probe import IsolatedPE, BASE

ROOT = pathlib.Path(__file__).resolve().parents[1]
MASK = (1 << 64)-1
PHI = 0x9e3779b97f4a7c15
SPLIT = 0x2545f4914f6cdd1d
MUL = 0xd6e8feb86659fd93
M1 = 0xff51afd7ed558ccd
M2 = 0xc4ceb9fe1a85ec53

def mid(x):
    x &= MASK
    x = ((x ^ (x >> 33))*M1) & MASK
    return ((x ^ (x >> 33))*M2) & MASK

def mix(x):
    x = mid(x)
    return x ^ (x >> 33)

def permute8(x):
    left, right = (x >> 4) & 15, x & 15
    for seed in SEEDS_PERMUTE:
        x = mid(((right*MUL)&MASK) ^ seed)
        left, right = right, (left ^ (x >> 17) ^ (x >> 50)) & 15
    # 0x140002194 shifts round-three right (the final left) into the high nibble.
    return (left << 4) | right

def block_starts():
    result = [0]
    for i in range(1,73):
        value = i-1
        for _ in range(64):
            value = permute8(value)
            if value < 72:
                break
        else:
            value = i-1
        result.append((value+1)*24)
    assert sorted(result)==list(range(0,1752,24))
    return result

def materialize(blob, block, shadow=None, size=1752, period=0, current=0):
    assert 0 <= block < 73
    start = block_starts()[block]
    lo, hi = min(start, size), min(start+24, size)
    out = bytearray(blob[lo:hi])
    shadow = bytes(size) if shadow is None else shadow
    r12 = (block*MUL) & MASK
    for turn in range(3):
        a = mid(((start*PHI)&MASK) ^ r12 ^ 0xdc5ea5a85eb4aabd)
        for pos in range(lo, hi):
            b = ((pos*PHI)&MASK) ^ (a >> 33) ^ (a & 0xffffffff)
            b ^= (turn*SPLIT)&MASK
            b ^= r12 ^ 0xdc5ea5a84cb9a2c4
            c = mid(b)
            out[pos-lo] ^= ((c >> 24) ^ (c >> 57)) & 255
    a = (block*PHI)&MASK
    a = (((a ^ (a >> 33) ^ 0x424c4b31)*M1)&MASK)
    a = (((a ^ (a >> 33))*M2)&MASK)
    seed = a ^ (a >> 33)
    state = mix(seed ^ 0xdc5ea5a85fb0a0c6) or PHI
    seed ^= 0xdc5ea5a81cf8e18f
    for j in range(hi-lo):
        x = (((j*0xac01e240057269a7)+seed)&MASK) ^ 0xffcb3f872961faff
        x = (x*0x2001)&MASK
        x ^= x >> 7
        x = (x*9)&MASK
        x ^= x >> 17
        x = (x+0x54be8275f1e8ba97)&MASK
        out[j] ^= ((x >> 40) ^ (x >> 24) ^ (state >> 29) ^ x ^ 0xaa)&255
        x = (((out[j]^state)*0xac01e240057269a7)+0x54be8275f1e8ba97)&MASK
        state = x ^ (x >> 31)
    for pos in range(lo, hi):
        out[pos-lo] ^= shadow[pos]
        if period and pos//period not in (current, (current+1)&0xffffffff):
            x = mix(((pos//period)*PHI) ^ 0xdc5ea5a84fbda6c2)
            out[pos-lo] ^= (x ^ (x >> 16) ^ (x >> 8)) & 255
    return lo, bytes(out)

def extract(pe):
    blob = pe.get_data(0x3e5020, 1752)
    out = bytearray(1752)
    for i in range(73):
        lo, data = materialize(blob, i)
        out[lo:lo+len(data)] = data
    return bytes(out)

def invoke(native, ctx, index):
    sp=native.stack+0x1f008
    native.putq(sp,native.stop)
    for reg,value in [(UC_X86_REG_RSP,sp),(UC_X86_REG_RCX,ctx),(UC_X86_REG_RDX,0),(UC_X86_REG_R8,index)]:
        native.mu.reg_write(reg,value)
    native.mu.emu_start(BASE+0x7610,native.stop,count=2000000)
    assert native.mu.reg_read(UC_X86_REG_RIP)==native.stop, (index,hex(native.mu.reg_read(UC_X86_REG_RIP)))

def main():
    pe = pefile.PE(str(ROOT/'pafet.bin'))
    assert hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest() == 'fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'
    blob = pe.get_data(0x3e5020, 1752)
    results = []
    permutation_native = IsolatedPE(pe)
    for i in range(256):
        assert permute8(i)==permutation_native.call(BASE+0x2080,i), i
    # Include nonzero shadow and the optional protected-window masking branch.
    for pattern, period, current in [('zero',0,0),('nonzero',0,0),('nonzero',24,17)]:
        native = IsolatedPE(pe)
        ctx = native.alloc(0x2000)
        buf = native.alloc(1752)
        shadow_ptr = native.alloc(1752)
        bitmap = native.alloc(73)
        shadow = bytes(1752) if pattern=='zero' else bytes((i*37+11)&255 for i in range(1752))
        native.mu.mem_write(shadow_ptr, shadow)
        native.putq(ctx+0x1b0,buf)
        native.putq(ctx+0xa8,shadow_ptr)
        native.putq(ctx+0x140,bitmap)
        native.mu.mem_write(ctx+0x1b8,struct.pack('<I',1752))
        native.mu.mem_write(ctx+0x130,struct.pack('<I',period))
        native.mu.mem_write(ctx+0x12c,struct.pack('<I',current))
        expected = bytearray(1752)
        for i in range(73):
            lo, data = materialize(blob,i,shadow,period=period,current=current)
            expected[lo:lo+len(data)] = data
            invoke(native,ctx,i)
            actual = bytes(native.mu.mem_read(buf,1752))
            assert actual==expected, (pattern,period,i,next((j for j,(a,b) in enumerate(zip(actual,expected)) if a!=b),None))
            assert native.q(ctx+0xcb8)==i+1
            assert bytes(native.mu.mem_read(bitmap+lo//24,1))==b'\1'
        results.append({'shadow':pattern,'period':period,'current':current,'blocks':73,
            'all_1752_bytes_match_after_every_call':True,'materialization_counter':73,
            'sha256':hashlib.sha256(actual).hexdigest()})
        print(pattern,period,'73/73 byte-exact',results[-1]['sha256'],flush=True)
    out = ROOT/'jack_xxiii_evidence'
    out.mkdir(exist_ok=True)
    canonical = extract(pe)
    (out/'bytecode_1752.bin').write_bytes(canonical)
    old = (ROOT/'vm_pools_evidence/user_bytecode_canonical_vi.bin').read_bytes()
    report={'original_blob_va':'0x1403e5020','bytes':1752,'blocks':73,
        'permute8_native_cases':256,
        'extraction_uses_trace_plaintext':False,'canonical_sha256':hashlib.sha256(canonical).hexdigest(),
        'old_canonical_sha256':hashlib.sha256(old).hexdigest(),
        'old_canonical_byte_matches':sum(a==b for a,b in zip(canonical,old)),
        'results':results,'final_block_hex':canonical[72*24:].hex(),
        'block28_hex':canonical[28*24:29*24].hex(),'block54_hex':canonical[54*24:55*24].hex()}
    (out/'materializer_differential.json').write_text(json.dumps(report,indent=2)+'\n')

if __name__=='__main__':
    main()
