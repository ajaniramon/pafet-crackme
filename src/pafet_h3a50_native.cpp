// pafet_h3a50_native.cpp  —  Jack IV-A deliverable.
// Native C++ port of the user-VM helper at 0x140003a50 (pafet.bin).
// Line-by-line port from the full disassembly (0x140003a50..0x140003c30).

#include "pafet_h3a50_native.h"

namespace pafet {

static constexpr uint64_t PHI    = 0x9e3779b97f4a7c15ULL;  // r15 constant
static constexpr uint64_t SPLIT  = 0x2545f4914f6cdd1dULL;  // r12 constant

template<typename T>
static inline T& ref_at(uint8_t* p, size_t off) {
    return *reinterpret_cast<T*>(p + off);
}
template<typename T>
static inline T load_at(const uint8_t* p, size_t off) {
    return *reinterpret_cast<const T*>(p + off);
}

uint64_t handler_h3a50(uint8_t* ctx, uint8_t* buf2) {
    // --- prolog loads (0x140003a6e..0x140003ab8) ---
    uint64_t r11  = load_at<uint64_t>(ctx, 0x218);
    uint64_t rbx  = load_at<uint64_t>(ctx, 0x1f8);
    uint64_t rdx  = load_at<uint8_t >(ctx, 0x27a);      // movzx edx, byte [rcx+0x27a]
    uint64_t rax  = load_at<uint64_t>(ctx, 0x1f0);
    uint64_t rbp  = load_at<uint64_t>(ctx, 0x1e8);
    uint64_t r14  = load_at<uint8_t >(ctx, 0x200);      // movzx r14d, byte
    uint64_t r10  = load_at<uint64_t>(ctx, 0x28);
    uint64_t rdi  = load_at<uint64_t>(ctx, 0x30);
    uint64_t rsi  = rax * 3;                             // lea rsi, [rax + rax*2]
    uint8_t  r14b = static_cast<uint8_t>(r14);

    // --- first rdx chain (0x140003abc..0x140003ad2) ---
    rdx *= rbx;
    rdx ^= rbp;
    rdx ^= rsi;
    uint64_t rax_tmp = rdx ^ r11;
    uint64_t r11_sub = r11 - rdx;
    // test r14b, r14b ; cmove r11, rax   => ZF=1 iff r14b==0 -> r11 = rax_tmp
    r11 = (r14b == 0) ? rax_tmp : r11_sub;

    // --- state updates (0x140003ad6..0x140003af2) ---
    rdi += 1;
    r10 *= PHI;
    ref_at<uint64_t>(ctx, 0x30) = rdi;
    r10 += SPLIT;
    ref_at<uint64_t>(ctx, 0x28) = r10;
    ctx[0x27a] = static_cast<uint8_t>(r10 >> 0x1b);
    // `movzx edx, al` at 0x140003aef clobbers rdx with (r10 >> 0x1b) & 0xff
    rdx = (r10 >> 0x1b) & 0xff;

    // --- second rdx chain -> ctx[0x218] (0x140003af8..0x140003b13) ---
    uint64_t rcx_tmp = r11;
    rdx *= rbx;
    rdx ^= rbp;
    rdx ^= rsi;
    rcx_tmp ^= rdx;                                       // rcx = r11 ^ rdx
    uint64_t rax_lea = r11 + rdx;                          // lea rax, [r11 + rdx]
    uint64_t ctx218 = (r14b == 0) ? rcx_tmp : rax_lea;    // cmove rax, rcx (ZF=1 -> rax=rcx)
    ref_at<uint64_t>(ctx, 0x218) = ctx218;

    // --- branch: if (int32_t)r11 <= 0 -> panic (0x140003b1a..0x140003b1d) ---
    if (static_cast<int32_t>(r11) <= 0) {
        // Panic path: edx='POPS' + call 0x1400029a0 (infinite loop/int3).
        std::abort();
    }

    // --- main-body (single pass, 0x140003b23..0x140003c0b) ---
    r10 *= PHI;
    uint64_t r8_old = static_cast<uint64_t>(static_cast<int32_t>(r11)) - 1;  // movsxd r8, r11d; dec r8
    uint64_t r11_sext = static_cast<uint64_t>(static_cast<int32_t>(r11));    // movsxd r11, r11d
    r10 += SPLIT;
    rdi += 1;
    ref_at<uint64_t>(ctx, 0x28) = r10;
    ref_at<uint64_t>(ctx, 0x30) = rdi;
    ctx[0x27a] = static_cast<uint8_t>(r10 >> 0x1b);
    // `movzx edx, al` at 0x140003b45 clobbers rdx again
    rdx = (r10 >> 0x1b) & 0xff;

    rdx *= rbx;
    uint64_t rbx_scaled = r8_old * 8;    // lea rbx, [r8*8]
    rdx ^= rbp;
    rdx ^= rsi;
    uint64_t rcx2 = rdx;
    rcx2 ^= r8_old;
    uint64_t rax_lea2 = rdx + r8_old;    // lea rax, [rdx + r8]
    uint64_t ctx218_new = (r14b == 0) ? rcx2 : rax_lea2;  // cmove rax, rcx
    ref_at<uint64_t>(ctx, 0x218) = ctx218_new;

    // --- compute rdx-mix (return value chain) ---
    uint64_t rax_mul    = r11_sext * load_at<uint64_t>(ctx, 0x190);
    uint8_t  byte_at    = ctx[0x89f + r8_old];
    uint64_t rcx_from_b = static_cast<uint64_t>(byte_at) * load_at<uint64_t>(ctx, 0x20);
    rcx_from_b ^= rax_mul;
    uint64_t rax_from_1160 = load_at<uint64_t>(ctx, 0x1160);  // (buf1 ptr sentinel; we use `buf1` arg)
    (void)rax_from_1160;
    rcx_from_b ^= load_at<uint64_t>(ctx, 0x188);
    uint64_t rdx_mix = rcx_from_b;
    uint64_t cl1_full = rcx_from_b >> 0x3a;
    uint8_t  cl1 = static_cast<uint8_t>(cl1_full);
    rdx_mix ^= load_at<uint64_t>(buf2, rbx_scaled);
    if (cl1 != 0) rdx_mix = ror64(rdx_mix, cl1);

    // --- compute r8-mix (buf1 write) ---
    r10 *= PHI;
    uint64_t rdi_plus1 = rdi + 1;
    ref_at<uint64_t>(ctx, 0x30) = rdi_plus1;
    r10 += SPLIT;
    ref_at<uint64_t>(ctx, 0x28) = r10;
    uint64_t r10_shr = r10 >> 0x1b;
    ctx[0x89f + r8_old] = static_cast<uint8_t>(r10_shr);
    uint64_t rax_mult1 = (r10_shr & 0xff) * load_at<uint64_t>(ctx, 0x20);
    uint64_t r11_mult  = r11_sext * load_at<uint64_t>(ctx, 0x190);
    uint64_t r8_mix = r8_old ^ load_at<uint64_t>(ctx, 0x28);
    rax_mult1 ^= r11_mult;
    rax_mult1 ^= load_at<uint64_t>(ctx, 0x188);
    uint8_t cl2 = static_cast<uint8_t>(rax_mult1 >> 0x3a);
    if (cl2 != 0) r8_mix = rol64(r8_mix, cl2);
    r8_mix ^= rax_mult1;

    ref_at<uint64_t>(buf2, rbx_scaled) = r8_mix;

    // --- return value: rdx (the rdx-mix we computed) ---
    return rdx_mix;
}

} // namespace pafet
