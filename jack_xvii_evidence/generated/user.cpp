// Generated from original PE bytecode. Do not edit; regenerate with python -m devirt.
// PE SHA-256: fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a
// Contract: decoded User-VM state and byte-buffer host effects; native protection state excluded.
#include "runtime.hpp"
namespace pafet_devirt {
// copy_input; 0x140048960; writer 0x140048a28..0x140048a3e
[[maybe_unused]] static uint64_t host_0(State& s) {
    s.working = s.source;
    [[maybe_unused]] const uint64_t zero = UINT64_C(0x0);
    return zero;
}
// reverse_bytes; 0x140048960; writer 0x140048a28..0x140048a3e
[[maybe_unused]] static uint64_t host_1(State& s) {
    std::reverse(s.working.begin(), s.working.end());
    [[maybe_unused]] const uint64_t zero = UINT64_C(0x0);
    return zero;
}
// set_index; 0x140048960; writer 0x140048a28..0x140048a3e
[[maybe_unused]] static uint64_t host_2(State& s, uint64_t arg0) {
    s.index = arg0;
    [[maybe_unused]] const uint64_t zero = UINT64_C(0x0);
    return zero;
}
// has_byte; 0x140048960; writer 0x140048a28..0x140048a3e
[[maybe_unused]] static uint64_t host_3(State& s) {
    [[maybe_unused]] const uint64_t i = s.index;
    [[maybe_unused]] const uint64_t n = s.working.size();
    [[maybe_unused]] const uint64_t more = (i < n);
    return more;
}
// rewrite_byte; 0x140048960; writer 0x140048a28..0x140048a3e
uint64_t host_4(State& s) {
    [[maybe_unused]] const uint64_t i = s.index;
    [[maybe_unused]] const uint64_t b = (s.working.at(i)) & UINT64_C(0xff);
    [[maybe_unused]] const uint64_t key = (UINT64_C(0x5a)) & UINT64_C(0xff);
    [[maybe_unused]] const uint64_t x = ((b ^ key)) & UINT64_C(0xff);
    [[maybe_unused]] const uint64_t seven = (UINT64_C(0x7)) & UINT64_C(0xff);
    [[maybe_unused]] const uint64_t a = ((x + seven)) & UINT64_C(0xff);
    [[maybe_unused]] const uint64_t three = UINT64_C(0x3);
    [[maybe_unused]] const uint64_t delta = ((i * three)) & UINT64_C(0xff);
    [[maybe_unused]] const uint64_t byte = ((a + delta)) & UINT64_C(0xff);
    s.working.at(i) = uint8_t(byte);
    [[maybe_unused]] const uint64_t ret = ((byte & UINT64_C(0x80)) ? (byte | UINT64_C(0xffffffffffffff00)) : (byte & UINT64_C(0xff)));
    return ret;
}
// get_index; 0x140048960; writer 0x140048a28..0x140048a3e
[[maybe_unused]] static uint64_t host_5(State& s) {
    [[maybe_unused]] const uint64_t i = s.index;
    return i;
}
// publish_output; 0x140048960; writer 0x140048a28..0x140048a3e
[[maybe_unused]] static uint64_t host_6(State& s) {
    s.output = s.working;
    [[maybe_unused]] const uint64_t zero = UINT64_C(0x0);
    return zero;
}
void execute_generated(State& s, const Trace& trace, size_t budget) {
    goto B0;
B0: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 0: 5b4afa72c8 -> LOAD_CONST [0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v0 = UINT64_C(0x2b6195d8ae764b05);
    s.stack = {v0};
    s.pc = 5; s.post_core_pc = s.pc;
    s.opcode_pc = 0; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 5: 5b02b90ac6 -> LOAD_CONST [1]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v5 = UINT64_C(0xd49e6a275189b4fb);
    s.stack = {v0, v5};
    s.pc = 10; s.post_core_pc = s.pc;
    s.opcode_pc = 5; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 10: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v10 = (v0 + v5);
    s.stack = {v10};
    s.pc = 11; s.post_core_pc = s.pc;
    s.opcode_pc = 10; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 11: 1eabbf -> STORE_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[8] = v10;
    s.stack = {};
    s.pc = 14; s.post_core_pc = s.pc;
    s.opcode_pc = 11; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 14: 365886ad -> CALL [0, 0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v14 = host_0(s);
    s.stack = {v14};
    s.pc = 18; s.post_core_pc = s.pc;
    s.opcode_pc = 14; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 18: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 19; s.post_core_pc = s.pc;
    s.opcode_pc = 18; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 19: 9070c553bd -> JUMP [1]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 24; s.post_core_pc = s.pc;
    s.opcode_pc = 19; s.opcode = 26;
    s.pc = 72;
    ++s.steps;
    if (trace) trace(s);
    goto B72;
}
B24: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 24: 6778dd -> LOAD_REG [2]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v24 = s.registers[2];
    s.stack = {v24};
    s.pc = 27; s.post_core_pc = s.pc;
    s.opcode_pc = 24; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 27: 678da3 -> LOAD_REG [6]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v27 = s.registers[6];
    s.stack = {v24, v27};
    s.pc = 30; s.post_core_pc = s.pc;
    s.opcode_pc = 27; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 30: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v30 = (v24 != v27);
    s.stack = {v30};
    s.pc = 31; s.post_core_pc = s.pc;
    s.opcode_pc = 30; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 31: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 32; s.post_core_pc = s.pc;
    s.opcode_pc = 31; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 32: 90aec1c697 -> JUMP [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 37; s.post_core_pc = s.pc;
    s.opcode_pc = 32; s.opcode = 26;
    s.pc = 672;
    ++s.steps;
    if (trace) trace(s);
    goto B672;
}
B48: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 48: 5b73e5265d -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v48 = UINT64_C(0x12);
    s.stack = {v48};
    s.pc = 53; s.post_core_pc = s.pc;
    s.opcode_pc = 48; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 53: 1ed082 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v48;
    s.stack = {};
    s.pc = 56; s.post_core_pc = s.pc;
    s.opcode_pc = 53; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 56: 670b4b -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v56 = s.registers[5];
    s.stack = {v56};
    s.pc = 59; s.post_core_pc = s.pc;
    s.opcode_pc = 56; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 59: 5b7752459e -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v59 = UINT64_C(0x5a);
    s.stack = {v56, v59};
    s.pc = 64; s.post_core_pc = s.pc;
    s.opcode_pc = 59; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 64: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v64 = (v56 ^ v59);
    s.stack = {v64};
    s.pc = 65; s.post_core_pc = s.pc;
    s.opcode_pc = 64; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 65: 90b10e18f0 -> JUMP [60]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v64};
    s.pc = 70; s.post_core_pc = s.pc;
    s.opcode_pc = 65; s.opcode = 26;
    s.pc = 1056;
    ++s.steps;
    if (trace) trace(s);
    goto B1056;
}
B72: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 72: 5bd4e01896 -> LOAD_CONST [2]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v72 = UINT64_C(0xad2405c91c8c83c1);
    s.stack = {v72};
    s.pc = 77; s.post_core_pc = s.pc;
    s.opcode_pc = 72; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 77: 1e7986 -> STORE_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[8] = v72;
    s.stack = {};
    s.pc = 80; s.post_core_pc = s.pc;
    s.opcode_pc = 77; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 80: 67525b -> LOAD_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v80 = s.registers[8];
    s.stack = {v80};
    s.pc = 83; s.post_core_pc = s.pc;
    s.opcode_pc = 80; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 83: 5bfa17795a -> LOAD_CONST [3]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v83 = UINT64_C(0x52dbfa36e3737c3e);
    s.stack = {v80, v83};
    s.pc = 88; s.post_core_pc = s.pc;
    s.opcode_pc = 83; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 88: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v88 = (v80 ^ v83);
    s.stack = {v88};
    s.pc = 89; s.post_core_pc = s.pc;
    s.opcode_pc = 88; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 89: 900bfaeba0 -> JUMP [2]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v88};
    s.pc = 94; s.post_core_pc = s.pc;
    s.opcode_pc = 89; s.opcode = 26;
    s.pc = 960;
    ++s.steps;
    if (trace) trace(s);
    goto B960;
}
B96: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 96: 5beeb3b1db -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v96 = UINT64_C(0x5a);
    s.stack = {v96};
    s.pc = 101; s.post_core_pc = s.pc;
    s.opcode_pc = 96; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 101: 5bbdc6bab2 -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v101 = UINT64_C(0x5a);
    s.stack = {v96, v101};
    s.pc = 106; s.post_core_pc = s.pc;
    s.opcode_pc = 101; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 106: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v106 = (v96 ^ v101);
    s.stack = {v106};
    s.pc = 107; s.post_core_pc = s.pc;
    s.opcode_pc = 106; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 107: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 108; s.post_core_pc = s.pc;
    s.opcode_pc = 107; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 108: 90b6ac4ebb -> JUMP [16]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 113; s.post_core_pc = s.pc;
    s.opcode_pc = 108; s.opcode = 26;
    s.pc = 648;
    ++s.steps;
    if (trace) trace(s);
    goto B648;
}
B120: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 120: 6786b1 -> LOAD_REG [4]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v120 = s.registers[4];
    s.stack = {v120};
    s.pc = 123; s.post_core_pc = s.pc;
    s.opcode_pc = 120; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 123: 5b9a12dc59 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v123 = UINT64_C(0x12);
    s.stack = {v120, v123};
    s.pc = 128; s.post_core_pc = s.pc;
    s.opcode_pc = 123; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 128: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v128 = (v120 + v123);
    s.stack = {v128};
    s.pc = 129; s.post_core_pc = s.pc;
    s.opcode_pc = 128; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 129: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 130; s.post_core_pc = s.pc;
    s.opcode_pc = 129; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 130: 9023c85587 -> JUMP [53]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 135; s.post_core_pc = s.pc;
    s.opcode_pc = 130; s.opcode = 26;
    s.pc = 288;
    ++s.steps;
    if (trace) trace(s);
    goto B288;
}
B144: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 144: 67ae48 -> LOAD_REG [4]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v144 = s.registers[4];
    s.stack = {v144};
    s.pc = 147; s.post_core_pc = s.pc;
    s.opcode_pc = 144; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 147: 67edf7 -> LOAD_REG [14]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v147 = s.registers[14];
    s.stack = {v144, v147};
    s.pc = 150; s.post_core_pc = s.pc;
    s.opcode_pc = 147; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 150: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v150 = (v144 != v147);
    s.stack = {v150};
    s.pc = 151; s.post_core_pc = s.pc;
    s.opcode_pc = 150; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 151: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 152; s.post_core_pc = s.pc;
    s.opcode_pc = 151; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 152: 9004b8d0a6 -> JUMP [66]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 157; s.post_core_pc = s.pc;
    s.opcode_pc = 152; s.opcode = 26;
    s.pc = 1656;
    ++s.steps;
    if (trace) trace(s);
    goto B1656;
}
B168: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 168: 671beb -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v168 = s.registers[5];
    s.stack = {v168};
    s.pc = 171; s.post_core_pc = s.pc;
    s.opcode_pc = 168; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 171: 5bbb95b580 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v171 = UINT64_C(0xfa);
    s.stack = {v168, v171};
    s.pc = 176; s.post_core_pc = s.pc;
    s.opcode_pc = 171; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 176: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v176 = (v168 + v171);
    s.stack = {v176};
    s.pc = 177; s.post_core_pc = s.pc;
    s.opcode_pc = 176; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 177: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 178; s.post_core_pc = s.pc;
    s.opcode_pc = 177; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 178: 90b91939f1 -> JUMP [39]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 183; s.post_core_pc = s.pc;
    s.opcode_pc = 178; s.opcode = 26;
    s.pc = 1728;
    ++s.steps;
    if (trace) trace(s);
    goto B1728;
}
B192: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 192: 672339 -> LOAD_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v192 = s.registers[8];
    s.stack = {v192};
    s.pc = 195; s.post_core_pc = s.pc;
    s.opcode_pc = 192; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 195: 5b537988f5 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v195 = UINT64_C(0x12);
    s.stack = {v192, v195};
    s.pc = 200; s.post_core_pc = s.pc;
    s.opcode_pc = 195; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 200: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v200 = (v192 + v195);
    s.stack = {v200};
    s.pc = 201; s.post_core_pc = s.pc;
    s.opcode_pc = 200; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 201: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 202; s.post_core_pc = s.pc;
    s.opcode_pc = 201; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 202: 90a3f40a1d -> JUMP [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 207; s.post_core_pc = s.pc;
    s.opcode_pc = 202; s.opcode = 26;
    s.pc = 120;
    ++s.steps;
    if (trace) trace(s);
    goto B120;
}
B216: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 216: 5b5ab2fae3 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v216 = UINT64_C(0x12);
    s.stack = {v216};
    s.pc = 221; s.post_core_pc = s.pc;
    s.opcode_pc = 216; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 221: 5b98b63587 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v221 = UINT64_C(0xfa);
    s.stack = {v216, v221};
    s.pc = 226; s.post_core_pc = s.pc;
    s.opcode_pc = 221; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 226: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v226 = (v216 ^ v221);
    s.stack = {v226};
    s.pc = 227; s.post_core_pc = s.pc;
    s.opcode_pc = 226; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 227: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 228; s.post_core_pc = s.pc;
    s.opcode_pc = 227; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 228: 906237721c -> JUMP [71]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 233; s.post_core_pc = s.pc;
    s.opcode_pc = 228; s.opcode = 26;
    s.pc = 576;
    ++s.steps;
    if (trace) trace(s);
    goto B576;
}
B240: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 240: 5b32d4ad68 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v240 = UINT64_C(0x12);
    s.stack = {v240};
    s.pc = 245; s.post_core_pc = s.pc;
    s.opcode_pc = 240; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 245: 5b0c0c7e6d -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v245 = UINT64_C(0x5a);
    s.stack = {v240, v245};
    s.pc = 250; s.post_core_pc = s.pc;
    s.opcode_pc = 245; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 250: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v250 = (v240 ^ v245);
    s.stack = {v250};
    s.pc = 251; s.post_core_pc = s.pc;
    s.opcode_pc = 250; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 251: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 252; s.post_core_pc = s.pc;
    s.opcode_pc = 251; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 252: 908bc2c275 -> JUMP [52]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 257; s.post_core_pc = s.pc;
    s.opcode_pc = 252; s.opcode = 26;
    s.pc = 600;
    ++s.steps;
    if (trace) trace(s);
    goto B600;
}
B264: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 264: 5b7b3e8859 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v264 = UINT64_C(0xfa);
    s.stack = {v264};
    s.pc = 269; s.post_core_pc = s.pc;
    s.opcode_pc = 264; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 269: 5b54aa37e4 -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v269 = UINT64_C(0x5a);
    s.stack = {v264, v269};
    s.pc = 274; s.post_core_pc = s.pc;
    s.opcode_pc = 269; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 274: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v274 = ((v264 ^ UINT64_C(0x8000000000000000)) < (v269 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v274};
    s.pc = 275; s.post_core_pc = s.pc;
    s.opcode_pc = 274; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 275: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 276; s.post_core_pc = s.pc;
    s.opcode_pc = 275; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 276: 9016e1a50d -> JUMP [27]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 281; s.post_core_pc = s.pc;
    s.opcode_pc = 276; s.opcode = 26;
    s.pc = 1152;
    ++s.steps;
    if (trace) trace(s);
    goto B1152;
}
B288: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 288: 5b33d8dbd0 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v288 = UINT64_C(0xfa);
    s.stack = {v288};
    s.pc = 293; s.post_core_pc = s.pc;
    s.opcode_pc = 288; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 293: 5be089402b -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v293 = UINT64_C(0xfa);
    s.stack = {v288, v293};
    s.pc = 298; s.post_core_pc = s.pc;
    s.opcode_pc = 293; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 298: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v298 = (v288 ^ v293);
    s.stack = {v298};
    s.pc = 299; s.post_core_pc = s.pc;
    s.opcode_pc = 298; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 299: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 300; s.post_core_pc = s.pc;
    s.opcode_pc = 299; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 300: 908b20f6c9 -> JUMP [36]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 305; s.post_core_pc = s.pc;
    s.opcode_pc = 300; s.opcode = 26;
    s.pc = 360;
    ++s.steps;
    if (trace) trace(s);
    goto B360;
}
B312: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 312: 67d2ce -> LOAD_REG [13]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v312 = s.registers[13];
    s.stack = {v312};
    s.pc = 315; s.post_core_pc = s.pc;
    s.opcode_pc = 312; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 315: 67f44f -> LOAD_REG [14]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v315 = s.registers[14];
    s.stack = {v312, v315};
    s.pc = 318; s.post_core_pc = s.pc;
    s.opcode_pc = 315; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 318: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v318 = (v312 != v315);
    s.stack = {v318};
    s.pc = 319; s.post_core_pc = s.pc;
    s.opcode_pc = 318; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 319: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 320; s.post_core_pc = s.pc;
    s.opcode_pc = 319; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 320: 906567b8ee -> JUMP [42]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 325; s.post_core_pc = s.pc;
    s.opcode_pc = 320; s.opcode = 26;
    s.pc = 1560;
    ++s.steps;
    if (trace) trace(s);
    goto B1560;
}
B336: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 336: 5ba3143ccd -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v336 = UINT64_C(0xfa);
    s.stack = {v336};
    s.pc = 341; s.post_core_pc = s.pc;
    s.opcode_pc = 336; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 341: 1ef132 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v336;
    s.stack = {};
    s.pc = 344; s.post_core_pc = s.pc;
    s.opcode_pc = 341; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 344: 67eaf8 -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v344 = s.registers[5];
    s.stack = {v344};
    s.pc = 347; s.post_core_pc = s.pc;
    s.opcode_pc = 344; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 347: 5b8a75b905 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v347 = UINT64_C(0xfa);
    s.stack = {v344, v347};
    s.pc = 352; s.post_core_pc = s.pc;
    s.opcode_pc = 347; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 352: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v352 = (v344 ^ v347);
    s.stack = {v352};
    s.pc = 353; s.post_core_pc = s.pc;
    s.opcode_pc = 352; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 353: 90d19e8e0f -> JUMP [15]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v352};
    s.pc = 358; s.post_core_pc = s.pc;
    s.opcode_pc = 353; s.opcode = 26;
    s.pc = 1008;
    ++s.steps;
    if (trace) trace(s);
    goto B1008;
}
B360: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 360: 675a72 -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v360 = s.registers[5];
    s.stack = {v360};
    s.pc = 363; s.post_core_pc = s.pc;
    s.opcode_pc = 360; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 363: 67d548 -> LOAD_REG [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v363 = s.registers[11];
    s.stack = {v360, v363};
    s.pc = 366; s.post_core_pc = s.pc;
    s.opcode_pc = 363; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 366: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v366 = (v360 != v363);
    s.stack = {v366};
    s.pc = 367; s.post_core_pc = s.pc;
    s.opcode_pc = 366; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 367: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 368; s.post_core_pc = s.pc;
    s.opcode_pc = 367; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 368: 90f8754e1f -> JUMP [68]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 373; s.post_core_pc = s.pc;
    s.opcode_pc = 368; s.opcode = 26;
    s.pc = 696;
    ++s.steps;
    if (trace) trace(s);
    goto B696;
}
B384: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 384: 670be8 -> LOAD_REG [3]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v384 = s.registers[3];
    s.stack = {v384};
    s.pc = 387; s.post_core_pc = s.pc;
    s.opcode_pc = 384; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 387: 5b04d3b6f4 -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v387 = UINT64_C(0x5);
    s.stack = {v384, v387};
    s.pc = 392; s.post_core_pc = s.pc;
    s.opcode_pc = 387; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 392: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v392 = (v384 + v387);
    s.stack = {v392};
    s.pc = 393; s.post_core_pc = s.pc;
    s.opcode_pc = 392; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 393: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 394; s.post_core_pc = s.pc;
    s.opcode_pc = 393; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 394: 902d6902e9 -> JUMP [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 399; s.post_core_pc = s.pc;
    s.opcode_pc = 394; s.opcode = 26;
    s.pc = 1488;
    ++s.steps;
    if (trace) trace(s);
    goto B1488;
}
B408: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 408: 5bf2d7df0b -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v408 = UINT64_C(0xa7);
    s.stack = {v408};
    s.pc = 413; s.post_core_pc = s.pc;
    s.opcode_pc = 408; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 413: 77 -> NOT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v413 = ~v408;
    s.stack = {v413};
    s.pc = 414; s.post_core_pc = s.pc;
    s.opcode_pc = 413; s.opcode = 44;
    ++s.steps;
    if (trace) trace(s);
    // pc 414: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 415; s.post_core_pc = s.pc;
    s.opcode_pc = 414; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 415: 90a4cda61d -> JUMP [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 420; s.post_core_pc = s.pc;
    s.opcode_pc = 415; s.opcode = 26;
    s.pc = 1224;
    ++s.steps;
    if (trace) trace(s);
    goto B1224;
}
B432: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 432: 903e1b4a38 -> JUMP [30]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 437; s.post_core_pc = s.pc;
    s.opcode_pc = 432; s.opcode = 26;
    s.pc = 528;
    ++s.steps;
    if (trace) trace(s);
    goto B528;
}
B456: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 456: 5b62135618 -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v456 = UINT64_C(0xa7);
    s.stack = {v456};
    s.pc = 461; s.post_core_pc = s.pc;
    s.opcode_pc = 456; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 461: 5b2e12757e -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v461 = UINT64_C(0x5);
    s.stack = {v456, v461};
    s.pc = 466; s.post_core_pc = s.pc;
    s.opcode_pc = 461; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 466: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v466 = (v456 ^ v461);
    s.stack = {v466};
    s.pc = 467; s.post_core_pc = s.pc;
    s.opcode_pc = 466; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 467: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 468; s.post_core_pc = s.pc;
    s.opcode_pc = 467; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 468: 904f183a18 -> JUMP [13]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 473; s.post_core_pc = s.pc;
    s.opcode_pc = 468; s.opcode = 26;
    s.pc = 1608;
    ++s.steps;
    if (trace) trace(s);
    goto B1608;
}
B480: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 480: fa16819b3c -> JNZ [54]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 485; s.post_core_pc = s.pc;
    s.opcode_pc = 480; s.opcode = 28;
    s.pc = s0 != 0 ? 384 : 485;
    ++s.steps;
    if (trace) trace(s);
    if (s0 != 0) goto B384;
    goto B485;
}
B485: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 485: 906bae2624 -> JUMP [48]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 490; s.post_core_pc = s.pc;
    s.opcode_pc = 485; s.opcode = 26;
    s.pc = 432;
    ++s.steps;
    if (trace) trace(s);
    goto B432;
}
B504: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 504: 5b583cfccb -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v504 = UINT64_C(0x5a);
    s.stack = {v504};
    s.pc = 509; s.post_core_pc = s.pc;
    s.opcode_pc = 504; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 509: 5b7b1dc6f6 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v509 = UINT64_C(0xfa);
    s.stack = {v504, v509};
    s.pc = 514; s.post_core_pc = s.pc;
    s.opcode_pc = 509; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 514: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v514 = ((v504 ^ UINT64_C(0x8000000000000000)) < (v509 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v514};
    s.pc = 515; s.post_core_pc = s.pc;
    s.opcode_pc = 514; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 515: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 516; s.post_core_pc = s.pc;
    s.opcode_pc = 515; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 516: 90aa6a19e1 -> JUMP [62]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 521; s.post_core_pc = s.pc;
    s.opcode_pc = 516; s.opcode = 26;
    s.pc = 1392;
    ++s.steps;
    if (trace) trace(s);
    goto B1392;
}
B528: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 528: 67862f -> LOAD_REG [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v528 = s.registers[10];
    s.stack = {v528};
    s.pc = 531; s.post_core_pc = s.pc;
    s.opcode_pc = 528; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 531: 5b27e1341d -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v531 = UINT64_C(0xa7);
    s.stack = {v528, v531};
    s.pc = 536; s.post_core_pc = s.pc;
    s.opcode_pc = 531; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 536: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v536 = (v528 + v531);
    s.stack = {v536};
    s.pc = 537; s.post_core_pc = s.pc;
    s.opcode_pc = 536; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 537: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 538; s.post_core_pc = s.pc;
    s.opcode_pc = 537; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 538: 909da64782 -> JUMP [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 543; s.post_core_pc = s.pc;
    s.opcode_pc = 538; s.opcode = 26;
    s.pc = 1488;
    ++s.steps;
    if (trace) trace(s);
    goto B1488;
}
B552: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 552: 5bef458a5f -> LOAD_CONST [6]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v552 = UINT64_C(0x1);
    s.stack = {s0, v552};
    s.pc = 557; s.post_core_pc = s.pc;
    s.opcode_pc = 552; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 557: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v557 = (s0 + v552);
    s.stack = {v557};
    s.pc = 558; s.post_core_pc = s.pc;
    s.opcode_pc = 557; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 558: 367511ac -> CALL [2, 1]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v558 = host_2(s, v557);
    s.stack = {v558};
    s.pc = 562; s.post_core_pc = s.pc;
    s.opcode_pc = 558; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 562: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 563; s.post_core_pc = s.pc;
    s.opcode_pc = 562; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 563: 3691c3ad -> CALL [5, 0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v563 = host_5(s);
    s.stack = {v563};
    s.pc = 567; s.post_core_pc = s.pc;
    s.opcode_pc = 563; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 567: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 568; s.post_core_pc = s.pc;
    s.opcode_pc = 567; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 568: 90a0416ae3 -> JUMP [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 573; s.post_core_pc = s.pc;
    s.opcode_pc = 568; s.opcode = 26;
    s.pc = 1128;
    ++s.steps;
    if (trace) trace(s);
    goto B1128;
}
B576: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 576: 5b5d479003 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v576 = UINT64_C(0xfa);
    s.stack = {v576};
    s.pc = 581; s.post_core_pc = s.pc;
    s.opcode_pc = 576; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 581: 5bc2f49e9a -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v581 = UINT64_C(0xfa);
    s.stack = {v576, v581};
    s.pc = 586; s.post_core_pc = s.pc;
    s.opcode_pc = 581; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 586: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v586 = ((v576 ^ UINT64_C(0x8000000000000000)) < (v581 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v586};
    s.pc = 587; s.post_core_pc = s.pc;
    s.opcode_pc = 586; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 587: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 588; s.post_core_pc = s.pc;
    s.opcode_pc = 587; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 588: 909ba6784f -> JUMP [38]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 593; s.post_core_pc = s.pc;
    s.opcode_pc = 588; s.opcode = 26;
    s.pc = 1296;
    ++s.steps;
    if (trace) trace(s);
    goto B1296;
}
B600: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 600: 5bf985e0ee -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v600 = UINT64_C(0x5a);
    s.stack = {v600};
    s.pc = 605; s.post_core_pc = s.pc;
    s.opcode_pc = 600; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 605: 5b1a92a91d -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v605 = UINT64_C(0xfa);
    s.stack = {v600, v605};
    s.pc = 610; s.post_core_pc = s.pc;
    s.opcode_pc = 605; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 610: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v610 = (v600 ^ v605);
    s.stack = {v610};
    s.pc = 611; s.post_core_pc = s.pc;
    s.opcode_pc = 610; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 611: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 612; s.post_core_pc = s.pc;
    s.opcode_pc = 611; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 612: 90d9ae463c -> JUMP [72]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 617; s.post_core_pc = s.pc;
    s.opcode_pc = 612; s.opcode = 26;
    s.pc = 408;
    ++s.steps;
    if (trace) trace(s);
    goto B408;
}
B624: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 624: 5b0d7a613c -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v624 = UINT64_C(0xfa);
    s.stack = {v624};
    s.pc = 629; s.post_core_pc = s.pc;
    s.opcode_pc = 624; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 629: 1e93ff -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v624;
    s.stack = {};
    s.pc = 632; s.post_core_pc = s.pc;
    s.opcode_pc = 629; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 632: 67c4a7 -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v632 = s.registers[5];
    s.stack = {v632};
    s.pc = 635; s.post_core_pc = s.pc;
    s.opcode_pc = 632; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 635: 5b7ee3960f -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v635 = UINT64_C(0xa7);
    s.stack = {v632, v635};
    s.pc = 640; s.post_core_pc = s.pc;
    s.opcode_pc = 635; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 640: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v640 = (v632 ^ v635);
    s.stack = {v640};
    s.pc = 641; s.post_core_pc = s.pc;
    s.opcode_pc = 640; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 641: 90bd82c73a -> JUMP [65]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v640};
    s.pc = 646; s.post_core_pc = s.pc;
    s.opcode_pc = 641; s.opcode = 26;
    s.pc = 936;
    ++s.steps;
    if (trace) trace(s);
    goto B936;
}
B648: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 648: 5ba325ddcd -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v648 = UINT64_C(0xa7);
    s.stack = {v648};
    s.pc = 653; s.post_core_pc = s.pc;
    s.opcode_pc = 648; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 653: 5b21f8379b -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v653 = UINT64_C(0x92);
    s.stack = {v648, v653};
    s.pc = 658; s.post_core_pc = s.pc;
    s.opcode_pc = 653; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 658: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v658 = (v648 ^ v653);
    s.stack = {v658};
    s.pc = 659; s.post_core_pc = s.pc;
    s.opcode_pc = 658; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 659: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 660; s.post_core_pc = s.pc;
    s.opcode_pc = 659; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 660: 9052196df2 -> JUMP [57]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 665; s.post_core_pc = s.pc;
    s.opcode_pc = 660; s.opcode = 26;
    s.pc = 1680;
    ++s.steps;
    if (trace) trace(s);
    goto B1680;
}
B672: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 672: 5b21e75c7a -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v672 = UINT64_C(0x5a);
    s.stack = {v672};
    s.pc = 677; s.post_core_pc = s.pc;
    s.opcode_pc = 672; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 677: 5b09424715 -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v677 = UINT64_C(0x92);
    s.stack = {v672, v677};
    s.pc = 682; s.post_core_pc = s.pc;
    s.opcode_pc = 677; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 682: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v682 = ((v672 ^ UINT64_C(0x8000000000000000)) < (v677 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v682};
    s.pc = 683; s.post_core_pc = s.pc;
    s.opcode_pc = 682; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 683: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 684; s.post_core_pc = s.pc;
    s.opcode_pc = 683; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 684: 9096cbaac0 -> JUMP [61]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 689; s.post_core_pc = s.pc;
    s.opcode_pc = 684; s.opcode = 26;
    s.pc = 1248;
    ++s.steps;
    if (trace) trace(s);
    goto B1248;
}
B696: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 696: 5b055497a0 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v696 = UINT64_C(0xfa);
    s.stack = {v696};
    s.pc = 701; s.post_core_pc = s.pc;
    s.opcode_pc = 696; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 701: 1ebb8b -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v696;
    s.stack = {};
    s.pc = 704; s.post_core_pc = s.pc;
    s.opcode_pc = 701; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 704: 675cd4 -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v704 = s.registers[5];
    s.stack = {v704};
    s.pc = 707; s.post_core_pc = s.pc;
    s.opcode_pc = 704; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 707: 5b7ceaae4d -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v707 = UINT64_C(0x5a);
    s.stack = {v704, v707};
    s.pc = 712; s.post_core_pc = s.pc;
    s.opcode_pc = 707; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 712: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v712 = (v704 ^ v707);
    s.stack = {v712};
    s.pc = 713; s.post_core_pc = s.pc;
    s.opcode_pc = 712; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 713: 908901d47b -> JUMP [69]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v712};
    s.pc = 718; s.post_core_pc = s.pc;
    s.opcode_pc = 713; s.opcode = 26;
    s.pc = 792;
    ++s.steps;
    if (trace) trace(s);
    goto B792;
}
B720: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 720: 5b9cba9a94 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v720 = UINT64_C(0x12);
    s.stack = {v720};
    s.pc = 725; s.post_core_pc = s.pc;
    s.opcode_pc = 720; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 725: 5b43e2117d -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v725 = UINT64_C(0x12);
    s.stack = {v720, v725};
    s.pc = 730; s.post_core_pc = s.pc;
    s.opcode_pc = 725; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 730: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v730 = ((v720 ^ UINT64_C(0x8000000000000000)) < (v725 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v730};
    s.pc = 731; s.post_core_pc = s.pc;
    s.opcode_pc = 730; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 731: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 732; s.post_core_pc = s.pc;
    s.opcode_pc = 731; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 732: 9039167d69 -> JUMP [41]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 737; s.post_core_pc = s.pc;
    s.opcode_pc = 732; s.opcode = 26;
    s.pc = 96;
    ++s.steps;
    if (trace) trace(s);
    goto B96;
}
B744: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 744: 676dee -> LOAD_REG [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v744 = s.registers[7];
    s.stack = {v744};
    s.pc = 747; s.post_core_pc = s.pc;
    s.opcode_pc = 744; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 747: 5b5a921b99 -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v747 = UINT64_C(0x5);
    s.stack = {v744, v747};
    s.pc = 752; s.post_core_pc = s.pc;
    s.opcode_pc = 747; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 752: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v752 = (v744 + v747);
    s.stack = {v752};
    s.pc = 753; s.post_core_pc = s.pc;
    s.opcode_pc = 752; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 753: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 754; s.post_core_pc = s.pc;
    s.opcode_pc = 753; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 754: 905487e16a -> JUMP [28]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 759; s.post_core_pc = s.pc;
    s.opcode_pc = 754; s.opcode = 26;
    s.pc = 1440;
    ++s.steps;
    if (trace) trace(s);
    goto B1440;
}
B768: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 768: 1e1f4e -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 771; s.post_core_pc = s.pc;
    s.opcode_pc = 768; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 771: 90b9f79e10 -> JUMP [50]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 776; s.post_core_pc = s.pc;
    s.opcode_pc = 771; s.opcode = 26;
    s.pc = 864;
    ++s.steps;
    if (trace) trace(s);
    goto B864;
}
B792: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 792: 1ea79d -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 795; s.post_core_pc = s.pc;
    s.opcode_pc = 792; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 795: 9029f9fbd7 -> JUMP [26]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 800; s.post_core_pc = s.pc;
    s.opcode_pc = 795; s.opcode = 26;
    s.pc = 216;
    ++s.steps;
    if (trace) trace(s);
    goto B216;
}
B816: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 816: 5b7f223f8e -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v816 = UINT64_C(0x12);
    s.stack = {v816};
    s.pc = 821; s.post_core_pc = s.pc;
    s.opcode_pc = 816; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 821: 77 -> NOT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v821 = ~v816;
    s.stack = {v821};
    s.pc = 822; s.post_core_pc = s.pc;
    s.opcode_pc = 821; s.opcode = 44;
    ++s.steps;
    if (trace) trace(s);
    // pc 822: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 823; s.post_core_pc = s.pc;
    s.opcode_pc = 822; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 823: 9075ca3471 -> JUMP [18]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 828; s.post_core_pc = s.pc;
    s.opcode_pc = 823; s.opcode = 26;
    s.pc = 1032;
    ++s.steps;
    if (trace) trace(s);
    goto B1032;
}
B840: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 840: 5bb60a3cf8 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v840 = UINT64_C(0xfa);
    s.stack = {v840};
    s.pc = 845; s.post_core_pc = s.pc;
    s.opcode_pc = 840; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 845: 1e0422 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v840;
    s.stack = {};
    s.pc = 848; s.post_core_pc = s.pc;
    s.opcode_pc = 845; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 848: 672ff9 -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v848 = s.registers[5];
    s.stack = {v848};
    s.pc = 851; s.post_core_pc = s.pc;
    s.opcode_pc = 848; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 851: 5b06256dff -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v851 = UINT64_C(0x12);
    s.stack = {v848, v851};
    s.pc = 856; s.post_core_pc = s.pc;
    s.opcode_pc = 851; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 856: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v856 = (v848 ^ v851);
    s.stack = {v856};
    s.pc = 857; s.post_core_pc = s.pc;
    s.opcode_pc = 856; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 857: 90e5943e21 -> JUMP [44]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v856};
    s.pc = 862; s.post_core_pc = s.pc;
    s.opcode_pc = 857; s.opcode = 26;
    s.pc = 984;
    ++s.steps;
    if (trace) trace(s);
    goto B984;
}
B864: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 864: 5bcfe7bebc -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v864 = UINT64_C(0x12);
    s.stack = {v864};
    s.pc = 869; s.post_core_pc = s.pc;
    s.opcode_pc = 864; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 869: 5bb106ad81 -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v869 = UINT64_C(0x5a);
    s.stack = {v864, v869};
    s.pc = 874; s.post_core_pc = s.pc;
    s.opcode_pc = 869; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 874: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v874 = (v864 ^ v869);
    s.stack = {v874};
    s.pc = 875; s.post_core_pc = s.pc;
    s.opcode_pc = 874; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 875: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 876; s.post_core_pc = s.pc;
    s.opcode_pc = 875; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 876: 906c1e1f52 -> JUMP [34]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 881; s.post_core_pc = s.pc;
    s.opcode_pc = 876; s.opcode = 26;
    s.pc = 1536;
    ++s.steps;
    if (trace) trace(s);
    goto B1536;
}
B888: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 888: 360016ad -> CALL [6, 0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v888 = host_6(s);
    s.stack = {v888};
    s.pc = 892; s.post_core_pc = s.pc;
    s.opcode_pc = 888; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 892: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 893; s.post_core_pc = s.pc;
    s.opcode_pc = 892; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 893: 5b413144b0 -> LOAD_CONST [4]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v893 = UINT64_C(0x0);
    s.stack = {v893};
    s.pc = 898; s.post_core_pc = s.pc;
    s.opcode_pc = 893; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 898: 50 -> RETURN []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 899; s.post_core_pc = s.pc;
    s.opcode_pc = 898; s.opcode = 29;
    s.result = v893; s.halted = true;
    ++s.steps;
    if (trace) trace(s);
    return;
}
B912: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 912: 6771a5 -> LOAD_REG [14]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v912 = s.registers[14];
    s.stack = {v912};
    s.pc = 915; s.post_core_pc = s.pc;
    s.opcode_pc = 912; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 915: 673a1c -> LOAD_REG [4]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v915 = s.registers[4];
    s.stack = {v912, v915};
    s.pc = 918; s.post_core_pc = s.pc;
    s.opcode_pc = 915; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 918: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v918 = (v912 != v915);
    s.stack = {v918};
    s.pc = 919; s.post_core_pc = s.pc;
    s.opcode_pc = 918; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 919: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 920; s.post_core_pc = s.pc;
    s.opcode_pc = 919; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 920: 90ad6dff30 -> JUMP [22]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 925; s.post_core_pc = s.pc;
    s.opcode_pc = 920; s.opcode = 26;
    s.pc = 720;
    ++s.steps;
    if (trace) trace(s);
    goto B720;
}
B936: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 936: 1e16f0 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 939; s.post_core_pc = s.pc;
    s.opcode_pc = 936; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 939: 90d57cace2 -> JUMP [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 944; s.post_core_pc = s.pc;
    s.opcode_pc = 939; s.opcode = 26;
    s.pc = 264;
    ++s.steps;
    if (trace) trace(s);
    goto B264;
}
B960: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 960: 1e2fd2 -> STORE_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[8] = s0;
    s.stack = {};
    s.pc = 963; s.post_core_pc = s.pc;
    s.opcode_pc = 960; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 963: 367b57ad -> CALL [1, 0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v963 = host_1(s);
    s.stack = {v963};
    s.pc = 967; s.post_core_pc = s.pc;
    s.opcode_pc = 963; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 967: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 968; s.post_core_pc = s.pc;
    s.opcode_pc = 967; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 968: 5b836759bd -> LOAD_CONST [4]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v968 = UINT64_C(0x0);
    s.stack = {v968};
    s.pc = 973; s.post_core_pc = s.pc;
    s.opcode_pc = 968; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 973: 365631ac -> CALL [2, 1]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v973 = host_2(s, v968);
    s.stack = {v973};
    s.pc = 977; s.post_core_pc = s.pc;
    s.opcode_pc = 973; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 977: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 978; s.post_core_pc = s.pc;
    s.opcode_pc = 977; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 978: 90d0ab6625 -> JUMP [3]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 983; s.post_core_pc = s.pc;
    s.opcode_pc = 978; s.opcode = 26;
    s.pc = 1704;
    ++s.steps;
    if (trace) trace(s);
    goto B1704;
}
B984: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 984: 1e6640 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 987; s.post_core_pc = s.pc;
    s.opcode_pc = 984; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 987: 905d29312f -> JUMP [17]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 992; s.post_core_pc = s.pc;
    s.opcode_pc = 987; s.opcode = 26;
    s.pc = 504;
    ++s.steps;
    if (trace) trace(s);
    goto B504;
}
B1008: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1008: 1e0e8b -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 1011; s.post_core_pc = s.pc;
    s.opcode_pc = 1008; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1011: 901f8d720c -> JUMP [3]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1016; s.post_core_pc = s.pc;
    s.opcode_pc = 1011; s.opcode = 26;
    s.pc = 1704;
    ++s.steps;
    if (trace) trace(s);
    goto B1704;
}
B1032: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1032: 5b520f91b6 -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1032 = UINT64_C(0x5);
    s.stack = {v1032};
    s.pc = 1037; s.post_core_pc = s.pc;
    s.opcode_pc = 1032; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1037: 1e45bb -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v1032;
    s.stack = {};
    s.pc = 1040; s.post_core_pc = s.pc;
    s.opcode_pc = 1037; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1040: 676e72 -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1040 = s.registers[5];
    s.stack = {v1040};
    s.pc = 1043; s.post_core_pc = s.pc;
    s.opcode_pc = 1040; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1043: 5b53af16fe -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1043 = UINT64_C(0x5);
    s.stack = {v1040, v1043};
    s.pc = 1048; s.post_core_pc = s.pc;
    s.opcode_pc = 1043; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1048: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1048 = (v1040 ^ v1043);
    s.stack = {v1048};
    s.pc = 1049; s.post_core_pc = s.pc;
    s.opcode_pc = 1048; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1049: 90c126bfe3 -> JUMP [19]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v1048};
    s.pc = 1054; s.post_core_pc = s.pc;
    s.opcode_pc = 1049; s.opcode = 26;
    s.pc = 1512;
    ++s.steps;
    if (trace) trace(s);
    goto B1512;
}
B1056: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1056: 1ebef5 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 1059; s.post_core_pc = s.pc;
    s.opcode_pc = 1056; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1059: 90c2816519 -> JUMP [20]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1064; s.post_core_pc = s.pc;
    s.opcode_pc = 1059; s.opcode = 26;
    s.pc = 1080;
    ++s.steps;
    if (trace) trace(s);
    goto B1080;
}
B1080: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1080: 5bd10dd844 -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1080 = UINT64_C(0xa7);
    s.stack = {v1080};
    s.pc = 1085; s.post_core_pc = s.pc;
    s.opcode_pc = 1080; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1085: 5b911d3a2a -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1085 = UINT64_C(0x5);
    s.stack = {v1080, v1085};
    s.pc = 1090; s.post_core_pc = s.pc;
    s.opcode_pc = 1085; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1090: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1090 = ((v1080 ^ UINT64_C(0x8000000000000000)) < (v1085 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v1090};
    s.pc = 1091; s.post_core_pc = s.pc;
    s.opcode_pc = 1090; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 1091: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1092; s.post_core_pc = s.pc;
    s.opcode_pc = 1091; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1092: 901578833b -> JUMP [35]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1097; s.post_core_pc = s.pc;
    s.opcode_pc = 1092; s.opcode = 26;
    s.pc = 1200;
    ++s.steps;
    if (trace) trace(s);
    goto B1200;
}
B1104: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1104: 1e29a4 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 1107; s.post_core_pc = s.pc;
    s.opcode_pc = 1104; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1107: 90f32dd968 -> JUMP [58]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1112; s.post_core_pc = s.pc;
    s.opcode_pc = 1107; s.opcode = 26;
    s.pc = 192;
    ++s.steps;
    if (trace) trace(s);
    goto B192;
}
B1128: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1128: 90a56014e7 -> JUMP [23]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1133; s.post_core_pc = s.pc;
    s.opcode_pc = 1128; s.opcode = 26;
    s.pc = 1272;
    ++s.steps;
    if (trace) trace(s);
    goto B1272;
}
B1152: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1152: 5b181235a2 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1152 = UINT64_C(0xfa);
    s.stack = {v1152};
    s.pc = 1157; s.post_core_pc = s.pc;
    s.opcode_pc = 1152; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1157: 5be4efd690 -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1157 = UINT64_C(0x92);
    s.stack = {v1152, v1157};
    s.pc = 1162; s.post_core_pc = s.pc;
    s.opcode_pc = 1157; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1162: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1162 = ((v1152 ^ UINT64_C(0x8000000000000000)) < (v1157 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v1162};
    s.pc = 1163; s.post_core_pc = s.pc;
    s.opcode_pc = 1162; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 1163: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1164; s.post_core_pc = s.pc;
    s.opcode_pc = 1163; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1164: 9059fea0c4 -> JUMP [31]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1169; s.post_core_pc = s.pc;
    s.opcode_pc = 1164; s.opcode = 26;
    s.pc = 744;
    ++s.steps;
    if (trace) trace(s);
    goto B744;
}
B1176: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1176: 67e643 -> LOAD_REG [6]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1176 = s.registers[6];
    s.stack = {v1176};
    s.pc = 1179; s.post_core_pc = s.pc;
    s.opcode_pc = 1176; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1179: 67952a -> LOAD_REG [0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1179 = s.registers[0];
    s.stack = {v1176, v1179};
    s.pc = 1182; s.post_core_pc = s.pc;
    s.opcode_pc = 1179; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1182: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1182 = (v1176 != v1179);
    s.stack = {v1182};
    s.pc = 1183; s.post_core_pc = s.pc;
    s.opcode_pc = 1182; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 1183: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1184; s.post_core_pc = s.pc;
    s.opcode_pc = 1183; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1184: 90a9b105ae -> JUMP [43]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1189; s.post_core_pc = s.pc;
    s.opcode_pc = 1184; s.opcode = 26;
    s.pc = 840;
    ++s.steps;
    if (trace) trace(s);
    goto B840;
}
B1200: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1200: 5bf9061210 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1200 = UINT64_C(0x12);
    s.stack = {v1200};
    s.pc = 1205; s.post_core_pc = s.pc;
    s.opcode_pc = 1200; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1205: 5b6e4f98f9 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1205 = UINT64_C(0x12);
    s.stack = {v1200, v1205};
    s.pc = 1210; s.post_core_pc = s.pc;
    s.opcode_pc = 1205; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1210: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1210 = ((v1200 ^ UINT64_C(0x8000000000000000)) < (v1205 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v1210};
    s.pc = 1211; s.post_core_pc = s.pc;
    s.opcode_pc = 1210; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 1211: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1212; s.post_core_pc = s.pc;
    s.opcode_pc = 1211; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1212: 90cc6f4e7f -> JUMP [64]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1217; s.post_core_pc = s.pc;
    s.opcode_pc = 1212; s.opcode = 26;
    s.pc = 624;
    ++s.steps;
    if (trace) trace(s);
    goto B624;
}
B1224: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1224: 5b66d2772c -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1224 = UINT64_C(0xa7);
    s.stack = {v1224};
    s.pc = 1229; s.post_core_pc = s.pc;
    s.opcode_pc = 1224; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1229: 77 -> NOT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1229 = ~v1224;
    s.stack = {v1229};
    s.pc = 1230; s.post_core_pc = s.pc;
    s.opcode_pc = 1229; s.opcode = 44;
    ++s.steps;
    if (trace) trace(s);
    // pc 1230: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1231; s.post_core_pc = s.pc;
    s.opcode_pc = 1230; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1231: 90d89e91a9 -> JUMP [51]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1236; s.post_core_pc = s.pc;
    s.opcode_pc = 1231; s.opcode = 26;
    s.pc = 1584;
    ++s.steps;
    if (trace) trace(s);
    goto B1584;
}
B1248: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1248: 6708a4 -> LOAD_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1248 = s.registers[8];
    s.stack = {v1248};
    s.pc = 1251; s.post_core_pc = s.pc;
    s.opcode_pc = 1248; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1251: 67dbb4 -> LOAD_REG [14]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1251 = s.registers[14];
    s.stack = {v1248, v1251};
    s.pc = 1254; s.post_core_pc = s.pc;
    s.opcode_pc = 1251; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1254: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1254 = (v1248 != v1251);
    s.stack = {v1254};
    s.pc = 1255; s.post_core_pc = s.pc;
    s.opcode_pc = 1254; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 1255: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1256; s.post_core_pc = s.pc;
    s.opcode_pc = 1255; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1256: 905010b3b0 -> JUMP [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1261; s.post_core_pc = s.pc;
    s.opcode_pc = 1256; s.opcode = 26;
    s.pc = 888;
    ++s.steps;
    if (trace) trace(s);
    goto B888;
}
B1272: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1272: 5b961ed139 -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1272 = UINT64_C(0xa7);
    s.stack = {v1272};
    s.pc = 1277; s.post_core_pc = s.pc;
    s.opcode_pc = 1272; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1277: 5b1df3054f -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1277 = UINT64_C(0x92);
    s.stack = {v1272, v1277};
    s.pc = 1282; s.post_core_pc = s.pc;
    s.opcode_pc = 1277; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1282: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1282 = (v1272 ^ v1277);
    s.stack = {v1282};
    s.pc = 1283; s.post_core_pc = s.pc;
    s.opcode_pc = 1282; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1283: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1284; s.post_core_pc = s.pc;
    s.opcode_pc = 1283; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1284: 90a82ad7a8 -> JUMP [55]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1289; s.post_core_pc = s.pc;
    s.opcode_pc = 1284; s.opcode = 26;
    s.pc = 1344;
    ++s.steps;
    if (trace) trace(s);
    goto B1344;
}
B1296: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1296: 5bcc36fe41 -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1296 = UINT64_C(0x5);
    s.stack = {v1296};
    s.pc = 1301; s.post_core_pc = s.pc;
    s.opcode_pc = 1296; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1301: 5b3e7f285c -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1301 = UINT64_C(0xfa);
    s.stack = {v1296, v1301};
    s.pc = 1306; s.post_core_pc = s.pc;
    s.opcode_pc = 1301; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1306: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1306 = (v1296 ^ v1301);
    s.stack = {v1306};
    s.pc = 1307; s.post_core_pc = s.pc;
    s.opcode_pc = 1306; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1307: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1308; s.post_core_pc = s.pc;
    s.opcode_pc = 1307; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1308: 9037a82ed8 -> JUMP [46]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1313; s.post_core_pc = s.pc;
    s.opcode_pc = 1308; s.opcode = 26;
    s.pc = 1368;
    ++s.steps;
    if (trace) trace(s);
    goto B1368;
}
B1320: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1320: 5b7a48f8e9 -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1320 = UINT64_C(0x92);
    s.stack = {v1320};
    s.pc = 1325; s.post_core_pc = s.pc;
    s.opcode_pc = 1320; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1325: 5b8d376242 -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1325 = UINT64_C(0x92);
    s.stack = {v1320, v1325};
    s.pc = 1330; s.post_core_pc = s.pc;
    s.opcode_pc = 1325; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1330: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1330 = (v1320 ^ v1325);
    s.stack = {v1330};
    s.pc = 1331; s.post_core_pc = s.pc;
    s.opcode_pc = 1330; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1331: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1332; s.post_core_pc = s.pc;
    s.opcode_pc = 1331; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1332: 900df304d2 -> JUMP [40]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1337; s.post_core_pc = s.pc;
    s.opcode_pc = 1332; s.opcode = 26;
    s.pc = 240;
    ++s.steps;
    if (trace) trace(s);
    goto B240;
}
B1344: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1344: 5bc5590ba3 -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1344 = UINT64_C(0x5a);
    s.stack = {v1344};
    s.pc = 1349; s.post_core_pc = s.pc;
    s.opcode_pc = 1344; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1349: 1e4fb0 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v1344;
    s.stack = {};
    s.pc = 1352; s.post_core_pc = s.pc;
    s.opcode_pc = 1349; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1352: 6730f9 -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1352 = s.registers[5];
    s.stack = {v1352};
    s.pc = 1355; s.post_core_pc = s.pc;
    s.opcode_pc = 1352; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1355: 5b00018b7b -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1355 = UINT64_C(0x5a);
    s.stack = {v1352, v1355};
    s.pc = 1360; s.post_core_pc = s.pc;
    s.opcode_pc = 1355; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1360: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1360 = (v1352 ^ v1355);
    s.stack = {v1360};
    s.pc = 1361; s.post_core_pc = s.pc;
    s.opcode_pc = 1360; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1361: 904264613e -> JUMP [56]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v1360};
    s.pc = 1366; s.post_core_pc = s.pc;
    s.opcode_pc = 1361; s.opcode = 26;
    s.pc = 768;
    ++s.steps;
    if (trace) trace(s);
    goto B768;
}
B1368: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1368: 672724 -> LOAD_REG [6]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1368 = s.registers[6];
    s.stack = {v1368};
    s.pc = 1371; s.post_core_pc = s.pc;
    s.opcode_pc = 1368; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1371: 5be75cb16b -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1371 = UINT64_C(0x92);
    s.stack = {v1368, v1371};
    s.pc = 1376; s.post_core_pc = s.pc;
    s.opcode_pc = 1371; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1376: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1376 = (v1368 + v1371);
    s.stack = {v1376};
    s.pc = 1377; s.post_core_pc = s.pc;
    s.opcode_pc = 1376; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 1377: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1378; s.post_core_pc = s.pc;
    s.opcode_pc = 1377; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1378: 67f799 -> LOAD_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1378 = s.registers[8];
    s.stack = {v1378};
    s.pc = 1381; s.post_core_pc = s.pc;
    s.opcode_pc = 1378; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1381: 5b0b2ebf13 -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1381 = UINT64_C(0x5);
    s.stack = {v1378, v1381};
    s.pc = 1386; s.post_core_pc = s.pc;
    s.opcode_pc = 1381; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1386: d1 -> SGT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1386 = ((v1378 ^ UINT64_C(0x8000000000000000)) > (v1381 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v1386};
    s.pc = 1387; s.post_core_pc = s.pc;
    s.opcode_pc = 1386; s.opcode = 24;
    ++s.steps;
    if (trace) trace(s);
    // pc 1387: 901142e378 -> JUMP [47]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v1386};
    s.pc = 1392; s.post_core_pc = s.pc;
    s.opcode_pc = 1387; s.opcode = 26;
    s.pc = 480;
    ++s.steps;
    if (trace) trace(s);
    goto B480;
}
B1392: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1392: 676336 -> LOAD_REG [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1392 = s.registers[10];
    s.stack = {v1392};
    s.pc = 1395; s.post_core_pc = s.pc;
    s.opcode_pc = 1392; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1395: 5bf1e6f6ca -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1395 = UINT64_C(0x5);
    s.stack = {v1392, v1395};
    s.pc = 1400; s.post_core_pc = s.pc;
    s.opcode_pc = 1395; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1400: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1400 = (v1392 + v1395);
    s.stack = {v1400};
    s.pc = 1401; s.post_core_pc = s.pc;
    s.opcode_pc = 1400; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 1401: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1402; s.post_core_pc = s.pc;
    s.opcode_pc = 1401; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1402: 90cddc675c -> JUMP [14]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1407; s.post_core_pc = s.pc;
    s.opcode_pc = 1402; s.opcode = 26;
    s.pc = 336;
    ++s.steps;
    if (trace) trace(s);
    goto B336;
}
B1416: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1416: 5b6d8078cf -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1416 = UINT64_C(0x5a);
    s.stack = {v1416};
    s.pc = 1421; s.post_core_pc = s.pc;
    s.opcode_pc = 1416; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1421: 5b63626649 -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1421 = UINT64_C(0x5);
    s.stack = {v1416, v1421};
    s.pc = 1426; s.post_core_pc = s.pc;
    s.opcode_pc = 1421; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1426: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1426 = (v1416 ^ v1421);
    s.stack = {v1426};
    s.pc = 1427; s.post_core_pc = s.pc;
    s.opcode_pc = 1426; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1427: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1428; s.post_core_pc = s.pc;
    s.opcode_pc = 1427; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1428: 907ecf677e -> JUMP [49]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1433; s.post_core_pc = s.pc;
    s.opcode_pc = 1428; s.opcode = 26;
    s.pc = 456;
    ++s.steps;
    if (trace) trace(s);
    goto B456;
}
B1440: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1440: 5bef420167 -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1440 = UINT64_C(0xa7);
    s.stack = {v1440};
    s.pc = 1445; s.post_core_pc = s.pc;
    s.opcode_pc = 1440; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1445: 1eef77 -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = v1440;
    s.stack = {};
    s.pc = 1448; s.post_core_pc = s.pc;
    s.opcode_pc = 1445; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1448: 67103e -> LOAD_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1448 = s.registers[5];
    s.stack = {v1448};
    s.pc = 1451; s.post_core_pc = s.pc;
    s.opcode_pc = 1448; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1451: 5bbcd3064a -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1451 = UINT64_C(0xfa);
    s.stack = {v1448, v1451};
    s.pc = 1456; s.post_core_pc = s.pc;
    s.opcode_pc = 1451; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1456: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1456 = (v1448 ^ v1451);
    s.stack = {v1456};
    s.pc = 1457; s.post_core_pc = s.pc;
    s.opcode_pc = 1456; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1457: 9082f2a560 -> JUMP [29]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v1456};
    s.pc = 1462; s.post_core_pc = s.pc;
    s.opcode_pc = 1457; s.opcode = 26;
    s.pc = 1104;
    ++s.steps;
    if (trace) trace(s);
    goto B1104;
}
B1464: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1464: 90a3855367 -> JUMP [59]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1469; s.post_core_pc = s.pc;
    s.opcode_pc = 1464; s.opcode = 26;
    s.pc = 48;
    ++s.steps;
    if (trace) trace(s);
    goto B48;
}
B1488: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1488: 5bb5657a4e -> LOAD_CONST [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1488 = UINT64_C(0x778985e720756d4f);
    s.stack = {v1488};
    s.pc = 1493; s.post_core_pc = s.pc;
    s.opcode_pc = 1488; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1493: 77 -> NOT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1493 = ~v1488;
    s.stack = {v1493};
    s.pc = 1494; s.post_core_pc = s.pc;
    s.opcode_pc = 1493; s.opcode = 44;
    ++s.steps;
    if (trace) trace(s);
    // pc 1494: 1ed057 -> STORE_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[8] = v1493;
    s.stack = {};
    s.pc = 1497; s.post_core_pc = s.pc;
    s.opcode_pc = 1494; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1497: 36d13ead -> CALL [4, 0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1497 = host_4(s);
    s.stack = {v1497};
    s.pc = 1501; s.post_core_pc = s.pc;
    s.opcode_pc = 1497; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 1501: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1502; s.post_core_pc = s.pc;
    s.opcode_pc = 1501; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1502: 36a947ad -> CALL [5, 0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1502 = host_5(s);
    s.stack = {v1502};
    s.pc = 1506; s.post_core_pc = s.pc;
    s.opcode_pc = 1502; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 1506: 907e4cab76 -> JUMP [6]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {v1502};
    s.pc = 1511; s.post_core_pc = s.pc;
    s.opcode_pc = 1506; s.opcode = 26;
    s.pc = 552;
    ++s.steps;
    if (trace) trace(s);
    goto B552;
}
B1512: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1512: 1ed36b -> STORE_REG [5]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.registers[5] = s0;
    s.stack = {};
    s.pc = 1515; s.post_core_pc = s.pc;
    s.opcode_pc = 1512; s.opcode = 5;
    ++s.steps;
    if (trace) trace(s);
    // pc 1515: 904cdaba84 -> JUMP [21]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1520; s.post_core_pc = s.pc;
    s.opcode_pc = 1515; s.opcode = 26;
    s.pc = 912;
    ++s.steps;
    if (trace) trace(s);
    goto B912;
}
B1536: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1536: 5bcccb5e42 -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1536 = UINT64_C(0xa7);
    s.stack = {v1536};
    s.pc = 1541; s.post_core_pc = s.pc;
    s.opcode_pc = 1536; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1541: 77 -> NOT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1541 = ~v1536;
    s.stack = {v1541};
    s.pc = 1542; s.post_core_pc = s.pc;
    s.opcode_pc = 1541; s.opcode = 44;
    ++s.steps;
    if (trace) trace(s);
    // pc 1542: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1543; s.post_core_pc = s.pc;
    s.opcode_pc = 1542; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1543: 9047aece34 -> JUMP [24]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1548; s.post_core_pc = s.pc;
    s.opcode_pc = 1543; s.opcode = 26;
    s.pc = 312;
    ++s.steps;
    if (trace) trace(s);
    goto B312;
}
B1560: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1560: 67d23d -> LOAD_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1560 = s.registers[8];
    s.stack = {v1560};
    s.pc = 1563; s.post_core_pc = s.pc;
    s.opcode_pc = 1560; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1563: 67237a -> LOAD_REG [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1563 = s.registers[8];
    s.stack = {v1560, v1563};
    s.pc = 1566; s.post_core_pc = s.pc;
    s.opcode_pc = 1563; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1566: 03 -> NEQ []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1566 = (v1560 != v1563);
    s.stack = {v1566};
    s.pc = 1567; s.post_core_pc = s.pc;
    s.opcode_pc = 1566; s.opcode = 21;
    ++s.steps;
    if (trace) trace(s);
    // pc 1567: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1568; s.post_core_pc = s.pc;
    s.opcode_pc = 1567; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1568: 900070fff0 -> JUMP [70]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1573; s.post_core_pc = s.pc;
    s.opcode_pc = 1568; s.opcode = 26;
    s.pc = 1320;
    ++s.steps;
    if (trace) trace(s);
    goto B1320;
}
B1584: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1584: 5b9c17284f -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1584 = UINT64_C(0xa7);
    s.stack = {v1584};
    s.pc = 1589; s.post_core_pc = s.pc;
    s.opcode_pc = 1584; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1589: 5be8aa8b43 -> LOAD_CONST [11]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1589 = UINT64_C(0x12);
    s.stack = {v1584, v1589};
    s.pc = 1594; s.post_core_pc = s.pc;
    s.opcode_pc = 1589; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1594: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1594 = (v1584 ^ v1589);
    s.stack = {v1594};
    s.pc = 1595; s.post_core_pc = s.pc;
    s.opcode_pc = 1594; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1595: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1596; s.post_core_pc = s.pc;
    s.opcode_pc = 1595; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1596: 90b5ba7577 -> JUMP [33]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1601; s.post_core_pc = s.pc;
    s.opcode_pc = 1596; s.opcode = 26;
    s.pc = 1176;
    ++s.steps;
    if (trace) trace(s);
    goto B1176;
}
B1608: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1608: 5be4f5ebd6 -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1608 = UINT64_C(0xa7);
    s.stack = {v1608};
    s.pc = 1613; s.post_core_pc = s.pc;
    s.opcode_pc = 1608; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1613: 5b1ddeb853 -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1613 = UINT64_C(0x5a);
    s.stack = {v1608, v1613};
    s.pc = 1618; s.post_core_pc = s.pc;
    s.opcode_pc = 1613; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1618: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1618 = ((v1608 ^ UINT64_C(0x8000000000000000)) < (v1613 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v1618};
    s.pc = 1619; s.post_core_pc = s.pc;
    s.opcode_pc = 1618; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 1619: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1620; s.post_core_pc = s.pc;
    s.opcode_pc = 1619; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1620: 90b52d3545 -> JUMP [25]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1625; s.post_core_pc = s.pc;
    s.opcode_pc = 1620; s.opcode = 26;
    s.pc = 168;
    ++s.steps;
    if (trace) trace(s);
    goto B168;
}
B1632: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1632: 67644e -> LOAD_REG [14]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1632 = s.registers[14];
    s.stack = {v1632};
    s.pc = 1635; s.post_core_pc = s.pc;
    s.opcode_pc = 1632; s.opcode = 4;
    ++s.steps;
    if (trace) trace(s);
    // pc 1635: 5b5ecb2d0c -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1635 = UINT64_C(0x5);
    s.stack = {v1632, v1635};
    s.pc = 1640; s.post_core_pc = s.pc;
    s.opcode_pc = 1635; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1640: dd -> ADD []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1640 = (v1632 + v1635);
    s.stack = {v1640};
    s.pc = 1641; s.post_core_pc = s.pc;
    s.opcode_pc = 1640; s.opcode = 8;
    ++s.steps;
    if (trace) trace(s);
    // pc 1641: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1642; s.post_core_pc = s.pc;
    s.opcode_pc = 1641; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1642: 9022c9b933 -> JUMP [37]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1647; s.post_core_pc = s.pc;
    s.opcode_pc = 1642; s.opcode = 26;
    s.pc = 1416;
    ++s.steps;
    if (trace) trace(s);
    goto B1416;
}
B1656: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1656: 5b2829984c -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1656 = UINT64_C(0x92);
    s.stack = {v1656};
    s.pc = 1661; s.post_core_pc = s.pc;
    s.opcode_pc = 1656; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1661: 5bf0ba8e30 -> LOAD_CONST [8]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1661 = UINT64_C(0xfa);
    s.stack = {v1656, v1661};
    s.pc = 1666; s.post_core_pc = s.pc;
    s.opcode_pc = 1661; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1666: e3 -> SLT []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1666 = ((v1656 ^ UINT64_C(0x8000000000000000)) < (v1661 ^ UINT64_C(0x8000000000000000)));
    s.stack = {v1666};
    s.pc = 1667; s.post_core_pc = s.pc;
    s.opcode_pc = 1666; s.opcode = 22;
    ++s.steps;
    if (trace) trace(s);
    // pc 1667: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1668; s.post_core_pc = s.pc;
    s.opcode_pc = 1667; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1668: 9076771437 -> JUMP [67]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1673; s.post_core_pc = s.pc;
    s.opcode_pc = 1668; s.opcode = 26;
    s.pc = 24;
    ++s.steps;
    if (trace) trace(s);
    goto B24;
}
B1680: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1680: 5b008fd1c5 -> LOAD_CONST [9]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1680 = UINT64_C(0x92);
    s.stack = {v1680};
    s.pc = 1685; s.post_core_pc = s.pc;
    s.opcode_pc = 1680; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1685: 5b2401e5fe -> LOAD_CONST [12]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1685 = UINT64_C(0x5a);
    s.stack = {v1680, v1685};
    s.pc = 1690; s.post_core_pc = s.pc;
    s.opcode_pc = 1685; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1690: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1690 = (v1680 ^ v1685);
    s.stack = {v1690};
    s.pc = 1691; s.post_core_pc = s.pc;
    s.opcode_pc = 1690; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1691: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1692; s.post_core_pc = s.pc;
    s.opcode_pc = 1691; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1692: 908f479c1d -> JUMP [32]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1697; s.post_core_pc = s.pc;
    s.opcode_pc = 1692; s.opcode = 26;
    s.pc = 144;
    ++s.steps;
    if (trace) trace(s);
    goto B144;
}
B1704: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1704: 3684a0ad -> CALL [3, 0]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1704 = host_3(s);
    s.stack = {v1704};
    s.pc = 1708; s.post_core_pc = s.pc;
    s.opcode_pc = 1704; s.opcode = 32;
    ++s.steps;
    if (trace) trace(s);
    // pc 1708: 40c0af603a -> JZ [45]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1713; s.post_core_pc = s.pc;
    s.opcode_pc = 1708; s.opcode = 27;
    s.pc = v1704 == 0 ? 1632 : 1713;
    ++s.steps;
    if (trace) trace(s);
    if (v1704 == 0) goto B1632;
    goto B1713;
}
B1713: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1713: 9020735ec5 -> JUMP [4]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1718; s.post_core_pc = s.pc;
    s.opcode_pc = 1713; s.opcode = 26;
    s.pc = 1464;
    ++s.steps;
    if (trace) trace(s);
    goto B1464;
}
B1728: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    // pc 1728: 5b8dd8d737 -> LOAD_CONST [10]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1728 = UINT64_C(0xa7);
    s.stack = {v1728};
    s.pc = 1733; s.post_core_pc = s.pc;
    s.opcode_pc = 1728; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1733: 5b6d661f1f -> LOAD_CONST [7]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1733 = UINT64_C(0x5);
    s.stack = {v1728, v1733};
    s.pc = 1738; s.post_core_pc = s.pc;
    s.opcode_pc = 1733; s.opcode = 1;
    ++s.steps;
    if (trace) trace(s);
    // pc 1738: 2c -> XOR []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    [[maybe_unused]] const uint64_t v1738 = (v1728 ^ v1733);
    s.stack = {v1738};
    s.pc = 1739; s.post_core_pc = s.pc;
    s.opcode_pc = 1738; s.opcode = 41;
    ++s.steps;
    if (trace) trace(s);
    // pc 1739: 9c -> DROP []
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1740; s.post_core_pc = s.pc;
    s.opcode_pc = 1739; s.opcode = 31;
    ++s.steps;
    if (trace) trace(s);
    // pc 1740: 907ac05007 -> JUMP [63]
    if (s.steps >= budget) throw std::runtime_error("instruction budget");
    s.stack = {};
    s.pc = 1745; s.post_core_pc = s.pc;
    s.opcode_pc = 1740; s.opcode = 26;
    s.pc = 816;
    ++s.steps;
    if (trace) trace(s);
    goto B816;
}
}
} // namespace pafet_devirt
