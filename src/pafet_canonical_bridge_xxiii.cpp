#include "pafet_canonical_interp_vii.h"
namespace pafet_vii {
pafet_xxiii::LogicalState run_original_pe_xxiii(const std::string& pe_path,
    const std::vector<uint8_t>& user,size_t& executed,pafet_xxiii::Trace trace,
    const std::array<uint64_t,256>& initial_registers){
    auto program=pafet_xxiii::load_original_pe(pe_path);
    pafet_xxiii::LogicalState state;state.source=user;state.registers=initial_registers;
    executed=pafet_xxiii::execute(program,state,trace);return state;
}
}
