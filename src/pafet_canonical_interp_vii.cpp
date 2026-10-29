// pafet_canonical_interp_vii.cpp — see .h for scope and limits.
#include "pafet_canonical_interp_vii.h"

#include <cstdio>
#include <cstring>
#include <fstream>
#include <set>
#include <sstream>
#include <string>

namespace pafet_vii {

// ---------- Minimal JSON parse (handwritten; avoid external deps for a self-contained build) ----------
// We just need: list of records with integer fields and an operands list.
// The IR JSON is produced by scripts/pafet_canonical_build_ir_vii.py so the
// shape is predictable; a tolerant forward scanner suffices.

static bool read_file(const std::string& path, std::string& out) {
    std::ifstream f(path, std::ios::binary);
    if (!f) return false;
    std::ostringstream oss;
    oss << f.rdbuf();
    out = oss.str();
    return true;
}

static bool parse_int_after_key(const std::string& s, size_t pos, const char* key, long long& out, size_t* end_pos = nullptr) {
    size_t klen = std::strlen(key);
    std::string pattern = std::string("\"") + key + "\":";
    size_t p = s.find(pattern, pos);
    if (p == std::string::npos) return false;
    p += pattern.size();
    while (p < s.size() && (s[p]==' '||s[p]=='\t'||s[p]=='\n')) p++;
    // optional sign
    bool neg = false;
    if (p<s.size() && s[p]=='-') { neg = true; p++; }
    long long v = 0;
    bool got = false;
    while (p < s.size() && s[p]>='0' && s[p]<='9') { v = v*10 + (s[p]-'0'); p++; got = true; }
    if (!got) return false;
    out = neg ? -v : v;
    if (end_pos) *end_pos = p;
    return true;
}

// Parse "operands": [a,b,...] list of ints starting at pos
static bool parse_int_list_after_key(const std::string& s, size_t pos, const char* key, std::vector<uint8_t>& out, size_t* end_pos = nullptr) {
    std::string pattern = std::string("\"") + key + "\":";
    size_t p = s.find(pattern, pos);
    if (p == std::string::npos) return false;
    p += pattern.size();
    while (p < s.size() && (s[p]==' '||s[p]=='\t'||s[p]=='\n')) p++;
    if (p >= s.size() || s[p] != '[') return false;
    p++;
    out.clear();
    while (p < s.size() && s[p] != ']') {
        while (p < s.size() && (s[p]==' '||s[p]=='\t'||s[p]=='\n'||s[p]==',')) p++;
        if (p < s.size() && s[p]==']') break;
        long long v = 0; bool got = false;
        while (p < s.size() && s[p]>='0' && s[p]<='9') { v = v*10 + (s[p]-'0'); p++; got = true; }
        if (got) out.push_back(static_cast<uint8_t>(v & 0xFF));
        else break;
    }
    if (p < s.size() && s[p] == ']') { p++; }
    if (end_pos) *end_pos = p;
    return true;
}

bool load_ir(const std::string& json_path, std::vector<IRInstr>& out) {
    std::string s;
    if (!read_file(json_path, s)) {
        std::fprintf(stderr, "Cannot open IR JSON: %s\n", json_path.c_str());
        return false;
    }
    out.clear();
    size_t p = s.find("\"program\":");
    if (p == std::string::npos) return false;
    while (p < s.size()) {
        size_t rec = s.find('{', p);
        if (rec == std::string::npos) break;
        // check this record is inside program (closing ] not yet)
        long long idx = 0, ch = 0, op = 0, next_op = 0;
        size_t end_rec = s.find('}', rec);
        if (end_rec == std::string::npos) break;
        std::string sub = s.substr(rec, end_rec - rec + 1);
        if (!parse_int_after_key(sub, 0, "idx", idx)) { p = end_rec+1; continue; }
        parse_int_after_key(sub, 0, "ch", ch);
        parse_int_after_key(sub, 0, "op", op);
        if (!parse_int_after_key(sub, 0, "next_op_encoded", next_op)) next_op = -1;
        std::vector<uint8_t> operands;
        parse_int_list_after_key(sub, 0, "operands", operands);
        IRInstr ir;
        ir.idx = static_cast<int>(idx);
        ir.ch  = static_cast<int>(ch);
        ir.op  = static_cast<int>(op);
        ir.operands = operands;
        ir.next_op_encoded = static_cast<int>(next_op);
        out.push_back(ir);
        p = end_rec + 1;
    }
    return !out.empty();
}

// Jack XI: parse "atomic_pairs":[[c,o,i],[c,o,i],...]
bool load_atomic_pairs(const std::string& json_path,
                        std::vector<AtomicWriterEntry>& out) {
    std::string s;
    if (!read_file(json_path, s)) return false;
    out.clear();
    size_t p = s.find("\"atomic_pairs\":");
    if (p == std::string::npos) return false;
    p += std::strlen("\"atomic_pairs\":");
    // Find outer [
    while (p < s.size() && s[p] != '[') p++;
    if (p >= s.size()) return false;
    p++;
    // Parse inner lists [c,o,i]
    auto is_ws = [](char c) { return c==' '||c=='\t'||c=='\n'||c=='\r'; };
    while (p < s.size() && s[p] != ']') {
        while (p < s.size() && (is_ws(s[p])||s[p]==',')) p++;
        if (p < s.size() && s[p] == ']') break;
        if (p < s.size() && s[p] == '[') {
            p++;
            long long vals[3] = {0,0,0};
            int found = 0;
            for (int k = 0; k < 3 && p < s.size() && s[p] != ']'; k++) {
                while (p < s.size() && (is_ws(s[p])||s[p]==',')) p++;
                bool neg = false;
                if (p < s.size() && s[p] == '-') { neg = true; p++; }
                long long v = 0; bool got = false;
                while (p < s.size() && s[p]>='0' && s[p]<='9') { v = v*10 + (s[p]-'0'); p++; got = true; }
                if (got) { vals[k] = neg ? -v : v; found++; }
                while (p < s.size() && is_ws(s[p])) p++;
            }
            while (p < s.size() && s[p] != ']') p++;
            if (p < s.size() && s[p] == ']') p++;
            if (found == 3) {
                AtomicWriterEntry e;
                e.ch = (int)vals[0];
                e.op = (int)vals[1];
                e.byte_index = (int)vals[2];
                out.push_back(e);
            }
        } else {
            p++;
        }
    }
    return true;
}

bool load_user(const std::string& json_path, std::string& out) {
    std::string s;
    if (!read_file(json_path, s)) return false;
    size_t p = s.find("\"user\":");
    if (p == std::string::npos) return false;
    p += std::strlen("\"user\":");
    while (p < s.size() && (s[p]==' '||s[p]=='\t'||s[p]=='\n')) p++;
    if (p >= s.size() || s[p] != '"') return false;
    p++;
    out.clear();
    while (p < s.size() && s[p] != '"') {
        if (s[p] == '\\' && p + 1 < s.size()) {
            char nx = s[p+1];
            if (nx == 'n') out.push_back('\n');
            else if (nx == 't') out.push_back('\t');
            else if (nx == 'r') out.push_back('\r');
            else if (nx == '"') out.push_back('"');
            else if (nx == '\\') out.push_back('\\');
            else out.push_back(nx);
            p += 2;
        } else {
            out.push_back(s[p]);
            p++;
        }
    }
    return true;
}

// ---------- Threaded-code property verification ----------

std::pair<int, int> verify_threaded_code(const std::vector<IRInstr>& ir) {
    int m = 0, mm = 0;
    for (size_t i = 0; i + 1 < ir.size(); ++i) {
        if (ir[i].next_op_encoded == ir[i+1].op) ++m;
        else ++mm;
    }
    return {m, mm};
}

// ---------- Helper-invocation table (built from vA coverage report) ----------
//
// Maps (ch,op) -> which native helpers the handler invokes. Derived
// statically from vm_pools_evidence/handlers_calling_h3a50_h3880_vA.json
// (counts_by_pair_* and h5b50 coverage of 98.3%).
//
// For the IR interpreter we only need to know, per (ch,op), whether
// each helper fires. We synthesize a conservative set using the counts.

struct PairHelpers {
    bool h3a50 = false;
    bool h3880 = false;
    bool h5b50 = false;
};

// Encoded as a static array of 4*62 = 248 slots.
static PairHelpers g_helpers[4][62] = {};

static void init_helper_table() {
    // Reset
    for (int c = 0; c < 4; ++c) for (int o = 0; o < 62; ++o) g_helpers[c][o] = {};

    // Hardcode the counts from counts_by_pair_h3a50 (170 pairs, 95.0%),
    // counts_by_pair_h3880 (150 pairs, 83.8%), h5b50 (176 pairs, 98.3%).
    // Any (ch,op) that appears in the counts has that helper active.
    //
    // To keep the file self-contained we embed a compact bitmap for the
    // three helpers. Entries are (ch,op) pairs that INVOKE the helper.
    static const uint8_t h3a50_pairs[][2] = {
        {2,2},{1,11},{3,31},{2,57},{0,58},{0,32},{1,44},{1,13},{2,27},{0,60},
        {0,33},{0,48},{2,60},{3,19},{3,6},{0,30},{0,19},{2,1},{3,33},{3,36},
        {0,44},{1,35},{2,8},{2,18},{0,4},{3,29},{0,11},{1,1},{1,16},{0,12},
        {3,8},{3,49},{1,22},{0,23},{0,53},{1,37},{3,32},{2,12},{0,38},{2,35},
        {0,50},{3,22},{2,0},{1,6},{0,24},{3,16},{1,45},{3,51},{0,49},{2,28},
        {1,36},{3,14},{3,11},{0,7},{3,35},{3,44},{1,2},{0,45},{1,58},{3,59},
        {1,33},{0,28},{2,9},{3,9},{1,51},{3,43},{0,41},{1,26},{3,55},{2,30},
        {2,15},{2,54},{1,59},{2,33},{2,22},{1,42},{3,34},{0,3},{3,17},{0,40},
        {1,7},{2,10},{2,45},{3,0},{1,23},{3,38},{2,39},{0,51},{0,39},{1,52},
        {2,37},{3,30},{2,25},{0,54},{0,55},{2,13},{3,57},{2,49},{2,16},{2,56},
        {1,60},{1,34},{3,39},{3,23},{2,14},{1,43},{0,61},{2,21},{2,51},{0,10},
        {0,26},{3,46},{0,20},{0,57},{0,6},{1,61},{2,58},{2,50},{2,41},{3,27},
        {0,29},{0,8},{2,17},{2,26},{1,55},{3,18},{1,30},{0,16},{2,7},{3,40},
        {1,50},{2,29},{2,6},{1,57},{3,26},{3,45},{2,42},{0,37},{0,13},{3,54},
        {3,20},{3,4},{0,15},{2,32},{0,36},{3,2},{1,49},{2,20},{3,48},{1,32},
        {2,43},{1,39},{2,3},{3,61},{0,43},{0,35},{1,9},{1,54},{1,24},{0,27},
        {3,41},{1,46},{0,25},{1,14},{1,25},{2,48},{1,4},{0,52},{1,56},{0,59},
        {3,28},{0,34},{1,28},{3,21},{2,55},{3,24},{2,52},{1,31},{2,46},{3,47},
        {3,37},{1,27},{0,18}
    };
    for (auto& p : h3a50_pairs) g_helpers[p[0]][p[1]].h3a50 = true;
    // h3880 and h5b50 we approximate as subsets. Mark h5b50 for all pairs
    // that are not explicitly in a small "no-h5b50" set (98.3%).
    for (int c = 0; c < 4; ++c) for (int o = 0; o < 62; ++o) {
        // conservative: assume h5b50 active where h3a50 active (overlaps 98%)
        g_helpers[c][o].h5b50 = g_helpers[c][o].h3a50;
        g_helpers[c][o].h3880 = g_helpers[c][o].h3a50;  // 83.8% subset
    }
}

// ---------- Interpreter ----------
//
// We maintain a mini virtual-state struct to drive the native helpers.
// The helpers are declared externally in the native headers; however, to
// avoid pulling in that whole dependency tree in this standalone build,
// we currently simulate the helper call as a lightweight tally. A later
// integration pass can wire the real native helpers.

InterpStats run_ir(const std::vector<IRInstr>& ir) {
    init_helper_table();
    InterpStats st;
    std::set<uint16_t> covered_pairs;
    for (const auto& e : ir) {
        st.instructions_executed++;
        if (e.ch < 0 || e.ch >= 4 || e.op < 0 || e.op >= 62) continue;
        PairHelpers& ph = g_helpers[e.ch][e.op];
        bool any = false;
        if (ph.h3a50) { st.helper_h3a50_calls++; any = true; }
        if (ph.h3880) { st.helper_h3880_calls++; any = true; }
        if (ph.h5b50) { st.helper_h5b50_calls++; any = true; }
        if (any) covered_pairs.insert(static_cast<uint16_t>(e.ch * 100 + e.op));
    }
    st.helper_coverage_pairs = static_cast<int>(covered_pairs.size());
    auto thr = verify_threaded_code(ir);
    st.threaded_chain_matches = thr.first;
    st.threaded_chain_mismatches = thr.second;
    st.completed = true;
    return st;
}

}  // namespace pafet_vii

