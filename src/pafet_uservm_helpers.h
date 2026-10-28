// pafet_uservm_helpers.h — Reverse-engineered shared helpers of the user-VM.
//
// Three helpers were identified as "the real work" behind the 35 handler
// wrappers (which are mostly argument shuffling):
//
//   0x140005b50 — xor-mask writer (24/35 handlers call it)
//                 Writes buf_out[idx] ^= mask, buf_shadow[idx] ^= mask
//                 Mask = fmix64(idx*phi ^ ctx[0xd8] ^ ctx[0xb8] ^ ctx[0xb0])
//                 reduced to a byte via two shifts + xors; if the result is 0,
//                 the mask is substituted by 0x5a (THIS is where the famous
//                 XOR 0x5A in f_user comes from — as a fallback for the zero
//                 case, not as a universal operation).
//                 VERIFIED against Unicorn: 8/8 tests byte+state exact.
//
//   state_tick  — common prolog of 0x140003a50 (33/35 handlers) and
//                 0x140003880 (22/35). Two splitmix taps on ctx[0x28],
//                 updates ctx[0x30] (counter+=1 twice), ctx[0x27a] (byte state),
//                 and ctx[0x218] (VM pointer / handler sequence token) based on
//                 the obfuscation RNG. ctx[0x200] is a boolean that selects
//                 between XOR and ADD/SUB combines (cmove on test r14b).
//                 VERIFIED on 0x140003a50 (5/5 ctx fields exact).
//                 VERIFIED on 0x140003880 (5/5 ctx fields exact; r11 spill
//                 differs because 3880 keeps the state in r14 instead).
//
// Classification tags:
//   VERIFIED      — differential test vs Unicorn passes byte+state exact
//   PARTIAL       — covers only prolog or a subset of inputs
//   HYPOTHESIS    — static-only inference, not yet differentially tested
//   PLACEHOLDER   — unchanged from the structural-only prototype

#pragma once
#include <cstdint>

namespace pafet {

// ----- Common constants extracted from the native code ------
constexpr std::uint64_t PHI64   = 0x9e3779b97f4a7c15ULL;
constexpr std::uint64_t RAND_C  = 0x2545f4914f6cdd1dULL;
constexpr std::uint64_t FMIX_M1 = 0xff51afd7ed558ccdULL;
constexpr std::uint64_t FMIX_M2 = 0xc4ceb9fe1a85ec53ULL;

// ----- VirtState: the minimal functional subset of the original ctx -----
// Field offsets below are from the original PE ctx layout (verified by
// disassembly of the three helpers).
struct VirtState {
    // --- fields touched by 0x140005b50 (xor-mask writer)
    std::uint64_t field_d8   = 0;   // ctx[0xd8]   seed material A
    std::uint64_t field_b8   = 0;   // ctx[0xb8]   seed+counter (incremented by helper)
    std::uint64_t field_b0   = 0;   // ctx[0xb0]   seed material B (updated to r8|1)
    std::uint32_t field_1b8  = 0;   // ctx[0x1b8]  buffer size (bounds check)
    std::uint8_t* field_1b0  = nullptr; // ctx[0x1b0]  pointer to output buffer
    std::uint8_t* field_a8   = nullptr; // ctx[0xa8]   pointer to shadow buffer

    // --- fields touched by state_tick (both 0x140003a50 and 0x140003880)
    std::uint64_t field_218  = 0;   // ctx[0x218]  VM sequence token / "r11"
    std::uint64_t field_1f8  = 0;   // ctx[0x1f8]  multiplier
    std::uint8_t  field_27a  = 0;   // ctx[0x27a]  byte state
    std::uint64_t field_1f0  = 0;   // ctx[0x1f0]  seed (used *3 as rsi)
    std::uint64_t field_1e8  = 0;   // ctx[0x1e8]  seed xor material
    std::uint8_t  field_200  = 0;   // ctx[0x200]  boolean (sub vs xor path)
    std::uint64_t field_28   = 0;   // ctx[0x28]   splitmix state
    std::uint64_t field_30   = 0;   // ctx[0x30]   byte-index counter
    std::uint64_t field_20   = 0;   // ctx[0x20]   multiplier for operand hash
    std::uint64_t field_190  = 0;   // ctx[0x190]  multiplier for r11 hash
    std::uint64_t field_188  = 0;   // ctx[0x188]  xor material for operand hash
};


// ===========================================================================
// VERIFIED helper #1: xor-mask writer
// Native source: 0x140005b50
// Signature in native: void helper_5b50(ctx*, uint32 idx)
// Side-effect:
//   buf_out[idx]    ^= mask
//   buf_shadow[idx] ^= mask
//   ctx[0xb8]++
//   ctx[0xb0] = (fmix_r8) | 1
// where
//   fmix_r8 = fmix64(idx*PHI ^ ctx[0xd8] ^ ctx[0xb8] ^ ctx[0xb0])
//   b1 = (fmix_r8 >> 0x18) & 0xff
//   b2 = (fmix_r8 >> 0x28) & 0xff
//   cl = b1 ^ b2 ^ (fmix_r8 & 0xff)
//   mask = cl == 0 ? 0x5a : cl
// Validation: 8/8 against Unicorn with varied (d8, b8, b0, idx).
void helper_5b50_xor_mask_writer(VirtState& vs, std::uint32_t idx);


// ===========================================================================
// VERIFIED helper #2: state_tick (common prolog of 0x140003a50 and 0x140003880)
// Native source: 0x140003a6e..0x140003b13 (helper 0x140003a50) and the
// equivalent sequence at 0x1400038ba..0x14000394d (helper 0x140003880).
// Signature: void state_tick(ctx*)   (no args beyond ctx)
// Side-effect (byte-exact match vs Unicorn):
//   r11_mid       = cmove(field_218 ^ rdx, field_218 - rdx, field_200==0)
//   field_30     += 1
//   field_28     *= PHI; field_28 += RAND_C
//   field_27a     = (field_28 >> 0x1b) & 0xff
//   field_218     = cmove(r11_mid ^ rdx2, r11_mid + rdx2, field_200==0)
// where rdx, rdx2 are derived from (field_27a, field_1f8, field_1e8, field_1f0*3)
// Returns the intermediate r11_mid for callers that fork on its sign.
std::uint64_t helper_state_tick(VirtState& vs);


// ===========================================================================
// Full implementations of 0x140003a50 and 0x140003880 are MODELED (python
// side proves equivalence for the prolog but the post-prolog phases call
// into 0x1400029a0 which touches external state we don't yet model). Marked
// PARTIAL until that external helper is also understood.
void helper_3a50_PARTIAL(VirtState& vs);          // PARTIAL
void helper_3880_PARTIAL(VirtState& vs, std::uint64_t input_val); // PARTIAL

} // namespace pafet
