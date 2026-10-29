// main_byte_exact_test_xi.cpp
// Jack XI: byte-exact f_user via canonical IR interpreter + dynamic atomic
// byte-writer discovery, across N input lengths.
//
// Loads each _xi.json IR+atomic_pairs, feeds to run_ir_with_user_dynamic, and
// verifies byte-exact against the f_user oracle.
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

static int run_one(const std::string& label, const std::string& json_path) {
    std::vector<pafet_vii::IRInstr> ir;
    if (!pafet_vii::load_ir(json_path, ir)) {
        std::printf("[%s] SKIP (load_ir failed: %s)\n", label.c_str(), json_path.c_str());
        return 2;
    }
    std::string user;
    if (!pafet_vii::load_user(json_path, user)) {
        std::printf("[%s] SKIP (load_user failed)\n", label.c_str());
        return 2;
    }
    std::vector<pafet_vii::AtomicWriterEntry> atomics;
    pafet_vii::load_atomic_pairs(json_path, atomics);

    auto st = pafet_vii::run_ir_with_user_dynamic(ir, user, atomics);
    auto expected = f_user_oracle(user);

    std::printf("\n=== %s (user=\"%s\", len=%zu) ===\n",
                label.c_str(), user.c_str(), user.size());
    std::printf("  IR instructions         : %zu\n", ir.size());
    std::printf("  atomic_pairs loaded     : %zu\n", atomics.size());
    std::printf("  byte-writer dispatches  : %d (expected %zu)\n",
                st.byte_writer_hits, user.size());
    std::printf("  threaded-code chain OK  : %d / %d (match / mismatch)\n",
                st.threaded_chain_matches, st.threaded_chain_mismatches);
    std::printf("  helpers h3a50/h3880/h5b50: %d / %d / %d\n",
                st.helper_h3a50_calls, st.helper_h3880_calls, st.helper_h5b50_calls);
    std::printf("  pairs touching a helper : %d\n", st.helper_coverage_pairs);
    std::printf("  oracle f_user           : %s\n", hex(expected).c_str());
    std::printf("  interpreter output      : %s\n", hex(st.output_buffer).c_str());

    bool byte_exact = (st.output_buffer == expected);
    bool count_ok   = (st.byte_writer_hits == static_cast<int>(user.size()));
    bool atomics_ok = (atomics.size() == user.size());

    const char* v = (byte_exact && count_ok && atomics_ok) ? "PASS" : "FAIL";
    std::printf("  [%s] byte-exact f_user via canonical IR (dynamic atomic_pairs)\n", v);
    return (byte_exact && count_ok && atomics_ok) ? 0 : 1;
}

int main() {
    struct Case { const char* label; const char* path; };
    static const Case cases[] = {
        {"empty",                "vm_pools_evidence/user_vm_ir_empty_xi.json"},
        {"a_len1",               "vm_pools_evidence/user_vm_ir_a_len1_xi.json"},
        {"alice_len5",           "vm_pools_evidence/user_vm_ir_alice_len5_xi.json"},
        {"ramon_len5",           "vm_pools_evidence/user_vm_ir_ramon_len5_xi.json"},
        {"alice123_len8",        "vm_pools_evidence/user_vm_ir_alice123_len8_xi.json"},
        {"ramonbarcelona_len14", "vm_pools_evidence/user_vm_ir_ramonbarcelona_len14_xi.json"},
        {"a_x23",                "vm_pools_evidence/user_vm_ir_a_x23_xi.json"},
        {"a_x24",                "vm_pools_evidence/user_vm_ir_a_x24_xi.json"},
        {"a_x25",                "vm_pools_evidence/user_vm_ir_a_x25_xi.json"},
    };

    int passed = 0, failed = 0, skipped = 0;
    for (const auto& c : cases) {
        int r = run_one(c.label, c.path);
        if (r == 0) passed++;
        else if (r == 2) skipped++;
        else failed++;
    }

    std::printf("\n==============================================================\n");
    std::printf("[JACK XI SUMMARY] passed=%d  failed=%d  skipped=%d  total=%zu\n",
                passed, failed, skipped, sizeof(cases)/sizeof(cases[0]));
    std::printf("==============================================================\n");
    return (failed == 0) ? 0 : 1;
}
