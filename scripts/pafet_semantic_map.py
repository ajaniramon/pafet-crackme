#!/usr/bin/env python3
"""Extract Pafet's native host tables and focused disassembly; no execution.

Optional --out DIR writes independently reproducible static evidence. Native
host table coverage must not be confused with coverage of all VM bytecode.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import capstone
import pefile

BASE=0x140000000
ROLES=[
    'initialize target SHA string (slot 0)',
    'print separator (slot 1)', 'print banner (slot 2)',
    'print separator (slot 3)', 'print username prompt (slot 4)',
    'getline username', 'print serial prompt (slot 5)', 'getline serial',
    'compare SHA hex of original username; 0=match, 1=mismatch',
    'print invalid username (slot 6)', 'transform username through user VM',
    'transform serial through RC4 wrapper VMs', 'concatenate transformed inputs',
    'truncate key material to 24 bytes', 'key size below 24 predicate',
    'append zero bytes to key', 'load/decode fixed ciphertext',
    'set cipher loop counter from argument', 'get signed cipher loop counter',
    'one existing cipher pass plus unpad (not re-reversed)',
    'prefix/suffix predicate; 1=shape match',
    'print correct message (slot 9)', 'print output with declared byte length',
    'print wrong credentials (slot 12)'
]

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--binary',type=Path,default=Path(__file__).resolve().parents[1]/'pafet.bin')
    ap.add_argument('--out',type=Path)
    args=ap.parse_args()
    pe=pefile.PE(str(args.binary));md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    digest=hashlib.sha256(args.binary.read_bytes()).hexdigest()
    assert digest=='fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a'
    tables={}
    for name,rva,n in [('main_host',0x397380,24),('user_host',0x48a94,7)]:
        values=struct.unpack('<'+'i'*n,pe.get_data(rva,4*n))
        tables[name]=[{'opcode':i,'address':hex(BASE+a),
                       **({'role':ROLES[i]} if name=='main_host' else {})}
                      for i,a in enumerate(values)]
    regions={}
    entries={'crt_entry':0x3a46d8,'main_wrapper':0x3967a0,'main_VM':0x38d9d0,
             'main_native_host':0x396990,'string_decoder':0x380840,
             'user_VM':0x3f540,'user_native_host':0x48960,
             'serial_outer_VM':0x264a60,'serial_native_adapter':0x39d740,
             'serial_inner_VM':0x22a120,'sha_wrapper':0x2831c0,
             'sha_VM':0x27aba0,'sha_native_host':0x2834d0,
             'hex_decoder_VM':0x804c0,'live_accessor':0x381630,
             'VM_handler_lookup':0x335150,'VM_fail_stop':0x381090,
             'cast58_clone1':0x386150,'cast58_clone2':0x388310,
             'cast58_clone3':0x38a270,'cast58_clone4':0x38b8b0}
    for name,a in entries.items():
        rf=next((e.struct for e in pe.DIRECTORY_ENTRY_EXCEPTION
                 if e.struct.BeginAddress<=a<e.struct.EndAddress),None)
        regions[name]={'entry':hex(BASE+a),'runtime_function_start':hex(BASE+rf.BeginAddress) if rf else None,
                       'runtime_function_end':hex(BASE+rf.EndAddress) if rf else None,
                       'has_pdata_entry':rf is not None}
    ranges={'main_native_host':(0x396990,0x9f0),'user_native_host':(0x48960,0x134),
            'string_decoder':(0x380840,654),'live_accessor':(0x381630,0xaa),
            'VM_handler_lookup':(0x335150,32),'VM_fail_stop':(0x381090,1327),
            'cast58_clone1':(0x386150,289),'cast58_clone2':(0x388310,289),
            'cast58_clone3':(0x38a270,289),'cast58_clone4':(0x38b8b0,296),
            'serial_native_adapter':(0x39d740,0x1b3),
            'main_VM_TLS_and_guard':(0x38e329,0x46),
            'main_VM_dispatch':(0x38eb64,0x44)}
    result={'binary_sha256':digest,'image_base':hex(BASE),
            'pe_entry':hex(BASE+pe.OPTIONAL_HEADER.AddressOfEntryPoint),
            'native_host_tables':tables,'regions':regions,
            'warning':'24 native host callbacks are not all 62 logical VM instruction kinds',
            'disassembly_ranges':{k:[hex(BASE+a),n] for k,(a,n) in ranges.items()}}
    if args.out:
        args.out.mkdir(parents=True,exist_ok=True)
        (args.out/'static_map.json').write_text(json.dumps(result,indent=2)+'\n')
        for name,(a,n) in ranges.items():
            lines=[f'{i.address:016x} {i.bytes.hex():24} {i.mnemonic} {i.op_str}'.rstrip()
                   for i in md.disasm(pe.get_data(a,n),BASE+a)]
            (args.out/(name+'.asm')).write_text('\n'.join(lines)+'\n')
    else:
        print(json.dumps(result,indent=2))

if __name__=='__main__':
    main()
