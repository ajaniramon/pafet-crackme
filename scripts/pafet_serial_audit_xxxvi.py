"""Derive JACK XXXVI wrapper bindings from the original remap/handler tables.

Every family is located through the PE's per-domain remap and handler tables,
never from trace observations. Child-return tails are re-checked statically.
"""
import hashlib
import json
import pprint
import sys
import pefile
from capstone.x86_const import X86_OP_IMM, X86_OP_MEM
from pafet_audit_xxiv import cfg, BASE, ROOT
from pafet_state_contract import ORIGINAL_SHA256, require
sys.path.insert(0, str(ROOT))
from devirt.serial_regions_xxxv import REGIONS

OUT = ROOT / 'jack_xxxvi_evidence'
# opcode, first semantic helper (ends the noise prefix), core helper, label
FAMILIES = [(22, 0x1ee940, 0x1ee820, 'cmplt'), (27, 0x1f1c70, 0x1f0db0, 'branchz'),
            (8, 0x1ee940, 0x1ee820, 'add'), (21, 0x1ee940, 0x1ee820, 'cmpne'), (24, 0x1ee940, 0x1ee820, 'cmpgt'),
            (28, 0x1f1c70, 0x1f0db0, 'branchnz'), (44, 0x1ee940, 0x1ee820, 'not'),
            (59, 0x1f1e80, 0x1ee820, 'zeroextend'), (30, None, None, 'halt')]
HELPERS = (0x1ed730, 0x1f0e60, 0x1ed270, 0x1f10a0, 0x1f1c70, 0x1ee940, 0x1ee820)


def binding(pe, opcode, domain):
    remap = int.from_bytes(pe.get_data(0x3e95a0+8*domain, 8), 'little')-BASE
    table = int.from_bytes(pe.get_data(0x3e2340+8*domain, 8), 'little')-BASE
    slot = int.from_bytes(pe.get_data(remap+2*opcode, 2), 'little')
    return int.from_bytes(pe.get_data(table+8*slot, 8), 'little')-BASE


def wrapper_spec(pe, opcode, domain, reader_rva, core_rva):
    entry = binding(pe, opcode, domain)
    instructions, info = cfg(pe, BASE + entry)
    seq = sorted(instructions.values(), key=lambda i: i.address)
    if reader_rva is None:  # HALT: no helper; the prefix ends at the control-3 tag write
        reader = next(i for i in seq if i.mnemonic == 'mov' and i.op_str.startswith('byte ptr [r14 + 0x163]'))
    else:
        reader = next(i for i in seq if i.mnemonic == 'call' and i.operands[0].type == X86_OP_IMM and i.operands[0].imm == BASE + reader_rva)
    prefix = [i for i in seq if i.address < reader.address]
    if domain == 0:
        constant = next(i for i in reversed(prefix) if i.mnemonic == 'movabs' and i.operands[1].imm & ((1 << 64) - 1) not in (0xff51afd7ed558ccd, 0xc4ceb9fe1a85ec53))
    else:
        constant = next(i for i in reversed(prefix) if i.mnemonic == 'movabs' and i.reg_name(i.operands[0].reg) == 'rcx')
    noise = next(o.mem.disp for i in prefix for o in i.operands if o.type == X86_OP_MEM and i.reg_name(o.mem.base) in ('r14', 'rbx') and 0x2e0 <= o.mem.disp <= 0x2f8)
    feedback = next(i for i in seq if i.mnemonic == 'call' and i.op_str == '0x1401f1520')
    marker = next(i for i in reversed(seq[:seq.index(feedback)]) if i.mnemonic == 'mov' and i.op_str.startswith('r8d, 0x'))
    materializer = min(c['site'] for c in info['calls'] if c['target'] == BASE + 0x1f25b0)
    decoder = max(c['site'] for c in info['calls'] if c['target'] == BASE + 0x1ee070 and c['site'] < materializer)
    if core_rva is None:
        store = next(i for i in seq if i.mnemonic == 'mov' and i.op_str.startswith('qword ptr [r14 + 0x140]'))
        core = store.address + store.size
    else:
        core = next(c['site'] + 5 for c in info['calls'] if c['target'] == BASE + core_rva)
    exit_label = next(i for i in reversed(seq) if core < i.address < decoder and i.mnemonic == 'add' and i.op_str.startswith('rax, 0x'))
    spec = dict(opcode=opcode, domain=domain, noise_offset=noise, noise_constant_rva=constant.address-BASE+constant.imm_offset,
                marker_rva=marker.address-BASE+marker.imm_offset, core_end=core-BASE, decode_entry=decoder-BASE,
                exit_label_rva=exit_label.address-BASE+exit_label.imm_offset, return_rva=next(i.address-BASE for i in seq if i.mnemonic == 'ret'))
    spec['noise_subtract'] = any(i.mnemonic == 'sub' and i.op_str == 'rax, rcx' for i in prefix)
    return entry, spec, seq


