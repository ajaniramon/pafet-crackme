// Jack XV: byte-by-byte x64 port of 0x140006770 (686 B, 167 insns, 0 calls).
// Pure leaf function: fmix64-style hash chain mixing ctx state and args.
// Validated byte-exact against Unicorn vectors.
#pragma once
#include <cstdint>

namespace pafet_h6770_native_xv {

// ctx layout fields touched by 0x140006770 (offsets observed via disasm):
struct Ctx {
    uint8_t  raw[0x1000];  // >= 0xd8..0xf10 need to be addressable
    // Accessor helpers (little-endian x86):
    uint64_t& u64(size_t off) { return *reinterpret_cast<uint64_t*>(raw + off); }
    uint32_t& u32(size_t off) { return *reinterpret_cast<uint32_t*>(raw + off); }
    uint8_t&  u8 (size_t off) { return raw[off]; }
};

// Entry: rcx=ctx, rdx=arg_rdx, r8=arg_r8d (u32 effective)
// Returns: rax at ret time == final ctx[0xd8] value (per disasm).
uint64_t run_h6770(uint8_t* ctx, uint64_t arg_rdx, uint32_t arg_r8d);

} // namespace
