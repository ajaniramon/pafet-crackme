#!/usr/bin/env python3
"""Extract the 12 decoded slots of the user-VM constant pool.

Mechanism (recovered from pool-reader at 0x140048e10):
  edx = slot index (0..11)
  rax (return) = decoded 64-bit value of that slot
  r8/r9/ecx = ignored for the slot resolution (used by caller for other context)

Per-slot decode: a mini-VM runs `indices_length[slot]` 4-word instructions.
Each instruction consumes 4 u32 words from aux_tbl starting at word
(indices_offset[slot] + i*4), xored against a splitmix keystream seeded by
(slot+1)*phi64 ^ 0x59b26b99084f4a7. Word 3 is a hash check against the
hash of words 0..2 (integrity). The decoded (opcode, src, dst) manipulates
4 local u64 slots at [rbp-0x38..rbp-0x20]. Final return: rax = local[3].

This script just drives Unicorn to execute the function body isolated and
captures rax for each slot. Independent of the caller's ctx: pool-reader
only touches arguments edx (slot), stack space, and .rdata tables.
"""
import json
import os
import struct
import sys

import pefile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pafet_semantic_probe import BASE, MASK, IsolatedPE  # noqa: E402

PE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'pafet.bin')
EVIDENCE_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..',
                            'vm_pools_evidence')

POOL_READER_VA = 0x140048e10
NUM_SLOTS = 12


def main():
    pe = pefile.PE(PE_PATH, fast_load=True)
    expected_offsets = [0, 0x10, 0x1c, 0x28, 0x38, 0x44, 0x54, 0x64,
                        0x6c, 0x78, 0x7c, 0x80]
    expected_lengths = [4, 3, 3, 4, 3, 4, 4, 2, 3, 1, 1, 1]

    results = []
    for slot in range(NUM_SLOTS):
        # Fresh IsolatedPE per call: pool-reader uses a stack canary that
        # verifies ``rax ^ rsp == [rbp-0x18]`` at exit. Starting cleanly also
        # avoids contamination from previous calls.
        env = IsolatedPE(pe)
        outbuf = env.alloc(64)
        env.mu.mem_write(outbuf, b'\x00' * 64)
        try:
            rax = env.call(POOL_READER_VA, 0, slot, outbuf, 0)
        except Exception as exc:
            results.append({'slot': slot, 'error': repr(exc)})
            continue
        tail_bytes = bytes(env.mu.mem_read(outbuf, 64))
        results.append({
            'slot': slot,
            'offset': expected_offsets[slot],
            'length': expected_lengths[slot],
            'rax': rax,
            'rax_hex': f'0x{rax:016x}',
            'rax_bytes_le': rax.to_bytes(8, 'little').hex(),
            'rax_bytes_be': rax.to_bytes(8, 'big').hex(),
            'outbuf_untouched': tail_bytes == b'\x00' * 64,
            'outbuf_head_hex': tail_bytes[:16].hex(),
        })

    for r in results:
        if 'error' in r:
            print(f'[!] slot {r["slot"]:2d}: {r["error"]}')
        else:
            print(f'[+] slot {r["slot"]:2d} off=0x{r["offset"]:02x} len={r["length"]} '
                  f'rax={r["rax_hex"]}  outbuf_zero={r["outbuf_untouched"]}')

    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    out_path = os.path.join(EVIDENCE_DIR, 'usuario_pool_decoded.json')
    with open(out_path, 'w', encoding='utf-8') as fh:
        json.dump({'pool_reader_va': f'0x{POOL_READER_VA:x}',
                   'num_slots': NUM_SLOTS,
                   'slots': results}, fh, indent=2)
    print(f'[+] wrote {out_path}')


if __name__ == '__main__':
    main()
