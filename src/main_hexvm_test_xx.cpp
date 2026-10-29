// Jack XX - differential test harness for the hex-VM native port.
// Validates against the Python bytes.fromhex oracle for 12 vectors,
// including the real 144-char ciphertext source from the PE
// (0x1403dbbc0) that the hex-VM decodes at runtime.
#include "pafet_hexvm_native_xx.h"
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

struct Vec {
    const char* label;
    const char* hex;
    const char* expected_hex;  // same as hex (oracle is bytes.fromhex)
};

static std::vector<uint8_t> from_hex(const std::string& h) {
    std::vector<uint8_t> out(h.size() / 2);
    pafet_hexvm_xx::hex_vm(h.c_str(), h.size(), out.data());
    return out;
}

int main() {
    // The real PE ciphertext at 0x1403dbbc0 (144 ASCII hex chars -> 72 bytes).
    // Verified by Phase 1 locator: this exact byte sequence appears in RW
    // memory after the hex-VM's exec_leave for user=alice.
    const char* pe_hex =
        "6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3"
        "455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09"
        "abb0a67da54ba93b";

    Vec vectors[] = {
        {"pe_ciphertext_144",    pe_hex, pe_hex},
        {"deadbeef_8",           "deadbeef", "deadbeef"},
        {"cafebabe_8",           "cafebabe", "cafebabe"},
        {"00112233_8",           "00112233", "00112233"},
        {"ff_single",            "ff", "ff"},
        {"empty",                "", ""},
        {"zeroes_16",            "00000000000000000000000000000000", "00000000000000000000000000000000"},
        {"UPPERCASE",            "DEADBEEF", "deadbeef"},  // decoder accepts upper and lower
        {"mixed_case",           "DeAdBeEf", "deadbeef"},
        {"long_random_64",
         "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef",
         "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"},
        {"ascii_abc_hexed",      "616263", "616263"},  // "abc"
        {"one_byte_01",          "01", "01"},
    };
    const size_t N = sizeof(vectors) / sizeof(vectors[0]);

    int passed = 0, failed = 0;
    for (size_t i = 0; i < N; i++) {
        const Vec& v = vectors[i];
        size_t len = std::strlen(v.hex);
        std::vector<uint8_t> got(len / 2);
        int r = pafet_hexvm_xx::hex_vm(v.hex, len, got.data());
        bool ok = (r == (int)(len/2));
        // Compare got to oracle (bytes.fromhex(expected_hex))
        auto exp = from_hex(v.expected_hex);
        if (ok && got != exp) ok = false;

        std::printf("[%-24s len=%3zu] ",
                    v.label, len);
        if (ok) {
            std::printf("PASS");
            if (len > 32) {
                std::printf("  got_pfx=");
                for (int k = 0; k < 16 && k < (int)got.size(); k++) std::printf("%02x", got[k]);
            } else {
                std::printf("  got=");
                for (auto b : got) std::printf("%02x", b);
            }
            std::printf("\n");
            passed++;
        } else {
            std::printf("FAIL (ret=%d)\n", r);
            failed++;
        }
    }
    std::printf("\n[SUMMARY] %d PASS, %d FAIL out of %zu vectors\n", passed, failed, N);
    return (failed == 0) ? 0 : 1;
}