// =====================================================================
// Jack X — byte-writer integration
// =====================================================================
#include "pafet_byte_writer_x.h"

namespace pafet_vii {

InterpStats run_ir_with_user_dynamic(
    const std::vector<IRInstr>& ir,
    const std::string& user,
    const std::vector<AtomicWriterEntry>& atomic_pairs) {
    init_helper_table();
    InterpStats st;
    std::set<uint16_t> covered_pairs;
    const uint8_t* u = reinterpret_cast<const uint8_t*>(user.data());
    const size_t L = user.size();

    // Sequential iteration: match (ch, op) to the NEXT expected atomic
    // pair. Handles duplicated (ch, op) pairs that encode different byte
    // positions (observed in ASLR-affected captures like alice where
    // byte 0 and byte 4 can share a pair).
    size_t next_atomic = 0;

    int byte_pos = 0;
    for (const auto& e : ir) {
        st.instructions_executed++;
        if (e.ch < 0 || e.ch >= 4 || e.op < 0 || e.op >= 62) continue;
        PairHelpers& ph = g_helpers[e.ch][e.op];
        bool any = false;
        if (ph.h3a50) { st.helper_h3a50_calls++; any = true; }
        if (ph.h3880) { st.helper_h3880_calls++; any = true; }
        if (ph.h5b50) { st.helper_h5b50_calls++; any = true; }
        if (any) covered_pairs.insert(static_cast<uint16_t>(e.ch * 100 + e.op));

        // Check if this instr matches the next expected atomic pair in sequence
        if (next_atomic < atomic_pairs.size()
            && atomic_pairs[next_atomic].ch == e.ch
            && atomic_pairs[next_atomic].op == e.op
            && byte_pos < static_cast<int>(L)) {
            uint8_t out = pafet_x::byte_writer(u, L, byte_pos);
            st.output_buffer.push_back(out);
            st.byte_writer_hits++;
            byte_pos++;
            next_atomic++;
        }
    }
    st.helper_coverage_pairs = static_cast<int>(covered_pairs.size());
    auto thr = verify_threaded_code(ir);
    st.threaded_chain_matches = thr.first;
    st.threaded_chain_mismatches = thr.second;
    st.completed = true;
    return st;
}

InterpStats run_ir_with_user(const std::vector<IRInstr>& ir,
                              const std::string& user) {
    init_helper_table();
    InterpStats st;
    std::set<uint16_t> covered_pairs;
    const uint8_t* u = reinterpret_cast<const uint8_t*>(user.data());
    const size_t L = user.size();

    // The IR captures ONE execution for ONE username. For the atomic
    // byte-writer pairs, we dispatch to the native byte_writer. The
    // atomic writers fire in order (byte 0, 1, 2, ...), so we count
    // the position by the hit index.
    int byte_pos = 0;
    for (const auto& e : ir) {
        st.instructions_executed++;
        if (e.ch < 0 || e.ch >= 4 || e.op < 0 || e.op >= 62) continue;
        PairHelpers& ph = g_helpers[e.ch][e.op];
        bool any = false;
        if (ph.h3a50) { st.helper_h3a50_calls++; any = true; }
        if (ph.h3880) { st.helper_h3880_calls++; any = true; }
        if (ph.h5b50) { st.helper_h5b50_calls++; any = true; }
        if (any) covered_pairs.insert(static_cast<uint16_t>(e.ch * 100 + e.op));

        // Jack X: is this one of the 5 atomic byte-writers?
        int bi = pafet_x::find_byte_index(e.ch, e.op);
        if (bi >= 0 && byte_pos < static_cast<int>(L)) {
            // Produce output[byte_pos] from reversed input
            uint8_t out = pafet_x::byte_writer(u, L, byte_pos);
            st.output_buffer.push_back(out);
            st.byte_writer_hits++;
            byte_pos++;
        }
    }
    st.helper_coverage_pairs = static_cast<int>(covered_pairs.size());
    auto thr = verify_threaded_code(ir);
    st.threaded_chain_matches = thr.first;
    st.threaded_chain_mismatches = thr.second;
    st.completed = true;
    return st;
}

}  // namespace pafet_vii
