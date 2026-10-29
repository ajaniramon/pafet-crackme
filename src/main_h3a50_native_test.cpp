// main_h3a50_native_test.cpp  —  Differential test harness for the native port
// of 0x140003a50. Loads the 3 captured runtime vectors from
// vm_pools_evidence/usuario_vm_h3a50_fullctx_8k_alice.json and compares the
// post-call state against the recorded exit state byte-exact.

#include "pafet_h3a50_native.h"
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

// Minimal JSON extractor: pulls the hex string value of the first occurrence
// of "key":"...". Not a general JSON parser; the captures are flat enough.
static std::string pick(const std::string& json, const std::string& key) {
    std::string needle = "\"" + key + "\"";
    size_t p = 0;
    while ((p = json.find(needle, p)) != std::string::npos) {
        size_t colon = json.find(':', p + needle.size());
        if (colon == std::string::npos) return {};
        size_t q1 = json.find('"', colon);
        if (q1 == std::string::npos) return {};
        size_t q2 = json.find('"', q1 + 1);
        if (q2 == std::string::npos) return {};
        return json.substr(q1 + 1, q2 - q1 - 1);
    }
    return {};
}

// Pulls the N-th occurrence (0-indexed).
static std::string pick_nth(const std::string& json, const std::string& key, int n) {
    std::string needle = "\"" + key + "\"";
    size_t p = 0;
    for (int i = 0; i <= n; i++) {
        p = json.find(needle, p);
        if (p == std::string::npos) return {};
        if (i < n) p += needle.size();
    }
    size_t colon = json.find(':', p + needle.size());
    size_t q1 = json.find('"', colon);
    size_t q2 = json.find('"', q1 + 1);
    return json.substr(q1 + 1, q2 - q1 - 1);
}

int main(int argc, char** argv) {
    const char* json_path = argc > 1 ? argv[1]
        : "vm_pools_evidence/usuario_vm_h3a50_fullctx_8k_alice.json";

    std::ifstream fh(json_path);
    if (!fh.is_open()) {
        std::printf("ERROR: cannot open %s\n", json_path);
        return 2;
    }
    std::stringstream ss; ss << fh.rdbuf();
    std::string json = ss.str();

    int total = 0, pass = 0;
    for (int i = 0; i < 3; i++) {
        std::string entry_ctx_hex = pick_nth(json, "entry_ctx", i);
        std::string exit_ctx_hex  = pick_nth(json, "exit_ctx",  i);
        std::string buf1_entry_hex= pick_nth(json, "buf1_entry",i);
        std::string buf1_exit_hex = pick_nth(json, "buf1_exit", i);
        std::string buf2_entry_hex= pick_nth(json, "buf2_entry",i);
        std::string buf2_exit_hex = pick_nth(json, "buf2_exit", i);
        if (entry_ctx_hex.empty() || exit_ctx_hex.empty()
            || buf1_entry_hex.empty() || buf1_exit_hex.empty()) {
            std::printf("cap#%d: missing hex fields; skipping\n", i);
            continue;
        }

        std::vector<uint8_t> entry_ctx = hex2bytes(entry_ctx_hex);
        std::vector<uint8_t> exit_ctx  = hex2bytes(exit_ctx_hex);
        std::vector<uint8_t> buf1_in   = hex2bytes(buf1_entry_hex);
        std::vector<uint8_t> buf1_ex   = hex2bytes(buf1_exit_hex);
        std::vector<uint8_t> buf2_in   = hex2bytes(buf2_entry_hex);
        std::vector<uint8_t> buf2_ex   = hex2bytes(buf2_exit_hex);

        // Run native port — ctx[0x1160] points to buf2 in the captures
        pafet::handler_h3a50(entry_ctx.data(), buf2_in.data());

        bool ctx_ok  = (entry_ctx == exit_ctx);
        bool buf1_ok = (buf1_in == buf1_ex);  // buf1 UNTOUCHED (should match entry = exit)
        bool buf2_ok = (buf2_in == buf2_ex);  // qword at offset r8_old*8 should be written

        total++;
        if (ctx_ok && buf1_ok && buf2_ok) {
            pass++;
            std::printf("cap#%d: OK  (ctx=%s buf1=%s buf2_untouched=%s)\n",
                i, ctx_ok?"OK":"DIF", buf1_ok?"OK":"DIF", buf2_ok?"OK":"DIF");
        } else {
            std::printf("cap#%d: FAIL  ctx=%s buf1=%s buf2=%s\n",
                i, ctx_ok?"OK":"DIF", buf1_ok?"OK":"DIF", buf2_ok?"OK":"DIF");

            // Show first diff position for diagnostic
            if (!ctx_ok) {
                size_t sz = entry_ctx.size();
                for (size_t k = 0; k < sz; k++) {
                    if (entry_ctx[k] != exit_ctx[k]) {
                        std::printf("    ctx first diff @0x%zx: got=%02x want=%02x\n",
                            k, entry_ctx[k], exit_ctx[k]);
                        break;
                    }
                }
            }
            if (!buf1_ok) {
                size_t sz = buf1_in.size();
                for (size_t k = 0; k < sz; k++) {
                    if (buf1_in[k] != buf1_ex[k]) {
                        std::printf("    buf1 first diff @0x%zx: got=%02x want=%02x\n",
                            k, buf1_in[k], buf1_ex[k]);
                        break;
                    }
                }
            }
            if (!buf2_ok) {
                size_t sz = buf2_in.size();
                for (size_t k = 0; k < sz; k++) {
                    if (buf2_in[k] != buf2_ex[k]) {
                        std::printf("    buf2 first diff @0x%zx: got=%02x want=%02x\n",
                            k, buf2_in[k], buf2_ex[k]);
                        break;
                    }
                }
            }
        }
    }

    std::printf("\n[SUMMARY] %d/%d captures reproduced byte-exact\n", pass, total);
    return pass == total ? 0 : 1;
}
