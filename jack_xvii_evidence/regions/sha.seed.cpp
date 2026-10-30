// Generated from original PE bytecode. Do not edit; regenerate with python -m devirt.
// PE SHA-256: fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a
// Contract: decoded User-VM state and byte-buffer host effects; native protection state excluded.
#include "runtime.hpp"
namespace pafet_devirt {
void execute_generated(State& s, const Trace& trace, size_t budget) {
    goto B0;
B0: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 0: native-region -> NATIVE_INITIALIZATION_REGION []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t seed = UINT64_C(0xe0f078b65dfb2724);
    s.registers[0] = seed;
    [[maybe_unused]] const uint64_t zero = UINT64_C(0x0);
    s.registers[1] = zero;
    [[maybe_unused]] const uint64_t size = s.source.size();
    s.registers[2] = size;
    s.stack = {};
    s.pc = 1; s.post_core_pc = s.pc;
    s.opcode_pc = 0; s.opcode = 0;
    s.pc = 1;
    ++s.steps;
    if (trace) trace(s);
    goto B1;
}
B1: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1: native-region -> NATIVE_INITIALIZATION_REGION []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t acc = s.registers[0];
    [[maybe_unused]] const uint64_t i = s.registers[1];
    [[maybe_unused]] const uint64_t byte = (s.source.at(i)) & UINT64_C(0xff);
    [[maybe_unused]] const uint64_t x = (acc ^ i);
    [[maybe_unused]] const uint64_t y = (x ^ byte);
    [[maybe_unused]] const uint64_t shift = UINT64_C(0x21);
    [[maybe_unused]] const uint64_t m1 = UINT64_C(0xff51afd7ed558ccd);
    [[maybe_unused]] const uint64_t m2 = UINT64_C(0xc4ceb9fe1a85ec53);
    [[maybe_unused]] const uint64_t a = ir_shr(y, shift, 64);
    [[maybe_unused]] const uint64_t b = (a ^ y);
    [[maybe_unused]] const uint64_t c = (b * m1);
    [[maybe_unused]] const uint64_t d = ir_shr(c, shift, 64);
    [[maybe_unused]] const uint64_t e = (d ^ c);
    [[maybe_unused]] const uint64_t f = (e * m2);
    [[maybe_unused]] const uint64_t g = ir_shr(f, shift, 64);
    [[maybe_unused]] const uint64_t next = (g ^ f);
    [[maybe_unused]] const uint64_t one = UINT64_C(0x1);
    [[maybe_unused]] const uint64_t inc = (i + one);
    [[maybe_unused]] const uint64_t size = s.registers[2];
    [[maybe_unused]] const uint64_t more = (inc < size);
    s.registers[0] = next;
    s.registers[1] = inc;
    s.stack = {};
    s.pc = 2; s.post_core_pc = s.pc;
    s.opcode_pc = 1; s.opcode = 0;
    s.pc = more != 0 ? 1 : 2;
    ++s.steps;
    if (trace) trace(s);
    if (more != 0) goto B1;
    goto B2;
}
B2: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 2: native-region -> NATIVE_INITIALIZATION_REGION []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t ret = s.registers[0];
    s.stack = {};
    s.pc = 3; s.post_core_pc = s.pc;
    s.opcode_pc = 2; s.opcode = 0;
    s.result = ret; s.halted = true;
    ++s.steps;
    if (trace) trace(s);
    return;
}
}
} // namespace pafet_devirt
