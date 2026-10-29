// pafet_uservm_native_vA.cpp  --  Jack V-A deliverable.
// Loads coverage data produced by the V-A Frida inspector and reports
// what fraction of (ch, op) pairs invoke verified native primitives.

#include "pafet_uservm_native_vA.h"
#include <cstdio>
#include <fstream>
#include <sstream>

namespace pafet {

static uint64_t parse_u64(const std::string& s) {
    uint64_t v = 0;
    for (char c : s) {
        if (c < '0' || c > '9') break;
        v = v * 10 + (c - '0');
    }
    return v;
}

// Minimal JSON lookup for "key": <number>
static uint64_t find_num(const std::string& j, const std::string& key) {
    std::string needle = "\"" + key + "\"";
    size_t p = j.find(needle);
    if (p == std::string::npos) return 0;
    size_t colon = j.find(':', p);
    if (colon == std::string::npos) return 0;
    size_t v = colon + 1;
    while (v < j.size() && (j[v] == ' ' || j[v] == '\n' || j[v] == '\t')) v++;
    size_t end = v;
    while (end < j.size() && j[end] >= '0' && j[end] <= '9') end++;
    return parse_u64(j.substr(v, end - v));
}

// Find "key": <number> within a nested object range starting at `scope_start`.
static uint64_t find_num_in_scope(const std::string& j, const std::string& key,
                                   size_t scope_start, size_t scope_end) {
    std::string needle = "\"" + key + "\"";
    size_t p = j.find(needle, scope_start);
    if (p == std::string::npos || p > scope_end) return 0;
    size_t colon = j.find(':', p);
    size_t v = colon + 1;
    while (v < j.size() && (j[v] == ' ' || j[v] == '\n' || j[v] == '\t')) v++;
    size_t end = v;
    while (end < j.size() && j[end] >= '0' && j[end] <= '9') end++;
    return parse_u64(j.substr(v, end - v));
}

CoverageSummary load_coverage_vA(const std::string& json_path) {
    CoverageSummary c{};
    std::ifstream fh(json_path);
    if (!fh.is_open()) return c;
    std::stringstream ss; ss << fh.rdbuf();
    std::string j = ss.str();

    c.total_pairs_in_trace = static_cast<size_t>(find_num(j, "unique_pairs"));

    // Within the "pairs_calling" object
    size_t pc = j.find("\"pairs_calling\"");
    if (pc != std::string::npos) {
        size_t obj_start = j.find('{', pc);
        size_t obj_end   = j.find('}', obj_start);
        c.pairs_calling_h3a50       = static_cast<size_t>(find_num_in_scope(j, "h3a50", obj_start, obj_end));
        c.pairs_calling_h3880       = static_cast<size_t>(find_num_in_scope(j, "h3880", obj_start, obj_end));
        c.pairs_calling_h5b50       = static_cast<size_t>(find_num_in_scope(j, "h5b50", obj_start, obj_end));
        c.pairs_calling_any_verified= static_cast<size_t>(find_num_in_scope(j, "any",   obj_start, obj_end));
    }

    // Within the "totals" object
    size_t to = j.find("\"totals\"");
    if (to != std::string::npos) {
        size_t obj_start = j.find('{', to);
        size_t obj_end   = j.find('}', obj_start);
        c.total_resolver_events = static_cast<size_t>(find_num_in_scope(j, "resolver", obj_start, obj_end));
        c.h3a50_total_calls     = static_cast<size_t>(find_num_in_scope(j, "h3a50",    obj_start, obj_end));
        c.h3880_total_calls     = static_cast<size_t>(find_num_in_scope(j, "h3880",    obj_start, obj_end));
        c.h5b50_total_calls     = static_cast<size_t>(find_num_in_scope(j, "h5b50",    obj_start, obj_end));
    }
    return c;
}

void print_coverage(const CoverageSummary& c) {
    std::printf("=== Native primitives coverage over resolver trace ===\n");
    std::printf("  Total resolver events (VM instructions via resolver): %zu\n", c.total_resolver_events);
    std::printf("  Unique (ch, op) pairs in trace: %zu\n", c.total_pairs_in_trace);
    std::printf("\n");
    auto pct = [](size_t n, size_t d) -> double { return d ? (100.0 * n / d) : 0.0; };
    std::printf("  pairs that invoke verified 0x140003a50 helper: %zu (%.1f%%)\n",
                c.pairs_calling_h3a50, pct(c.pairs_calling_h3a50, c.total_pairs_in_trace));
    std::printf("  pairs that invoke verified 0x140003880 helper: %zu (%.1f%%)\n",
                c.pairs_calling_h3880, pct(c.pairs_calling_h3880, c.total_pairs_in_trace));
    std::printf("  pairs that invoke verified 0x140005b50 helper: %zu (%.1f%%)\n",
                c.pairs_calling_h5b50, pct(c.pairs_calling_h5b50, c.total_pairs_in_trace));
    std::printf("  pairs invoking AT LEAST ONE verified helper:   %zu (%.1f%%)\n",
                c.pairs_calling_any_verified, pct(c.pairs_calling_any_verified, c.total_pairs_in_trace));
    std::printf("\n");
    std::printf("  Total helper calls: h3a50=%zu h3880=%zu h5b50=%zu\n",
                c.h3a50_total_calls, c.h3880_total_calls, c.h5b50_total_calls);
    if (c.total_resolver_events > 0) {
        std::printf("  Average verified-primitive calls per VM instruction: %.2f\n",
                    static_cast<double>(c.h3a50_total_calls + c.h3880_total_calls + c.h5b50_total_calls)
                    / static_cast<double>(c.total_resolver_events));
    }
}

} // namespace pafet
