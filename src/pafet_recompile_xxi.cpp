// Jack XXI — Our own Pafet, recompiled from the 4 reconstructed nested VMs.
//
// Pipeline (mirrors the PE pafet.bin):
//   1. Read username + serial from stdin.
//   2. SHA-VM:    sha256(username) == EXPECTED_HASH?       [pafet_shavm::compute]
//   3. user-VM:   f_user transform of the username bytes.  [pafet_x::byte_writer]
//      serial-VM: g_serial RC4 stream.                     [pafet_serialvm_xviii::serial_vm]
//      key = (f_user ++ g_serial)[:24].ljust(24, 0)
//   4. hex-VM:    decode CIPHERTEXT_HEX -> 72 bytes.       [pafet_hexvm_xx::hex_vm]
//   5. DES3-EDE:  decrypt_material (3 passes + unpad).     [pafet_des3_xxi::decrypt_material]
//   6. Check CMO{...} shape; print flag or "Wrong credentials".
//
// EXPECTED_HASH and CIPHERTEXT_HEX are compile-time #defines so one build
// targets the original PE and another targets a ramon/barcelona rekey.

#include "pafet_shavm_native_xix.h"
#include "pafet_serialvm_native_xviii.h"
#include "pafet_hexvm_native_xx.h"
#include "pafet_byte_writer_x.h"
#include "pafet_des3_xxi.h"

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdio>
#include <algorithm>

#ifndef EXPECTED_HASH
// Default: original PE's gate target. No known preimage.
#define EXPECTED_HASH "9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420"
#endif

#ifndef CIPHERTEXT_HEX
#define CIPHERTEXT_HEX \
    "6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3" \
    "455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09" \
    "abb0a67da54ba93b"
#endif

static std::string hex_of(const uint8_t* b, size_t n) {
    static const char* H = "0123456789abcdef";
    std::string r; r.resize(n * 2);
    for (size_t i = 0; i < n; i++) {
        r[2*i    ] = H[b[i] >> 4];
        r[2*i + 1] = H[b[i] & 15];
    }
    return r;
}

static void rtrim(std::string& s) {
    while (!s.empty() && (s.back() == '\r' || s.back() == '\n' ||
                           s.back() == '\t' || s.back() == ' ')) s.pop_back();
}

int main() {
    std::cout << "==================================\n";
    std::cout << "   VSEC-RECOMPILED Pafet Challenge\n";
    std::cout << "==================================\n\n";

    std::string username, serial;
    std::cout << "Username: " << std::flush;
    if (!std::getline(std::cin, username)) return 1;
    rtrim(username);
    std::cout << "Serial  : " << std::flush;
    if (!std::getline(std::cin, serial)) return 1;
    rtrim(serial);

    // --- SHA-VM: gate ---
    uint8_t digest[32] = {0};
    pafet_shavm::compute(
        reinterpret_cast<const uint8_t*>(username.data()),
        username.size(),
        digest);
    std::string got_hex = hex_of(digest, 32);
    if (got_hex != std::string(EXPECTED_HASH)) {
        std::cout << "[!] Invalid username\n";
        return 1;
    }

    // --- user-VM + serial-VM: derive key ---
    // f_user(username) via the reconstructed user-VM byte-writer.
    std::vector<uint8_t> f_u(username.size());
    for (size_t i = 0; i < username.size(); i++) {
        f_u[i] = pafet_x::byte_writer(
            reinterpret_cast<const uint8_t*>(username.data()),
            username.size(), (int)i);
    }
    // g_serial(serial) via the reconstructed serial-VM.
    std::vector<uint8_t> g_s(serial.size());
    if (!serial.empty()) {
        pafet_serialvm_xviii::serial_vm(
            reinterpret_cast<const uint8_t*>(serial.data()),
            g_s.data(), serial.size());
    }
    // key = (f_u ++ g_s)[:24].ljust(24, 0)
    uint8_t key[24] = {0};
    size_t take_u = std::min<size_t>(24, f_u.size());
    std::memcpy(key, f_u.data(), take_u);
    if (take_u < 24) {
        size_t take_s = std::min<size_t>(24 - take_u, g_s.size());
        std::memcpy(key + take_u, g_s.data(), take_s);
    }

    // --- hex-VM: decode ciphertext ---
    const char* ct_hex = CIPHERTEXT_HEX;
    size_t ct_hex_len = std::strlen(ct_hex);
    if (ct_hex_len != 144) {
        std::cout << "[!] CIPHERTEXT_HEX length " << ct_hex_len << " (expected 144)\n";
        return 1;
    }
    uint8_t ct[72];
    int n = pafet_hexvm_xx::hex_vm(ct_hex, ct_hex_len, ct);
    if (n != 72) {
        std::cout << "[!] hex-VM decode failed\n";
        return 1;
    }

    // --- DES3-EDE: 3 passes + unpad ---
    std::vector<uint8_t> pt = pafet_des3_xxi::decrypt_material(ct, key);
    if (pt.empty()) {
        std::cout << "[!] Decrypt failed (partial-block guard)\n";
        return 1;
    }

    // --- Shape check ---
    bool shape_ok = (pt.size() >= 5)
        && pt[0] == 'C' && pt[1] == 'M' && pt[2] == 'O' && pt[3] == '{'
        && pt.back() == '}';
    if (shape_ok) {
        std::cout << "[+] Correct!\n";
        std::cout << "[+] Flag: " << std::string(pt.begin(), pt.end()) << "\n";
    } else {
        std::cout << "[!] Wrong credentials\n";
    }
    return 0;
}
