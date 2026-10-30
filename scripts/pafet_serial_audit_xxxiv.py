"""Derive PC20 deferred-branch wrapper bindings and verify context-free threaded unwind tails."""
import hashlib
import json
import pprint
import sys
import pefile
from capstone.x86_const import X86_OP_IMM, X86_OP_MEM
from pafet_audit_xxiv import cfg, BASE, ROOT
from pafet_state_contract import ORIGINAL_SHA256, require
sys.path.insert(0, str(ROOT))
from devirt.serial_regions_xxxiii import REGIONS

OUT = ROOT / 'jack_xxxiv_evidence'
OPCODE = 26


def main():
    raw = (ROOT / 'pafet.bin').read_bytes()
    require(hashlib.sha256(raw).hexdigest() == ORIGINAL_SHA256, 'Wrong original PE', 'integrity')
    pe = pefile.PE(data=raw)
    regions = {k: dict(v) for k, v in REGIONS.items()}
    for domain in range(4):
        remap = int.from_bytes(pe.get_data(0x3e95a0+8*domain,8),'little')-BASE
        table = int.from_bytes(pe.get_data(0x3e2340+8*domain,8),'little')-BASE
        slot = int.from_bytes(pe.get_data(remap+2*OPCODE,2),'little')
        entry = int.from_bytes(pe.get_data(table+8*slot,8),'little')-BASE
        instructions, info = cfg(pe, BASE + entry)
        seq = sorted(instructions.values(), key=lambda i: i.address)
        reader = next(i for i in seq if i.mnemonic == 'call' and i.operands[0].type == X86_OP_IMM and i.operands[0].imm == BASE + 0x1f1c70)
        prefix = [i for i in seq if i.address < reader.address]
        if domain == 0:
            constant = next(i for i in reversed(prefix) if i.mnemonic == 'movabs' and i.operands[1].imm & ((1 << 64) - 1) not in (0xff51afd7ed558ccd, 0xc4ceb9fe1a85ec53))
        else:
            constant = next(i for i in reversed(prefix) if i.mnemonic == 'movabs' and i.reg_name(i.operands[0].reg) == 'rcx')
        noise = next(o.mem.disp for i in prefix for o in i.operands if o.type == X86_OP_MEM and i.reg_name(o.mem.base) == 'r14' and 0x2e0 <= o.mem.disp <= 0x2f8)
        feedback = next(i for i in seq if i.mnemonic == 'call' and i.op_str == '0x1401f1520')
        marker = next(i for i in reversed(seq[:seq.index(feedback)]) if i.mnemonic == 'mov' and i.op_str.startswith('r8d, 0x'))
        materializer = min(c['site'] for c in info['calls'] if c['target'] == BASE + 0x1f25b0)
        decoder = max(c['site'] for c in info['calls'] if c['target'] == BASE + 0x1ee070 and c['site'] < materializer)
        core = next(c['site'] + 5 for c in info['calls'] if c['target'] == BASE + 0x1f0db0)
        exit_label = next(i for i in reversed(seq) if core < i.address < decoder and i.mnemonic == 'add' and i.op_str.startswith('rax, 0x'))
        regions[entry] = dict(opcode=OPCODE, domain=domain, noise_offset=noise, noise_constant_rva=constant.address-BASE+constant.imm_offset, marker_rva=marker.address-BASE+marker.imm_offset, core_end=core-BASE, decode_entry=decoder-BASE, exit_label_rva=exit_label.address-BASE+exit_label.imm_offset, return_rva=next(i.address-BASE for i in seq if i.mnemonic=='ret'))
        (OUT / f'branch_{entry:x}.asm').write_bytes(('\n'.join(f'{i.address-BASE:06x} {i.mnemonic:8} {i.op_str}' for i in seq)+'\n').encode())
    for entry, spec in regions.items():
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
            if i.mnemonic == 'ret': break
            if i.mnemonic == 'jmp':
                require(i.operands[0].type == X86_OP_IMM, 'Indirect unwind', 'static-shape')
                pc = i.operands[0].imm
                continue
            safe = (i.mnemonic == 'mov' and i.operands[0].type != X86_OP_MEM and i.operands[1].type == X86_OP_MEM and i.reg_name(i.operands[1].mem.base) == 'rsp') or i.mnemonic == 'pop' or (i.mnemonic == 'add' and i.op_str.startswith('rsp, '))
            require(safe, 'Unmodeled effect after threaded child call', 'static-shape', rva=hex(pc-BASE))
            pc += i.size
        spec['unwind_tail'] = tail
    (ROOT / 'devirt/serial_regions_xxxiv.py').write_bytes(('"""Original-PE static bindings and proved context-free unwind tails."""\nREGIONS = '+pprint.pformat(regions, width=110, sort_dicts=False)+'\n').encode())
    (OUT / 'native_regions.json').write_bytes(json.dumps({hex(k):v for k,v in regions.items()},indent=2).encode()+b'\n')
    for rva in (0x1ed270,0x1f10a0,0x1f0f80,0x1f1000,0x1f1c70,0x1f25b0,0x1f1fe0,0x1f0660,0x1f05c0,0x1f0410,0x1f0290):
        ins,_=cfg(pe,BASE+rva)
        (OUT/f'helper_{rva:x}.asm').write_bytes(('\n'.join(f'{i.address-BASE:06x} {i.mnemonic:8} {i.op_str}' for i in sorted(ins.values(),key=lambda i:i.address))+'\n').encode())
    import capstone
    md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    seq=list(md.disasm(pe.get_data(0x2300de,0x1dd),BASE+0x2300de))
    (OUT/'armed_gate.asm').write_bytes(('\n'.join(f'{i.address-BASE:06x} {i.mnemonic:8} {i.op_str}' for i in seq)+'\n').encode())
    print('PASS: 20 static bindings; all child-return tails preserve virtual memory')


if __name__ == '__main__': main()
