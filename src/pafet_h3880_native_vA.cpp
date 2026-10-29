// pafet_h3880_native_vA.cpp  --  Jack V-A deliverable.
// Native C++ port of the user-VM helper at 0x140003880 (pafet.bin).
// Line-by-line translation from the full disassembly 0x140003880..0x140003a37.

#include "pafet_h3880_native_vA.h"

namespace pafet {

static constexpr uint64_t PHI_V   = 0x9e3779b97f4a7c15ULL;  // r15 constant
static constexpr uint64_t SPLIT_V = 0x2545f4914f6cdd1dULL;  // r12 constant

template<typename T>
static inline T& ref_at_v(uint8_t* p, size_t off) {
    return *reinterpret_cast<T*>(p + off);
}
template<typename T>
static inline T load_at_v(const uint8_t* p, size_t off) {
    return *reinterpret_cast<const T*>(p + off);
}

uint64_t handler_h3880(uint8_t* ctx, uint8_t* buf2, uint64_t rdx_arg) {
    // --- prolog loads (0x14000389e..0x1400038e4) ---
    uint64_t r14  = load_at_v<uint64_t>(ctx, 0x218);
    uint64_t rsi  = rdx_arg;                              // mov rsi, rdx  (preserve arg2)
    uint64_t r11  = load_at_v<uint64_t>(ctx, 0x1f8);
    // rdi = rcx (just ctx pointer)
    uint64_t r8   = load_at_v<uint8_t >(ctx, 0x27a);     // movzx r8d (OVERRIDES r8 arg)
    uint64_t rax  = load_at_v<uint64_t>(ctx, 0x1f0);
    uint64_t r10  = load_at_v<uint64_t>(ctx, 0x1e8);
    uint64_t r9   = load_at_v<uint8_t >(ctx, 0x200);     // movzx r9d (OVERRIDES r9 arg)
    uint64_t rbp  = load_at_v<uint64_t>(ctx, 0x30);
    uint8_t  r9b  = static_cast<uint8_t>(r9);

    // --- first r8 chain -> r14 (0x1400038e8..0x140003906) ---
    r8 *= r11;
    uint64_t rbx = rax * 3;                               // lea rbx, [rax + rax*2]
    uint64_t rax_tmp = r14;
    r8 ^= r10;
    r8 ^= rbx;
    rax_tmp ^= r8;                                        // rax_tmp = r14 ^ r8
    uint64_t r14_sub = r14 - r8;
    r8 = load_at_v<uint64_t>(ctx, 0x28);                  // mov r8, [rcx+0x28] (NEW r8)
    r14 = (r9b == 0) ? rax_tmp : r14_sub;                 // cmove r14, rax_tmp (ZF=1 iff r9b==0)

    // --- state updates (0x14000390a..0x140003926) ---
    rbp += 1;
    r8 *= PHI_V;
    ref_at_v<uint64_t>(ctx, 0x30) = rbp;
    r8 += SPLIT_V;
    ref_at_v<uint64_t>(ctx, 0x28) = r8;
    uint64_t rdx = (r8 >> 0x1b) & 0xff;                   // movzx edx, al (al = (r8>>0x1b)&0xff)
    ctx[0x27a] = static_cast<uint8_t>(rdx);

    // --- second rdx chain -> ctx[0x218] (0x14000392c..0x140003947) ---
    uint64_t rcx_tmp = r14;                               // mov rcx, r14
    rdx *= r11;
    rdx ^= r10;
    rdx ^= rbx;
    rcx_tmp ^= rdx;                                       // rcx = r14 ^ rdx
    uint64_t rax_lea = r14 + rdx;                         // lea rax, [r14 + rdx]
    uint64_t ctx218_first = (r9b == 0) ? rcx_tmp : rax_lea; // cmove rax, rcx
    ref_at_v<uint64_t>(ctx, 0x218) = ctx218_first;

    // --- branch: panic if int32(r14) > 0x3fe (0x14000394e..0x140003955) ---
    if (static_cast<int32_t>(r14) > 0x3fe) {
        std::abort();
    }

    // --- main body (0x14000395b..) ---
    r8 *= PHI_V;
    uint64_t rbp_plus_one = rbp + 1;                      // lea rax, [rbp+1]
    int64_t r9_sxt = static_cast<int32_t>(r14);           // movsxd r9, r14d (sign-extend 32->64)
    uint64_t r9_new = static_cast<uint64_t>(r9_sxt);
    ref_at_v<uint64_t>(ctx, 0x30) = rbp_plus_one;
    r8 += SPLIT_V;
    ref_at_v<uint64_t>(ctx, 0x28) = r8;
    uint32_t eax_lea = static_cast<uint32_t>(r14) + 1;    // lea eax, [r14+1] (32-bit)
    r8 >>= 0x1b;                                           // shr r8, 0x1b
    rdx = r8 & 0xff;                                       // movzx edx, r8b
    int64_t r8_sxt = static_cast<int32_t>(eax_lea);        // movsxd r8, eax
    uint64_t r8_new = static_cast<uint64_t>(r8_sxt);

    // mov byte ptr [r9 + rdi + 0x89f], dl  -> ctx[0x89f + r9_new] = dl
    // Note: r9_new is a signed sign-extended value from r14d; for r14d<=0x3fe
    // the value is non-negative so the offset into ctx[0x89f + r9] is valid.
    ctx[0x89f + static_cast<size_t>(r9_sxt)] = static_cast<uint8_t>(rdx);

    uint64_t rax_mul   = r8_new * load_at_v<uint64_t>(ctx, 0x190);
    rdx *= load_at_v<uint64_t>(ctx, 0x20);
    rdx ^= rax_mul;
    rdx ^= load_at_v<uint64_t>(ctx, 0x188);
    uint8_t cl = static_cast<uint8_t>(rdx >> 0x3a);
    if (cl != 0) {
        rsi = rol64_v(rsi, cl);                           // rol rsi, cl
    }
    uint64_t rax_1160 = load_at_v<uint64_t>(ctx, 0x1160); // mov rax, [rdi+0x1160] (buf2 base inside PE)
    (void)rax_1160;                                        // we use `buf2` arg directly
    rsi ^= rdx;                                            // xor rsi, rdx

    // mov qword ptr [rax + r9*8], rsi -> buf2[r9_new * 8] = rsi
    ref_at_v<uint64_t>(buf2, static_cast<size_t>(r9_sxt) * 8) = rsi;

    uint64_t rax2 = load_at_v<uint64_t>(ctx, 0x28);        // mov rax, [rdi+0x28]
    // inc qword ptr [rdi+0x30]
    ref_at_v<uint64_t>(ctx, 0x30) = load_at_v<uint64_t>(ctx, 0x30) + 1;
    rax2 *= PHI_V;
    rax2 += SPLIT_V;
    ref_at_v<uint64_t>(ctx, 0x28) = rax2;
    uint64_t rax2_shr = rax2 >> 0x1b;
    uint64_t rdx2 = rax2_shr & 0xff;                       // movzx edx, al
    uint64_t rax3 = load_at_v<uint64_t>(ctx, 0x1f0);
    ctx[0x27a] = static_cast<uint8_t>(rdx2);
    rdx2 *= load_at_v<uint64_t>(ctx, 0x1f8);
    uint64_t rcx3 = rax3 * 3;                              // lea rcx, [rax + rax*2]
    rdx2 ^= rcx3;
    rdx2 ^= load_at_v<uint64_t>(ctx, 0x1e8);
    uint64_t rcx3b = rdx2 ^ r8_new;                        // rcx = rdx ^ r8
    uint8_t ctx200_byte = ctx[0x200];                      // cmp byte ptr [rdi+0x200], 0
    uint64_t rax4_lea = rdx2 + r8_new;                     // lea rax, [rdx + r8]
    uint64_t ctx218_final = (ctx200_byte == 0) ? rcx3b : rax4_lea;  // cmove rax, rcx
    ref_at_v<uint64_t>(ctx, 0x218) = ctx218_final;

    return ctx218_final;
}

} // namespace pafet
