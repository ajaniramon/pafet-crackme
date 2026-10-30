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
    if (s.steps > budget || budget - s.steps < 7) throw std::runtime_error("block budget");
    // pc 0: 5b4afa72c8 -> LOAD_CONST [0]
    // pc 5: 5b02b90ac6 -> LOAD_CONST [1]
    // pc 10: dd -> ADD []
    [[maybe_unused]] const uint64_t v10 = UINT64_C(0x0);
    // pc 11: 1eabbf -> STORE_REG [8]
    s.registers[8] = v10;
    // pc 14: 365886ad -> CALL [0, 0]
    [[maybe_unused]] const uint64_t v14 = host_0(s);
    // pc 18: 9c -> DROP []
    // pc 19: 9070c553bd -> JUMP [1]
    s.stack = {};
    s.pc = 24; s.post_core_pc = s.pc;
    s.opcode_pc = 19; s.opcode = 26;
    s.pc = 72;
    s.steps += 7;
    if (trace) trace(s);
    goto B72;
}
B24: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 24: 6778dd -> LOAD_REG [2]
    [[maybe_unused]] const uint64_t v24 = s.registers[2];
    // pc 27: 678da3 -> LOAD_REG [6]
    [[maybe_unused]] const uint64_t v27 = s.registers[6];
    // pc 30: 03 -> NEQ []
    // pc 31: 9c -> DROP []
    // pc 32: 90aec1c697 -> JUMP [12]
    s.stack = {};
    s.pc = 37; s.post_core_pc = s.pc;
    s.opcode_pc = 32; s.opcode = 26;
    s.pc = 672;
    s.steps += 5;
    if (trace) trace(s);
    goto B672;
}
B48: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 48: 5b73e5265d -> LOAD_CONST [11]
    [[maybe_unused]] const uint64_t v48 = UINT64_C(0x12);
    // pc 53: 1ed082 -> STORE_REG [5]
    s.registers[5] = v48;
    // pc 56: 670b4b -> LOAD_REG [5]
    // pc 59: 5b7752459e -> LOAD_CONST [12]
    // pc 64: 2c -> XOR []
    [[maybe_unused]] const uint64_t v64 = UINT64_C(0x48);
    // pc 65: 90b10e18f0 -> JUMP [60]
    s.stack = {v64};
    s.pc = 70; s.post_core_pc = s.pc;
    s.opcode_pc = 65; s.opcode = 26;
    s.pc = 1056;
    s.steps += 6;
    if (trace) trace(s);
    goto B1056;
}
B72: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 72: 5bd4e01896 -> LOAD_CONST [2]
    [[maybe_unused]] const uint64_t v72 = UINT64_C(0xad2405c91c8c83c1);
    // pc 77: 1e7986 -> STORE_REG [8]
    s.registers[8] = v72;
    // pc 80: 67525b -> LOAD_REG [8]
    // pc 83: 5bfa17795a -> LOAD_CONST [3]
    // pc 88: 2c -> XOR []
    [[maybe_unused]] const uint64_t v88 = UINT64_C(0xffffffffffffffff);
    // pc 89: 900bfaeba0 -> JUMP [2]
    s.stack = {v88};
    s.pc = 94; s.post_core_pc = s.pc;
    s.opcode_pc = 89; s.opcode = 26;
    s.pc = 960;
    s.steps += 6;
    if (trace) trace(s);
    goto B960;
}
B96: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 96: 5beeb3b1db -> LOAD_CONST [12]
    // pc 101: 5bbdc6bab2 -> LOAD_CONST [12]
    // pc 106: 2c -> XOR []
    // pc 107: 9c -> DROP []
    // pc 108: 90b6ac4ebb -> JUMP [16]
    s.stack = {};
    s.pc = 113; s.post_core_pc = s.pc;
    s.opcode_pc = 108; s.opcode = 26;
    s.pc = 648;
    s.steps += 5;
    if (trace) trace(s);
    goto B648;
}
B120: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 120: 6786b1 -> LOAD_REG [4]
    [[maybe_unused]] const uint64_t v120 = s.registers[4];
    // pc 123: 5b9a12dc59 -> LOAD_CONST [11]
    // pc 128: dd -> ADD []
    // pc 129: 9c -> DROP []
    // pc 130: 9023c85587 -> JUMP [53]
    s.stack = {};
    s.pc = 135; s.post_core_pc = s.pc;
    s.opcode_pc = 130; s.opcode = 26;
    s.pc = 288;
    s.steps += 5;
    if (trace) trace(s);
    goto B288;
}
B144: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 144: 67ae48 -> LOAD_REG [4]
    [[maybe_unused]] const uint64_t v144 = s.registers[4];
    // pc 147: 67edf7 -> LOAD_REG [14]
    [[maybe_unused]] const uint64_t v147 = s.registers[14];
    // pc 150: 03 -> NEQ []
    // pc 151: 9c -> DROP []
    // pc 152: 9004b8d0a6 -> JUMP [66]
    s.stack = {};
    s.pc = 157; s.post_core_pc = s.pc;
    s.opcode_pc = 152; s.opcode = 26;
    s.pc = 1656;
    s.steps += 5;
    if (trace) trace(s);
    goto B1656;
}
B168: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 168: 671beb -> LOAD_REG [5]
    [[maybe_unused]] const uint64_t v168 = s.registers[5];
    // pc 171: 5bbb95b580 -> LOAD_CONST [8]
    // pc 176: dd -> ADD []
    // pc 177: 9c -> DROP []
    // pc 178: 90b91939f1 -> JUMP [39]
    s.stack = {};
    s.pc = 183; s.post_core_pc = s.pc;
    s.opcode_pc = 178; s.opcode = 26;
    s.pc = 1728;
    s.steps += 5;
    if (trace) trace(s);
    goto B1728;
}
B192: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 192: 672339 -> LOAD_REG [8]
    [[maybe_unused]] const uint64_t v192 = s.registers[8];
    // pc 195: 5b537988f5 -> LOAD_CONST [11]
    // pc 200: dd -> ADD []
    // pc 201: 9c -> DROP []
    // pc 202: 90a3f40a1d -> JUMP [10]
    s.stack = {};
    s.pc = 207; s.post_core_pc = s.pc;
    s.opcode_pc = 202; s.opcode = 26;
    s.pc = 120;
    s.steps += 5;
    if (trace) trace(s);
    goto B120;
}
B216: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 216: 5b5ab2fae3 -> LOAD_CONST [11]
    // pc 221: 5b98b63587 -> LOAD_CONST [8]
    // pc 226: 2c -> XOR []
    // pc 227: 9c -> DROP []
    // pc 228: 906237721c -> JUMP [71]
    s.stack = {};
    s.pc = 233; s.post_core_pc = s.pc;
    s.opcode_pc = 228; s.opcode = 26;
    s.pc = 576;
    s.steps += 5;
    if (trace) trace(s);
    goto B576;
}
B240: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 240: 5b32d4ad68 -> LOAD_CONST [11]
    // pc 245: 5b0c0c7e6d -> LOAD_CONST [12]
    // pc 250: 2c -> XOR []
    // pc 251: 9c -> DROP []
    // pc 252: 908bc2c275 -> JUMP [52]
    s.stack = {};
    s.pc = 257; s.post_core_pc = s.pc;
    s.opcode_pc = 252; s.opcode = 26;
    s.pc = 600;
    s.steps += 5;
    if (trace) trace(s);
    goto B600;
}
B264: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 264: 5b7b3e8859 -> LOAD_CONST [8]
    // pc 269: 5b54aa37e4 -> LOAD_CONST [12]
    // pc 274: e3 -> SLT []
    // pc 275: 9c -> DROP []
    // pc 276: 9016e1a50d -> JUMP [27]
    s.stack = {};
    s.pc = 281; s.post_core_pc = s.pc;
    s.opcode_pc = 276; s.opcode = 26;
    s.pc = 1152;
    s.steps += 5;
    if (trace) trace(s);
    goto B1152;
}
B288: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 288: 5b33d8dbd0 -> LOAD_CONST [8]
    // pc 293: 5be089402b -> LOAD_CONST [8]
    // pc 298: 2c -> XOR []
    // pc 299: 9c -> DROP []
    // pc 300: 908b20f6c9 -> JUMP [36]
    s.stack = {};
    s.pc = 305; s.post_core_pc = s.pc;
    s.opcode_pc = 300; s.opcode = 26;
    s.pc = 360;
    s.steps += 5;
    if (trace) trace(s);
    goto B360;
}
B312: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 312: 67d2ce -> LOAD_REG [13]
    [[maybe_unused]] const uint64_t v312 = s.registers[13];
    // pc 315: 67f44f -> LOAD_REG [14]
    [[maybe_unused]] const uint64_t v315 = s.registers[14];
    // pc 318: 03 -> NEQ []
    // pc 319: 9c -> DROP []
    // pc 320: 906567b8ee -> JUMP [42]
    s.stack = {};
    s.pc = 325; s.post_core_pc = s.pc;
    s.opcode_pc = 320; s.opcode = 26;
    s.pc = 1560;
    s.steps += 5;
    if (trace) trace(s);
    goto B1560;
}
B336: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 336: 5ba3143ccd -> LOAD_CONST [8]
    [[maybe_unused]] const uint64_t v336 = UINT64_C(0xfa);
    // pc 341: 1ef132 -> STORE_REG [5]
    s.registers[5] = v336;
    // pc 344: 67eaf8 -> LOAD_REG [5]
    // pc 347: 5b8a75b905 -> LOAD_CONST [8]
    // pc 352: 2c -> XOR []
    [[maybe_unused]] const uint64_t v352 = UINT64_C(0x0);
    // pc 353: 90d19e8e0f -> JUMP [15]
    s.stack = {v352};
    s.pc = 358; s.post_core_pc = s.pc;
    s.opcode_pc = 353; s.opcode = 26;
    s.pc = 1008;
    s.steps += 6;
    if (trace) trace(s);
    goto B1008;
}
B360: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 360: 675a72 -> LOAD_REG [5]
    [[maybe_unused]] const uint64_t v360 = s.registers[5];
    // pc 363: 67d548 -> LOAD_REG [11]
    [[maybe_unused]] const uint64_t v363 = s.registers[11];
    // pc 366: 03 -> NEQ []
    // pc 367: 9c -> DROP []
    // pc 368: 90f8754e1f -> JUMP [68]
    s.stack = {};
    s.pc = 373; s.post_core_pc = s.pc;
    s.opcode_pc = 368; s.opcode = 26;
    s.pc = 696;
    s.steps += 5;
    if (trace) trace(s);
    goto B696;
}
B384: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 384: 670be8 -> LOAD_REG [3]
    [[maybe_unused]] const uint64_t v384 = s.registers[3];
    // pc 387: 5b04d3b6f4 -> LOAD_CONST [7]
    // pc 392: dd -> ADD []
    // pc 393: 9c -> DROP []
    // pc 394: 902d6902e9 -> JUMP [5]
    s.stack = {};
    s.pc = 399; s.post_core_pc = s.pc;
    s.opcode_pc = 394; s.opcode = 26;
    s.pc = 1488;
    s.steps += 5;
    if (trace) trace(s);
    goto B1488;
}
B408: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 4) throw std::runtime_error("block budget");
    // pc 408: 5bf2d7df0b -> LOAD_CONST [10]
    // pc 413: 77 -> NOT []
    // pc 414: 9c -> DROP []
    // pc 415: 90a4cda61d -> JUMP [11]
    s.stack = {};
    s.pc = 420; s.post_core_pc = s.pc;
    s.opcode_pc = 415; s.opcode = 26;
    s.pc = 1224;
    s.steps += 4;
    if (trace) trace(s);
    goto B1224;
}
B432: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 1) throw std::runtime_error("block budget");
    // pc 432: 903e1b4a38 -> JUMP [30]
    s.stack = {};
    s.pc = 437; s.post_core_pc = s.pc;
    s.opcode_pc = 432; s.opcode = 26;
    s.pc = 528;
    s.steps += 1;
    if (trace) trace(s);
    goto B528;
}
B456: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 456: 5b62135618 -> LOAD_CONST [10]
    // pc 461: 5b2e12757e -> LOAD_CONST [7]
    // pc 466: 2c -> XOR []
    // pc 467: 9c -> DROP []
    // pc 468: 904f183a18 -> JUMP [13]
    s.stack = {};
    s.pc = 473; s.post_core_pc = s.pc;
    s.opcode_pc = 468; s.opcode = 26;
    s.pc = 1608;
    s.steps += 5;
    if (trace) trace(s);
    goto B1608;
}
B480: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 1) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 480: fa16819b3c -> JNZ [54]
    s.stack = {};
    s.pc = 485; s.post_core_pc = s.pc;
    s.opcode_pc = 480; s.opcode = 28;
    s.pc = s0 != 0 ? 384 : 485;
    s.steps += 1;
    if (trace) trace(s);
    if (s0 != 0) goto B384;
    goto B485;
}
B485: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 1) throw std::runtime_error("block budget");
    // pc 485: 906bae2624 -> JUMP [48]
    s.stack = {};
    s.pc = 490; s.post_core_pc = s.pc;
    s.opcode_pc = 485; s.opcode = 26;
    s.pc = 432;
    s.steps += 1;
    if (trace) trace(s);
    goto B432;
}
B504: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 504: 5b583cfccb -> LOAD_CONST [12]
    // pc 509: 5b7b1dc6f6 -> LOAD_CONST [8]
    // pc 514: e3 -> SLT []
    // pc 515: 9c -> DROP []
    // pc 516: 90aa6a19e1 -> JUMP [62]
    s.stack = {};
    s.pc = 521; s.post_core_pc = s.pc;
    s.opcode_pc = 516; s.opcode = 26;
    s.pc = 1392;
    s.steps += 5;
    if (trace) trace(s);
    goto B1392;
}
B528: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 528: 67862f -> LOAD_REG [10]
    [[maybe_unused]] const uint64_t v528 = s.registers[10];
    // pc 531: 5b27e1341d -> LOAD_CONST [10]
    // pc 536: dd -> ADD []
    // pc 537: 9c -> DROP []
    // pc 538: 909da64782 -> JUMP [5]
    s.stack = {};
    s.pc = 543; s.post_core_pc = s.pc;
    s.opcode_pc = 538; s.opcode = 26;
    s.pc = 1488;
    s.steps += 5;
    if (trace) trace(s);
    goto B1488;
}
B552: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 7) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 552: 5bef458a5f -> LOAD_CONST [6]
    [[maybe_unused]] const uint64_t v552 = UINT64_C(0x1);
    // pc 557: dd -> ADD []
    [[maybe_unused]] const uint64_t v557 = (s0 + v552);
    // pc 558: 367511ac -> CALL [2, 1]
    [[maybe_unused]] const uint64_t v558 = host_2(s, v557);
    // pc 562: 9c -> DROP []
    // pc 563: 3691c3ad -> CALL [5, 0]
    [[maybe_unused]] const uint64_t v563 = host_5(s);
    // pc 567: 9c -> DROP []
    // pc 568: 90a0416ae3 -> JUMP [7]
    s.stack = {};
    s.pc = 573; s.post_core_pc = s.pc;
    s.opcode_pc = 568; s.opcode = 26;
    s.pc = 1128;
    s.steps += 7;
    if (trace) trace(s);
    goto B1128;
}
B576: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 576: 5b5d479003 -> LOAD_CONST [8]
    // pc 581: 5bc2f49e9a -> LOAD_CONST [8]
    // pc 586: e3 -> SLT []
    // pc 587: 9c -> DROP []
    // pc 588: 909ba6784f -> JUMP [38]
    s.stack = {};
    s.pc = 593; s.post_core_pc = s.pc;
    s.opcode_pc = 588; s.opcode = 26;
    s.pc = 1296;
    s.steps += 5;
    if (trace) trace(s);
    goto B1296;
}
B600: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 600: 5bf985e0ee -> LOAD_CONST [12]
    // pc 605: 5b1a92a91d -> LOAD_CONST [8]
    // pc 610: 2c -> XOR []
    // pc 611: 9c -> DROP []
    // pc 612: 90d9ae463c -> JUMP [72]
    s.stack = {};
    s.pc = 617; s.post_core_pc = s.pc;
    s.opcode_pc = 612; s.opcode = 26;
    s.pc = 408;
    s.steps += 5;
    if (trace) trace(s);
    goto B408;
}
B624: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 624: 5b0d7a613c -> LOAD_CONST [8]
    [[maybe_unused]] const uint64_t v624 = UINT64_C(0xfa);
    // pc 629: 1e93ff -> STORE_REG [5]
    s.registers[5] = v624;
    // pc 632: 67c4a7 -> LOAD_REG [5]
    // pc 635: 5b7ee3960f -> LOAD_CONST [10]
    // pc 640: 2c -> XOR []
    [[maybe_unused]] const uint64_t v640 = UINT64_C(0x5d);
    // pc 641: 90bd82c73a -> JUMP [65]
    s.stack = {v640};
    s.pc = 646; s.post_core_pc = s.pc;
    s.opcode_pc = 641; s.opcode = 26;
    s.pc = 936;
    s.steps += 6;
    if (trace) trace(s);
    goto B936;
}
B648: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 648: 5ba325ddcd -> LOAD_CONST [10]
    // pc 653: 5b21f8379b -> LOAD_CONST [9]
    // pc 658: 2c -> XOR []
    // pc 659: 9c -> DROP []
    // pc 660: 9052196df2 -> JUMP [57]
    s.stack = {};
    s.pc = 665; s.post_core_pc = s.pc;
    s.opcode_pc = 660; s.opcode = 26;
    s.pc = 1680;
    s.steps += 5;
    if (trace) trace(s);
    goto B1680;
}
B672: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 672: 5b21e75c7a -> LOAD_CONST [12]
    // pc 677: 5b09424715 -> LOAD_CONST [9]
    // pc 682: e3 -> SLT []
    // pc 683: 9c -> DROP []
    // pc 684: 9096cbaac0 -> JUMP [61]
    s.stack = {};
    s.pc = 689; s.post_core_pc = s.pc;
    s.opcode_pc = 684; s.opcode = 26;
    s.pc = 1248;
    s.steps += 5;
    if (trace) trace(s);
    goto B1248;
}
B696: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 696: 5b055497a0 -> LOAD_CONST [8]
    [[maybe_unused]] const uint64_t v696 = UINT64_C(0xfa);
    // pc 701: 1ebb8b -> STORE_REG [5]
    s.registers[5] = v696;
    // pc 704: 675cd4 -> LOAD_REG [5]
    // pc 707: 5b7ceaae4d -> LOAD_CONST [12]
    // pc 712: 2c -> XOR []
    [[maybe_unused]] const uint64_t v712 = UINT64_C(0xa0);
    // pc 713: 908901d47b -> JUMP [69]
    s.stack = {v712};
    s.pc = 718; s.post_core_pc = s.pc;
    s.opcode_pc = 713; s.opcode = 26;
    s.pc = 792;
    s.steps += 6;
    if (trace) trace(s);
    goto B792;
}
B720: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 720: 5b9cba9a94 -> LOAD_CONST [11]
    // pc 725: 5b43e2117d -> LOAD_CONST [11]
    // pc 730: e3 -> SLT []
    // pc 731: 9c -> DROP []
    // pc 732: 9039167d69 -> JUMP [41]
    s.stack = {};
    s.pc = 737; s.post_core_pc = s.pc;
    s.opcode_pc = 732; s.opcode = 26;
    s.pc = 96;
    s.steps += 5;
    if (trace) trace(s);
    goto B96;
}
B744: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 744: 676dee -> LOAD_REG [7]
    [[maybe_unused]] const uint64_t v744 = s.registers[7];
    // pc 747: 5b5a921b99 -> LOAD_CONST [7]
    // pc 752: dd -> ADD []
    // pc 753: 9c -> DROP []
    // pc 754: 905487e16a -> JUMP [28]
    s.stack = {};
    s.pc = 759; s.post_core_pc = s.pc;
    s.opcode_pc = 754; s.opcode = 26;
    s.pc = 1440;
    s.steps += 5;
    if (trace) trace(s);
    goto B1440;
}
B768: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 768: 1e1f4e -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 771: 90b9f79e10 -> JUMP [50]
    s.stack = {};
    s.pc = 776; s.post_core_pc = s.pc;
    s.opcode_pc = 771; s.opcode = 26;
    s.pc = 864;
    s.steps += 2;
    if (trace) trace(s);
    goto B864;
}
B792: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 792: 1ea79d -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 795: 9029f9fbd7 -> JUMP [26]
    s.stack = {};
    s.pc = 800; s.post_core_pc = s.pc;
    s.opcode_pc = 795; s.opcode = 26;
    s.pc = 216;
    s.steps += 2;
    if (trace) trace(s);
    goto B216;
}
B816: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 4) throw std::runtime_error("block budget");
    // pc 816: 5b7f223f8e -> LOAD_CONST [11]
    // pc 821: 77 -> NOT []
    // pc 822: 9c -> DROP []
    // pc 823: 9075ca3471 -> JUMP [18]
    s.stack = {};
    s.pc = 828; s.post_core_pc = s.pc;
    s.opcode_pc = 823; s.opcode = 26;
    s.pc = 1032;
    s.steps += 4;
    if (trace) trace(s);
    goto B1032;
}
B840: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 840: 5bb60a3cf8 -> LOAD_CONST [8]
    [[maybe_unused]] const uint64_t v840 = UINT64_C(0xfa);
    // pc 845: 1e0422 -> STORE_REG [5]
    s.registers[5] = v840;
    // pc 848: 672ff9 -> LOAD_REG [5]
    // pc 851: 5b06256dff -> LOAD_CONST [11]
    // pc 856: 2c -> XOR []
    [[maybe_unused]] const uint64_t v856 = UINT64_C(0xe8);
    // pc 857: 90e5943e21 -> JUMP [44]
    s.stack = {v856};
    s.pc = 862; s.post_core_pc = s.pc;
    s.opcode_pc = 857; s.opcode = 26;
    s.pc = 984;
    s.steps += 6;
    if (trace) trace(s);
    goto B984;
}
B864: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 864: 5bcfe7bebc -> LOAD_CONST [11]
    // pc 869: 5bb106ad81 -> LOAD_CONST [12]
    // pc 874: 2c -> XOR []
    // pc 875: 9c -> DROP []
    // pc 876: 906c1e1f52 -> JUMP [34]
    s.stack = {};
    s.pc = 881; s.post_core_pc = s.pc;
    s.opcode_pc = 876; s.opcode = 26;
    s.pc = 1536;
    s.steps += 5;
    if (trace) trace(s);
    goto B1536;
}
B888: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 4) throw std::runtime_error("block budget");
    // pc 888: 360016ad -> CALL [6, 0]
    [[maybe_unused]] const uint64_t v888 = host_6(s);
    // pc 892: 9c -> DROP []
    // pc 893: 5b413144b0 -> LOAD_CONST [4]
    [[maybe_unused]] const uint64_t v893 = UINT64_C(0x0);
    // pc 898: 50 -> RETURN []
    s.stack = {};
    s.pc = 899; s.post_core_pc = s.pc;
    s.opcode_pc = 898; s.opcode = 29;
    s.result = v893; s.halted = true;
    s.steps += 4;
    if (trace) trace(s);
    return;
}
B912: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 912: 6771a5 -> LOAD_REG [14]
    [[maybe_unused]] const uint64_t v912 = s.registers[14];
    // pc 915: 673a1c -> LOAD_REG [4]
    [[maybe_unused]] const uint64_t v915 = s.registers[4];
    // pc 918: 03 -> NEQ []
    // pc 919: 9c -> DROP []
    // pc 920: 90ad6dff30 -> JUMP [22]
    s.stack = {};
    s.pc = 925; s.post_core_pc = s.pc;
    s.opcode_pc = 920; s.opcode = 26;
    s.pc = 720;
    s.steps += 5;
    if (trace) trace(s);
    goto B720;
}
B936: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 936: 1e16f0 -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 939: 90d57cace2 -> JUMP [9]
    s.stack = {};
    s.pc = 944; s.post_core_pc = s.pc;
    s.opcode_pc = 939; s.opcode = 26;
    s.pc = 264;
    s.steps += 2;
    if (trace) trace(s);
    goto B264;
}
B960: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 7) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 960: 1e2fd2 -> STORE_REG [8]
    s.registers[8] = s0;
    // pc 963: 367b57ad -> CALL [1, 0]
    [[maybe_unused]] const uint64_t v963 = host_1(s);
    // pc 967: 9c -> DROP []
    // pc 968: 5b836759bd -> LOAD_CONST [4]
    [[maybe_unused]] const uint64_t v968 = UINT64_C(0x0);
    // pc 973: 365631ac -> CALL [2, 1]
    [[maybe_unused]] const uint64_t v973 = host_2(s, v968);
    // pc 977: 9c -> DROP []
    // pc 978: 90d0ab6625 -> JUMP [3]
    s.stack = {};
    s.pc = 983; s.post_core_pc = s.pc;
    s.opcode_pc = 978; s.opcode = 26;
    s.pc = 1704;
    s.steps += 7;
    if (trace) trace(s);
    goto B1704;
}
B984: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 984: 1e6640 -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 987: 905d29312f -> JUMP [17]
    s.stack = {};
    s.pc = 992; s.post_core_pc = s.pc;
    s.opcode_pc = 987; s.opcode = 26;
    s.pc = 504;
    s.steps += 2;
    if (trace) trace(s);
    goto B504;
}
B1008: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1008: 1e0e8b -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 1011: 901f8d720c -> JUMP [3]
    s.stack = {};
    s.pc = 1016; s.post_core_pc = s.pc;
    s.opcode_pc = 1011; s.opcode = 26;
    s.pc = 1704;
    s.steps += 2;
    if (trace) trace(s);
    goto B1704;
}
B1032: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 1032: 5b520f91b6 -> LOAD_CONST [7]
    [[maybe_unused]] const uint64_t v1032 = UINT64_C(0x5);
    // pc 1037: 1e45bb -> STORE_REG [5]
    s.registers[5] = v1032;
    // pc 1040: 676e72 -> LOAD_REG [5]
    // pc 1043: 5b53af16fe -> LOAD_CONST [7]
    // pc 1048: 2c -> XOR []
    [[maybe_unused]] const uint64_t v1048 = UINT64_C(0x0);
    // pc 1049: 90c126bfe3 -> JUMP [19]
    s.stack = {v1048};
    s.pc = 1054; s.post_core_pc = s.pc;
    s.opcode_pc = 1049; s.opcode = 26;
    s.pc = 1512;
    s.steps += 6;
    if (trace) trace(s);
    goto B1512;
}
B1056: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1056: 1ebef5 -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 1059: 90c2816519 -> JUMP [20]
    s.stack = {};
    s.pc = 1064; s.post_core_pc = s.pc;
    s.opcode_pc = 1059; s.opcode = 26;
    s.pc = 1080;
    s.steps += 2;
    if (trace) trace(s);
    goto B1080;
}
B1080: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1080: 5bd10dd844 -> LOAD_CONST [10]
    // pc 1085: 5b911d3a2a -> LOAD_CONST [7]
    // pc 1090: e3 -> SLT []
    // pc 1091: 9c -> DROP []
    // pc 1092: 901578833b -> JUMP [35]
    s.stack = {};
    s.pc = 1097; s.post_core_pc = s.pc;
    s.opcode_pc = 1092; s.opcode = 26;
    s.pc = 1200;
    s.steps += 5;
    if (trace) trace(s);
    goto B1200;
}
B1104: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1104: 1e29a4 -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 1107: 90f32dd968 -> JUMP [58]
    s.stack = {};
    s.pc = 1112; s.post_core_pc = s.pc;
    s.opcode_pc = 1107; s.opcode = 26;
    s.pc = 192;
    s.steps += 2;
    if (trace) trace(s);
    goto B192;
}
B1128: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 1) throw std::runtime_error("block budget");
    // pc 1128: 90a56014e7 -> JUMP [23]
    s.stack = {};
    s.pc = 1133; s.post_core_pc = s.pc;
    s.opcode_pc = 1128; s.opcode = 26;
    s.pc = 1272;
    s.steps += 1;
    if (trace) trace(s);
    goto B1272;
}
B1152: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1152: 5b181235a2 -> LOAD_CONST [8]
    // pc 1157: 5be4efd690 -> LOAD_CONST [9]
    // pc 1162: e3 -> SLT []
    // pc 1163: 9c -> DROP []
    // pc 1164: 9059fea0c4 -> JUMP [31]
    s.stack = {};
    s.pc = 1169; s.post_core_pc = s.pc;
    s.opcode_pc = 1164; s.opcode = 26;
    s.pc = 744;
    s.steps += 5;
    if (trace) trace(s);
    goto B744;
}
B1176: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1176: 67e643 -> LOAD_REG [6]
    [[maybe_unused]] const uint64_t v1176 = s.registers[6];
    // pc 1179: 67952a -> LOAD_REG [0]
    [[maybe_unused]] const uint64_t v1179 = s.registers[0];
    // pc 1182: 03 -> NEQ []
    // pc 1183: 9c -> DROP []
    // pc 1184: 90a9b105ae -> JUMP [43]
    s.stack = {};
    s.pc = 1189; s.post_core_pc = s.pc;
    s.opcode_pc = 1184; s.opcode = 26;
    s.pc = 840;
    s.steps += 5;
    if (trace) trace(s);
    goto B840;
}
B1200: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1200: 5bf9061210 -> LOAD_CONST [11]
    // pc 1205: 5b6e4f98f9 -> LOAD_CONST [11]
    // pc 1210: e3 -> SLT []
    // pc 1211: 9c -> DROP []
    // pc 1212: 90cc6f4e7f -> JUMP [64]
    s.stack = {};
    s.pc = 1217; s.post_core_pc = s.pc;
    s.opcode_pc = 1212; s.opcode = 26;
    s.pc = 624;
    s.steps += 5;
    if (trace) trace(s);
    goto B624;
}
B1224: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 4) throw std::runtime_error("block budget");
    // pc 1224: 5b66d2772c -> LOAD_CONST [10]
    // pc 1229: 77 -> NOT []
    // pc 1230: 9c -> DROP []
    // pc 1231: 90d89e91a9 -> JUMP [51]
    s.stack = {};
    s.pc = 1236; s.post_core_pc = s.pc;
    s.opcode_pc = 1231; s.opcode = 26;
    s.pc = 1584;
    s.steps += 4;
    if (trace) trace(s);
    goto B1584;
}
B1248: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1248: 6708a4 -> LOAD_REG [8]
    [[maybe_unused]] const uint64_t v1248 = s.registers[8];
    // pc 1251: 67dbb4 -> LOAD_REG [14]
    [[maybe_unused]] const uint64_t v1251 = s.registers[14];
    // pc 1254: 03 -> NEQ []
    // pc 1255: 9c -> DROP []
    // pc 1256: 905010b3b0 -> JUMP [8]
    s.stack = {};
    s.pc = 1261; s.post_core_pc = s.pc;
    s.opcode_pc = 1256; s.opcode = 26;
    s.pc = 888;
    s.steps += 5;
    if (trace) trace(s);
    goto B888;
}
B1272: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1272: 5b961ed139 -> LOAD_CONST [10]
    // pc 1277: 5b1df3054f -> LOAD_CONST [9]
    // pc 1282: 2c -> XOR []
    // pc 1283: 9c -> DROP []
    // pc 1284: 90a82ad7a8 -> JUMP [55]
    s.stack = {};
    s.pc = 1289; s.post_core_pc = s.pc;
    s.opcode_pc = 1284; s.opcode = 26;
    s.pc = 1344;
    s.steps += 5;
    if (trace) trace(s);
    goto B1344;
}
B1296: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1296: 5bcc36fe41 -> LOAD_CONST [7]
    // pc 1301: 5b3e7f285c -> LOAD_CONST [8]
    // pc 1306: 2c -> XOR []
    // pc 1307: 9c -> DROP []
    // pc 1308: 9037a82ed8 -> JUMP [46]
    s.stack = {};
    s.pc = 1313; s.post_core_pc = s.pc;
    s.opcode_pc = 1308; s.opcode = 26;
    s.pc = 1368;
    s.steps += 5;
    if (trace) trace(s);
    goto B1368;
}
B1320: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1320: 5b7a48f8e9 -> LOAD_CONST [9]
    // pc 1325: 5b8d376242 -> LOAD_CONST [9]
    // pc 1330: 2c -> XOR []
    // pc 1331: 9c -> DROP []
    // pc 1332: 900df304d2 -> JUMP [40]
    s.stack = {};
    s.pc = 1337; s.post_core_pc = s.pc;
    s.opcode_pc = 1332; s.opcode = 26;
    s.pc = 240;
    s.steps += 5;
    if (trace) trace(s);
    goto B240;
}
B1344: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 1344: 5bc5590ba3 -> LOAD_CONST [12]
    [[maybe_unused]] const uint64_t v1344 = UINT64_C(0x5a);
    // pc 1349: 1e4fb0 -> STORE_REG [5]
    s.registers[5] = v1344;
    // pc 1352: 6730f9 -> LOAD_REG [5]
    // pc 1355: 5b00018b7b -> LOAD_CONST [12]
    // pc 1360: 2c -> XOR []
    [[maybe_unused]] const uint64_t v1360 = UINT64_C(0x0);
    // pc 1361: 904264613e -> JUMP [56]
    s.stack = {v1360};
    s.pc = 1366; s.post_core_pc = s.pc;
    s.opcode_pc = 1361; s.opcode = 26;
    s.pc = 768;
    s.steps += 6;
    if (trace) trace(s);
    goto B768;
}
B1368: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 8) throw std::runtime_error("block budget");
    // pc 1368: 672724 -> LOAD_REG [6]
    [[maybe_unused]] const uint64_t v1368 = s.registers[6];
    // pc 1371: 5be75cb16b -> LOAD_CONST [9]
    // pc 1376: dd -> ADD []
    // pc 1377: 9c -> DROP []
    // pc 1378: 67f799 -> LOAD_REG [8]
    [[maybe_unused]] const uint64_t v1378 = s.registers[8];
    // pc 1381: 5b0b2ebf13 -> LOAD_CONST [7]
    [[maybe_unused]] const uint64_t v1381 = UINT64_C(0x5);
    // pc 1386: d1 -> SGT []
    [[maybe_unused]] const uint64_t v1386 = ((v1378 ^ UINT64_C(0x8000000000000000)) > (v1381 ^ UINT64_C(0x8000000000000000)));
    // pc 1387: 901142e378 -> JUMP [47]
    s.stack = {v1386};
    s.pc = 1392; s.post_core_pc = s.pc;
    s.opcode_pc = 1387; s.opcode = 26;
    s.pc = 480;
    s.steps += 8;
    if (trace) trace(s);
    goto B480;
}
B1392: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1392: 676336 -> LOAD_REG [10]
    [[maybe_unused]] const uint64_t v1392 = s.registers[10];
    // pc 1395: 5bf1e6f6ca -> LOAD_CONST [7]
    // pc 1400: dd -> ADD []
    // pc 1401: 9c -> DROP []
    // pc 1402: 90cddc675c -> JUMP [14]
    s.stack = {};
    s.pc = 1407; s.post_core_pc = s.pc;
    s.opcode_pc = 1402; s.opcode = 26;
    s.pc = 336;
    s.steps += 5;
    if (trace) trace(s);
    goto B336;
}
B1416: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1416: 5b6d8078cf -> LOAD_CONST [12]
    // pc 1421: 5b63626649 -> LOAD_CONST [7]
    // pc 1426: 2c -> XOR []
    // pc 1427: 9c -> DROP []
    // pc 1428: 907ecf677e -> JUMP [49]
    s.stack = {};
    s.pc = 1433; s.post_core_pc = s.pc;
    s.opcode_pc = 1428; s.opcode = 26;
    s.pc = 456;
    s.steps += 5;
    if (trace) trace(s);
    goto B456;
}
B1440: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 6) throw std::runtime_error("block budget");
    // pc 1440: 5bef420167 -> LOAD_CONST [10]
    [[maybe_unused]] const uint64_t v1440 = UINT64_C(0xa7);
    // pc 1445: 1eef77 -> STORE_REG [5]
    s.registers[5] = v1440;
    // pc 1448: 67103e -> LOAD_REG [5]
    // pc 1451: 5bbcd3064a -> LOAD_CONST [8]
    // pc 1456: 2c -> XOR []
    [[maybe_unused]] const uint64_t v1456 = UINT64_C(0x5d);
    // pc 1457: 9082f2a560 -> JUMP [29]
    s.stack = {v1456};
    s.pc = 1462; s.post_core_pc = s.pc;
    s.opcode_pc = 1457; s.opcode = 26;
    s.pc = 1104;
    s.steps += 6;
    if (trace) trace(s);
    goto B1104;
}
B1464: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 1) throw std::runtime_error("block budget");
    // pc 1464: 90a3855367 -> JUMP [59]
    s.stack = {};
    s.pc = 1469; s.post_core_pc = s.pc;
    s.opcode_pc = 1464; s.opcode = 26;
    s.pc = 48;
    s.steps += 1;
    if (trace) trace(s);
    goto B48;
}
B1488: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 7) throw std::runtime_error("block budget");
    // pc 1488: 5bb5657a4e -> LOAD_CONST [5]
    // pc 1493: 77 -> NOT []
    [[maybe_unused]] const uint64_t v1493 = UINT64_C(0x88767a18df8a92b0);
    // pc 1494: 1ed057 -> STORE_REG [8]
    s.registers[8] = v1493;
    // pc 1497: 36d13ead -> CALL [4, 0]
    [[maybe_unused]] const uint64_t v1497 = host_4(s);
    // pc 1501: 9c -> DROP []
    // pc 1502: 36a947ad -> CALL [5, 0]
    [[maybe_unused]] const uint64_t v1502 = host_5(s);
    // pc 1506: 907e4cab76 -> JUMP [6]
    s.stack = {v1502};
    s.pc = 1511; s.post_core_pc = s.pc;
    s.opcode_pc = 1506; s.opcode = 26;
    s.pc = 552;
    s.steps += 7;
    if (trace) trace(s);
    goto B552;
}
B1512: { // incoming stack: 1 uint64 values
    if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    [[maybe_unused]] const uint64_t s0 = s.stack[0];
    // pc 1512: 1ed36b -> STORE_REG [5]
    s.registers[5] = s0;
    // pc 1515: 904cdaba84 -> JUMP [21]
    s.stack = {};
    s.pc = 1520; s.post_core_pc = s.pc;
    s.opcode_pc = 1515; s.opcode = 26;
    s.pc = 912;
    s.steps += 2;
    if (trace) trace(s);
    goto B912;
}
B1536: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 4) throw std::runtime_error("block budget");
    // pc 1536: 5bcccb5e42 -> LOAD_CONST [10]
    // pc 1541: 77 -> NOT []
    // pc 1542: 9c -> DROP []
    // pc 1543: 9047aece34 -> JUMP [24]
    s.stack = {};
    s.pc = 1548; s.post_core_pc = s.pc;
    s.opcode_pc = 1543; s.opcode = 26;
    s.pc = 312;
    s.steps += 4;
    if (trace) trace(s);
    goto B312;
}
B1560: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1560: 67d23d -> LOAD_REG [8]
    [[maybe_unused]] const uint64_t v1560 = s.registers[8];
    // pc 1563: 67237a -> LOAD_REG [8]
    [[maybe_unused]] const uint64_t v1563 = s.registers[8];
    // pc 1566: 03 -> NEQ []
    // pc 1567: 9c -> DROP []
    // pc 1568: 900070fff0 -> JUMP [70]
    s.stack = {};
    s.pc = 1573; s.post_core_pc = s.pc;
    s.opcode_pc = 1568; s.opcode = 26;
    s.pc = 1320;
    s.steps += 5;
    if (trace) trace(s);
    goto B1320;
}
B1584: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1584: 5b9c17284f -> LOAD_CONST [10]
    // pc 1589: 5be8aa8b43 -> LOAD_CONST [11]
    // pc 1594: 2c -> XOR []
    // pc 1595: 9c -> DROP []
    // pc 1596: 90b5ba7577 -> JUMP [33]
    s.stack = {};
    s.pc = 1601; s.post_core_pc = s.pc;
    s.opcode_pc = 1596; s.opcode = 26;
    s.pc = 1176;
    s.steps += 5;
    if (trace) trace(s);
    goto B1176;
}
B1608: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1608: 5be4f5ebd6 -> LOAD_CONST [10]
    // pc 1613: 5b1ddeb853 -> LOAD_CONST [12]
    // pc 1618: e3 -> SLT []
    // pc 1619: 9c -> DROP []
    // pc 1620: 90b52d3545 -> JUMP [25]
    s.stack = {};
    s.pc = 1625; s.post_core_pc = s.pc;
    s.opcode_pc = 1620; s.opcode = 26;
    s.pc = 168;
    s.steps += 5;
    if (trace) trace(s);
    goto B168;
}
B1632: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1632: 67644e -> LOAD_REG [14]
    [[maybe_unused]] const uint64_t v1632 = s.registers[14];
    // pc 1635: 5b5ecb2d0c -> LOAD_CONST [7]
    // pc 1640: dd -> ADD []
    // pc 1641: 9c -> DROP []
    // pc 1642: 9022c9b933 -> JUMP [37]
    s.stack = {};
    s.pc = 1647; s.post_core_pc = s.pc;
    s.opcode_pc = 1642; s.opcode = 26;
    s.pc = 1416;
    s.steps += 5;
    if (trace) trace(s);
    goto B1416;
}
B1656: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1656: 5b2829984c -> LOAD_CONST [9]
    // pc 1661: 5bf0ba8e30 -> LOAD_CONST [8]
    // pc 1666: e3 -> SLT []
    // pc 1667: 9c -> DROP []
    // pc 1668: 9076771437 -> JUMP [67]
    s.stack = {};
    s.pc = 1673; s.post_core_pc = s.pc;
    s.opcode_pc = 1668; s.opcode = 26;
    s.pc = 24;
    s.steps += 5;
    if (trace) trace(s);
    goto B24;
}
B1680: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1680: 5b008fd1c5 -> LOAD_CONST [9]
    // pc 1685: 5b2401e5fe -> LOAD_CONST [12]
    // pc 1690: 2c -> XOR []
    // pc 1691: 9c -> DROP []
    // pc 1692: 908f479c1d -> JUMP [32]
    s.stack = {};
    s.pc = 1697; s.post_core_pc = s.pc;
    s.opcode_pc = 1692; s.opcode = 26;
    s.pc = 144;
    s.steps += 5;
    if (trace) trace(s);
    goto B144;
}
B1704: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 2) throw std::runtime_error("block budget");
    // pc 1704: 3684a0ad -> CALL [3, 0]
    [[maybe_unused]] const uint64_t v1704 = host_3(s);
    // pc 1708: 40c0af603a -> JZ [45]
    s.stack = {};
    s.pc = 1713; s.post_core_pc = s.pc;
    s.opcode_pc = 1708; s.opcode = 27;
    s.pc = v1704 == 0 ? 1632 : 1713;
    s.steps += 2;
    if (trace) trace(s);
    if (v1704 == 0) goto B1632;
    goto B1713;
}
B1713: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 1) throw std::runtime_error("block budget");
    // pc 1713: 9020735ec5 -> JUMP [4]
    s.stack = {};
    s.pc = 1718; s.post_core_pc = s.pc;
    s.opcode_pc = 1713; s.opcode = 26;
    s.pc = 1464;
    s.steps += 1;
    if (trace) trace(s);
    goto B1464;
}
B1728: { // incoming stack: 0 uint64 values
    if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
    if (s.steps > budget || budget - s.steps < 5) throw std::runtime_error("block budget");
    // pc 1728: 5b8dd8d737 -> LOAD_CONST [10]
    // pc 1733: 5b6d661f1f -> LOAD_CONST [7]
    // pc 1738: 2c -> XOR []
    // pc 1739: 9c -> DROP []
    // pc 1740: 907ac05007 -> JUMP [63]
    s.stack = {};
    s.pc = 1745; s.post_core_pc = s.pc;
    s.opcode_pc = 1740; s.opcode = 26;
    s.pc = 816;
    s.steps += 5;
    if (trace) trace(s);
    goto B816;
}
}
} // namespace pafet_devirt
