#pragma once
#include <array>
#include <cstdint>
#include <functional>
#include <string>
#include <vector>

namespace pafet_xxiii {
struct Program {
    std::array<uint8_t,1752> blob{},code{};
    std::array<uint8_t,256> opcode_table{};
    std::array<uint64_t,13> constants{};
    std::array<uint32_t,73> block_start{};
};
struct Instruction {
    uint32_t opcode_pc=0,operand_pc=0,fallthrough_pc=0;
    uint8_t encoded_opcode=0,opcode=0;
    std::vector<uint32_t> operands;
};
struct LogicalState {
    uint32_t next_opcode_pc=0,post_core_pc=0;
    std::array<uint64_t,256> registers{};
    std::vector<uint64_t> stack;
    std::vector<uint8_t> source,working,output;
    uint64_t index=0,result=0;
    bool halted=false;
};
using Trace=std::function<void(size_t,const Instruction&,const LogicalState&)>;
Program load_original_pe(const std::string& filename);
std::array<uint8_t,1752> materialize_all(const Program&,
    const std::array<uint8_t,1752>& shadow={},uint32_t period=0,uint32_t current=0);
Instruction decode(const Program&,uint32_t pc);
size_t execute(const Program&,LogicalState&,Trace trace={},size_t budget=200000);
} // namespace pafet_xxiii
