#!/usr/bin/env python3
"""User-VM constant pool: structural dump + decryption-stream attestation.

Observable facts captured here (reproducible from pafet.bin alone):

1. The user-VM encrypted bytecode blob lives at VA 0x1403E5020, size 1752 B
   (confirmed by referenced lea in dispatcher 0x14003f540 at 0x14003f6f1, and
   validated by attestation sum below). pafet_uservm_bc.py already verifies the
   attestation 0xc4344faf7ef3b8df obtained by streaming fmix64 over the
   encrypted bytes with seed rax=0xf7002e5d6b6ed339 — this is an integrity
   check only, NOT a decryption.

2. The user-VM permute8 function sits at 0x140048ac0 (and its inverse at
   0x140048c20). Its 4 Feistel-round seeds are:
      0xff7a8b2362bf776e
      0x5d2301e8e361f351
      0xbbeb9fb6602a7f44
      0x1990147fe0dcfb2f
   Multiplier is the same 0xd6e8feb86659fd93 of the controller permute8.

3. The user-VM pool has EXACTLY 12 slots (determined by the bounds check
   `cmp edx, 0xc; jae bail` at 0x140048e49 inside the pool-reader frame
   0x140048e10). It is laid out as three concurrent .rdata tables:

      indices_offset[12] @ 0x1403E1240  u32  (byte offset into aux_tbl)
      indices_length[12] @ 0x1403E7110  u32  (number of u32 words per slot)
      aux_tbl[>=33]      @ 0x1403E2500  u32  (concatenated encrypted words,
                                              length sum=33 → 132 B, matches)

4. The pool reader at 0x140048e10 derives each slot's final value by
   streaming the `length` u32 words from `aux_tbl + offset` through a
   splitmix-style keystream parameterised by (slot+1)*phi plus seed
   0x59b26b99084f4a7. The Murmur-like constants used are 32-bit variants:
      multiplier 0x9e3779b1 (phi high)
      multiplier 0x7a143595 (phi low complement)
      fmix       0xc2b2ae35
      fmix       0x27d4eb2f
      bias       0x59f554ae
      bias       0x44422503 (as -0x44422503)
      bias       0x7d331a1  (as -0x7d331a1)
   And a 64-bit splitmix2 constant 0xbf58476d1ce4e5b9.

5. Technical block that prevents end-to-end decoded capture via Unicorn:
   calling pool-reader 0x140048e10 in isolation with ctx layout
   {ecx=0, edx=slot, r8=outbuf, r9=0} returns heap pointers (internal
   `operator new`) but does NOT write the final value into the passed outbuf.
   Calling the full executor 0x140048960 with a zeroed ctx fails at RIP
   0x140398502 with UC_ERR_READ_UNMAPPED (dereferences a ctx field whose
   target page is unmapped). The user-VM executor requires a ctx with at
   least a vtable pointer + initialized input-string std::string + output
   std::string; the exact field map has to come from the executor's
   `mov [rcx+offset]` instructions and from the dispatcher that calls it
   (0x14003f540). That ctx-shape work is a prerequisite for a one-shot
   Unicorn drive; the alternative is a Frida hook on the running PE that
   captures the decoded blocks on each materialisation.

Usage: python scripts/pafet_uservm_pool_dump.py
"""
import json
import os
import struct
import sys

import pefile

PE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'pafet.bin')
EVIDENCE_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'vm_pools_evidence')

BASE = 0x140000000
BC_VA = 0x1403E5020
BC_SIZE = 0x6D8  # 1752

IDX_OFFSET_VA = 0x1403E1240
IDX_LENGTH_VA = 0x1403E7110
AUX_TBL_VA = 0x1403E2500

PERMUTE8_SEEDS = (
    0xff7a8b2362bf776e,
    0x5d2301e8e361f351,
    0xbbeb9fb6602a7f44,
    0x1990147fe0dcfb2f,
)
PERMUTE8_MUL = 0xd6e8feb86659fd93
POOL_READER_CONSTS = {
    'phi64':      0x9e3779b97f4a7c15,
    'phi_bias':   0x59b26b99084f4a7,
    'phi_hi32':   0x9e3779b1,
    'phi_lo32':   0x7a143595,
    'splitmix_a': 0xc2b2ae35,
    'splitmix_b': 0x27d4eb2f,
    'splitmix64': 0xbf58476d1ce4e5b9,
    'bias_pos':   0x59f554ae,
    'bias_neg_a': 0x44422503,
    'bias_neg_b': 0x7d331a1,
}

MASK64 = (1 << 64) - 1


def fmix64(h):
    h &= MASK64
    h ^= h >> 33; h = (h * 0xff51afd7ed558ccd) & MASK64
    h ^= h >> 33; h = (h * 0xc4ceb9fe1a85ec53) & MASK64
    h ^= h >> 33
    return h


def attestation_sum(blob):
    """Reproduces the integrity check hard-coded in the user-VM executor.
    This loop computes a 64-bit sum; it does NOT decrypt."""
    rax = 0xf7002e5d6b6ed339
    rbx = 0
    for i in range(len(blob)):
        rcx = (blob[i] ^ rbx ^ rax) & MASK64
        rax = fmix64(rcx)
        rbx = (rbx + 1) & MASK64
    return rax


