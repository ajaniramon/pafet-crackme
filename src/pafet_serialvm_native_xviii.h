// Jack XVIII — serial-VM native C++ port
//
// Behavioral port: the serial-VM in pafet.bin (executor 0x14022a120)
// has been empirically validated (Jack XVIII Phase 2, 10/10 vectors)
// to produce output byte-exact equal to:
//     g_serial(input) = RC4(key = {0x00}).encrypt(input)
//
// The on-disk VM implements RC4 PRGA byte-by-byte (the RC4 stream is
// never materialized as a contiguous buffer in RW memory — Phase 1
// scan confirmed 0 occurrences of the stream head de188941a3375d3a
// in any RW range at any of the five hook points).
//
// This header provides a pure C++ port of that semantics so the
// user-side interpreter does not have to invoke the on-disk VM.
//
// Validation: see src/main_serialvm_test_xviii.cpp (10 inputs byte-exact
// against the equivalent Python oracle in scripts/pafet_des3_offline.py).
#pragma once
#include <cstdint>
#include <cstddef>

namespace pafet_serialvm_xviii {

// RC4 PRGA with KSA using key = {0x00} (identity S-box up to the
// single-byte key schedule). Since the key is a single zero byte,
// K[0]=0 and j = (j + S[i] + 0) mod 256 collapses: pass 1 of KSA
// yields j_i = (i*(i+1)/2) mod 256 after swaps, but the net effect
// on S is a well-known permutation. The simplest correct form is to
// run the standard KSA with the one-byte key and then PRGA.
//
// We do NOT special-case; the standard RC4 code produces the right
// output and the compiler inlines it. Correctness is covered by the
// 10/10 differential tests.
inline void serial_vm(const uint8_t* input, uint8_t* output, size_t len) {
    uint8_t S[256];
    for (int i = 0; i < 256; ++i) S[i] = (uint8_t)i;
    // KSA with key = {0}
    uint8_t j = 0;
    for (int i = 0; i < 256; ++i) {
        j = (uint8_t)(j + S[i] + 0 /* key[i mod 1] = 0 */);
        uint8_t t = S[i]; S[i] = S[j]; S[j] = t;
    }
    // PRGA
    uint8_t ii = 0, jj = 0;
    for (size_t n = 0; n < len; ++n) {
        ii = (uint8_t)(ii + 1);
        jj = (uint8_t)(jj + S[ii]);
        uint8_t t = S[ii]; S[ii] = S[jj]; S[jj] = t;
        uint8_t k = S[(uint8_t)(S[ii] + S[jj])];
        output[n] = (uint8_t)(input[n] ^ k);
    }
}

} // namespace pafet_serialvm_xviii
