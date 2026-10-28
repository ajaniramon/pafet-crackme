#!/usr/bin/env python3
"""Offline interpreter of the user-VM at 0x140002480.
Reads 3 parallel bytecode arrays from pafet.bin's .rdata:
  bc1 at 0x1403dd4f0 (u32[])
  bc2 at 0x1403e2ce0 (u32[])
  bc3 at 0x1403ee790 (u32[])
"""
import struct

MASK = (1 << 64) - 1
MASK32 = 0xFFFFFFFF
GOLD = 0x9E3779B97F4A7C15
SPLITMIX_C = 0xBF58476D1CE4E5B9

def _u32(x): return x & MASK32
def _u64(x): return x & MASK

def _mix32(x):
    """MurmurHash3 fmix32 finalization."""
    x = _u32(x ^ (x >> 15))
    x = _u32(x * 0xC2B2AE35)
    x = _u32(x ^ (x >> 13))
    x = _u32(x * 0x27D4EB2F)
    return x

def _splitmix64_imul_pair(x):
    """At 0x140002587..0x140002598: mul by golden, finalize via splitmix.
    Returns (full_u64, rbx_u64_or_fold)."""
    # Code was:
    #   mul rax by r8 (= GOLD)   -> rax
    #   rcx = rax; rcx >>= 29; rcx ^= rax
    #   rcx *= rbx (= 0xbf58476d1ce4e5b9)
    #   eax = ecx; rbx = rcx; rbx >>= 32; rbx ^= rax
    rax = _u64(x * GOLD)
    rcx = _u64((rax >> 29) ^ rax)
    rcx = _u64(rcx * SPLITMIX_C)
    rbx = _u64((rcx >> 32) ^ _u32(rcx))
    return rcx, rbx

def _load_bytecode(pe_path):
    d = open(pe_path, 'rb').read()
    pe = struct.unpack_from('<I', d, 0x3c)[0]
    sz_opt = struct.unpack_from('<H', d, pe+20)[0]
    image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
    sec_tbl = pe+24+sz_opt
    sections=[]
    nsec=struct.unpack_from('<H',d,pe+6)[0]
    for i in range(nsec):
        off=sec_tbl+40*i; name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
        vs,va,rs,rp=struct.unpack_from('<IIII',d,off+8); sections.append((name,va,vs,rp,rs))
    def va_to_fo(va):
        for n,sva,svs,rp,rs in sections:
            v0=image_base+sva; v1=v0+max(svs,rs)
            if v0<=va<v1: return rp+(va-v0)
    # The 3 arrays — read sufficient u32s
    # They go on for an unknown length. We'll read ~2048 u32s each (plenty).
    bc1 = []; bc2 = []; bc3 = []
    for va, arr in [(0x1403DD4F0, bc1), (0x1403E2CE0, bc2), (0x1403EE790, bc3)]:
        fo = va_to_fo(va)
        for i in range(2048):
            if fo + i*4 + 4 > len(d): break
            arr.append(struct.unpack_from('<I', d, fo + i*4)[0])
    return bc1, bc2, bc3

BC1, BC2, BC3 = _load_bytecode(r'C:\Users\Ramón\Desktop\pafet.bin')

def _decrypt_instr(pc, i, rdi_in, ecx_saved):
    """Decrypt one VM instruction at (pc, i).
    pc = start_pc argument of this invocation
    i = iteration index (0..loop_count-1)
    rdi_in = fmix state (updated per iter at end of previous iter)
    ecx_saved = BC1[pc]

    Returns: (dec1, dec2, dec3, dec4_expected, new_rdi, rbx_val)
             dec1 is used for opcode + rbx operand
             dec2 is used for opcode (bits 14..15)
             dec3 is used for new_rdi (iter state) + verification
             dec4 is the "checksum"; must match 'expected' or abort
    """
    r9d = _u32(ecx_saved + i * 4)

    # First decryption chain (dec1 → r10d)
    rdi_hi = _u32(rdi_in >> 32)
    rdi_lo = _u32(rdi_in)
    ecx = _u32(rdi_hi * 0x7A143595)
    edx = _u32(r9d * 0x9E3779B1)
    eax = _u32(edx - ecx)
    ecx = _u32((eax - 0x1B4C91B8) + rdi_lo)
    ecx = _mix32(ecx)
    r10d = _u32((ecx >> 16) ^ BC3[r9d] ^ ecx)  # dec1

    # rax_full = r10d XOR rdi_in, then splitmix64 chain
    rax_full = _u64(r10d ^ rdi_in)
    rax_full, rbx_val = _splitmix64_imul_pair(rax_full)

    # Second chain (dec2 → r11d): uses r8d = (edx + rbx_val) with offset -0x7d151807
    # The code computes r8d = r9d*golden32 + rbx_val
    #   (where edx = r9d * 0x9E3779B1)
    r8d_val = _u32(edx + rbx_val)
    eax = _u32(r8d_val - 0x7D151807)
    eax = _mix32(eax)
    r11d = _u32((eax >> 16) ^ BC3[_u32(r9d + 1)] ^ eax)  # dec2

    # Third chain (dec3 → edi): uses r8d + 0x212261aa
    eax = _u32(r8d_val + 0x212261AA)
    eax = _mix32(eax)
    edi_dec = _u32((eax >> 16) ^ BC3[_u32(r9d + 2)] ^ eax)  # dec3

    # Fourth chain (dec4 → r8d_final): uses r8d - 0x40a624a5
    eax = _u32(r8d_val - 0x40A624A5)
    eax = _mix32(eax)
    r8d_final = _u32((eax >> 16) ^ BC3[_u32(r9d + 3)] ^ eax)  # dec4

    # Expected value for dec4:
    # rax = edi_dec XOR r11d XOR rbx_val
    # splitmix64 chain again
    val = _u64(edi_dec ^ r11d ^ rbx_val)
    val, expected_rbx = _splitmix64_imul_pair(val)
    expected_eax = _u32((val >> 32) ^ _u32(val))

    assert r8d_final == expected_eax, f'dec4 mismatch pc={pc} i={i}: {r8d_final:08x} vs {expected_eax:08x}'

    # Now compute next_rdi (fmix state for next iter)
    # The code does more math — see 0x14000268f..0x1400026fd
    # tmp = r8d_final XOR rbx_val   -> rax (u64)
    # rax *= GOLD
    # ... splitmix
    # Then: rdx XOR edi_dec, rdx XOR eax
    # rdx *= GOLD
    # rdx splitmix
    # And finally: new_rdi = (rax_result << ...) XOR eax...
    tmp = _u64(r8d_final ^ rbx_val)
    tmp = _u64(tmp * GOLD)
    rcx_v = _u64((tmp >> 29) ^ tmp)
    rcx_v = _u64(rcx_v * SPLITMIX_C)
    eax_v = _u32(rcx_v)
    rdx_v = _u64(rcx_v >> 32)
    rdx_v = _u64(rdx_v ^ edi_dec)
    rdx_v = _u64(rdx_v ^ eax_v)
    rdx_v = _u64(rdx_v * GOLD)
    rax2 = _u64((rdx_v >> 29) ^ rdx_v)
    rax2 = _u64(rax2 * SPLITMIX_C)
    # rdi = (rax2 >> 32) ^ (rax2 & 0xffffffff)
    new_rdi = _u64((rax2 >> 32) ^ _u32(rax2))

    return r10d, r11d, edi_dec, expected_eax, new_rdi, rbx_val

