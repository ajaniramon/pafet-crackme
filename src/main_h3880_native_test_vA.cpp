// main_h3880_native_test_vA.cpp  --  Jack V-A deliverable.
// Differential test harness for the native port of 0x140003880.
// Loads the 5 captured runtime vectors from
// vm_pools_evidence/h3880_fullctx_ext_ivB.json and compares post-call
// state against the recorded exit state byte-exact.

#include "pafet_h3880_native_vA.h"
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

static std::vector<uint8_t> hex2bytes(const std::string& h) {
    std::vector<uint8_t> out;
    out.reserve(h.size() / 2);
    for (size_t i = 0; i + 1 < h.size(); i += 2) {
        char hi = h[i], lo = h[i+1];
        auto nib = [](char c) -> int {
            if (c >= '0' && c <= '9') return c - '0';
            if (c >= 'a' && c <= 'f') return c - 'a' + 10;
            if (c >= 'A' && c <= 'F') return c - 'A' + 10;
            return 0;
        };
        out.push_back(static_cast<uint8_t>((nib(hi) << 4) | nib(lo)));
    }
    return out;
}

// N-th occurrence of a string-valued "key":"..." in the JSON (0-indexed).
static std::string pick_nth_s(const std::string& json, const std::string& key, int n) {
    std::string needle = "\"" + key + "\"";
    size_t p = 0;
    for (int i = 0; i <= n; i++) {
        p = json.find(needle, p);
        if (p == std::string::npos) return {};
        if (i < n) p += needle.size();
    }
    size_t colon = json.find(':', p + needle.size());
    size_t q1 = json.find('"', colon);
    if (q1 == std::string::npos) return {};
    size_t q2 = json.find('"', q1 + 1);
    if (q2 == std::string::npos) return {};
    return json.substr(q1 + 1, q2 - q1 - 1);
}

static uint64_t hex2u64(const std::string& s) {
    uint64_t v = 0;
    size_t start = 0;
    if (s.size() >= 2 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) start = 2;
    for (size_t i = start; i < s.size(); i++) {
        char c = s[i]; int d;
        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'a' && c <= 'f') d = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F') d = c - 'A' + 10;
        else break;
        v = (v << 4) | d;
    }
    return v;
}

int main(int argc, char** argv) {
    const char* json_path = argc > 1 ? argv[1]
        : "vm_pools_evidence/h3880_fullctx_ext_ivB.json";

    std::ifstream fh(json_path);
    if (!fh.is_open()) {
        std::printf("ERROR: cannot open %s\n", json_path);
        return 2;
    }
    std::stringstream ss; ss << fh.rdbuf();
    std::string json = ss.str();

    int total = 0, pass = 0;
    for (int i = 0; i < 5; i++) {
        std::string entry_ctx_hex = pick_nth_s(json, "entry_ctx", i);
        std::string exit_ctx_hex  = pick_nth_s(json, "exit_ctx",  i);
        std::string entry_b2_hex  = pick_nth_s(json, "entry_buf2", i);
        std::string exit_b2_hex   = pick_nth_s(json, "exit_buf2",  i);
        std::string rdx_hex       = pick_nth_s(json, "rdx", i);
        if (entry_ctx_hex.empty() || exit_ctx_hex.empty()
            || entry_b2_hex.empty() || exit_b2_hex.empty()
            || rdx_hex.empty()) {
            std::printf("cap#%d: missing hex fields; skipping\n", i);
            continue;
        }

        std::vector<uint8_t> entry_ctx = hex2bytes(entry_ctx_hex);
        std::vector<uint8_t> exit_ctx  = hex2bytes(exit_ctx_hex);
        std::vector<uint8_t> buf2_in   = hex2bytes(entry_b2_hex);
        std::vector<uint8_t> buf2_ex   = hex2bytes(exit_b2_hex);
        uint64_t rdx_arg = hex2u64(rdx_hex);

        pafet::handler_h3880(entry_ctx.data(), buf2_in.data(), rdx_arg);

        bool ctx_ok  = (entry_ctx == exit_ctx);
        bool buf2_ok = (buf2_in == buf2_ex);

        total++;
        if (ctx_ok && buf2_ok) {
            pass++;
            std::printf("cap#%d (rdx=%s): OK  (ctx=OK buf2=OK)\n", i, rdx_hex.c_str());
        } else {
            std::printf("cap#%d (rdx=%s): FAIL  ctx=%s buf2=%s\n",
                i, rdx_hex.c_str(), ctx_ok?"OK":"DIF", buf2_ok?"OK":"DIF");

            auto first_diff = [&](const std::vector<uint8_t>& a, const std::vector<uint8_t>& b, const char* name) {
                size_t sz = a.size() < b.size() ? a.size() : b.size();
                for (size_t k = 0; k < sz; k++) {
                    if (a[k] != b[k]) {
                        std::printf("    %s first diff @0x%zx: got=%02x want=%02x\n",
                            name, k, a[k], b[k]);
                        return;
                    }
                }
                if (a.size() != b.size()) {
                    std::printf("    %s size diff: got=%zu want=%zu\n", name, a.size(), b.size());
                }
            };
            if (!ctx_ok)  first_diff(entry_ctx, exit_ctx, "ctx");
            if (!buf2_ok) first_diff(buf2_in, buf2_ex, "buf2");
        }
    }

    std::printf("\n[SUMMARY] %d/%d captures reproduced byte-exact\n", pass, total);
    return pass == total ? 0 : 1;
}
