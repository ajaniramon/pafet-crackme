// Jack XIX — SHA-VM differential test.
// Verifies that the native C++ port in pafet_shavm_native_xix.h reproduces
// byte-exact SHA-256(user) for a battery of usernames. Independent oracle:
// std library style, but inline-coded here against known test vectors
// (also matches hashlib.sha256(user).digest() in Python).

#include <cstdio>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
#include "pafet_shavm_native_xix.h"

struct Vec { const char* user; const char* expected_hex; };

// Oracles: hashlib.sha256(user).hexdigest() for each.
static const Vec VECS[] = {
    {"alice",  "2bd806c97f0e00af1a1fc3328fa763a9269723c8db8fac4f93af71db186d6e90"},
    {"bob",    "81b637d8fcd2c6da6359e6963113a1170de795e4b725b84d1e0b4cfd9ec58ce9"},
    {"ramon",  "e27622e8321da74e6eafb1cee8e7804200cb536ef606173c0376d5f8c470ceaf"},
    {"pafet",  "bb9147a023d36faf00c653e57c1e982dc88d9b49461c478ac6c5ebb31336e539"},
    {"test",   "9f86d081884c7d659a2feaa0c55ad015a3bf4f1b2b0b822cd15d6c15b0f00a08"},
    {"hola",   "b221d9dbb083a7f33428d7c2a3c3198ae925614d70210e28716ccaa7cd4ddb79"},
    {"admin",  "8c6976e5b5410415bde908bd4dee15dfb167a9c873fc4bb8a81f6f2ab448a918"},
    {"root",   "4813494d137e1631bba301d5acab6e7bb7aa74ce1185d456565ef51d737677b2"},
    {"_",      "d2e2adf7177b7a8afddbc12d1634cf23ea1a71020f6a1308070a16400fb68fde"},
    {"",       "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"},
    {"nikjoo", "1e17171c89c2d0a9e406f72cfa2c482b2b0a8273a7a45a4f0a3f69fdefefc473"},
    {"nima",   "8af45324f1c5547fd41877fd6b4893e16c3fdc96be2f9c8a2cccdb4b865df452"},
};

static std::string hex(const uint8_t* b, size_t n) {
    static const char* H = "0123456789abcdef";
    std::string s; s.reserve(n*2);
    for (size_t i = 0; i < n; i++) { s.push_back(H[b[i]>>4]); s.push_back(H[b[i]&0xf]); }
    return s;
}

int main() {
    int pass = 0, fail = 0;
    const int N = sizeof(VECS) / sizeof(VECS[0]);
    for (int i = 0; i < N; i++) {
        const char* u = VECS[i].user;
        const size_t len = strlen(u);
        uint8_t out[32];
        pafet_shavm::compute((const uint8_t*)u, len, out);
        std::string got = hex(out, 32);
        const std::string exp = VECS[i].expected_hex;
        bool ok = (got == exp);
        if (ok) pass++; else fail++;
        printf("[%-16s len=%2zu] got=%s exp=%s %s\n",
               u, len, got.c_str(), exp.c_str(), ok ? "PASS" : "FAIL");
    }
    printf("\n[SUMMARY] %d PASS, %d FAIL out of %d vectors\n", pass, fail, N);
    return fail == 0 ? 0 : 1;
}