def run_user_vm(depth, start_pc, arg0, arg1, debug=False):
    """Run the user-VM starting at start_pc with arg0 (-> r14) and arg1 (-> r15).
    Returns regs[3] (the final value of reg 3)."""
    if start_pc >= 0xC:
        return 0

    regs = [arg0, arg1, 0, 0]
    r14 = arg0
    r15 = arg1

    ecx_saved = BC1[start_pc]
    loop_count = BC2[start_pc]
    if loop_count == 0:
        # Return regs[3] which is 0 initially; or something — the code jumps to end
        return regs[3]

    # Initial rdi (fmix state) = ((start_pc + 1) * GOLD) XOR 0x800e8662e4a9258
    rdi = _u64(((start_pc + 1) * GOLD) ^ 0x800E8662E4A9258)

    for i in range(loop_count):
        r10d, r11d, edi_dec, _, new_rdi, rbx_val = _decrypt_instr(start_pc, i, rdi, ecx_saved)

        # Operand indices
        rbx_operand = r10d & 3                   # dst reg index
        r8_operand = (r10d >> 2) & 3             # src reg index

        # Opcode = ((r11d & 0xc000) | (r10d & 0x3000)) >> 12
        opcode = ((r11d & 0xC000) | (r10d & 0x3000)) >> 12
        if opcode > 10:
            raise ValueError(f'opcode {opcode} out of range')

        if debug:
            print(f'  pc={start_pc} i={i} op={opcode} rbx={rbx_operand} r8={r8_operand}')

        # Dispatch
        if   opcode == 0: regs[rbx_operand] = r14
        elif opcode == 1: regs[rbx_operand] = r15
        elif opcode == 2: regs[rbx_operand] = regs[r8_operand]
        elif opcode == 3: regs[rbx_operand] = _u64(regs[rbx_operand] + regs[r8_operand])
        elif opcode == 4: regs[rbx_operand] = _u64(regs[rbx_operand] - regs[r8_operand])
        elif opcode == 5: regs[rbx_operand] = _u64(regs[rbx_operand] ^ regs[r8_operand])
        elif opcode == 6: regs[rbx_operand] = _u64(regs[rbx_operand] & regs[r8_operand])
        elif opcode == 7: regs[rbx_operand] = _u64(regs[rbx_operand] | regs[r8_operand])
        elif opcode == 8: regs[rbx_operand] = _u64(~regs[rbx_operand])
        elif opcode == 9: regs[rbx_operand] = _u64(regs[rbx_operand] << 1)
        elif opcode == 10:
            if depth >= 4:
                regs[rbx_operand] = 0
            else:
                sub_pc = (r11d >> 16) & 0xF
                regs[rbx_operand] = run_user_vm(depth+1, sub_pc, r14, r15, debug)

        rdi = new_rdi

    return regs[3]

if __name__ == '__main__':
    # Smoke test: decrypt the first instruction at pc=0 (whatever that is)
    print(f'BC1[0..5] = {[hex(x) for x in BC1[:5]]}')
    print(f'BC2[0..5] = {[hex(x) for x in BC2[:5]]}')
    print(f'BC3[0..20] = {[hex(x) for x in BC3[:20]]}')
    # Run with dummy inputs to see if assertions hold
    try:
        r = run_user_vm(0, 0, 0x12345, 0x67890, debug=True)
        print(f'run_user_vm(0, 0, ...) = 0x{r:016x}')
    except AssertionError as e:
        print(f'Assertion failed: {e}')
    try:
        r = run_user_vm(0, 1, 0x12345, 0x67890, debug=True)
        print(f'run_user_vm(0, 1, ...) = 0x{r:016x}')
    except AssertionError as e:
        print(f'Assertion failed: {e}')
