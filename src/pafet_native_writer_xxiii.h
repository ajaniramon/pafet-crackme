#pragma once
#include <cstddef>
#include <cstdint>

namespace pafet_xxiii {

// Original MSVC string ABI: 16-byte union, u64 size, u64 capacity.
// All addresses are caller-supplied research addresses. The caller must bind
// the actual buffer separately when replaying a captured address space.
struct WriterResult {
    uint64_t rax, rcx, rdx, r8, r9;
    uint64_t read_address, write_address;
};

// Complete op=4 body of host 0x140048960 (0x140048a05..0x140048a4c).
// No bounds check is inserted into the native operation. Accessible memory at
// index is a precondition, just as in the original. Not a stdin/encoding claim.
WriterResult host4(uint8_t* object32, uint8_t* heap_buffer,
                   uint64_t object_address, uint64_t index);

// Semantic core of 0x14003bea0, through the JNS at 0x14003bfa4.
// Reuses the existing instruction-level helper 3a50. The large threaded/guard
// continuation after that boundary is deliberately NOT claimed by this API.
uint64_t drop_3bea0_core(uint8_t* context, uint8_t* encoded_stack);
uint64_t drop_14a00_core(uint8_t* context, uint8_t* encoded_stack);

} // namespace pafet_xxiii

extern "C" {
void pafet_host4_xxiii(uint8_t*, uint8_t*, uint64_t, uint64_t,
                     pafet_xxiii::WriterResult*);
uint64_t pafet_drop_core_xxiii(uint8_t*, uint8_t*);
uint64_t pafet_drop14_core_xxiii(uint8_t*, uint8_t*);
}
