// pafet_h3a50_native.h  —  Native C++ port of pafet.bin::0x140003a50
// Jack IV-A deliverable.
//
// This is a pure-C++ reimplementation of the user-VM helper at 0x140003a50
// derived from the full .text disassembly (0x140003a50..0x140003c30, 480 B)
// and validated against the captured runtime vectors in
// vm_pools_evidence/usuario_vm_h3a50_fullctx_8k_alice.json.
//
// Contract (from disassembly + runtime capture verification):
//   - Takes pointers to ctx (8 KB) and buf2 (8 KB). ctx[0x1160] is the
//     stored pointer to buf2 in the real binary; we pass buf2 explicitly
//     to decouple from the recorded address.
//   - A separate buf1 (4 KB) is referenced in the captures but IS NOT
//     touched by this helper (verified: 0 diffs in all 3 captures).
//   - A single qword slot in buf2 at offset (r8_old * 8) is written.
//   - ctx fields at offsets 0x28, 0x30, 0x218, 0x27a, and byte at
//     (0x89f + r8_old) are updated.
//   - Returns the final rdx-mix value (rax at `ret`).
//   - If (int32_t)r11_updated <= 0 the native function enters a panic path
//     (edx='POPS' + call panic handler). We mirror this via std::abort().

#pragma once
#include <cstdint>
#include <cstdlib>

namespace pafet {

inline uint64_t ror64(uint64_t x, unsigned n) { n &= 63; return (x >> n) | (x << ((64 - n) & 63)); }
inline uint64_t rol64(uint64_t x, unsigned n) { n &= 63; return (x << n) | (x >> ((64 - n) & 63)); }

// Native port of 0x140003a50. Returns the function's rax (final rdx mix),
// mutates ctx and the one 8-byte slot in buf2 pointed to by ctx[0x1160].
uint64_t handler_h3a50(uint8_t* ctx, uint8_t* buf2);

} // namespace pafet
