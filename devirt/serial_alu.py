"""Decode the original PE's small native-ALU programs (RVA 1ed310).

This is a four-register semantic ISA, not an x64 interpreter. Checksums are
verified before evaluation; unsupported programs/operations fail explicitly.
"""
from .serial import MASK, PHI, mix


def hash32(x):
    x &= 0xffffffff
    x ^= x >> 15
    x = x * 0xc2b2ae35 & 0xffffffff
    x ^= x >> 13
    x = x * 0x27d4eb2f & 0xffffffff
    return x ^ (x >> 16)


def evolve(x):
    x = x * PHI & MASK
    x ^= x >> 29
    return x * 0xbf58476d1ce4e5b9 & MASK


def fold(x):
    return (x ^ (x >> 32)) & 0xffffffff


def decode(pe, program):
    if not 0 <= program < 12:
        raise ValueError('Unknown native ALU program')
    def u(at):
        raw = pe.get_data(at, 4)
        if len(raw) != 4:
            raise ValueError('Missing native ALU table')
        return int.from_bytes(raw, 'little')
    count, start = u(0x3dfbc0+4*program), u(0x3dfbf0+4*program)
    if count > 64:
        raise ValueError('Unknown native ALU length')
    seed = (((program+1)*PHI)&MASK) ^ 0xdf6f3425862e2f08
    out = []
    for j in range(count):
        index = start+4*j
        word = u(0x3e33a0+index*4) ^ hash32(index*0x9e3779b1-(seed>>32)*0x7a143595-0x26ac0d28+(seed&0xffffffff))
        seed = fold(evolve(word ^ seed))
        t = (index*0x9e3779b1+seed) & 0xffffffff
        words = [u(0x3e33a0+4*(index+k)) ^ hash32(t+salt)
                 for k,salt in ((1,0x778b6c89),(2,0x15c2e63a),(3,-0x4c05a015))]
        b,c,d = words
        if fold(evolve(c ^ b ^ seed)) != d:
            raise ValueError('Native ALU record checksum mismatch')
        seed = fold(evolve(fold(evolve(d ^ seed)) ^ c))
        opcode = (((word>>2)&0x3000)|(b&0xc000))>>12
        if opcode > 10:
            raise ValueError('Unknown native ALU operation')
        out.append(dict(opcode=opcode, dst=word&3, src=(word>>2)&3,
                        program=(b>>16)&15, encrypted_word_index=index))
    return out


def evaluate(pe, program, a, b, depth=0):
    r = [a, b, 0, 0]
    for i in decode(pe, program):
        op,d,s = i['opcode'],i['dst'],i['src']
        if op == 0: value = r[0]
        elif op == 1: value = r[1]
        elif op == 2: value = r[s]
        elif op == 3: value = r[d]+r[s]
        elif op == 4: value = r[d]-r[s]
        elif op == 5: value = r[d]^r[s]
        elif op == 6: value = r[d]&r[s]
        elif op == 7: value = r[d]|r[s]
        elif op == 8: value = ~r[d]
        elif op == 9: value = r[d]<<1
        elif op == 10:
            value = evaluate(pe,i['program'],r[0],r[1],depth+1) if depth<4 else 0
        r[d] = value & MASK
    return r[3]


def xor_variant(pe, left, right, token):
    mask = mix(((2*PHI)&MASK) ^ token)
    a,b = mask ^ left,mask ^ right
    slot = 2+4*((((a>>1)^b)>>2)&1)
    program = pe.get_data(0x3edc08+slot,1)[0]
    return evaluate(pe,program,a,b)


def add_variant(pe, left, right, token):
    """RVA 1ed730 selector 0: masked operands, then a table-chosen program."""
    mask = mix(token)
    a,b = (mask + left) & MASK,(right - mask) & MASK
    slot = 4*(((a>>3)^(b>>2))&1)
    program = pe.get_data(0x3edc08+slot,1)[0]
    return evaluate(pe,program,a,b)
