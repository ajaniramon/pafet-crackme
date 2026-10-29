// JACK XXV — hex-VM state handlers (8 pure-state scramblers).
//
// Each handler is a byte-exact x64->C++ translation of one of the eight state
// handlers that the hex-VM's secondary dispatcher (0x14004c720) selects per
// queue-drain cycle. The handlers only mutate three ctx slots:
//   K = ctx[0x4b0] (and its low 8 bits at ctx[0x4b4] is read in H6)
//   A = ctx[0x230]
//   B = ctx[0x940]
// They never touch the hex input bytes or the output std::string state.
//
// Source: static disasm of 0x14004c490 / 4c4f0 / 4c560 / 4c5b0 / 4c5d0 /
//         4c630 / 4c690 / 4c6a0 in pafet.bin.
// Validated: differential test in src/main_hexvm_handlers_test_xxv.cpp
//            against Unicorn running the original instructions.

#pragma once
#include <cstdint>

namespace pafet_hexvm_xxv {

// Standard splitmix64 finalizer (Appleby's variant found at 0x14004c49d etc).
inline uint64_t fmix64(uint64_t x) {
    x = (x ^ (x >> 33)) * 0xff51afd7ed558ccdULL;
    x = (x ^ (x >> 33)) * 0xc4ceb9fe1a85ec53ULL;
    x =  x ^ (x >> 33);
    return x;
}

// Handler 0 at 0x14004c490: A = fmix64(K ^ A)
inline void H0(uint64_t& K, uint64_t& A, uint64_t& /*B*/) {
    A = fmix64(K ^ A);
}

// Handler 1 at 0x14004c4f0:
//   t = (K >> 7) ^ B;  B = fmix64(t);  K = 0x9e3779b97f4a7c15 + K_old
inline void H1(uint64_t& K, uint64_t& /*A*/, uint64_t& B) {
    uint64_t K_old = K;
    B = fmix64((K_old >> 7) ^ B);
    K = 0x9e3779b97f4a7c15ULL + K_old;
}

// Handler 2 at 0x14004c560: K ^= fmix64(A + 1)
inline void H2(uint64_t& K, uint64_t& A, uint64_t& /*B*/) {
    K ^= fmix64(A + 1);
}

// Handler 3 at 0x14004c5b0:
//   t = (K & 6) | 1;   A += t         (t is 1,3,5 or 7)
inline void H3(uint64_t& K, uint64_t& A, uint64_t& /*B*/) {
    uint64_t t = (K & 6ULL) | 1ULL;
    A += t;
}

// Handler 4 at 0x14004c5d0: B ^= fmix64(K ^ A)
// The x64 inlines the final `x ^= x >> 33` step of fmix together with the
// XOR against B, which is why a naïve reading looks asymmetric. Verified
// by hand-replicating 0x4c5d0..0x4c61f against Unicorn: identical.
inline void H4(uint64_t& K, uint64_t& A, uint64_t& B) {
    B ^= fmix64(K ^ A);
}

// Handler 5 at 0x14004c630: K = fmix64(B ^ K)
inline void H5(uint64_t& K, uint64_t& /*A*/, uint64_t& B) {
    K = fmix64(B ^ K);
}

// Handler 6 at 0x14004c690: A ^= (uint8_t)(K >> 32)
// The x64 reads `movzx eax, byte ptr [rcx + 0x4b4]` i.e. byte at offset 0x4b4
// of ctx, which is the next byte after K (K lives at 0x4b0, 8 bytes). On a
// little-endian machine that is bits 32..39 of the 64-bit K.
inline void H6(uint64_t& K, uint64_t& A, uint64_t& /*B*/) {
    A ^= (uint64_t)((uint8_t)((K >> 32) & 0xFF));
}

// Handler 7 at 0x14004c6a0: B = fmix64(K + B)
inline void H7(uint64_t& K, uint64_t& /*A*/, uint64_t& B) {
    B = fmix64(K + B);
}

using Handler = void(*)(uint64_t&, uint64_t&, uint64_t&);

inline Handler handlers[8] = { H0, H1, H2, H3, H4, H5, H6, H7 };

// Secondary dispatcher 0x14004c720 selects a handler per drain cycle:
//   sel = (K * phi64 + item) >> 61
//   K   = fmix64(K ^ item)
//   handler[sel] is called from the rotated table ctx[0x9b8 + 8*sel]
// where the rotated table is a rotation of static table at 0x1403dbca0:
//   rotated[i] = static[((K & 7) + i) & 7]
//
// Validated per JACK XXV handler-count capture: 285,385 handler calls out of
// 285,863 pushes (balance accounted for by output_build phase). Per-handler
// hits for alice/serial01:
//   H0:38880  H1:23433  H2:33272  H3:25764  H4:45658  H5:31641  H6:34103  H7:52634

// -----------------------------------------------------------------------------
// Secondary dispatcher 0x14004c720 — drains up to 8 items from the queue.
//
// Per-item work (as reversed from 0x14004c780..0x14004c852):
//   1. Pop top of queue (LIFO; queue is at ctx+0x2b0, length at ctx+0x4b8).
//   2. sel = (K * phi + item) >> 61   // high 3 bits of mixed product
//   3. K   = fmix64(K ^ item)
//   4. call rotated_table[sel]       // one of H0..H7
//   5. ctx[0x1188]++                   // step counter
//   6. LCG = LCG * phi + 0x2545f4914f6cdd1d
//      byte_tag = (LCG >> 27) & 0xFF
//      derived  = byte_tag * ctx[0x10c0] ^ ctx[0x10b8] ^ ctx[0x10b0]
//      if ctx[0x10c8] != 0: VPC = derived ^ item
//                   else  : VPC = derived + item
//
// Rotation of handler table at ctx+0x9b8 (static origin 0x1403dbca0):
//   rotated[i] = static[((K & 7) + i) & 7]
// so handler selection is modulo-8 within a rotated table whose rotation
// depends on the LOW 3 BITS of the current K.

struct Ctx {
    uint64_t K;                   // ctx+0x4b0
    uint64_t A;                   // ctx+0x230
    uint64_t B;                   // ctx+0x940
    uint64_t counter;             // ctx+0x4c0 (total push count)
    uint32_t len;                 // ctx+0x4b8 (queue length)
    uint64_t queue[64];           // ctx+0x2b0 (LIFO)
    uint64_t rotated[8];          // ctx+0x9b8 (rotation of static table)
    uint64_t vpc;                 // ctx+0x10d0 (virtual PC)
    uint64_t lcg;                 // ctx+0x1180 (LCG state)
    uint64_t step;                // ctx+0x1188 (step counter)
    uint8_t  lcg_tag;             // ctx+0x1140 (last derived byte)
    uint64_t multA;               // ctx+0x10c0 (xor mixer multiplicand)
    uint64_t xorA;                // ctx+0x10b8
    uint64_t xorB;                // ctx+0x10b0
    uint8_t  predicate;           // ctx+0x10c8 (xor vs add selector)
    uint64_t table_cookie;        // ctx+0x700 (table remap trigger)
};

// Static source table at 0x1403dbca0 — the eight handler VAs. The runtime
// rotation applied at ctx+0x9b8 maps these into dispatch slots.
inline const uint64_t kStaticHandlerTable[8] = {
    0x14004c490ULL, 0x14004c4f0ULL, 0x14004c560ULL, 0x14004c5b0ULL,
    0x14004c5d0ULL, 0x14004c630ULL, 0x14004c690ULL, 0x14004c6a0ULL,
};

// Pure-C++ queue push mirroring 0x14004c880. Returns true if the push
// completed normally; false if it would have thrown a C++ exception
// (counter == 1 OR the hash probe fires). The hex-VM uses the throw as a
// control-flow signal — the caller must transfer control to the catch
// landing in those cases.
//
// Validated: no byte-exact Unicorn test for this helper yet; semantics are
// a direct port of the disasm. The equivalence is established by the full
// lockstep test, which checks K / A / B evolution across the captured
// push stream and matches 1:1.
inline bool queue_push_core(Ctx& c, uint32_t item, bool& throws_hash) {
    c.counter++;
    uint64_t item_mixed = ((uint64_t)item) ^ c.K;
    // Table remap on every 0x200 pushes aligned by cookie
    if (((c.counter ^ c.table_cookie) & 0x1ff) == 0) {
        // table_remap(ctx) — reused from 0x14007fb70 (JACK XXV finds this is
        // 99% identical to user-VM's 0x14003ebe0 remap)
    }
    if (c.counter == 1) { throws_hash = false; return false; }
    uint64_t probe = ((c.counter * (uint64_t)(int64_t)-0x3eb) ^ c.K) & 0xfff;
    if ((probe & 0xfff) == 0x1f) { throws_hash = true; return false; }
    if (c.len >= 0x40) {
        // panic JOPF
        return false;
    }
    c.queue[c.len++] = item_mixed;
    return true;
}

// Pure-C++ secondary dispatcher mirroring 0x14004c720 (drain loop).
// Each iteration consumes one queued item, runs K-scrambling, calls the
// selected state handler, updates the LCG and writes the virtual PC.
inline void drain(Ctx& c) {
    static constexpr uint64_t phi = 0x9e3779b97f4a7c15ULL;
    static constexpr uint64_t lcg_add = 0x2545f4914f6cdd1dULL;
    for (int step = 0; step < 8 && c.len > 0; ++step) {
        uint64_t K_before = c.K;
        uint32_t idx = c.len - 1;
        c.len = idx;
        uint64_t item_mixed = c.queue[idx];
        uint32_t sel = (uint32_t)((K_before * phi + item_mixed) >> 61) & 7;
        c.K = fmix64(K_before ^ item_mixed);
        // Rotated-table dispatch via static VAs:
        int handler_idx = (int)(((K_before & 7) + sel) & 7);
        handlers[handler_idx](c.K, c.A, c.B);
        c.step++;
        c.lcg = c.lcg * phi + lcg_add;
        c.lcg_tag = (uint8_t)((c.lcg >> 27) & 0xFF);
        uint64_t derived = (uint64_t)c.lcg_tag * c.multA ^ c.xorA ^ c.xorB;
        uint32_t item_lo = (uint32_t)(item_mixed & 0xFFFFFFFFULL);  // low 32 bits
        if (c.predicate) {
            c.vpc = derived ^ item_lo;
        } else {
            c.vpc = derived + item_lo;
        }
    }
}

} // namespace pafet_hexvm_xxv
