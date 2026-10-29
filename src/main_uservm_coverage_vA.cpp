// main_uservm_coverage_vA.cpp  --  Jack V-A deliverable.
// Prints the semantic-coverage report derived from a Frida capture,
// using the verified native primitives (0x140003a50, 0x140003880,
// 0x140005b50) as the yardstick.

#include "pafet_uservm_native_vA.h"
#include <cstdio>
#include <string>

int main(int argc, char** argv) {
    std::string path = (argc > 1)
        ? argv[1]
        : "vm_pools_evidence/coverage_native_vA.json";

    pafet::CoverageSummary c = pafet::load_coverage_vA(path);
    if (c.total_pairs_in_trace == 0) {
        std::printf("ERROR: cannot read coverage data from %s\n", path.c_str());
        return 2;
    }

    pafet::print_coverage(c);

    std::printf("\n=== Honest reading of this coverage ===\n");
    std::printf("  'invokes a verified helper' is not the same as 'the (ch, op)\n");
    std::printf("  handler is fully reversed'. The wrappers that call these\n");
    std::printf("  helpers are NOT reversed yet; this metric only shows what\n");
    std::printf("  fraction of VM instructions touches at least one piece of\n");
    std::printf("  behavior we can reproduce in native C++.\n");
    std::printf("  A full-fidelity port still needs the ~35 wrappers.\n");
    return 0;
}
