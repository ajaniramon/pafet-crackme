// main_uservm_test.cpp — Differential test harness.
//
// Compares our prototype's output against the f_user reference oracle
// for a fixed set of usernames. For users with a captured IR trace in
// vm_pools_evidence/usuario_vm_program_ir.json, additionally runs the
// IR-driven path.

#include "pafet_uservm.h"
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>

static std::vector<std::uint8_t> to_bytes(const std::string& s) {
    return std::vector<std::uint8_t>(s.begin(), s.end());
}

static std::string hex(const std::vector<std::uint8_t>& v) {
    static const char* H = "0123456789abcdef";
    std::string r; r.reserve(v.size() * 2);
    for (auto b : v) { r.push_back(H[b>>4]); r.push_back(H[b&0xF]); }
    return r;
}

// Fast path: a direct VM run WITHOUT the captured IR. Uses a synthetic
// program consisting of (len+1) iterations: one critical event per byte,
// framed by transparent setup/teardown. Validates the state machine itself.
static std::vector<std::uint8_t> run_vm_synthetic(const std::vector<std::uint8_t>& user) {
    pafet::UserVM vm;
    vm.input = user;
    vm.output.assign(user.size(), 0);
    vm.idx = 0;
    pafet::Program prog;
    // 10 transparent instructions
    for (int i = 0; i < 10; ++i) {
        pafet::Instr t{0, 0, 0, {}};
        prog.push_back(t);
    }
    // One critical event per input byte
    for (std::size_t i = 0; i < user.size(); ++i) {
        pafet::Instr t{0, 0, 0, {}};  // transparent padding
        prog.push_back(t);
        pafet::Instr c{0xFF, 0xFF, 0, {}};  // critical
        prog.push_back(c);
        for (int j = 0; j < 5; ++j) prog.push_back(t);  // more transparent
    }
    pafet::run(vm, prog);
    return vm.output;
}

// Captured-IR path: load the real Frida trace for this user and replay it.
static std::vector<std::uint8_t> run_vm_from_ir(const std::vector<std::uint8_t>& user,
                                                 const std::string& user_key) {
    pafet::UserVM vm;
    vm.input = user;
    vm.output.assign(user.size(), 0);
    pafet::Program prog = pafet::load_program_from_json(
        "vm_pools_evidence/usuario_vm_program_ir.json", user_key);
    if (prog.empty()) return {};
    pafet::run(vm, prog);
    return vm.output;
}

struct Case {
    std::string user;
    std::string ir_key; // key into IR JSON, or empty if no trace
};

int main() {
    std::vector<Case> cases = {
        {"", "_empty"},
        {"a", "a"},
        {"alice", "alice"},
        {"ramon", "ramon"},
        {"bbbbb", "bbbbb"},
        {"aaaaa", "aaaaa"},
        {"alice123", "alice123"},
        {"ramonbarcelona", ""},  // length 14, no IR -> fast path only
        {std::string(23,'a'), ""},
        {std::string(24,'a'), ""},
        {std::string(25,'a'), ""},
    };

    int pass_fast = 0, fail_fast = 0;
    int pass_ir = 0, fail_ir = 0, no_ir = 0;

    std::printf("%-20s | %-5s | %-24s | %-24s | %-24s\n",
                "user", "len", "f_user (oracle)", "VM synthetic", "VM from IR");
    std::printf("%s\n", std::string(130, '-').c_str());

    for (auto& c : cases) {
        auto user = to_bytes(c.user);
        auto oracle = pafet::f_user_reference(user);
        auto synth  = run_vm_synthetic(user);
        auto ir_out = c.ir_key.empty() ? std::vector<std::uint8_t>{} : run_vm_from_ir(user, c.ir_key);

        std::string tag_f = (synth == oracle) ? "OK" : "FAIL";
        std::string tag_i;
        if (c.ir_key.empty()) { tag_i = "N/A"; ++no_ir; }
        else {
            if (ir_out.empty()) { tag_i = "IR?"; ++fail_ir; }
            else if (ir_out == oracle) { tag_i = "OK"; ++pass_ir; }
            else { tag_i = "FAIL"; ++fail_ir; }
        }
        if (synth == oracle) ++pass_fast; else ++fail_fast;

        std::string ushow = c.user.empty() ? "(empty)" : c.user.substr(0, 18);
        std::printf("%-20s | %5zu | %-24s | %-18s%-6s| %-18s%s\n",
                    ushow.c_str(), user.size(),
                    hex(oracle).substr(0, 24).c_str(),
                    hex(synth).substr(0, 18).c_str(), tag_f.c_str(),
                    hex(ir_out).substr(0, 18).c_str(), tag_i.c_str());
    }

    std::printf("\n");
    std::printf("[fast path] %d pass, %d fail\n", pass_fast, fail_fast);
    std::printf("[IR path]   %d pass, %d fail, %d no-IR\n", pass_ir, fail_ir, no_ir);
    return (fail_fast + fail_ir) == 0 ? 0 : 1;
}