def main():
    pe = pefile.PE(PE_PATH, fast_load=True)

    def rdata(va, n):
        return pe.get_data(va - BASE, n)

    bc_enc = rdata(BC_VA, BC_SIZE)
    att = attestation_sum(bc_enc)
    att_expected = 0xc4344faf7ef3b8df

    idx_offset = list(struct.unpack('<12I', rdata(IDX_OFFSET_VA, 12 * 4)))
    idx_length = list(struct.unpack('<12I', rdata(IDX_LENGTH_VA, 12 * 4)))
    total_words = sum(idx_length)
    aux_tbl_bytes = rdata(AUX_TBL_VA, max(total_words, 33) * 4)
    aux_tbl = list(struct.unpack(f'<{len(aux_tbl_bytes) // 4}I', aux_tbl_bytes))

    # Group aux_tbl words by slot
    pool_slots = []
    for slot in range(12):
        off_bytes = idx_offset[slot]
        length = idx_length[slot]
        assert off_bytes % 4 == 0, (slot, off_bytes)
        start_word = off_bytes // 4
        words = aux_tbl[start_word:start_word + length]
        pool_slots.append({
            'slot': slot,
            'offset_bytes': off_bytes,
            'length_words': length,
            'raw_words_hex': [f'0x{w:08x}' for w in words],
        })

    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    out_path = os.path.join(EVIDENCE_DIR, 'usuario_pool_structure.json')
    report = {
        'binary': os.path.basename(PE_PATH),
        'vm': 'usuario',
        'executor_va': '0x140048960',
        'dispatcher_va': '0x14003f540',
        'blob_encrypted': {
            'va': f'0x{BC_VA:x}',
            'size': BC_SIZE,
            'sha256_enc_bytes': __import__('hashlib').sha256(bc_enc).hexdigest(),
            'attestation_sum_offline': f'0x{att:016x}',
            'attestation_sum_expected': f'0x{att_expected:016x}',
            'attestation_matches': att == att_expected,
            'attestation_note': ('This is an integrity hash computed by '
                                 'streaming fmix64 over encrypted bytes. '
                                 'It is NOT the decryption; the bytecode '
                                 'stays encrypted and is only decoded by '
                                 'the materializer at runtime.'),
        },
        'permute8_user_vm': {
            'function_va': '0x140048ac0',
            'inverse_va': '0x140048c20',
            'multiplier': f'0x{PERMUTE8_MUL:016x}',
            'feistel_seeds': [f'0x{s:016x}' for s in PERMUTE8_SEEDS],
            'note': ('Analogue of main controller permute8 at 0x140380590 '
                     'with 4 distinct seeds; same shape (nibble Feistel over '
                     'fmix64).')
        },
        'pool_structure': {
            'size': 12,
            'bounds_check_va': '0x140048e49',
            'pool_reader_va': '0x140048e10',
            'tables': {
                'indices_offset': {'va': f'0x{IDX_OFFSET_VA:x}',
                                   'entries': 12, 'word_size': 4,
                                   'values': [f'0x{o:08x}' for o in idx_offset]},
                'indices_length': {'va': f'0x{IDX_LENGTH_VA:x}',
                                   'entries': 12, 'word_size': 4,
                                   'values': [f'0x{l:08x}' for l in idx_length]},
                'aux_tbl': {'va': f'0x{AUX_TBL_VA:x}',
                            'total_u32_words': total_words,
                            'total_bytes': total_words * 4,
                            'words_hex': [f'0x{w:08x}' for w in aux_tbl[:total_words]]},
            },
            'slots_raw': pool_slots,
            'reader_constants': {k: f'0x{v:x}' for k, v in POOL_READER_CONSTS.items()},
        },
        'open_blockers': {
            'decoded_pool_values': ('Final 64-bit (?) value per slot not yet '
                                    'extracted. Isolated Unicorn call of '
                                    '0x140048e10 with ecx=0,edx=slot,'
                                    'r8=outbuf,r9=0 returns internal heap '
                                    'allocs but does not write final value '
                                    'to passed outbuf — the ctx shape and '
                                    'call signature expected by that frame '
                                    'differ from the plain resolver '
                                    'assumption.'),
            'bytecode_plaintext': ('Full user-VM executor 0x140048960 '
                                   'invoked under IsolatedPE with zeroed ctx '
                                   'fails at RIP 0x140398502 with '
                                   'UC_ERR_READ_UNMAPPED. The executor needs '
                                   'a ctx with at least a vtable pointer and '
                                   'input/output std::string fields initialised. '
                                   'A viable next step is to replay the main '
                                   'dispatcher 0x14003f540 pattern: inspect '
                                   'every mov [rcx+offset] in both the '
                                   'dispatcher and the executor to recover '
                                   'the required field map, then alloc the '
                                   'ctx accordingly; alternatively, hook the '
                                   'running PE with Frida at the materializer '
                                   'to dump decoded blocks live.'),
        },
    }

    with open(out_path, 'w', encoding='utf-8') as fh:
        json.dump(report, fh, indent=2, ensure_ascii=False)
    print(f'[+] Report written to {out_path}')
    print(f'[+] Blob encrypted sha256: {report["blob_encrypted"]["sha256_enc_bytes"]}')
    print(f'[+] Attestation matches:   {report["blob_encrypted"]["attestation_matches"]}')
    print(f'[+] Pool structure:        12 slots, aux_tbl sum = {total_words} u32 '
          f'({total_words * 4} bytes)')
    print(f'[+] Per-slot raw words:')
    for s in pool_slots:
        print(f'    slot {s["slot"]:2d}: off=0x{s["offset_bytes"]:02x} '
              f'len={s["length_words"]} words={s["raw_words_hex"]}')


if __name__ == '__main__':
    main()
