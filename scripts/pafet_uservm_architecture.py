#!/usr/bin/env python3
"""User-VM architecture extraction for Pafet (reproducible).

Produces a JSON report with:
  - function boundaries from .pdata for the user-VM dispatcher and helpers
  - rip-relative references into the encrypted bytecode blob 0x1403E5020
  - handler-resolver and operand-reader signatures (statically inferred)
  - the 4 dispatch sites inside the dispatcher
  - modular inverses for the operand decoder

Does NOT execute pafet.bin. Does NOT decrypt the blob.

Output: vm_pools_evidence/usuario_vm_architecture.json
"""
import json
import os
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE = r'C:\Users\Ramón\Desktop\pafet_crackme\pafet.bin'
BLOB_VA = 0x1403E5020
BLOB_SZ = 0x6d8  # 1752
DISP_VA = 0x14003f540

OUT = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                   'vm_pools_evidence', 'usuario_vm_architecture.json')


def load_pe():
    d = open(PE, 'rb').read()
    pe = struct.unpack_from('<I', d, 0x3c)[0]
    sz_opt = struct.unpack_from('<H', d, pe + 20)[0]
    image_base = struct.unpack_from('<Q', d, pe + 24 + 24)[0]
    sec_tbl = pe + 24 + sz_opt
    sections = []
    nsec = struct.unpack_from('<H', d, pe + 6)[0]
    for i in range(nsec):
        off = sec_tbl + 40 * i
        name = d[off:off + 8].rstrip(b'\0').decode(errors='replace')
        vs, va, rs, rp = struct.unpack_from('<IIII', d, off + 8)
        sections.append((name, va, vs, rp, rs))
    return d, image_base, sections


def va_to_fo(sections, image_base, va):
    for n, sva, svs, rp, rs in sections:
        v0 = image_base + sva
        v1 = v0 + max(svs, rs)
        if v0 <= va < v1:
            return rp + (va - v0)
    return None


