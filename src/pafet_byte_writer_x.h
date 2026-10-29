// pafet_byte_writer_x.h
// Jack X — native byte-writer for the 5 atomic (ch, op) handlers that produce
// f_user's output bytes. Semantics confirmed by Jack IX pathway capture:
//   output[i] = ((input_reversed[i] ^ 0x5A) + 7 + 3*i) & 0xFF
// Observed handlers:
//   byte 0 (ch=3, op=51) -> 0x14003bea0   (clone-pair with byte 3)
//   byte 1 (ch=1, op=25) -> 0x140015820   (clone-pair with byte 2)
//   byte 2 (ch=2, op=18) -> 0x140025020   (clone-pair with byte 1)
//   byte 3 (ch=0, op=57) -> 0x140014a00   (clone-pair with byte 0)
//   byte 4 (ch=1, op=43) -> 0x1400216d0   (unique, 3705 B)
// Those handlers do NOT embed 0x5A/7 as .text literals; they fetch them via
// the operand reader from the canonical bytecode (block 28 = 0x5A x 24).
// This native port reproduces the observed input/output byte transform
// without claiming to be a byte-by-byte x64 clone of the handler bodies.
#pragma once
#include <cstdint>
#include <cstddef>

namespace pafet_x {

// Applies f_user transformation to a single byte, position-indexed.
// Returns the output byte for position i given the reversed input byte c.
inline uint8_t transform_byte(uint8_t c, int i) {
    return (uint8_t)(((c ^ 0x5A) + 7u + 3u * (uint32_t)i) & 0xFFu);
}

// Dispatcher-friendly: given the position i (0..len-1), the full
// input buffer and its length, produces output[i].
inline uint8_t byte_writer(const uint8_t* input, size_t input_len, int i) {
    // f_user operates on reversed(input)
    uint8_t c = input[input_len - 1 - (size_t)i];
    return transform_byte(c, i);
}

// Table of the five observed atomic byte-writer handlers for user-length 5.
struct ByteWriterEntry {
    int ch;
    int op;
    uint64_t handler_va;
    int byte_index;
};

static constexpr ByteWriterEntry kByteWriters5[] = {
    {3, 51, 0x14003bea0ULL, 0},
    {1, 25, 0x140015820ULL, 1},
    {2, 18, 0x140025020ULL, 2},
    {0, 57, 0x140014a00ULL, 3},
    {1, 43, 0x1400216d0ULL, 4},
};

static constexpr size_t kByteWriters5Count = sizeof(kByteWriters5) / sizeof(kByteWriters5[0]);

// Returns the byte_index for a given (ch, op), or -1 if not an atomic writer.
inline int find_byte_index(int ch, int op) {
    for (const auto& e : kByteWriters5) {
        if (e.ch == ch && e.op == op) return e.byte_index;
    }
    return -1;
}

} // namespace pafet_x
