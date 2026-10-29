// main_byte_exact_test_x.cpp
// Jack X: byte-exact f_user via the canonical IR interpreter + native byte-writer.
//
// Loads the alice/ramon IR captured in Jack VII and feeds it through the
// extended interpreter (run_ir_with_user) which, for every (ch, op) that is
// one of the 5 atomic byte-writer handlers identified by Jack IX, applies the
// native byte_writer transform. Produces the output bytes and asserts
// byte-exact against the independently computed f_user oracle.
//
// This is the final piece that would move the user-VM from "structurally
// equivalent" to "byte-exact native recompile" for the recorded IRs.
#include "pafet_canonical_interp_vii.h"
#include "pafet_byte_writer_x.h"

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

static std::vector<uint8_t> f_user_oracle(const std::string& u) {
    std::vector<uint8_t> out;
    out.reserve(u.size());
    for (size_t i = 0; i < u.size(); i++) {
        uint8_t c = static_cast<uint8_t>(u[u.size() - 1 - i]);
        out.push_back(static_cast<uint8_t>(((c ^ 0x5A) + 7u + 3u * static_cast<uint32_t>(i)) & 0xFFu));
    }
    return out;
}

static std::string hex(const std::vector<uint8_t>& v) {
    std::string s;
    s.reserve(v.size() * 2);
    static const char* H = "0123456789abcdef";
    for (uint8_t b : v) { s += H[b >> 4]; s += H[b & 0xF]; }
    return s;
}

static int run_one(const std::string& label, const std::string& json_path, const std::string& user) {
    std::vector<pafet_vii::IRInstr> ir;
    if (!pafet_vii::load_ir(json_path, ir)) {
        std::fprintf(stderr, "[%s] FAILED to load %s\n", label.c_str(), json_path.c_str());
        return 1;
    }
    auto st = pafet_vii::run_ir_with_user(ir, user);
    auto expected = f_user_oracle(user);

    std::printf("\n=== %s (user=\"%s\", len=%zu) ===\n",
                label.c_str(), user.c_str(), user.size());
    std::printf("  IR instructions         : %zu\n", ir.size());
    std::printf("  byte-writer dispatches  : %d (expected %zu)\n",
                st.byte_writer_hits, user.size());
    std::printf("  threaded-code chain OK  : %d / %d (match / mismatch)\n",
                st.threaded_chain_matches, st.threaded_chain_mismatches);
    std::printf("  helpers h3a50/h3880/h5b50: %d / %d / %d\n",
                st.helper_h3a50_calls, st.helper_h3880_calls, st.helper_h5b50_calls);
    std::printf("  pairs touching a helper : %d\n", st.helper_coverage_pairs);
    std::printf("  oracle f_user           : %s\n", hex(expected).c_str());
    std::printf("  interpreter output      : %s\n", hex(st.output_buffer).c_str());

    bool shape_ok = (st.threaded_chain_mismatches == 0);
    bool byte_exact = (st.output_buffer == expected);
    bool count_ok = (st.byte_writer_hits == static_cast<int>(user.size()));

    const char* v = (shape_ok && byte_exact && count_ok) ? "PASS" : "FAIL";
    std::printf("  [%s] byte-exact f_user via canonical IR + native byte-writer\n", v);
    return (shape_ok && byte_exact && count_ok) ? 0 : 1;
}

int main(int argc, char** argv) {
    (void)argc; (void)argv;
    int rc = 0;
    rc |= run_one("alice", "vm_pools_evidence/user_vm_ir_alice_vii.json", "alice");
    rc |= run_one("ramon", "vm_pools_evidence/user_vm_ir_ramon_vii.json", "ramon");
    std::printf("\n[SUMMARY] exit code: %d\n", rc);
    return rc;
}
