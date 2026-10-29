#!/usr/bin/env python3
"""Audit both existing six-vector oracles, attributing stores to actual RIP.

No formula oracle is used. The PE is read-only; the historical harness supplies
captured research contexts. Capture expected-state agreement is recorded
separately from newly observed execution and writer attribution.
"""
import collections
import hashlib
import importlib.util
import json
import pathlib
import struct
import capstone
import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_RIP, UC_X86_REG_RSP, UC_X86_REG_RAX

ROOT = pathlib.Path(__file__).resolve().parents[1]
OUT = ROOT / 'jack_xxiii_evidence'
BASE = 0x140000000
PE_HASH = 'fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'

def audit(script,vector_file,entry):
    spec = importlib.util.spec_from_file_location('old_oracle', ROOT / 'scripts' / script)
    old = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(old)
    caps = json.loads((ROOT / 'vm_pools_evidence' / vector_file).read_text())
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    reports = []
    for label, capture in caps.items():
        if 'vectors' not in capture:
            continue
        runtime = int(capture['pe_base'], 16)
        for number, vector in enumerate(capture['vectors']):
            ctx = int(vector['regs']['rcx'], 16)
            data = bytes.fromhex(vector['ctx_hex'])
            pointer = struct.unpack_from('<Q', data, 0x5e8)[0]
            cache = {}
            state = {'pending': None, 'frames': [BASE+entry], 'writes': [],
                     'calls': collections.Counter(), 'pcs': set(), 'instructions': 0,
                     'target_before': None, 'target_after': None}
            def canonical(pc):
                return pc-runtime+BASE if runtime <= pc < runtime+0x460000 else pc
            def make_uc(*args, **kwargs):
                uc = unicorn.Uc(*args, **kwargs)
                def code(u, address, size, unused):
                    pc = canonical(address)
                    state['instructions'] += 1
                    state['pcs'].add(pc)
                    if state['target_before'] is None:
                        try:
                            state['target_before'] = bytes(u.mem_read(pointer, 32)).hex()
                        except unicorn.UcError:
                            pass
                    if state['pending'] is not None:
                        state['frames'].append(pc)
                        state['calls'][hex(pc)] += 1
                        state['pending'] = None
                    if address not in cache:
                        cache[address] = next(md.disasm(bytes(u.mem_read(address, size)), address))
                    instruction = cache[address]
                    if instruction.mnemonic == 'call':
                        state['pending'] = True
                    elif instruction.mnemonic.startswith('ret'):
                        if len(state['frames']) > 1:
                            state['frames'].pop()
                def write(u, access, address, size, value, unused):
                    if pointer <= address < pointer+32:
                        state['writes'].append({'rip': hex(canonical(u.reg_read(UC_X86_REG_RIP))),
                            'address': hex(address), 'offset': address-pointer, 'size': size,
                            'value': value & ((1 << (8*size))-1),
                            'frames': [hex(x) for x in state['frames']]})
                uc.hook_add(unicorn.UC_HOOK_CODE, code)
                uc.hook_add(unicorn.UC_HOOK_MEM_WRITE, write)
                original_start = uc.emu_start
                def start(*a, **k):
                    original_start(*a, **k)
                    try:
                        state['target_after'] = bytes(uc.mem_read(pointer, 32)).hex()
                    except unicorn.UcError:
                        pass
                    state['rax_after'] = hex(uc.reg_read(UC_X86_REG_RAX))
                uc.emu_start = start
                return uc
            old.Uc = make_uc
            result = old.emulate_one(vector, pe_runtime_base=runtime)
            reports.append({'handler':hex(BASE+entry),'capture': label, 'vector': number, 'historical_oracle_result': result,
                'historical_pointer_ctx5e8': hex(pointer), 'instructions': state['instructions'],
                'target_before': state['target_before'], 'target_after': state['target_after'],
                'rax_after': state.get('rax_after'), 'captured_rax_after': vector['after']['rax'],
                'output_store_events': state['writes'], 'called_entries': dict(state['calls']),
                'executed_pcs': [hex(x) for x in sorted(state['pcs'])]})
            assert result['ok'], (label, number, result)
            assert int(state['rax_after'],16)==int(vector['after']['rax'],16)
            print(hex(entry),label, number, 'baseline', result['ok'], 'target stores', len(state['writes']),
                  'writer RIPs', sorted({x['rip'] for x in state['writes']}), flush=True)
    return reports

def main():
    assert hashlib.sha256((ROOT / 'pafet.bin').read_bytes()).hexdigest() == PE_HASH
    reports=audit('pafet_h3bea0_unicorn_xiii.py','h3bea0_vectors_xiii.json',0x3bea0)
    reports+=audit('pafet_h14a00_unicorn_xvi.py','h14a00_vectors_xvi.json',0x14a00)
    OUT.mkdir(exist_ok=True)
    (OUT / 'oracle_attribution.json').write_text(json.dumps({'original_sha256': PE_HASH,
        'scope': 'Existing captured pass8 component contexts replayed with original PE instructions; no original acceptance',
        'vectors': reports}, indent=2)+'\n')

if __name__ == '__main__':
    main()