def pdata_range(d, sections, image_base, va):
    pdata = next(s for s in sections if s[0] == '.pdata')
    pfo = pdata[3]
    for i in range(pdata[4] // 12):
        s = struct.unpack_from('<I', d, pfo + i * 12)[0]
        e = struct.unpack_from('<I', d, pfo + i * 12 + 4)[0]
        if image_base + s <= va < image_base + e:
            return (image_base + s, image_base + e)
    return None


def modinv(a, m):
    def egcd(a, b):
        if b == 0:
            return (1, 0, a)
        x, y, g = egcd(b, a % b)
        return (y, x - (a // b) * y, g)
    x, _, g = egcd(a, m)
    return x % m if g == 1 else None


def main():
    d, image_base, sections = load_pe()
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True

    report = {
        'image_base': hex(image_base),
        'blob_va': hex(BLOB_VA),
        'blob_sz': BLOB_SZ,
        'blob_block_size': 24,
        'blob_blocks': BLOB_SZ // 24,  # 73
        'dispatcher_va': hex(DISP_VA),
        'dispatcher_pdata': None,
        'helpers': {},
        'rip_refs_to_blob': [],
        'dispatch_sites': [],
        'operand_decoder': {},
    }

    # Dispatcher boundaries
    rng = pdata_range(d, sections, image_base, DISP_VA)
    report['dispatcher_pdata'] = [hex(rng[0]), hex(rng[1]), rng[1] - rng[0]] if rng else None

    # Helper functions
    for name, va in [
        ('fmix64', 0x140002040),
        ('permute8_uservm', 0x140002080),
        ('handler_resolver', 0x14003ebb0),
        ('operand_reader', 0x1400074d0),
        ('pc_reader', 0x1400071e0),
        ('materializer_prolog', 0x140007610),
        ('materializer_body', 0x140007631),
        ('helper_called_63x', 0x140006770),
        ('ctx_setter_tiny', 0x140048940),
        ('pool_reader_shared_alu', 0x140048e10),
        ('shadow_state_updater', 0x140049330),
    ]:
        r = pdata_range(d, sections, image_base, va)
        report['helpers'][name] = {
            'va': hex(va),
            'pdata_range': [hex(r[0]), hex(r[1]), r[1] - r[0]] if r else None,
        }

    # Byte-level scan for rip-rel refs to blob
    tsec = next(s for s in sections if s[0] == '.text')
    tvabase = image_base + tsec[1]
    tbytes = d[tsec[3]:tsec[3] + tsec[4]]
    for off in range(0, len(tbytes) - 7):
        b0 = tbytes[off]
        if b0 not in (0x48, 0x4c, 0x4d, 0x49):
            continue
        if tbytes[off + 1] != 0x8d:
            continue
        modrm = tbytes[off + 2]
        if (modrm & 0xc7) != 0x05:
            continue
        disp = struct.unpack_from('<i', tbytes, off + 3)[0]
        rip_next = tvabase + off + 7
        tgt = rip_next + disp
        if BLOB_VA <= tgt < BLOB_VA + BLOB_SZ:
            # Disassemble to confirm
            fo = va_to_fo(sections, image_base, tvabase + off)
            try:
                ins = next(md.disasm(d[fo:fo + 15], tvabase + off))
                report['rip_refs_to_blob'].append({
                    'va': hex(tvabase + off),
                    'mnemonic': ins.mnemonic,
                    'op_str': ins.op_str,
                    'target': hex(tgt),
                    'offset_in_blob': hex(tgt - BLOB_VA),
                })
            except StopIteration:
                pass

    # Dispatch sites: within DISP range, find `call rax` preceded by `call 0x14003ebb0`
    if rng:
        fo = va_to_fo(sections, image_base, rng[0])
        disp_bytes = d[fo:fo + (rng[1] - rng[0])]
        disas = list(md.disasm(disp_bytes, rng[0]))
        for i, ins in enumerate(disas):
            if ins.mnemonic == 'call' and ins.op_str.strip() == 'rax':
                # Look back ~20 for a call to 0x14003ebb0
                found_resolver = False
                channel_hint = None
                for j in range(max(0, i - 20), i):
                    pj = disas[j]
                    if pj.mnemonic == 'call' and pj.op_str.strip() == '0x14003ebb0':
                        found_resolver = True
                    if pj.mnemonic == 'mov' and ('edx,' in pj.op_str or 'ebx,' in pj.op_str):
                        # Capture last immediate assigned to edx/ebx
                        parts = pj.op_str.split(',')
                        if len(parts) == 2:
                            v = parts[1].strip()
                            try:
                                channel_hint = int(v, 0)
                            except ValueError:
                                pass
                if found_resolver:
                    report['dispatch_sites'].append({
                        'va': hex(ins.address),
                        'channel_hint_edx_or_ebx': channel_hint,
                    })

    # Operand decoder constants (reversed)
    report['operand_decoder'] = {
        'description': (
            'At 0x1400071e0 the PC-indexed operand reader reads two bytes '
            'from buffer[pc..pc+2], packs them as little-endian u16 '
            'via `(byte1<<8) | byte0`, then applies: '
            'temp = PC * 0x7af13fd3 (mod 2^32); '
            'raw_mixed = raw ^ (temp>>13) ^ temp ^ 0xffff9a10; '
            'operand = (raw_mixed * 0x1a8d) & 0xffff.'
        ),
        'const_pc_mix': hex(0x7af13fd3),
        'const_mask': hex(0xffff9a10),
        'const_final_mul': hex(0x1a8d),
        'modinv_1a8d_mod_2_16': hex(modinv(0x1a8d, 0x10000)),
        'modinv_7af13fd3_mod_2_32': hex(modinv(0x7af13fd3, 0x100000000)),
        'inverse_formula': (
            'given operand (u16), PC: '
            'raw_mixed = operand * 0x3845 & 0xffff; '
            'temp = PC * 0x7af13fd3 (mod 2^32); '
            'raw = raw_mixed ^ (temp>>13) ^ temp ^ 0xffff9a10, mask to u16.'
        ),
    }

    # Handler resolver signature
    report['handler_resolver_signature'] = {
        'va': hex(0x14003ebb0),
        'description': (
            'handler = (int32_t(ctx[0xf40][channel*62 + opcode]) ^ '
            'int32_t(ctx[0xf50])) + ctx[0xf48]. '
            'channel is passed in edx (0..3), opcode byte in r8d (0..61).'
        ),
        'table_ptr_offset': hex(0xf40),
        'base_ptr_offset': hex(0xf48),
        'xor_key_offset': hex(0xf50),
        'operand_table_offset': hex(0xf64),
        'opcode_count': 62,
        'channel_count': 4,
    }

    # Attestation
    report['attestation'] = {
        'seed': hex(0xf7002e5d6b6ed339),
        'expected': hex(0xc4344faf7ef3b8df),
        'reproduced_offline_on_blob': True,
        'proof_script': 'scripts/pafet_uservm_bc.py',
    }

    # Context fields
    report['ctx_fields'] = {
        '0x28': 'LCG PRNG state (mul 0x9e3779b97f4a7c15, add 0x2545f4914f6cdd1d)',
        '0x30': 'PRNG counter',
        '0x1b0': 'bytecode buffer pointer (materialized window)',
        '0x1b8': 'bytecode buffer size (u32)',
        '0x1e8/1f0/1f8': 'shadow mask base values (3 x u64)',
        '0x200': 'shadow toggle byte (controls XOR vs ADD/SUB in masked store)',
        '0x208/0x210/0x218/0x220/0x258': 'masked state slots',
        '0x210': 'PC counter (byte offset in bytecode buffer)',
        '0x278/0x279/0x27a/0x27b/0x282': 'shadow bytes written by state updaters',
        '0xf40': 'handler jump-table pointer (248 int32 entries)',
        '0xf48': 'handler base address (added to table entry)',
        '0xf50': 'handler table XOR key',
        '0xf64': 'operand uint16[] table (248 entries) or ptr',
    }

    with open(OUT, 'w', encoding='utf-8') as fh:
        json.dump(report, fh, indent=2)
    print(f'[*] wrote {OUT}')
    print(f'[*] dispatcher is 0x{rng[1] - rng[0]:x} bytes if pdata available: {rng is not None}')
    print(f'[*] rip refs to blob (byte-level scan): {len(report["rip_refs_to_blob"])}')
    for r in report['rip_refs_to_blob']:
        print(f'   {r["va"]}  {r["mnemonic"]} {r["op_str"]}   -> {r["target"]} (+{r["offset_in_blob"]})')
    print(f'[*] dispatch sites in dispatcher body: {len(report["dispatch_sites"])}')
    for s in report['dispatch_sites']:
        print(f'   {s["va"]}  channel={s["channel_hint_edx_or_ebx"]}')


if __name__ == '__main__':
    main()
