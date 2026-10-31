// serial.cpp — readable, faithful reconstruction of PAFET's Serial-VM.
//
// Recovered by JACK XXXVI. This is NOT a substitution: the 23 primitives are
// the exact cases of the original native callback switch at RVA 0x232e20
// (reached via receiver vtable 0x3f1820 -> method 0x39d940), and
// serial_vm_program() calls them in the order and with the loop conditions
// recovered from the closed 478-instruction virtual program
// (jack_xxxvi_evidence/static_sweep.json, virtual_cfg.json, loops.json).
//
// The virtual bytecode's obfuscation layer (encoded register/stack banks,
// control tags, PRNG, deferred branches, remaps, rekeys, decoder epochs,
// TLS call frames, the C++-exception scheduler and the padding/junk-register
// instructions) is proven to have no host-observable effect
// (serial_cpp_evidence/observable.json), so it is omitted here. What remains
// is exactly what the program does to memory the host can see.
//
// Observation: the three loops below are the RC4 key schedule (identity init,
// then keyed mixing) and the RC4 keystream XOR. We write the recovered
// primitives, not a library RC4, so the model stays tied to the binary.

#include <cstdint>
#include <cstddef>
#include <string>

namespace pafet {

// The callback receiver: twelve pointers the adapter 0x39d740 fills from its
// own frame (see serial_cpp_evidence/host_binding.json). Names follow the
// recovered meaning of each field.
struct Receiver {
    int32_t      i = 0;        // R0  loop-1 index
    uint8_t      S[256] = {};  // R1  permutation table (zero-initialised)
    uint8_t      j = 0;        // R2  key-schedule accumulator
    std::string* key;          // R3  key string (empty on this binary)
    uint64_t     keylen = 0;   // R4  key length (modulus)
    int32_t      i2 = 0;       // R5  key-schedule index
    uint8_t      a = 0;        // R6  keystream cursor a
    uint8_t      b = 0;        // R7  keystream cursor b
    uint64_t     n = 0;        // R8  output byte counter
    uint64_t     len = 0;      // R9  data length = work.size()
    uint8_t      k = 0;        // R10 current keystream byte
    uint8_t*     data;         // R11 work buffer = work.data()

    // --- The 23 cases of native switch 0x232e20, verbatim ---
    // Each returns uint64 (0 when the original path does XOR EAX,EAX; RET).
    uint64_t fn0 (uint64_t v) { i = (int32_t)(uint32_t)v;  return 0; }          // *R0 = v
    uint64_t fn1 ()           { return (uint64_t)(int64_t)i; }                   // sext(*R0)
    uint64_t fn2 ()           { S[(uint8_t)i] = (uint8_t)i; return S[(uint8_t)i]; }
    uint64_t fn3 (uint64_t v) { j = (uint8_t)v;  return 0; }                      // *R2 = v
    uint64_t fn4 ()           { return key->size(); }                            // R3 size
    uint64_t fn5 (uint64_t v) { keylen = v;  return 0; }                          // *R4 = v
    uint64_t fn6 (uint64_t v) { i2 = (int32_t)(uint32_t)v;  return 0; }           // *R5 = v
    uint64_t fn7 ()           { return (uint64_t)(int64_t)i2; }                   // sext(*R5)
    uint64_t fn8 ()           { return keylen; }                                 // *R4
    uint64_t fn9 ()           {                                                  // keyed mix (dead when keylen==0)
        uint8_t kb = (uint8_t)(*key)[(size_t)((uint64_t)(int64_t)i2 % keylen)];
        j = (uint8_t)(j + S[(uint8_t)i2] + kb);
        return j;
    }
    uint64_t fn10()           { j = (uint8_t)(j + S[(uint8_t)i2]); return j; }    // *R2 += S[i2]
    uint64_t fn11()           { uint8_t t = S[j]; S[j] = S[(uint8_t)i2]; S[(uint8_t)i2] = t; return 0; }
    uint64_t fn12(uint64_t v) { a = (uint8_t)v;  return 0; }                      // *R6 = v
    uint64_t fn13(uint64_t v) { b = (uint8_t)v;  return 0; }                      // *R7 = v
    uint64_t fn14(uint64_t v) { n = v;  return 0; }                              // *R8 = v
    uint64_t fn15()           { return n; }                                      // *R8
    uint64_t fn16()           { return len; }                                    // *R9
    uint64_t fn17()           { return a; }                                      // *R6
    uint64_t fn18()           { b = (uint8_t)(b + S[a]); return b; }              // *R7 += S[a]
    uint64_t fn19()           { uint8_t t = S[b]; S[b] = S[a]; S[a] = t; return 0; }
    uint64_t fn20()           { return S[(uint8_t)(S[a] + S[b])]; }              // S[(S[a]+S[b])&255]
    uint64_t fn21(uint64_t v) { k = (uint8_t)v;  return 0; }                      // *R10 = v
    uint64_t fn22()           { data[n] ^= k; return data[n]; }                  // (*R11)[n] ^= *R10
};

// The virtual program (478 instructions) with padding and junk removed.
// Loop conditions are the recovered BRANCH_IF_ZERO tests; the helper casts
// (zext8/sext32) are the exact 0x3a/0x3b chain around fn17.
inline uint8_t z8(uint64_t v)  { return (uint8_t)v; }
inline int32_t s32(uint64_t v) { return (int32_t)(uint32_t)v; }

void serial_vm_program(Receiver& r) {
    // r.len (R9) and r.data (R11) are set by the host adapter before entry.
    r.fn0(0);                          // i = 0
    while (s32(r.fn1()) < 256) {       // loop 1 @PC1742: identity table
        r.fn2();                       //   S[i] = i
        r.fn0(r.fn1() + 1);            //   i++
    }

    r.fn3(0);                          // j = 0
    r.fn5(r.fn4());                    // keylen = key.size()
    r.fn6(0);                          // i2 = 0
    while (s32(r.fn7()) < 256) {       // loop 2 @PC2522: keyed key schedule
        if (r.fn8() != 0) r.fn9();     //   @PC2392: keyed (dead here) ...
        else              r.fn10();    //   ... or unkeyed  j += S[i2]
        r.fn11();                      //   swap S[j], S[i2]
        r.fn6(r.fn7() + 1);            //   i2++
    }

    r.fn12(0);                         // a = 0
    r.fn13(0);                         // b = 0
    r.fn14(0);                         // n = 0
    while (r.fn15() < r.fn16()) {      // loop 3 @PC2184: keystream XOR over data
        r.fn12(z8(s32(z8(r.fn17())) + 1)); // a = (a + 1) & 255
        r.fn18();                      //   b += S[a]
        r.fn19();                      //   swap S[a], S[b]
        r.fn21(z8(r.fn20()));          //   k = S[(S[a]+S[b]) & 255]
        r.fn22();                      //   data[n] ^= k
        r.fn14(r.fn15() + 1);          //   n++
    }
    // falls through padding to HALT; cleanup frees the thunk pool and
    // returns logical control 3 (= 0), which the host adapter discards.
}

// Host entry: std::function lambda operator() (RVA 0x39d740), command 1.
// Commands 0 (work = *input) and 2 (*output = work) are the caller's copies;
// only command 1 runs the VM. The VM transforms `work` in place.
void run_serial(std::string& work, std::string& key) {
    Receiver r;
    r.key  = &key;
    r.data = reinterpret_cast<uint8_t*>(work.data());
    r.len  = work.size();
    serial_vm_program(r);
}

} // namespace pafet
