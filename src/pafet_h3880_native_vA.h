// pafet_h3880_native_vA.h  --  Native C++ port of pafet.bin::0x140003880
// Jack V-A deliverable.
//
// Line-by-line port of 0x140003880..0x140003a37 (~440 B of disassembly).
// Validated byte-exact against vm_pools_evidence/h3880_fullctx_ext_ivB.json
// (5 captured vectors with full ctx + buf2 and the real rdx/r8/r9 args).
//
// Contract (from disasm + runtime capture):
//   - Takes (ctx, buf2, rdx_arg) -- rdx_arg is the second argument of the
//     native call (`rdx` at entry). The native r8/r9 arguments are
//     DISCARDED early in the prologue (overwritten with ctx[0x27a] and
//     ctx[0x200] bytes).
//   - Reads ctx fields: 0x218, 0x1f8, 0x27a, 0x1f0, 0x1e8, 0x200, 0x30,
//     0x28, 0x20, 0x188, 0x190, 0x1160.
//   - Writes ctx fields: 0x30 (inc +2), 0x28, 0x27a, 0x218, byte at
//     (0x89f + r14_sext).
//   - Writes ONE qword to buf2 at offset (r14_sext * 8), containing the
//     rotated/xor-mixed rdx_arg.
//   - No return value of interest (rax at `ret` is the recomputed
//     ctx[0x218] value).
//   - Panic path (int32(r14)>0x3fe) mirrors std::abort().

#pragma once
#include <cstdint>
#include <cstdlib>

namespace pafet {

inline uint64_t rol64_v(uint64_t x, unsigned n) { n &= 63; return (x << n) | (x >> ((64 - n) & 63)); }

// Native port of 0x140003880. Mutates ctx and writes one qword to buf2.
// Returns the final ctx[0x218] value (rax at ret).
uint64_t handler_h3880(uint8_t* ctx, uint8_t* buf2, uint64_t rdx_arg);

} // namespace pafet
