// Jack XX - hex-VM native C++ port.
//
// The PE's hex-VM (executor at 0x1400804c0) parses 144 ASCII hex characters
// at 0x1403dbbc0 and writes 72 decoded bytes to a context buffer. Semantics
// confirmed by Phase 1 locator: after exec_leave, the exact byte sequence
//   6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3
//   455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09
//   abb0a67da54ba93b
// (= bytes.fromhex of the ASCII source) appears at multiple RW addresses
// in the process.
//
// The semantics is standard ASCII-hex -> bytes decoding. This native port
// reproduces that behaviour; validated against a batch of synthetic inputs
// through the Python oracle `bytes.fromhex`.
#pragma once
#include <cstdint>
#include <cstddef>

namespace pafet_hexvm_xx {

// Decode `len` ASCII hex characters at `hex` into (len/2) bytes at `out`.
// Returns the number of bytes written, or -1 on malformed input (odd len
// or non-hex character). The length is given explicitly so the caller can
// decode arbitrary chunks (the PE uses len=144 to decode 72 bytes).
inline int hex_vm(const char* hex, size_t len, uint8_t* out) {
    if ((len & 1) != 0) return -1;
    auto hv = [](char c) -> int {
        if (c >= '0' && c <= '9') return c - '0';
        if (c >= 'a' && c <= 'f') return 10 + (c - 'a');
        if (c >= 'A' && c <= 'F') return 10 + (c - 'A');
        return -1;
    };
    size_t bytes = len / 2;
    for (size_t i = 0; i < bytes; i++) {
        int hi = hv(hex[2*i]);
        int lo = hv(hex[2*i + 1]);
        if (hi < 0 || lo < 0) return -1;
        out[i] = static_cast<uint8_t>((hi << 4) | lo);
    }
    return static_cast<int>(bytes);
}

} // namespace pafet_hexvm_xx
