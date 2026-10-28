// pafet_uservm.h — Independent reconstruction of Pafet's user-VM
//
// Scope: this prototype reproduces the virtualized architecture observed in
// the original PE's user-VM subsystem (executor 0x140048960, dispatcher
// 0x14003f540, resolver 0x14003ebb0, materializer 0x140007610). It is NOT a
// line-by-line translation of Nikjoo's original source: it is an EQUIVALENT
// implementation grounded in runtime captures of the real binary.
//
// What is reproduced faithfully:
//   * 4 execution channels (ch=0..3), each with up to 62 opcodes (= 248 slots)
//   * Dispatch via a (channel, opcode) -> handler table
//   * 35 unique native handlers across the 4 channels (specialization by ch)
//   * Scratch register bank + input/output buffers in a VM context
//   * Program as a flat IR of (ch, op, operand_values[]) tuples captured by
//     hooking the real resolver at 0x14003ebb0 under Frida
//   * The computed function matches f_user(user) byte-exactly
//
// What is NOT a faithful bit-level reproduction:
//   * The ENCRYPTED bytecode blob (1752 B, 73 blocks) is not re-encoded; the
//     program is loaded as a plain IR table instead of a materialized blob.
//     Reasoning: full roundtrip (encrypt-then-materialize) requires the
//     permute8 + splitmix machinery of the original. We leave that as hook.
//   * The shadow state updater (DEAD/MEMT magic + fmix) is modeled as a no-op
//     because it is pure obfuscation with no observable effect on f_user.
//   * The PC obfuscation (ctx+0x210: 631 unique u64 tokens for 631 executed
//     instructions, formula  (((raw ^ (pc*0x7af13fd3 >> 13) ^ ...) * 0x1a8d))
//     is not applied; we use a plain linear PC.

#pragma once
#include <cstdint>
#include <cstddef>
#include <vector>
#include <array>
#include <string>

namespace pafet {

// --- Virtual state. Fields that are purely obfuscation in the original are
// omitted; a comment references the ctx offset in the original PE where
// applicable, so the mapping back to the original is explicit.
struct UserVM {
    // Functional state --------------------------------------------------
    std::vector<std::uint8_t> input;          // the username bytes
    std::vector<std::uint8_t> output;         // f_user(input), filled in-place
    std::uint32_t idx;                        // index into input (0..input.size()-1)
    std::uint32_t pc;                         // plain linear PC into the IR program
    std::array<std::uint8_t, 256> scratch{};  // register bank; original ctx+0x80..

    // Observed-but-non-functional fields (kept for structural fidelity)
    std::uint64_t pc_obfuscated;              // original ctx+0x210  (opaque token)
    std::uint64_t key_xor;                    // original ctx+0xf50  (rotates per inst)
    std::uint32_t buf_sz;                     // original ctx+0x1b8  (= 1752)
    void*         handler_tbl;                // original ctx+0xf40
    void*         handler_base;               // original ctx+0xf48

    // Diagnostics
    std::vector<std::string> trace;
};

// --- IR representation.
// Captured from Frida hook on the real resolver (0x14003ebb0) + operand
// reader (0x1400074d0). One Instr per observed VM instruction.
struct Instr {
    std::uint8_t  ch;       // channel 0..3
    std::uint8_t  op;       // opcode 0..61
    std::uint64_t pc_token; // raw ctx+0x210 observed at this instr (diagnostic)
    std::vector<std::uint8_t> operands; // operand reader returns (0..0x3d)
};

using Program = std::vector<Instr>;

// --- Handler type. Returns true if execution should continue.
using Handler = bool (*)(UserVM& vm, const Instr& inst);

// --- Dispatch
void init_dispatch();
bool dispatch(UserVM& vm, const Instr& inst);
void run(UserVM& vm, const Program& prog);

// --- Program loader
Program load_program_from_json(const std::string& path, const std::string& user_key);

// --- Reference oracle (for validation only; not called from handlers)
std::vector<std::uint8_t> f_user_reference(const std::vector<std::uint8_t>& user);

// --- Public handler enumeration (ch, op) -> name for diagnostics
const char* handler_name(std::uint8_t ch, std::uint8_t op);

} // namespace pafet
