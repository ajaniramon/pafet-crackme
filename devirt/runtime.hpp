#pragma once
#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <stdexcept>
#include <vector>

namespace pafet_devirt {
struct State {
    std::array<uint64_t,256> registers{};
    std::vector<uint64_t> stack;
    std::vector<uint8_t> source, working, output;
    uint64_t index=0, result=0;
    uint32_t pc=0, post_core_pc=0, opcode_pc=0, opcode=0;
    size_t steps=0;
    bool halted=false;
};
using Trace = std::function<void(const State&)>;
[[noreturn]] inline uint64_t unknown_value() { throw std::runtime_error("Unknown semantics; execution stopped"); }
inline uint64_t ir_shr(uint64_t value, uint64_t count, unsigned bits) {
    if(count>=bits) throw std::runtime_error("IR shift count outside its defined domain");
    return value >> count;
}
void execute_generated(State&, const Trace& = {}, size_t budget=200000);
uint64_t host_4(State&); // Generated semantic region; exposed for native differential tests.
} // namespace pafet_devirt
