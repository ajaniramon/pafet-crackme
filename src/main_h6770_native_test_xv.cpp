// Validates pafet_h6770_native_xv against runtime captures.
// Byte-exact diff of ctx state after h6770 execution.
#include "pafet_h6770_native_xv.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdint>

static std::string slurp(const char* path) {
    std::ifstream f(path, std::ios::binary);
    if (!f) return {};
    std::stringstream ss; ss << f.rdbuf();
    return ss.str();
}

static std::vector<uint8_t> hexdec(const std::string& s) {
    std::vector<uint8_t> out;
    out.reserve(s.size() / 2);
    auto h2 = [](char c) -> int {
        if (c >= '0' && c <= '9') return c - '0';
        if (c >= 'a' && c <= 'f') return c - 'a' + 10;
        if (c >= 'A' && c <= 'F') return c - 'A' + 10;
        return 0;
    };
    for (size_t i = 0; i + 1 < s.size(); i += 2) {
        out.push_back((uint8_t)((h2(s[i]) << 4) | h2(s[i+1])));
    }
    return out;
}

// Minimal JSON extractor for "key":"value" strings; the capture produces a
// simple shape so we don't need a full parser.
static std::string find_string(const std::string& j, size_t pos, const char* key) {
    std::string needle = std::string("\"") + key + "\"";
    size_t k = j.find(needle, pos);
    if (k == std::string::npos) return {};
    size_t colon = j.find(':', k);
    if (colon == std::string::npos) return {};
    size_t q1 = j.find('"', colon);
    if (q1 == std::string::npos) return {};
    size_t q2 = j.find('"', q1 + 1);
    if (q2 == std::string::npos) return {};
    return j.substr(q1 + 1, q2 - q1 - 1);
}

static uint64_t find_u64(const std::string& j, size_t pos, const char* key) {
    // Locate the key. Peek the first non-space char after the colon:
    //  - if '"', it's a quoted string (parse via find_string)
    //  - if '-' or digit, parse numeric
    std::string needle = std::string("\"") + key + "\"";
    size_t k = j.find(needle, pos);
    if (k == std::string::npos) return 0;
    size_t colon = j.find(':', k);
    if (colon == std::string::npos) return 0;
    size_t cur = colon + 1;
    while (cur < j.size() && (j[cur] == ' ' || j[cur] == '\t')) cur++;
    if (cur >= j.size()) return 0;
    if (j[cur] == '"') {
        std::string s = find_string(j, k, key);
        if (s.rfind("0x", 0) == 0) {
            return std::strtoull(s.c_str() + 2, nullptr, 16);
        }
        return std::strtoull(s.c_str(), nullptr, 10);
    }
    size_t start = cur;
    while (cur < j.size() && (j[cur] == '-' || (j[cur] >= '0' && j[cur] <= '9'))) cur++;
    if (start == cur) return 0;
    return std::strtoull(j.substr(start, cur - start).c_str(), nullptr, 10);
}

int main() {
    std::string j = slurp("vm_pools_evidence/h6770_vectors_xv.json");
    if (j.empty()) {
        std::printf("Cannot open vm_pools_evidence/h6770_vectors_xv.json\n");
        return 2;
    }

    int pass = 0, fail = 0;
    size_t pos = 0;
    int idx = 0;
    while (true) {
        size_t vec_start = j.find("{\"ctx_ptr\":", pos);
        if (vec_start == std::string::npos) break;
        pos = vec_start + 1;

        uint64_t rdx = find_u64(j, vec_start, "rdx");
        uint64_t r8  = find_u64(j, vec_start, "r8");
        std::string ctx_in_hex  = find_string(j, vec_start, "ctx_in");
        std::string ctx_out_hex = find_string(j, vec_start, "ctx_out");
        uint64_t exp_rax = find_u64(j, vec_start, "rax_return");

        auto ctx_in  = hexdec(ctx_in_hex);
        auto ctx_out = hexdec(ctx_out_hex);
        if (ctx_in.size() < 0x1000 || ctx_out.size() < 0x1000) {
            std::printf("[vec %d] bad ctx size\n", idx); fail++; idx++; continue;
        }

        std::vector<uint8_t> ctx_work(ctx_in.begin(), ctx_in.begin() + 0x1000);
        uint64_t rax = pafet_h6770_native_xv::run_h6770(
            ctx_work.data(), rdx, (uint32_t)r8);

        bool rax_ok = (rax == exp_rax);
        // Compare ONLY the ctx fields the function writes:
        // 0x28 (u64), 0x30 (u64 inc), 0x210 (u64), 0x279 (u8), 0xce0 (u64 xor), 0xd8 (u64)
        auto u64 = [](const std::vector<uint8_t>& v, size_t off) {
            uint64_t x; std::memcpy(&x, v.data() + off, 8); return x;
        };
        bool ok28  = u64(ctx_work, 0x28)  == u64(ctx_out, 0x28);
        bool ok30  = u64(ctx_work, 0x30)  == u64(ctx_out, 0x30);
        bool ok210 = u64(ctx_work, 0x210) == u64(ctx_out, 0x210);
        bool ok279 = ctx_work[0x279]     == ctx_out[0x279];
        bool okce0 = u64(ctx_work, 0xce0) == u64(ctx_out, 0xce0);
        bool okd8  = u64(ctx_work, 0xd8)  == u64(ctx_out, 0xd8);

        bool all_ok = rax_ok && ok28 && ok30 && ok210 && ok279 && okce0 && okd8;
        std::printf("[vec %d] rax=%s _28=%s _30=%s _210=%s _279=%s _ce0=%s _d8=%s %s\n",
                    idx,
                    rax_ok ? "OK" : "DIFF",
                    ok28 ? "OK" : "DIFF",
                    ok30 ? "OK" : "DIFF",
                    ok210 ? "OK" : "DIFF",
                    ok279 ? "OK" : "DIFF",
                    okce0 ? "OK" : "DIFF",
                    okd8 ? "OK" : "DIFF",
                    all_ok ? "[PASS]" : "[FAIL]");
        if (!all_ok && !rax_ok) {
            std::printf("    exp_rax=%016llx got_rax=%016llx\n",
                        (unsigned long long)exp_rax, (unsigned long long)rax);
        }
        if (all_ok) pass++; else fail++;
        idx++;
    }

    std::printf("\n[SUMMARY] %d PASS, %d FAIL out of %d vectors\n", pass, fail, pass+fail);
    return (fail == 0 && pass > 0) ? 0 : 1;
}
