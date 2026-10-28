#!/usr/bin/env python3
"""Static analysis of 35 user-VM native handlers.
For each: find PC writes, operand reader calls, pool-reader calls, branches,
ctx reads/writes outside shadow area."""
import pefile, capstone, json
from collections import defaultdict

pe = pefile.PE('pafet.bin', fast_load=True)
IMG = 0x140000000
text = next(s for s in pe.sections if s.Name.rstrip(b'\x00')==b'.text')
text_va = IMG + text.VirtualAddress
tdata = text.get_data()
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
md.detail = True

POOL_READER = 0x140048e10
PERMUTE8    = 0x140048ac0
PERMUTE8INV = 0x140048c20
SHADOW_UPD  = 0x140049330
OPREADER    = 0x1400074d0
PCREADER    = 0x1400071e0
RESOLVER    = 0x14003ebb0

cat = json.load(open('vm_pools_evidence/usuario_vm_handler_catalog.json'))
handlers = cat['handlers']
print(f'Loaded {len(handlers)} handlers')

def analyze_handler(va, size_hint):
    off = va - text_va
    end_off = off + size_hint + 32
    chunk = tdata[off:end_off] if end_off <= len(tdata) else tdata[off:]
    features = {
        'size_bytes': 0, 'num_insns': 0,
        'calls': [], 'cond_branches': 0, 'uncond_branches_internal': 0,
        'rcx_mem_writes': [], 'rcx_mem_reads': [],
        'reads_pc_field': False, 'writes_pc_field': False,
        'reads_operand_tbl': False, 'reads_shadow_key': False,
        'reads_handler_tbl': False, 'reads_buf_ptr': False, 'reads_buf_sz': False,
        'rip_data_refs': [], 'returns': 0, 'first_insns': [],
    }
    seen = set()
    for ins in md.disasm(chunk, va):
        if ins.address in seen: break
        seen.add(ins.address)
        features['num_insns'] += 1
        features['size_bytes'] = ins.address + ins.size - va
        if len(features['first_insns']) < 8:
            features['first_insns'].append(f'{ins.mnemonic} {ins.op_str}')
        if ins.mnemonic == 'ret':
            features['returns'] += 1
            if ins.address - va > size_hint - 16:
                break
            continue
        if ins.mnemonic == 'call':
            if ins.op_str.startswith('0x'):
                tgt = int(ins.op_str, 16)
                known = {POOL_READER:'pool_reader',PERMUTE8:'permute8',PERMUTE8INV:'permute8inv',
                         SHADOW_UPD:'shadow_updater',OPREADER:'operand_reader',PCREADER:'pc_reader',
                         RESOLVER:'resolver'}
                features['calls'].append((hex(ins.address), hex(tgt), known.get(tgt, '')))
            else:
                features['calls'].append((hex(ins.address), ins.op_str, 'indirect'))
        elif ins.mnemonic.startswith('j') and ins.mnemonic != 'jmp':
            features['cond_branches'] += 1
        for op in ins.operands:
            if op.type == capstone.x86.X86_OP_MEM:
                base = op.mem.base
                disp = op.mem.disp
                if base == capstone.x86.X86_REG_RCX:
                    is_write = (op is ins.operands[0]) and ins.mnemonic in ('mov','movzx','movsx','xor','and','or','add','sub','inc','dec','shl','shr','bts','btr')
                    tag = (hex(ins.address), hex(disp), op.size)
                    if is_write: features['rcx_mem_writes'].append(tag)
                    else: features['rcx_mem_reads'].append(tag)
                    if disp == 0x210:
                        if is_write: features['writes_pc_field'] = True
                        else: features['reads_pc_field'] = True
                    elif 0xf64 <= disp < 0xf64+500:
                        features['reads_operand_tbl'] = True
                    elif disp == 0xf50: features['reads_shadow_key'] = True
                    elif disp == 0xf40: features['reads_handler_tbl'] = True
                    elif disp == 0x1b0: features['reads_buf_ptr'] = True
                    elif disp == 0x1b8: features['reads_buf_sz'] = True
                elif base == capstone.x86.X86_REG_RIP:
                    tgt = ins.address + ins.size + disp
                    features['rip_data_refs'].append((hex(ins.address), hex(tgt)))
    return features

analyses = {}
for h in handlers:
    va = int(h['va'], 16)
    sz = h['size_bytes']
    analyses[hex(va)] = {
        'va': hex(va), 'size': sz,
        'channel': h['channel'],
        'num_pairs': h['num_pairs'],
        'features': analyze_handler(va, sz),
    }

with open('vm_pools_evidence/usuario_vm_handler_static_analysis.json','w') as fh:
    json.dump(analyses, fh, indent=2, default=str)
print(f'[+] saved vm_pools_evidence/usuario_vm_handler_static_analysis.json')

# Summary table
print()
hdr = f'{"VA":<14} {"sz":>5} ch {"calls":>6} {"jcc":>4} {"wPC":<4} {"rOpR":<5} marks'
print(hdr)
print('-'*len(hdr))
for va, a in sorted(analyses.items()):
    f = a['features']
    pool_calls = sum(1 for (_,t,n) in f['calls'] if 'pool' in n)
    opr_calls = sum(1 for (_,t,n) in f['calls'] if 'operand' in n)
    pc_calls = sum(1 for (_,t,n) in f['calls'] if 'pc' in n)
    perm_calls = sum(1 for (_,t,n) in f['calls'] if 'permute' in n)
    shad_calls = sum(1 for (_,t,n) in f['calls'] if 'shadow' in n)
    marks = []
    if f['writes_pc_field']: marks.append('wPC')
    if opr_calls: marks.append(f'OpR*{opr_calls}')
    if pool_calls: marks.append(f'Pool*{pool_calls}')
    if pc_calls: marks.append(f'PCr*{pc_calls}')
    if perm_calls: marks.append(f'Perm*{perm_calls}')
    if shad_calls: marks.append(f'Shad*{shad_calls}')
    if f['cond_branches'] > 3: marks.append(f'brch={f["cond_branches"]}')
    ch = a['channel']
    print(f'{va:<14} {f["size_bytes"]:>5} {ch:>2} {len(f["calls"]):>6} {f["cond_branches"]:>4} {"Y" if f["writes_pc_field"] else "-":<4} {"Y" if f["reads_operand_tbl"] else "-":<5} ' + ' '.join(marks))
