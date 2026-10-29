// pafet_uservm_native_vA.h  --  Jack V-A deliverable.
// Unified native API over the three verified user-VM helpers.
// Exposes 0x140005b50 (xor-mask writer), 0x140003a50 (buf2 qword writer),
// and 0x140003880 (buf2 rotated-rsi writer) as callable native functions,
// plus a coverage report by (channel, opcode) pair derived from runtime.
//
// Scope and honest limits:
//   - Each helper has been validated byte-exact against runtime captures
//     (0x140005b50: 40/40 asserts; 0x140003a50: 3/3 full ctx; 0x140003880:
//     5/5 full ctx).
//   - The helpers are PRIMITIVES invoked multiple times per VM instruction;
//     they are NOT the implementation of any specific (ch, op) handler.
//     A full-fidelity native dispatcher would also need to reverse the
//     ~35 wrappers that call them.
//   - This header provides a coverage view: given a trace, it reports what
//     fraction of (ch, op) pairs invoke at least one of the verified
//     primitives at least once. It does NOT replace the main prototype's
//     f_user fallback.

#pragma once
#include <cstdint>
#include <vector>
#include <string>
#include <unordered_map>

namespace pafet {

// Forward declarations of the verified helpers (defined elsewhere).
uint64_t handler_h3a50(uint8_t* ctx, uint8_t* buf2);
uint64_t handler_h3880(uint8_t* ctx, uint8_t* buf2, uint64_t rdx_arg);

// Semantic coverage summary for a captured trace.
struct CoverageSummary {
    size_t total_pairs_in_trace;      // unique (ch, op) seen
    size_t pairs_calling_h3a50;       // >= 1 call to 0x140003a50
    size_t pairs_calling_h3880;       // >= 1 call to 0x140003880
    size_t pairs_calling_h5b50;       // >= 1 call to 0x140005b50
    size_t pairs_calling_any_verified;
    size_t total_resolver_events;     // total dispatches in trace
    size_t h3a50_total_calls;
    size_t h3880_total_calls;
    size_t h5b50_total_calls;
};

// Load coverage from a Frida capture JSON produced by the V-A inspector.
CoverageSummary load_coverage_vA(const std::string& json_path);

// Print a human-readable summary.
void print_coverage(const CoverageSummary& c);

} // namespace pafet
