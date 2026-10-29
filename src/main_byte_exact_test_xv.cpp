// Jack XV: byte-exact f_user validation across 27 SSO usernames.
// Loads IR+atomic_pairs for each input and runs via the native canonical
// interpreter. Target: 27/27 PASS.
#include "pafet_canonical_interp_vii.h"
#include "pafet_byte_writer_x.h"

#include <cstdio>
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
    std::string s; s.reserve(v.size() * 2);
    static const char* H = "0123456789abcdef";
    for (uint8_t b : v) { s += H[b >> 4]; s += H[b & 0xF]; }
    return s;
}

static int run_one(const std::string& label, const std::string& json_path) {
    std::vector<pafet_vii::IRInstr> ir;
    if (!pafet_vii::load_ir(json_path, ir)) {
        std::printf("[%s] SKIP (load_ir failed)\n", label.c_str());
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
    bool byte_exact = (st.output_buffer == expected);
    bool count_ok = (st.byte_writer_hits == (int)user.size());
    bool pass = byte_exact && count_ok;
    std::printf("[%-20s len=%2zu] oracle=%s  out=%s  %s\n",
                label.c_str(), user.size(),
                hex(expected).c_str(), hex(st.output_buffer).c_str(),
                pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}

int main() {
    struct Case { const char* label; const char* path; };
    static const Case cases[] = {
        {"bob_len3",            "vm_pools_evidence/user_vm_ir_bob_len3_xv.json"},
        {"pafet_len5",          "vm_pools_evidence/user_vm_ir_pafet_len5_xv.json"},
        {"nikjoo_len6",         "vm_pools_evidence/user_vm_ir_nikjoo_len6_xv.json"},
        {"hacker_len6",         "vm_pools_evidence/user_vm_ir_hacker_len6_xv.json"},
        {"admin_len5",          "vm_pools_evidence/user_vm_ir_admin_len5_xv.json"},
        {"test_len4",           "vm_pools_evidence/user_vm_ir_test_len4_xv.json"},
        {"root_len4",           "vm_pools_evidence/user_vm_ir_root_len4_xv.json"},
        {"vsec_len4",           "vm_pools_evidence/user_vm_ir_vsec_len4_xv.json"},
        {"osiris_len6",         "vm_pools_evidence/user_vm_ir_osiris_len6_xv.json"},
        {"arshi_len5",          "vm_pools_evidence/user_vm_ir_arshi_len5_xv.json"},
        {"mozilla_len7",        "vm_pools_evidence/user_vm_ir_mozilla_len7_xv.json"},
        {"A_len1",              "vm_pools_evidence/user_vm_ir_A_len1_xv.json"},
        {"AA_len2",             "vm_pools_evidence/user_vm_ir_AA_len2_xv.json"},
        {"AB_len2",             "vm_pools_evidence/user_vm_ir_AB_len2_xv.json"},
        {"aB_len2",             "vm_pools_evidence/user_vm_ir_aB_len2_xv.json"},
        {"0_len1",              "vm_pools_evidence/user_vm_ir_0_len1_xv.json"},
        {"9_len1",              "vm_pools_evidence/user_vm_ir_9_len1_xv.json"},
        {"und_len1",            "vm_pools_evidence/user_vm_ir_und_len1_xv.json"},
        {"CAPS_len4",           "vm_pools_evidence/user_vm_ir_CAPS_len4_xv.json"},
        {"123_len3",            "vm_pools_evidence/user_vm_ir_123_len3_xv.json"},
        {"MixCase_len7",        "vm_pools_evidence/user_vm_ir_MixCase_len7_xv.json"},
        {"xyz9_len4",           "vm_pools_evidence/user_vm_ir_xyz9_len4_xv.json"},
        {"ABCDEFGH_len8",       "vm_pools_evidence/user_vm_ir_ABCDEFGH_len8_xv.json"},
        {"a1b2c3_len6",         "vm_pools_evidence/user_vm_ir_a1b2c3_len6_xv.json"},
        {"nikjoo2024_len10",    "vm_pools_evidence/user_vm_ir_nikjoo2024_len10_xv.json"},
        {"crackme_len7",        "vm_pools_evidence/user_vm_ir_crackme_len7_xv.json"},
        {"solver_len6",         "vm_pools_evidence/user_vm_ir_solver_len6_xv.json"},
    };

    int pass = 0, fail = 0, skip = 0;
    for (const auto& c : cases) {
        int r = run_one(c.label, c.path);
        if (r == 0) pass++;
        else if (r == 2) skip++;
        else fail++;
    }

    std::printf("\n==============================================================\n");
    std::printf("[JACK XV SUMMARY] passed=%d  failed=%d  skipped=%d  total=%zu\n",
                pass, fail, skip, sizeof(cases)/sizeof(cases[0]));
    std::printf("==============================================================\n");
    return (fail == 0) ? 0 : 1;
}
