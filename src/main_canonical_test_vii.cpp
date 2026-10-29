// main_canonical_test_vii.cpp
// Jack VII: canonical-IR interpreter self-test.
//
// Loads the captured IR for alice (and optionally ramon) and runs the
// IR-driven interpreter. Verifies the threaded-code property and reports
// the fraction of instructions whose handler invokes at least one of the
// three verified native helpers.
#include "pafet_canonical_interp_vii.h"

#include <cstdio>
#include <string>
#include <vector>

static int run_one(const std::string& label, const std::string& json_path) {
    std::vector<pafet_vii::IRInstr> ir;
    if (!pafet_vii::load_ir(json_path, ir)) {
        std::fprintf(stderr, "[%s] FAILED to load %s\n", label.c_str(), json_path.c_str());
        return 1;
    }
    auto thr = pafet_vii::verify_threaded_code(ir);
    auto st  = pafet_vii::run_ir(ir);
    std::printf("\n=== %s ===\n", label.c_str());
    std::printf("  IR instructions         : %zu\n", ir.size());
    std::printf("  threaded-code chain OK  : %d / %d (match / mismatch)\n", thr.first, thr.second);
    std::printf("  interpreter executed    : %d instructions\n", st.instructions_executed);
    std::printf("  h3a50 invocations       : %d\n", st.helper_h3a50_calls);
    std::printf("  h3880 invocations       : %d\n", st.helper_h3880_calls);
    std::printf("  h5b50 invocations       : %d\n", st.helper_h5b50_calls);
    std::printf("  pairs touching a helper : %d\n", st.helper_coverage_pairs);
    bool pass = (thr.second == 0) && st.completed;
    std::printf("  [%s] threaded-code property\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}

int main(int argc, char** argv) {
    int rc = 0;
    std::string alice = (argc > 1) ? argv[1] : "vm_pools_evidence/user_vm_ir_alice_vii.json";
    std::string ramon = (argc > 2) ? argv[2] : "vm_pools_evidence/user_vm_ir_ramon_vii.json";
    rc |= run_one("alice", alice);
    rc |= run_one("ramon", ramon);
    std::printf("\n[SUMMARY] exit code: %d\n", rc);
    return rc;
}
