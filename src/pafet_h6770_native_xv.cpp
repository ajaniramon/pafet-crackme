// Instruction-by-instruction port of 0x140006770 (166 insns + ret).
// Source: vm_pools_evidence/h6770_disasm_xv.txt
// Pure leaf fn — no calls. x64 register model mapped to C++ u64 locals.
#include "pafet_h6770_native_xv.h"
#include <cstring>

namespace pafet_h6770_native_xv {

static inline uint64_t rol64(uint64_t v, uint8_t c) {
    c &= 63;
    if (c == 0) return v;
    return (v << c) | (v >> (64 - c));
}

static inline uint64_t rd64(const uint8_t* ctx, size_t off) {
    uint64_t v;
    std::memcpy(&v, ctx + off, 8);
    return v;
}
static inline uint32_t rd32(const uint8_t* ctx, size_t off) {
    uint32_t v;
    std::memcpy(&v, ctx + off, 4);
    return v;
}
static inline uint8_t rd8(const uint8_t* ctx, size_t off) { return ctx[off]; }
static inline void wr64(uint8_t* ctx, size_t off, uint64_t v) {
    std::memcpy(ctx + off, &v, 8);
}
static inline void wr8(uint8_t* ctx, size_t off, uint8_t v) { ctx[off] = v; }

uint64_t run_h6770(uint8_t* ctx, uint64_t arg_rdx, uint32_t arg_r8d) {
    // 0x140006780  mov  r9d, [rcx+0xf10]
    uint64_t r9 = (uint64_t)rd32(ctx, 0xf10);
    // 0x140006787  mov  r15, rcx    (r15 = ctx base throughout)
    uint8_t* r15 = ctx;
    // 0x14000678a  mov  r10, [rcx+0xce8]
    uint64_t r10 = rd64(r15, 0xce8);
    // 0x140006791  movabs rax, 0x9e3779b97f4a7c15  (phi)
    const uint64_t PHI = 0x9e3779b97f4a7c15ULL;
    uint64_t rax = PHI;
    // 0x14000679b  mov  rcx, [rcx+0xd8]
    uint64_t rcx = rd64(r15, 0xd8);
    // 0x1400067a2  movabs r11, 0xff51afd7ed558ccd
    const uint64_t R11_CONST = 0xff51afd7ed558ccdULL;
    uint64_t r11 = R11_CONST;
    // 0x1400067ac  mov  [rsp+0x58], rcx   (save initial ctx[0xd8])
    uint64_t stack_58 = rcx;
    // 0x1400067b1  movabs rbx, 0xc4ceb9fe1a85ec53
    const uint64_t RBX_CONST = 0xc4ceb9fe1a85ec53ULL;
    uint64_t rbx = RBX_CONST;
    // 0x1400067bb  mov  r12d, r8d
    uint64_t r12 = (uint64_t)arg_r8d;
    // 0x1400067be  imul r12, rax   (r12 = r8d * phi)
    r12 = r12 * rax;
    // 0x1400067c2  mov  r13d, r8d
    uint64_t r13 = (uint64_t)arg_r8d;
    // 0x1400067c5  movabs rax, 0x95e8f2fe312fca73
    rax = 0x95e8f2fe312fca73ULL;
    // 0x1400067cf  add  rax, r12
    rax = rax + r12;
    // 0x1400067d2  mov  [rsp+0x48], r9
    uint64_t stack_48 = r9;
    // 0x1400067d7  xor  rax, rcx
    rax ^= rcx;
    // 0x1400067da  mov  [rsp+0x40], r10
    uint64_t stack_40 = r10;
    // 0x1400067df  xor  rax, r10
    rax ^= r10;
    // 0x1400067e2  xor  rax, r9
    rax ^= r9;
    // --- fmix64 chain on rax (shift 0x21 variant) ---
    // 0x1400067e5  mov  rcx, rax
    rcx = rax;
    // 0x1400067e8  shr  rcx, 0x21
    rcx >>= 0x21;
    // 0x1400067ec  xor  rcx, rax
    rcx ^= rax;
    // 0x1400067ef  imul rcx, r11
    rcx = rcx * r11;
    // 0x1400067f3  mov  rax, rcx
    rax = rcx;
    // 0x1400067f6  shr  rax, 0x21
    rax >>= 0x21;
    // 0x1400067fa  xor  rax, rcx
    rax ^= rcx;
    // 0x1400067fd  imul rax, rbx
    rax = rax * rbx;
    // 0x140006801  mov  r8, rax
    uint64_t r8 = rax;
    // 0x140006804  shr  r8, 0x21
    r8 >>= 0x21;
    // 0x140006808  xor  r8, rax
    r8 ^= rax;
    // 0x14000680b  mov  r14, r8
    uint64_t r14 = r8;
    // 0x14000680e  mov  ecx, r8d
    rcx = (uint32_t)r8;
    // 0x140006811  xor  r14, rdx     (rdx = arg_rdx)
    r14 ^= arg_rdx;
    // 0x140006814  and  ecx, 0x3f
    rcx = (uint32_t)rcx & 0x3f;
    // 0x140006817  je   0x14000681c   (if ecx == 0, skip rol)
    if (rcx != 0) {
        // 0x140006819  rol  r14, cl
        r14 = rol64(r14, (uint8_t)rcx);
    }
    // 0x14000681c  mov  rbp, [r15+0x688]
    uint64_t rbp = rd64(r15, 0x688);
    // 0x140006823  xor  r8, 0x44454331
    r8 ^= 0x44454331ULL;
    // 0x14000682a  mov  rax, r8
    rax = r8;
    // 0x14000682d  movabs rdx, 0xd6e8feb86659fd93
    uint64_t rdx = 0xd6e8feb86659fd93ULL;
    // 0x140006837  shr  rax, 0x21
    rax >>= 0x21;
    // 0x14000683b  xor  rax, r8
    rax ^= r8;
    // 0x14000683e  mov  r8, [r15+0x1e8]
    r8 = rd64(r15, 0x1e8);
    // 0x140006845  imul rax, r11
    rax = rax * r11;
    // 0x140006849  mov  rcx, rax
    rcx = rax;
    // 0x14000684c  shr  rcx, 0x21
    rcx >>= 0x21;
    // 0x140006850  xor  rcx, rax
    rcx ^= rax;
    // 0x140006853  imul rcx, rbx
    rcx = rcx * rbx;
    // 0x140006857  mov  rax, rcx
    rax = rcx;
    // 0x14000685a  shr  rax, 0x21
    rax >>= 0x21;
    // 0x14000685e  xor  rax, rcx
    rax ^= rcx;
    // 0x140006861  mov  ecx, 0x42524d4b
    rcx = 0x42524d4bULL;
    // 0x140006866  or   rax, 1
    rax |= 1;
    // 0x14000686a  imul r14, rax
    r14 = r14 * rax;
    // 0x14000686e  movabs rax, 0xc2b2ae3d6586a604
    rax = 0xc2b2ae3d6586a604ULL;
    // 0x140006878  lea  rsi, [r14 - 1]
    uint64_t rsi = r14 - 1;
    // 0x14000687c  cmp  rsi, r14
    // 0x14000687f  cmovae rcx, rax   (CF==0 → rcx=rax; CF=1 iff rsi<r14 unsigned)
    bool cf = (rsi < r14);  // sub rsi,r14 cf — but cmp sets CF iff a<b for unsigned
    // Actually cmp rsi, r14 → does rsi - r14; CF=1 iff rsi<r14 unsigned.
    // cmovae = cmov if CF==0, i.e. rsi >= r14 unsigned
    if (!cf) rcx = rax;
    // 0x140006883  mov  rax, r13
    rax = r13;
    // 0x140006886  imul rax, rdx
    rax = rax * rdx;
    // 0x14000688a  xor  rcx, rax
    rcx ^= rax;
    // 0x14000688d  xor  rcx, rbp
    rcx ^= rbp;
    // 0x140006890  xor  rcx, r10
    rcx ^= r10;
    // 0x140006893  mov  r10, [r15+0x210]
    r10 = rd64(r15, 0x210);
    // 0x14000689a  xor  rcx, r9
    rcx ^= r9;
    // 0x14000689d  movzx r9d, byte [r15+0x200]
    r9 = (uint64_t)rd8(r15, 0x200);
    // 0x1400068a5  mov  rax, rcx
    rax = rcx;
    // 0x1400068a8  shr  rax, 0x21
    rax >>= 0x21;
    // 0x1400068ac  xor  rax, rcx
    rax ^= rcx;
    // 0x1400068af  imul rax, r11
    rax = rax * r11;
    // 0x1400068b3  mov  r11, [r15+0x1f8]
    r11 = rd64(r15, 0x1f8);
    // 0x1400068ba  mov  rcx, rax
    rcx = rax;
    // 0x1400068bd  shr  rcx, 0x21
    rcx >>= 0x21;
    // 0x1400068c1  xor  rcx, rax
    rcx ^= rax;
    // 0x1400068c4  imul rcx, rbx
    rcx = rcx * rbx;
    // 0x1400068c8  mov  rbx, [r15+0x1f0]
    rbx = rd64(r15, 0x1f0);
    // 0x1400068cf  mov  rdi, rcx
    uint64_t rdi = rcx;
    // 0x1400068d2  add  rbx, rbx
    rbx = rbx + rbx;
    // 0x1400068d5  shr  rdi, 0x21
    rdi >>= 0x21;
    // 0x1400068d9  xor  rdi, rcx
    rdi ^= rcx;
    // 0x1400068dc  movzx ecx, byte [r15+0x279]
    rcx = (uint64_t)rd8(r15, 0x279);
    // 0x1400068e4  imul rcx, r11
    rcx = rcx * r11;
    // 0x1400068e8  xor  rcx, r8
    rcx ^= r8;
    // 0x1400068eb  xor  rcx, rbx
    rcx ^= rbx;
    // 0x1400068ee  mov  rax, rcx
    rax = rcx;
    // 0x1400068f1  xor  rax, r10
    rax ^= r10;
    // 0x1400068f4  sub  r10, rcx
    r10 = r10 - rcx;
    // 0x1400068f7  test r9b, r9b
    // 0x1400068fa  movabs rcx, 0x9e3779b97f4a7c15
    rcx = PHI;
    // 0x140006904  cmove r10, rax    (if r9b==0 → r10 = rax, else r10 unchanged)
    if ((r9 & 0xff) == 0) r10 = rax;
    // 0x140006908  inc  qword [r15+0x30]
    wr64(r15, 0x30, rd64(r15, 0x30) + 1);
    // 0x14000690c  mov  rax, [r15+0x28]
    rax = rd64(r15, 0x28);
    // 0x140006910  imul rax, rcx    (rcx = PHI)
    rax = rax * rcx;
    // 0x140006914  movabs rcx, 0x2545f4914f6cdd1d
    rcx = 0x2545f4914f6cdd1dULL;
    // 0x14000691e  add  rax, rcx
    rax = rax + rcx;
    // 0x140006921  mov  rcx, r10
    rcx = r10;
    // 0x140006924  mov  [r15+0x28], rax
    wr64(r15, 0x28, rax);
    // 0x140006928  shr  rax, 0x1b
    rax >>= 0x1b;
    // 0x14000692c  movzx edx, al
    rdx = (uint64_t)(uint8_t)rax;
    // 0x14000692f  mov  byte [r15+0x279], dl
    wr8(r15, 0x279, (uint8_t)rdx);
    // 0x140006936  imul rdx, r11
    rdx = rdx * r11;
    // 0x14000693a  xor  rdx, r8
    rdx ^= r8;
    // 0x14000693d  movabs r8, 0xc2b2ae3d27d4eb4f
    r8 = 0xc2b2ae3d27d4eb4fULL;
    // 0x140006947  xor  rdx, rbx
    rdx ^= rbx;
    // 0x14000694a  xor  rcx, rdx
    rcx ^= rdx;
    // 0x14000694d  test r9b, r9b
    // 0x140006950  lea  rax, [r10 + rdx]
    rax = r10 + rdx;
    // 0x140006954  mov  edx, r10d
    rdx = (uint32_t)r10;
    // 0x140006957  cmove rax, rcx    (if r9b==0 → rax=rcx)
    if ((r9 & 0xff) == 0) rax = rcx;
    // 0x14000695b  xor  rdx, rdi
    rdx ^= rdi;
    // 0x14000695e  mov  [r15+0x210], rax
    wr64(r15, 0x210, rax);
    // 0x140006965  cmp  rsi, r14
    // 0x140006968  movabs rax, 0xd6e8feb8240ba9d2
    rax = 0xd6e8feb8240ba9d2ULL;
    // 0x140006972  mov  ecx, 0x42525441
    rcx = 0x42525441ULL;
    // 0x140006977  cmovae rcx, rax    (CF==0 iff rsi>=r14 unsigned)
    cf = (rsi < r14);
    if (!cf) rcx = rax;
    // 0x14000697b  mov  eax, edx
    rax = (uint32_t)rdx;
    // 0x14000697d  imul rax, r8
    rax = rax * r8;
    // 0x140006981  xor  r13, [rsp+0x58]
    r13 ^= stack_58;
    // 0x140006986  xor  rcx, rax
    rcx ^= rax;
    // 0x140006989  mov  rbx, [rsp+0x50]   (never initialized? on real stack rbx was pushed; we didn't model, assume 0)
    // In the real function, rsp+0x50 is the pushed-r12/r14 area. Since we only
    // use rbx below as a scratch for the final two fmix64 chains, verify:
    // 0x14000698e  xor  rcx, rbp         (rbp still = ctx[0x688])
    // 0x140006991  xor  rcx, [rsp+0x40]  (= initial r10 = ctx[0xce8])
    // 0x1400069a0  xor  rcx, [rsp+0x48]  (= initial r9 = ctx[0xf10])
    // 0x1400069a8  xor  rcx, r12         (= r8d * phi)
    // The `mov rbx, [rsp+0x50]` is dead code (rbx overwritten by movabs r9 at 0x1400069ab).
    // Skip.
    // 0x14000698e  xor  rcx, rbp
    rcx ^= rbp;
    // 0x140006991  xor  rcx, [rsp+0x40]
    rcx ^= stack_40;
    // 0x140006996  movabs r8, 0xff51afd7ed558ccd
    r8 = 0xff51afd7ed558ccdULL;
    // 0x1400069a0  xor  rcx, [rsp+0x48]
    rcx ^= stack_48;
    // 0x1400069a5  xor  r13, r14
    r13 ^= r14;
    // 0x1400069a8  xor  rcx, r12
    rcx ^= r12;
    // 0x1400069ab  movabs r9, 0xc4ceb9fe1a85ec53
    r9 = 0xc4ceb9fe1a85ec53ULL;
    // --- fmix64 on rcx into ctx[0xce0] (via xor) ---
    // 0x1400069b5  mov  rax, rcx
    rax = rcx;
    // 0x1400069b8  shr  rax, 0x21
    rax >>= 0x21;
    // 0x1400069bc  xor  rax, rcx
    rax ^= rcx;
    // 0x1400069bf  imul rax, r8
    rax = rax * r8;
    // 0x1400069c3  mov  rcx, rax
    rcx = rax;
    // 0x1400069c6  shr  rcx, 0x21
    rcx >>= 0x21;
    // 0x1400069ca  xor  rcx, rax
    rcx ^= rax;
    // 0x1400069cd  imul rcx, r9
    rcx = rcx * r9;
    // 0x1400069d1  mov  rax, rcx
    rax = rcx;
    // 0x1400069d4  shr  rax, 0x21
    rax >>= 0x21;
    // 0x1400069d8  xor  rax, rcx
    rax ^= rcx;
    // 0x1400069db  xor  rax, rdx
    rax ^= rdx;
    // 0x1400069de  xor  qword [r15+0xce0], rax
    wr64(r15, 0xce0, rd64(r15, 0xce0) ^ rax);
    // --- fmix64 on r13 into ctx[0xd8] ---
    // 0x1400069e5  mov  rax, r13
    rax = r13;
    // 0x1400069e8  shr  rax, 0x21
    rax >>= 0x21;
    // 0x1400069ec  xor  rax, r13
    rax ^= r13;
    // 0x1400069ef  imul rax, r8
    rax = rax * r8;
    // 0x1400069f3  mov  rcx, rax
    rcx = rax;
    // 0x1400069f6  shr  rcx, 0x21
    rcx >>= 0x21;
    // 0x1400069fa  xor  rcx, rax
    rcx ^= rax;
    // 0x1400069fd  imul rcx, r9
    rcx = rcx * r9;
    // 0x140006a01  mov  rax, rcx
    rax = rcx;
    // 0x140006a04  shr  rax, 0x21
    rax >>= 0x21;
    // 0x140006a08  xor  rax, rcx
    rax ^= rcx;
    // 0x140006a0b  mov  [r15+0xd8], rax
    wr64(r15, 0xd8, rax);
    // ret — rax at this point is the fmix64 of r13 (final ctx[0xd8])
    return rax;
}

} // namespace
