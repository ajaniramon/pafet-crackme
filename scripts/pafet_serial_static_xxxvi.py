#!/usr/bin/env python3
"""Static recursive-descent decode of Serial-VM bytecode (JACK XXXVI).

Logical bytes come from one captured before-state processed with the
candidate's own recovered materializer (1f1fe0) and window functions
(1f0660/1f05c0) on a scratch copy; no x64 engine and no trace input. Opcode
bytes use the decoder's header path, (bytecode ^ shadow ^ 0xdd) -> table
3ecf00 ^ 0x63; mutate_byte toggles both buffers, so this is mutation-invariant.
Operands use the PC-keyed U8/U16/U32 reader formulas.

Instruction lengths and successors exist only for opcodes whose semantics are
recovered. Any other opcode is a static frontier: no length, no successor.
"""
import argparse
import gzip
import json
import pathlib
import struct
import sys
import pefile

ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT)); sys.path.insert(0, str(ROOT/'scripts'))
from devirt.serial_loop import LoopSerialVMState, HANDLERS
from devirt.serial import starts

# opcode: (mnemonic, operand layout, control kind)
ISA = {1: ('PUSH_POOL_U32', 'u32', 'next'), 4: ('LOAD_REG_U16', 'u16', 'next'), 5: ('STORE_REG_U16', 'u16', 'next'),
       8: ('ADD_U64', '', 'next'), 21: ('CMP_NE_U64', '', 'next'), 22: ('CMP_LT_S64', '', 'next'),
       24: ('CMP_GT_S64', '', 'next'), 26: ('REQUEST_BRANCH_UNIT_U32', 'u32', 'jump'),
       27: ('BRANCH_IF_ZERO_UNIT_U32', 'u32', 'cond'), 28: ('BRANCH_IF_NONZERO_UNIT_U32', 'u32', 'cond'),
       31: ('DROP_U64', '', 'next'), 32: ('HOST_CALL_U16_U8', 'u16u8', 'next'), 41: ('XOR_U64', '', 'next'),
       44: ('NOT_U64', '', 'next'), 58: ('SIGN_EXTEND_LOW_U8', 'u8', 'next'),
       59: ('ZERO_EXTEND_LOW_U8', 'u8', 'next'), 30: ('HALT', '', 'halt')}
SIZE = {'': 0, 'u8': 1, 'u16': 2, 'u32': 4, 'u16u8': 3}


class StaticDecoder:
    def __init__(self, entry):
        self.s = LoopSerialVMState.from_initial_capture(entry, pefile.PE(str(ROOT/'pafet.bin')))
        self.size = self.s.u(0x1d8, 4)

    def logical(self, lo, hi):
        """Bytes [lo,hi] as the reader sees them after window preparation."""
        s = self.s
        s.prepare_opcode_byte(lo)
        if hi // 26 != lo // 26: s.prepare_opcode_byte(hi)
        s.ensure_cached_window(lo, hi)
        return s.read(s.u(0x1d0)+lo, hi-lo+1)

    def opcode(self, pc):
        s = self.s
        b = self.logical(pc, pc)[0] ^ s.read(s.u(0x48)+pc, 1)[0]
        return s.pe.get_data(0x3ecf00+(b ^ 0xdd), 1)[0] ^ 0x63

    def u32(self, pc):
        b = self.logical(pc, pc+3)
        packed = (b[1] << 24) | (b[3] << 16) | (b[0] << 8) | b[2]
        h = pc*0x84e97925 & 0xffffffff
        return ((h ^ (h >> 13) ^ packed ^ 0xba1c4fa3)*0x77167b7b) & 0xffffffff

    def u16(self, pc):
        word = int.from_bytes(self.logical(pc, pc+1), 'little'); h = (pc*0x84e97925) & 0xffffffff
        return ((word ^ ((h ^ 0x09f46000) >> 13) ^ h)*0xffff8c3d) & 0xffff

    def u8(self, pc): return self.logical(pc, pc)[0] ^ 0x80

    def pool(self, selector):
        pe = self.s.pe; index = selector if selector < 17 else 0
        slot = struct.unpack('<17I', pe.get_data(0x3ead00, 68))[index]
        a = int.from_bytes(pe.get_data(0x3eae40+8*slot, 8), 'little'); b = int.from_bytes(pe.get_data(0x3ead80+8*slot, 8), 'little')
        return (a ^ b) if slot % 3 == 0 else (a+b) & (2**64-1) if slot % 3 == 1 else (a-b) & (2**64-1)

    def decode(self, pc):
        if not 0 <= pc < self.size: return dict(pc=pc, kind='out_of_range')
        op = self.opcode(pc)
        if op not in ISA: return dict(pc=pc, opcode=op, kind='unknown_opcode')
        name, layout, kind = ISA[op]; n = 1 + SIZE[layout]
        if pc + n > self.size: return dict(pc=pc, opcode=op, kind='operand_out_of_range')
        node = dict(pc=pc, opcode=op, mnemonic=name, length=n, kind=kind)
        if layout == 'u32':
            v = self.u32(pc+1); node['operand'] = v
            if op == 1: node['value'] = self.pool(v)
            else:
                if v >= 103: node['kind'] = 'invalid_unit'; return node
                node['target'] = starts()[v]
        elif layout == 'u16': node['operand'] = self.u16(pc+1); node['register'] = node['operand'] & 255
        elif layout == 'u8': node['operand'] = self.u8(pc+1)
        elif layout == 'u16u8': node['function'] = self.u16(pc+1); node['argc'] = min(self.u8(pc+3), 32)
        succ = []
        if kind in ('next', 'cond'): succ.append(pc+n)
        if kind in ('jump', 'cond'): succ.append(node['target'])
        node['successors'] = succ
        return node


def sweep(entry, start=0):
    d = StaticDecoder(entry); nodes = {}; work = [start]
    while work:
        pc = work.pop()
        if pc in nodes: continue
        node = d.decode(pc); nodes[pc] = node
        for t in node.get('successors', []): work.append(t)
    return nodes


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--entry', default='jack_xxxv_evidence/captures/seventeen_b/frame_00.entry.json.gz')
    ap.add_argument('--output', default='jack_xxxvi_evidence/static_sweep.json')
    args = ap.parse_args()
    entry = json.loads(gzip.decompress((ROOT/args.entry).read_bytes()))
    nodes = sweep(entry)
    out = dict(entry=args.entry, nodes=[nodes[k] for k in sorted(nodes)])
    (ROOT/args.output).write_text(json.dumps(out, indent=1)+'\n')
    kinds = {}
    for n in nodes.values(): kinds[n['kind']] = kinds.get(n['kind'], 0)+1
    print(len(nodes), 'static nodes', kinds)
    for n in sorted(nodes.values(), key=lambda n: n['pc']):
        if n['kind'] in ('unknown_opcode', 'out_of_range', 'invalid_unit', 'operand_out_of_range'): print(' frontier', n)


if __name__ == '__main__': main()
