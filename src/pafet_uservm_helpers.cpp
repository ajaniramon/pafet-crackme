// pafet_uservm_helpers.cpp — Verified implementations of 3 shared user-VM helpers.
#include "pafet_uservm_helpers.h"
#include <cstddef>

namespace pafet {

// ----- VERIFIED #1: xor-mask writer (0x140005b50) -----
void helper_5b50_xor_mask_writer(VirtState& vs, std::uint32_t idx) {
    // Bounds check (native: cmp edx, [rcx+0x1b8]; jae fail)
    if (idx >= vs.field_1b8) return;

    std::uint64_t rcx = static_cast<std::uint64_t>(idx) * PHI64;
    rcx ^= vs.field_d8;
    rcx ^= vs.field_b8;
    rcx ^= vs.field_b0;

    // fmix64 (MurmurHash3 finalizer, two rounds visible then one more)
    std::uint64_t rax = rcx ^ (rcx >> 33);
    rax = rax * FMIX_M1;
    rcx = rax ^ (rax >> 33);
    rcx = rcx * FMIX_M2;
    std::uint64_t r8 = rcx ^ (rcx >> 33);

    // Extract byte from (r8 >> 0x18) ^ (r8 >> 0x28) ^ r8
    std::uint8_t al = static_cast<std::uint8_t>((r8 >> 0x18) & 0xff);
    std::uint8_t cl = static_cast<std::uint8_t>((r8 >> 0x28) & 0xff);
    cl = static_cast<std::uint8_t>(cl ^ al);
    cl = static_cast<std::uint8_t>(cl ^ static_cast<std::uint8_t>(r8 & 0xff));

    // cmove: if cl == 0 use 0x5a, else use cl  (this is where XOR 0x5A hides)
    std::uint8_t mask = (cl == 0) ? std::uint8_t(0x5a) : cl;

    // Apply mask to both buffers at idx
    if (vs.field_1b0) vs.field_1b0[idx] ^= mask;
    if (vs.field_a8)  vs.field_a8[idx]  ^= mask;

    // State updates (native: inc [r10+0xb8]; mov [r10+0xb0], r8|1)
    vs.field_b8 += 1;
    vs.field_b0 = r8 | 1ULL;
}


// ----- VERIFIED #2: state_tick (common prolog of 0x140003a50 and 0x140003880) -----
std::uint64_t helper_state_tick(VirtState& vs) {
    const std::uint64_t r11_in = vs.field_218;
    const std::uint64_t rbx    = vs.field_1f8;
    const std::uint8_t  dl     = vs.field_27a;
    const std::uint64_t rax0   = vs.field_1f0;
    const std::uint64_t rbp    = vs.field_1e8;
    const std::uint8_t  r14b   = vs.field_200;
    std::uint64_t r10          = vs.field_28;
    std::uint64_t rdi          = vs.field_30;

    const std::uint64_t rsi = rax0 * 3ULL;             // lea rsi,[rax+rax*2]

    std::uint64_t rdx = static_cast<std::uint64_t>(dl) * rbx;
    rdx ^= rbp;
    rdx ^= rsi;

    const std::uint64_t rax_xor_r11 = r11_in ^ rdx;
    const std::uint64_t r11_sub     = r11_in - rdx;
    // cmove rax, rax_xor_r11 if r14b == 0 (test r14b, r14b sets ZF iff zero)
    const std::uint64_t r11_mid = (r14b == 0) ? rax_xor_r11 : r11_sub;

    rdi += 1;
    r10 = r10 * PHI64;
    r10 += RAND_C;
    const std::uint8_t byte_state_new = static_cast<std::uint8_t>((r10 >> 0x1b) & 0xff);

    std::uint64_t rdx2 = static_cast<std::uint64_t>(byte_state_new) * rbx;
    rdx2 ^= rbp;
    rdx2 ^= rsi;

    const std::uint64_t cand_xor = r11_mid ^ rdx2;
    const std::uint64_t cand_add = r11_mid + rdx2;
    const std::uint64_t r218_new = (r14b == 0) ? cand_xor : cand_add;

    vs.field_30  = rdi;
    vs.field_28  = r10;
    vs.field_27a = byte_state_new;
    vs.field_218 = r218_new;
    return r11_mid;
}


// ----- PARTIAL #3 and #4: full helpers 0x140003a50 and 0x140003880 -----
// Status: prolog verified (uses helper_state_tick above). Post-prolog phases
// call into 0x1400029a0 (unmodeled external helper) and manipulate ctx[0x89f]
// (byte table) + ctx[0x1160][idx*8] (register array) which we have not yet
// bound to the VirtState. We expose the prolog alone for now; the post-prolog
// is not simulated.
void helper_3a50_PARTIAL(VirtState& vs) {
    (void)helper_state_tick(vs);
    // POST-PROLOG NOT IMPLEMENTED. See scripts/pafet_uservm_helpers_validate.py
    // for the Python model of the full function that proves the state_tick
    // part matches, and demonstrates where Unicorn stops at the 0x1400029a0
    // call that we don't yet simulate.
}

void helper_3880_PARTIAL(VirtState& vs, std::uint64_t input_val) {
    (void)input_val;
    (void)helper_state_tick(vs);
    // POST-PROLOG NOT IMPLEMENTED. See validate script for the model.
}

} // namespace pafet