def unwind_tail(pe, entry, spec):
    instructions, info = cfg(pe, BASE + entry)
    seq = sorted(instructions.values(), key=lambda i: i.address)
    budget_label = next(i for i in seq if spec['core_end'] < i.address-BASE < spec['decode_entry'] and i.mnemonic == 'add' and i.op_str.startswith('rax, 0x'))
    spec['budget_label_rva'] = budget_label.address-BASE+budget_label.imm_offset
    call = next(i for i in seq if i.mnemonic == 'call' and i.op_str == 'r9')
    pc = call.address + call.size
    tail = []
    while True:
        i = instructions[pc]
        tail.append(dict(rva=hex(pc-BASE), instruction=i.mnemonic+' '+i.op_str))
        if i.mnemonic == 'ret':
            break
        if i.mnemonic == 'jmp':
            require(i.operands[0].type == X86_OP_IMM, 'Indirect unwind', 'static-shape')
            pc = i.operands[0].imm
            continue
        safe = (i.mnemonic == 'mov' and i.operands[0].type != X86_OP_MEM and i.operands[1].type == X86_OP_MEM and i.reg_name(i.operands[1].mem.base) == 'rsp') or (i.mnemonic == 'xor' and i.op_str == 'rcx, rsp') or (i.mnemonic == 'call' and i.op_str == '0x1403a3dc0') or i.mnemonic == 'pop' or (i.mnemonic == 'add' and i.op_str.startswith('rsp, '))
        require(safe, 'Unmodeled effect after threaded child call', 'static-shape', rva=hex(pc-BASE))
        pc += i.size
    spec['unwind_tail'] = tail


def main():
    raw = (ROOT / 'pafet.bin').read_bytes()
    require(hashlib.sha256(raw).hexdigest() == ORIGINAL_SHA256, 'Wrong original PE', 'integrity')
    pe = pefile.PE(data=raw)
    regions = {k: dict(v) for k, v in REGIONS.items()}
    new = []
    for opcode, reader, core, label in FAMILIES:
        for domain in range(4):
            entry, spec, seq = wrapper_spec(pe, opcode, domain, reader, core)
            require(entry not in regions, 'Binding collides with an earlier family', 'static-shape', entry=hex(entry))
            unwind_tail(pe, entry, spec)
            regions[entry] = spec
            new.append(entry)
            (OUT / f'{label}_{entry:x}.asm').write_bytes(('\n'.join(f'{i.address-BASE:06x} {i.mnemonic:8} {i.op_str}' for i in seq)+'\n').encode())
    (ROOT / 'devirt/serial_regions_xxxvi.py').write_bytes(('"""Original-PE bindings through JACK XXXVI; generated by scripts/pafet_serial_audit_xxxvi.py."""\nREGIONS = '+pprint.pformat(regions, width=110, sort_dicts=False)+'\n').encode())
    (OUT / 'native_regions.json').write_bytes(json.dumps({hex(k): v for k, v in regions.items() if k in new}, indent=2).encode()+b'\n')
    for rva in HELPERS:
        ins, _ = cfg(pe, BASE+rva)
        (OUT/f'helper_{rva:x}.asm').write_bytes(('\n'.join(f'{i.address-BASE:06x} {i.mnemonic:8} {i.op_str}' for i in sorted(ins.values(), key=lambda i: i.address))+'\n').encode())
    print('PASS:', len(new), 'new static bindings;', len(regions), 'total; child-return tails checked')


if __name__ == '__main__':
    main()
