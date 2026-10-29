// Jack XVIII — differential test: pafet_serialvm_native_xviii.serial_vm
// against the oracle values pre-computed via ARC4(key={0}).encrypt in
// scripts/pafet_des3_offline.py (and re-derivable from any standard RC4
// implementation). Both numbers come from independent sources — the
// Python Cryptodome ARC4 library and this stand-alone C++ KSA+PRGA.
#include "pafet_serialvm_native_xviii.h"
#include <cstdio>
#include <cstring>
#include <cstdint>
#include <string>
#include <vector>

struct Vec { const char* label; const char* input; const char* expected_hex; };

// Vectors from Jack XVIII Phase 2 (serial-VM runtime capture) and
// scripts/pafet_des3_offline.py g_serial.
static const Vec VECTORS[] = {
    {"serial01",         "serial01",         "ad7dfb28c25b6d0b"},
    {"hola",             "hola",             "b677e520"},
    {"test",             "test",             "aa7dfa35"},
    {"xxxxxxxx",         "xxxxxxxx",         "a660f139db4f2542"},
    {"aaaaaaaa",         "aaaaaaaa",         "bf79e820c2563c5b"},
    {"serial02",         "serial02",         "ad7dfb28c25b6d08"},
    {"ab",               "ab",               "bf7a"},
    {"0",                "0",                "ee"},
    {"longerserial123",  "longerserial123",  "b277e726c6452e5ff86f7f0b665ca1"},
    {"abcdefgh",         "abcdefgh",         "bf7aea25c6513a52"},
};

static std::string hex(const uint8_t* p, size_t n) {
    static const char d[] = "0123456789abcdef";
    std::string s; s.reserve(n*2);
    for (size_t i = 0; i < n; i++) { s.push_back(d[p[i]>>4]); s.push_back(d[p[i]&15]); }
    return s;
}

int main() {
    int pass = 0, fail = 0;
    const size_t N = sizeof(VECTORS)/sizeof(VECTORS[0]);
    for (size_t i = 0; i < N; ++i) {
        const Vec& v = VECTORS[i];
        size_t len = std::strlen(v.input);
        std::vector<uint8_t> in(len), out(len);
        for (size_t k = 0; k < len; k++) in[k] = (uint8_t)v.input[k];
        pafet_serialvm_xviii::serial_vm(in.data(), out.data(), len);
        std::string got = hex(out.data(), len);
        bool ok = (got == v.expected_hex);
        std::printf("[%-20s] input=%-18s got=%-32s exp=%-32s %s\n",
            v.label, v.input, got.c_str(), v.expected_hex, ok ? "PASS" : "FAIL");
        if (ok) ++pass; else ++fail;
    }
    std::printf("\n[SUMMARY] %d PASS, %d FAIL out of %zu vectors\n", pass, fail, N);
    return (fail == 0) ? 0 : 1;
}
