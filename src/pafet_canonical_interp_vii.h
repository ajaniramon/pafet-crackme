// pafet_canonical_interp_vii.h
// Jack VII: IR-driven interpreter of the user-VM, built on top of the
// 3 verified native helpers (0x140005b50, 0x140003a50, 0x140003880).
//
// Scope: this interpreter does NOT decode the canonical bytecode byte-by-byte
// (that requires a full reimplementation of the operand reader 0x1400074d0).
// Instead, it executes a pre-captured IR sequence (recorded via Frida from
// pafet_pass8.exe) and dispatches each (ch, op) through the native helpers
// where applicable. For (ch, op) pairs whose handler is NOT one of the 3
// reversed, the interpreter accounts for them via a passthrough that records
// the invocation but does not reproduce the side-effect.
//
// Validation metric: given alice's IR, the interpreter runs 629 instructions,
// invokes helpers in the same order as the PE did, and tracks the native-
// helper coverage.
#pragma once

#include <cstdint>
#include <string>
#include <vector>
#include "pafet_original_vm_xxiii.h"

namespace pafet_vii {

// Jack XXIII: a separate original-PE bytecode execution path. This overload
// does not replay captured IR and does not call the functional writer.
// Contract: logical PC/stack/register projection, not native encoded guards.
pafet_xxiii::LogicalState run_original_pe_xxiii(
    const std::string& pe_path,const std::vector<uint8_t>& user,
    size_t& executed,pafet_xxiii::Trace trace={},
    const std::array<uint64_t,256>& initial_registers={});

struct IRInstr {
    int idx;
    int ch;        // channel (0..3)
    int op;        // opcode (0..61)
    std::vector<uint8_t> operands;
    int next_op_encoded;  // last op_read.rax, == op of next instr (threaded code)
};

struct InterpStats {
    int instructions_executed = 0;
    int helper_h3a50_calls = 0;
    int helper_h3880_calls = 0;
    int helper_h5b50_calls = 0;
    int helper_coverage_pairs = 0;  // (ch,op) pairs that invoke at least one helper
    int threaded_chain_matches = 0; // next_op_encoded == next.op
    int threaded_chain_mismatches = 0;
    int byte_writer_hits = 0;       // Jack X: how many atomic byte-writer dispatches fired
    std::vector<uint8_t> output_buffer;  // Jack X: produced output
    bool completed = false;
};

// Jack XI: full definition before any use.
struct AtomicWriterEntry { int ch; int op; int byte_index; };

// Load IR from JSON (format: {"user": "...", "program": [{idx, ch, op, operands, next_op_encoded}, ...]})
bool load_ir(const std::string& json_path, std::vector<IRInstr>& out);

// Jack XI: load atomic_pairs array from JSON (format: "atomic_pairs": [[ch, op, byte_index], ...])
bool load_atomic_pairs(const std::string& json_path,
                        std::vector<AtomicWriterEntry>& out);
// Jack XI: load the user string field from JSON (format: "user": "...")
bool load_user(const std::string& json_path, std::string& out);

// Run the IR. The interpreter maintains a tiny simulated ctx state;
// native helpers are called where mapped. Returns stats.
InterpStats run_ir(const std::vector<IRInstr>& ir);

// Jack X: Run the IR with an input username. For every (ch, op) that matches
// one of the 5 atomic byte-writers identified by Jack IX, the native
// byte-writer transform is applied and the resulting byte is appended to
// the output buffer in the stats. Verify byte-exact against f_user.
InterpStats run_ir_with_user(const std::vector<IRInstr>& ir,
                              const std::string& user);

// Jack XI: Run the IR with an input username AND an explicit list of
// atomic byte-writer (ch, op) pairs captured for THIS input (position in
// the list is the byte_index for that writer). This generalises
// run_ir_with_user to arbitrary lengths without hardcoding the atomic
// pairs for length 5.
InterpStats run_ir_with_user_dynamic(
    const std::vector<IRInstr>& ir,
    const std::string& user,
    const std::vector<AtomicWriterEntry>& atomic_pairs);

// Verify the threaded-code property: for every i, ir[i].next_op_encoded
// should equal ir[i+1].op. Returns {matches, mismatches}.
std::pair<int, int> verify_threaded_code(const std::vector<IRInstr>& ir);

}  // namespace pafet_vii
