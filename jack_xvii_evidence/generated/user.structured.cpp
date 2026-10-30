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
// Structured CFG under the analyzer contract; initial registers 0..15 must be zero.
void execute_generated(State& s, const Trace& trace, size_t budget) {
    for (unsigned i=0;i<16;++i) if (s.registers[i]) throw std::runtime_error("structured entry contract");
    { // recovered block 0
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 7) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v10 = UINT64_C(0x0);
        s.registers[8] = v10;
        [[maybe_unused]] const uint64_t v14 = host_0(s);
        s.stack={};
        s.post_core_pc=24; s.opcode_pc=19; s.opcode=26;
        s.pc=72;
        s.steps+=7; if(trace) trace(s);
    }
    { // recovered block 72
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v72 = UINT64_C(0xad2405c91c8c83c1);
        s.registers[8] = v72;
        [[maybe_unused]] const uint64_t v88 = UINT64_C(0xffffffffffffffff);
        s.stack={v88};
        s.post_core_pc=94; s.opcode_pc=89; s.opcode=26;
        s.pc=960;
        s.steps+=6; if(trace) trace(s);
    }
    { // recovered block 960
        if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 7) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t s0=s.stack[0];
        s.registers[8] = s0;
        [[maybe_unused]] const uint64_t v963 = host_1(s);
        [[maybe_unused]] const uint64_t v968 = UINT64_C(0x0);
        [[maybe_unused]] const uint64_t v973 = host_2(s, v968);
        s.stack={};
        s.post_core_pc=983; s.opcode_pc=978; s.opcode=26;
        s.pc=1704;
        s.steps+=7; if(trace) trace(s);
    }
    while (true) {
        bool loop_exit=false;
        { // recovered block 1704
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1704 = host_3(s);
            s.stack={};
            s.post_core_pc=1713; s.opcode_pc=1708; s.opcode=27;
            const bool taken=(v1704 == 0);
            s.pc=taken ? 1632 : 1713;
            loop_exit=taken;
            s.steps+=2; if(trace) trace(s);
        }
        if (loop_exit) break;
        { // recovered block 1713
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 1) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1718; s.opcode_pc=1713; s.opcode=26;
            s.pc=1464;
            s.steps+=1; if(trace) trace(s);
        }
        { // recovered block 1464
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 1) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1469; s.opcode_pc=1464; s.opcode=26;
            s.pc=48;
            s.steps+=1; if(trace) trace(s);
        }
        { // recovered block 48
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v48 = UINT64_C(0x12);
            s.registers[5] = v48;
            [[maybe_unused]] const uint64_t v64 = UINT64_C(0x48);
            s.stack={v64};
            s.post_core_pc=70; s.opcode_pc=65; s.opcode=26;
            s.pc=1056;
            s.steps+=6; if(trace) trace(s);
        }
        { // recovered block 1056
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.registers[5] = s0;
            s.stack={};
            s.post_core_pc=1064; s.opcode_pc=1059; s.opcode=26;
            s.pc=1080;
            s.steps+=2; if(trace) trace(s);
        }
        { // recovered block 1080
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1097; s.opcode_pc=1092; s.opcode=26;
            s.pc=1200;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1200
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1217; s.opcode_pc=1212; s.opcode=26;
            s.pc=624;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 624
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v624 = UINT64_C(0xfa);
            s.registers[5] = v624;
            [[maybe_unused]] const uint64_t v640 = UINT64_C(0x5d);
            s.stack={v640};
            s.post_core_pc=646; s.opcode_pc=641; s.opcode=26;
            s.pc=936;
            s.steps+=6; if(trace) trace(s);
        }
        { // recovered block 936
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.registers[5] = s0;
            s.stack={};
            s.post_core_pc=944; s.opcode_pc=939; s.opcode=26;
            s.pc=264;
            s.steps+=2; if(trace) trace(s);
        }
        { // recovered block 264
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=281; s.opcode_pc=276; s.opcode=26;
            s.pc=1152;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1152
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1169; s.opcode_pc=1164; s.opcode=26;
            s.pc=744;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 744
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v744 = s.registers[7];
            s.stack={};
            s.post_core_pc=759; s.opcode_pc=754; s.opcode=26;
            s.pc=1440;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1440
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1440 = UINT64_C(0xa7);
            s.registers[5] = v1440;
            [[maybe_unused]] const uint64_t v1456 = UINT64_C(0x5d);
            s.stack={v1456};
            s.post_core_pc=1462; s.opcode_pc=1457; s.opcode=26;
            s.pc=1104;
            s.steps+=6; if(trace) trace(s);
        }
        { // recovered block 1104
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.registers[5] = s0;
            s.stack={};
            s.post_core_pc=1112; s.opcode_pc=1107; s.opcode=26;
            s.pc=192;
            s.steps+=2; if(trace) trace(s);
        }
        { // recovered block 192
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v192 = s.registers[8];
            s.stack={};
            s.post_core_pc=207; s.opcode_pc=202; s.opcode=26;
            s.pc=120;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 120
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v120 = s.registers[4];
            s.stack={};
            s.post_core_pc=135; s.opcode_pc=130; s.opcode=26;
            s.pc=288;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 288
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=305; s.opcode_pc=300; s.opcode=26;
            s.pc=360;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 360
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v360 = s.registers[5];
            [[maybe_unused]] const uint64_t v363 = s.registers[11];
            s.stack={};
            s.post_core_pc=373; s.opcode_pc=368; s.opcode=26;
            s.pc=696;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 696
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v696 = UINT64_C(0xfa);
            s.registers[5] = v696;
            [[maybe_unused]] const uint64_t v712 = UINT64_C(0xa0);
            s.stack={v712};
            s.post_core_pc=718; s.opcode_pc=713; s.opcode=26;
            s.pc=792;
            s.steps+=6; if(trace) trace(s);
        }
        { // recovered block 792
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.registers[5] = s0;
            s.stack={};
            s.post_core_pc=800; s.opcode_pc=795; s.opcode=26;
            s.pc=216;
            s.steps+=2; if(trace) trace(s);
        }
        { // recovered block 216
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=233; s.opcode_pc=228; s.opcode=26;
            s.pc=576;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 576
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=593; s.opcode_pc=588; s.opcode=26;
            s.pc=1296;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1296
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1313; s.opcode_pc=1308; s.opcode=26;
            s.pc=1368;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1368
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 8) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1368 = s.registers[6];
            [[maybe_unused]] const uint64_t v1378 = s.registers[8];
            [[maybe_unused]] const uint64_t v1381 = UINT64_C(0x5);
            [[maybe_unused]] const uint64_t v1386 = ((v1378 ^ UINT64_C(0x8000000000000000)) > (v1381 ^ UINT64_C(0x8000000000000000)));
            s.stack={v1386};
            s.post_core_pc=1392; s.opcode_pc=1387; s.opcode=26;
            s.pc=480;
            s.steps+=8; if(trace) trace(s);
        }
        { // recovered block 480
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 1) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.stack={};
            s.post_core_pc=485; s.opcode_pc=480; s.opcode=28;
            s.pc=485;
            s.steps+=1; if(trace) trace(s);
        }
        { // recovered block 485
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 1) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=490; s.opcode_pc=485; s.opcode=26;
            s.pc=432;
            s.steps+=1; if(trace) trace(s);
        }
        { // recovered block 432
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 1) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=437; s.opcode_pc=432; s.opcode=26;
            s.pc=528;
            s.steps+=1; if(trace) trace(s);
        }
        { // recovered block 528
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v528 = s.registers[10];
            s.stack={};
            s.post_core_pc=543; s.opcode_pc=538; s.opcode=26;
            s.pc=1488;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1488
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 7) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1493 = UINT64_C(0x88767a18df8a92b0);
            s.registers[8] = v1493;
            [[maybe_unused]] const uint64_t v1497 = host_4(s);
            [[maybe_unused]] const uint64_t v1502 = host_5(s);
            s.stack={v1502};
            s.post_core_pc=1511; s.opcode_pc=1506; s.opcode=26;
            s.pc=552;
            s.steps+=7; if(trace) trace(s);
        }
        { // recovered block 552
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 7) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            [[maybe_unused]] const uint64_t v552 = UINT64_C(0x1);
            [[maybe_unused]] const uint64_t v557 = (s0 + v552);
            [[maybe_unused]] const uint64_t v558 = host_2(s, v557);
            [[maybe_unused]] const uint64_t v563 = host_5(s);
            s.stack={};
            s.post_core_pc=573; s.opcode_pc=568; s.opcode=26;
            s.pc=1128;
            s.steps+=7; if(trace) trace(s);
        }
        { // recovered block 1128
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 1) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1133; s.opcode_pc=1128; s.opcode=26;
            s.pc=1272;
            s.steps+=1; if(trace) trace(s);
        }
        { // recovered block 1272
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1289; s.opcode_pc=1284; s.opcode=26;
            s.pc=1344;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1344
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1344 = UINT64_C(0x5a);
            s.registers[5] = v1344;
            [[maybe_unused]] const uint64_t v1360 = UINT64_C(0x0);
            s.stack={v1360};
            s.post_core_pc=1366; s.opcode_pc=1361; s.opcode=26;
            s.pc=768;
            s.steps+=6; if(trace) trace(s);
        }
        { // recovered block 768
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.registers[5] = s0;
            s.stack={};
            s.post_core_pc=776; s.opcode_pc=771; s.opcode=26;
            s.pc=864;
            s.steps+=2; if(trace) trace(s);
        }
        { // recovered block 864
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=881; s.opcode_pc=876; s.opcode=26;
            s.pc=1536;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1536
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 4) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1548; s.opcode_pc=1543; s.opcode=26;
            s.pc=312;
            s.steps+=4; if(trace) trace(s);
        }
        { // recovered block 312
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v312 = s.registers[13];
            [[maybe_unused]] const uint64_t v315 = s.registers[14];
            s.stack={};
            s.post_core_pc=325; s.opcode_pc=320; s.opcode=26;
            s.pc=1560;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1560
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1560 = s.registers[8];
            [[maybe_unused]] const uint64_t v1563 = s.registers[8];
            s.stack={};
            s.post_core_pc=1573; s.opcode_pc=1568; s.opcode=26;
            s.pc=1320;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1320
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1337; s.opcode_pc=1332; s.opcode=26;
            s.pc=240;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 240
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=257; s.opcode_pc=252; s.opcode=26;
            s.pc=600;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 600
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=617; s.opcode_pc=612; s.opcode=26;
            s.pc=408;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 408
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 4) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=420; s.opcode_pc=415; s.opcode=26;
            s.pc=1224;
            s.steps+=4; if(trace) trace(s);
        }
        { // recovered block 1224
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 4) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1236; s.opcode_pc=1231; s.opcode=26;
            s.pc=1584;
            s.steps+=4; if(trace) trace(s);
        }
        { // recovered block 1584
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=1601; s.opcode_pc=1596; s.opcode=26;
            s.pc=1176;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1176
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1176 = s.registers[6];
            [[maybe_unused]] const uint64_t v1179 = s.registers[0];
            s.stack={};
            s.post_core_pc=1189; s.opcode_pc=1184; s.opcode=26;
            s.pc=840;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 840
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v840 = UINT64_C(0xfa);
            s.registers[5] = v840;
            [[maybe_unused]] const uint64_t v856 = UINT64_C(0xe8);
            s.stack={v856};
            s.post_core_pc=862; s.opcode_pc=857; s.opcode=26;
            s.pc=984;
            s.steps+=6; if(trace) trace(s);
        }
        { // recovered block 984
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.registers[5] = s0;
            s.stack={};
            s.post_core_pc=992; s.opcode_pc=987; s.opcode=26;
            s.pc=504;
            s.steps+=2; if(trace) trace(s);
        }
        { // recovered block 504
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            s.stack={};
            s.post_core_pc=521; s.opcode_pc=516; s.opcode=26;
            s.pc=1392;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 1392
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v1392 = s.registers[10];
            s.stack={};
            s.post_core_pc=1407; s.opcode_pc=1402; s.opcode=26;
            s.pc=336;
            s.steps+=5; if(trace) trace(s);
        }
        { // recovered block 336
            if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t v336 = UINT64_C(0xfa);
            s.registers[5] = v336;
            [[maybe_unused]] const uint64_t v352 = UINT64_C(0x0);
            s.stack={v352};
            s.post_core_pc=358; s.opcode_pc=353; s.opcode=26;
            s.pc=1008;
            s.steps+=6; if(trace) trace(s);
        }
        { // recovered block 1008
            if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
            if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
            [[maybe_unused]] const uint64_t s0=s.stack[0];
            s.registers[5] = s0;
            s.stack={};
            s.post_core_pc=1016; s.opcode_pc=1011; s.opcode=26;
            s.pc=1704;
            s.steps+=2; if(trace) trace(s);
        }
    }
    { // recovered block 1632
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v1632 = s.registers[14];
        s.stack={};
        s.post_core_pc=1647; s.opcode_pc=1642; s.opcode=26;
        s.pc=1416;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 1416
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=1433; s.opcode_pc=1428; s.opcode=26;
        s.pc=456;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 456
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=473; s.opcode_pc=468; s.opcode=26;
        s.pc=1608;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 1608
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=1625; s.opcode_pc=1620; s.opcode=26;
        s.pc=168;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 168
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v168 = s.registers[5];
        s.stack={};
        s.post_core_pc=183; s.opcode_pc=178; s.opcode=26;
        s.pc=1728;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 1728
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=1745; s.opcode_pc=1740; s.opcode=26;
        s.pc=816;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 816
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 4) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=828; s.opcode_pc=823; s.opcode=26;
        s.pc=1032;
        s.steps+=4; if(trace) trace(s);
    }
    { // recovered block 1032
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 6) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v1032 = UINT64_C(0x5);
        s.registers[5] = v1032;
        [[maybe_unused]] const uint64_t v1048 = UINT64_C(0x0);
        s.stack={v1048};
        s.post_core_pc=1054; s.opcode_pc=1049; s.opcode=26;
        s.pc=1512;
        s.steps+=6; if(trace) trace(s);
    }
    { // recovered block 1512
        if (s.stack.size() != 1) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 2) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t s0=s.stack[0];
        s.registers[5] = s0;
        s.stack={};
        s.post_core_pc=1520; s.opcode_pc=1515; s.opcode=26;
        s.pc=912;
        s.steps+=2; if(trace) trace(s);
    }
    { // recovered block 912
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v912 = s.registers[14];
        [[maybe_unused]] const uint64_t v915 = s.registers[4];
        s.stack={};
        s.post_core_pc=925; s.opcode_pc=920; s.opcode=26;
        s.pc=720;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 720
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=737; s.opcode_pc=732; s.opcode=26;
        s.pc=96;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 96
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=113; s.opcode_pc=108; s.opcode=26;
        s.pc=648;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 648
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=665; s.opcode_pc=660; s.opcode=26;
        s.pc=1680;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 1680
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=1697; s.opcode_pc=1692; s.opcode=26;
        s.pc=144;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 144
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v144 = s.registers[4];
        [[maybe_unused]] const uint64_t v147 = s.registers[14];
        s.stack={};
        s.post_core_pc=157; s.opcode_pc=152; s.opcode=26;
        s.pc=1656;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 1656
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=1673; s.opcode_pc=1668; s.opcode=26;
        s.pc=24;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 24
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v24 = s.registers[2];
        [[maybe_unused]] const uint64_t v27 = s.registers[6];
        s.stack={};
        s.post_core_pc=37; s.opcode_pc=32; s.opcode=26;
        s.pc=672;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 672
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        s.stack={};
        s.post_core_pc=689; s.opcode_pc=684; s.opcode=26;
        s.pc=1248;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 1248
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 5) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v1248 = s.registers[8];
        [[maybe_unused]] const uint64_t v1251 = s.registers[14];
        s.stack={};
        s.post_core_pc=1261; s.opcode_pc=1256; s.opcode=26;
        s.pc=888;
        s.steps+=5; if(trace) trace(s);
    }
    { // recovered block 888
        if (s.stack.size() != 0) throw std::runtime_error("edge stack shape");
        if (s.steps > budget || budget-s.steps < 4) throw std::runtime_error("block budget");
        [[maybe_unused]] const uint64_t v888 = host_6(s);
        [[maybe_unused]] const uint64_t v893 = UINT64_C(0x0);
        s.stack={};
        s.post_core_pc=899; s.opcode_pc=898; s.opcode=29;
        s.pc=899;
        s.result=v893; s.halted=true;
        s.steps+=4; if(trace) trace(s);
    }
}
} // namespace pafet_devirt
