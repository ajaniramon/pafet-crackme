// Independently tested Hex-VM primitives. This is not the complete executor.
#pragma once
#include <array>
#include <cstdint>
#include <stdexcept>

namespace pafet::hexvm {
constexpr uint64_t phi = 0x9e3779b97f4a7c15ULL;
inline uint64_t fmix(uint64_t x) {
    x = (x ^ (x >> 33)) * 0xff51afd7ed558ccdULL;
    x = (x ^ (x >> 33)) * 0xc4ceb9fe1a85ec53ULL;
    return x ^ (x >> 33);
}
struct State {
    uint64_t k{}, a{}, b{};
    uint64_t lcg{}, steps{}, vpc{}, mult{}, mask1{}, mask2{};
    uint8_t tag{};
    bool additive{};
    std::array<uint64_t, 64> pending{};
    uint32_t length{};
    // Persistent table: initialized once, never inferred from the current K.
    std::array<unsigned, 8> handlers{};
};
inline void initialize_handlers(State& s, uint64_t initial_k) {
    for (unsigned i=0; i<8; ++i) s.handlers[i] = (initial_k + i) & 7;
}
inline void execute_handler(State& s, unsigned h) {
    switch (h) {
    case 0: s.a = fmix(s.k ^ s.a); break;
    case 1: s.b = fmix((s.k >> 7) ^ s.b); s.k += phi; break;
    case 2: s.k ^= fmix(s.a + 1); break;
    case 3: s.a += (s.k & 6) | 1; break;
    case 4: s.b ^= fmix(s.k ^ s.a); break;
    case 5: s.k = fmix(s.b ^ s.k); break;
    case 6: s.a ^= (s.k >> 32) & 255; break;
    case 7: s.b = fmix(s.k + s.b); break;
    default: throw std::out_of_range("Hex-VM handler");
    }
}
inline uint8_t advance_clock(State& s) {
    ++s.steps;
    s.lcg = s.lcg * phi + 0x2545f4914f6cdd1dULL;
    return static_cast<uint8_t>(s.lcg >> 27);
}
// Only this program block has been reduced and checked independently so far.
// Opaque parity tests and scratch-only mixing do not change virtual state.
inline uint32_t execute_verified_block(State& s, uint32_t pc) {
    if (pc != 0x2d409a) throw std::out_of_range("unreconstructed Hex-VM block");
    s.a ^= fmix(s.a + 1);
    return 0x8453b; // argument to queue_push, not an encoded VPC assignment
}
// Verified tail of decoder 0x80000, reached by virtual block 0x295b7f.
// Caller supplies the decoded opcode and updated index/counter. The byte
// decoder, its remap and slot side effects are still separate open work.
inline uint32_t commit_decoded_instruction(State& s, uint32_t next_index,
                                            uint8_t opcode, int32_t counter) {
    if ((static_cast<uint32_t>(counter) & 31) == 0)
        s.a = fmix(static_cast<uint64_t>(static_cast<int64_t>(counter)) ^ s.a ^ s.b);
    s.b = fmix(uint64_t(opcode) ^ uint64_t(next_index) ^ s.b);
    return 0x36da17;
}
inline void drain(State& s) {
    if (s.length > s.pending.size()) throw std::out_of_range("Hex-VM queue");
    for (unsigned n=0; n<8 && s.length; ++n) {
        uint64_t encoded = s.pending[--s.length];
        uint64_t decoded = s.k ^ encoded;
        unsigned selector = (s.k * phi + encoded) >> 61;
        s.k = fmix(decoded);
        execute_handler(s, s.handlers[selector]);
        s.tag = advance_clock(s);
        uint64_t mask = (uint64_t(s.tag) * s.mult) ^ s.mask1 ^ s.mask2;
        uint32_t item = static_cast<uint32_t>(decoded);
        s.vpc = s.additive ? mask + item : mask ^ item;
    }
}
// 0x1400889e0 -> 0x14004a0e0: read a virtual slot and refresh its encoding.
// It returns a full uint64_t, not an output byte or a std::string.
struct Slots {
    std::array<uint64_t, 512> values{};
    std::array<uint8_t, 256> tags{};
    uint32_t bank_parity{};
    uint64_t index_multiplier{}, tag_multiplier{}, mask{};
    bool additive{};
};
inline uint64_t read_slot(State& clock, Slots& slots, uint8_t index) {
    unsigned cell = (((slots.bank_parity + index) & 1) << 8) + index;
    auto mask = [&](uint8_t tag) {
        return (uint64_t(index) * slots.index_multiplier)
            ^ (uint64_t(tag) * slots.tag_multiplier) ^ slots.mask;
    };
    uint64_t old_mask = mask(slots.tags[index]);
    uint64_t value = slots.additive ? slots.values[cell] - old_mask
                                    : slots.values[cell] ^ old_mask;
    slots.tags[index] = advance_clock(clock);
    uint64_t new_mask = mask(slots.tags[index]);
    slots.values[cell] = slots.additive ? value + new_mask : value ^ new_mask;
    return value;
}
} // namespace pafet::hexvm
