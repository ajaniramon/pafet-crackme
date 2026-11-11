// sha.cpp — readable reconstruction of PAFET's username digest (nine VMs).
//
// Recovered by JACK XXXVII, following the pattern of serial_cpp_evidence/serial.cpp.
//
//   sha_msg       executor 0x14027aba0   callbacks: switch 0x1402834d0 (40 cases)
//   sha_compress  executor 0x140290300   callbacks: switch 0x140298d10 (49 cases)
//   sha_ch / sha_maj / sha_ep0 / sha_ep1 / sha_sig0 / sha_sig1 / sha_rotr
//                 executors 0x1402a4a20, 0x1402df0e0, 0x1402b8140, 0x1402ccb00,
//                 0x140335b10, 0x140377720, 0x1403216e0 (branch-free programs)
//
// The fnN members are the cases of the two native callback switches. The two
// *_program functions call them in the order, with the argument expressions and
// with the branch conditions of the lifted virtual programs
// (jack_xxxvii_evidence/lifted/sha_msg.skeleton.txt, sha_compress.skeleton.txt).
// Callbacks whose result the program discards are kept: they are real calls.
//
// What is omitted is everything the lift does not observe: the VMs' encoded
// state, opaque branches, junk register traffic and native runtime. This file
// states what the programs ask the host to do, not how the VMs execute.
//
// Validation (scripts/pafet_sha_cpp_validate_xxxvii.py): for each input the
// sequence of (switch, case, argument, return) produced here is compared with
// the sequence observed in pafet.bin under Frida, and the digest with hashlib.
//
// Observation: this is the public-domain SHA-256 of Brad Conte's crypto-algorithms
// (sha256_update, sha256_final, sha256_transform), one statement per callback.

#include <cstdint>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

#include "../pafet_cpp_evidence/vm_common.h"

namespace pafet {

using namespace vm;   // s32, z32

// ---------------------------------------------------------------- branch-free programs
// Each is the whole virtual program after folding; see jack_xxxvii_evidence/identification.json.
inline uint32_t rotr(uint32_t x, uint32_t n) { return (x >> n) | (x << (32 - n)); }          // sha_rotr
inline uint32_t ch (uint32_t x, uint32_t y, uint32_t z) { return (x & y) ^ (~x & z); }         // sha_ch: callbacks x, y, ~x, z
inline uint32_t maj(uint32_t a, uint32_t b, uint32_t c) { return (a & b) ^ (a & c) ^ (b & c); } // sha_maj
inline uint32_t ep0 (uint32_t x) { return rotr(x, 2)  ^ rotr(x, 13) ^ rotr(x, 22); }           // sha_ep0
inline uint32_t ep1 (uint32_t x) { return rotr(x, 6)  ^ rotr(x, 11) ^ rotr(x, 25); }           // sha_ep1
inline uint32_t sig0(uint32_t x) { return rotr(x, 7)  ^ rotr(x, 18) ^ (x >> 3); }              // sha_sig0
inline uint32_t sig1(uint32_t x) { return rotr(x, 17) ^ rotr(x, 19) ^ (x >> 10); }             // sha_sig1

// The 64 immediates the native wrapper 0x140298930 writes into its frame.
inline const uint32_t K[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};

// ---------------------------------------------------------------- sha_compress
// Receiver of switch 0x140298d10. Field comments give the receiver slot offset.
struct Compress {
    int32_t        i = 0;        // +0x00 word index, first loop
    int32_t        j = 0;        // +0x08 byte offset into the block
    uint32_t       m[64] = {};   // +0x10 message schedule (zeroed by the wrapper)
    const uint8_t* data;         // +0x18 the 64-byte block
    int32_t        i2 = 0;       // +0x20 word index, schedule loop
    uint32_t*      state;        // +0x28 the eight state words
    uint32_t       a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;   // +0x30 .. +0x68
    int32_t        i3 = 0;       // +0x70 round index
    //                              +0x78 K
    uint32_t       t1 = 0;       // +0x80
    uint32_t       t2 = 0;       // +0x88

    uint64_t fn0 (uint64_t v) { i = (int32_t)v;  return T('c', 0, v, 0); }
    uint64_t fn1 (uint64_t v) { j = (int32_t)v;  return T('c', 1, v, 0); }
    uint64_t fn2 ()           { return T('c', 2, (uint64_t)(int64_t)i); }
    uint64_t fn3 ()           {                                                  // m[i] = big-endian word at data + j
        m[i] = ((uint32_t)data[j] << 24) | ((uint32_t)data[j + 1] << 16) | ((uint32_t)data[j + 2] << 8) | data[j + 3];
        return T('c', 3, m[i]);
    }
    uint64_t fn4 ()           { return T('c', 4, (uint64_t)(int64_t)j); }
    uint64_t fn5 (uint64_t v) { i2 = (int32_t)v; return T('c', 5, v, 0); }
    uint64_t fn6 ()           { return T('c', 6, (uint64_t)(int64_t)i2); }
    uint64_t fn7 ()           {                                                  // calls the sha_sig1 and sha_sig0 VMs
        m[i2] = m[i2 - 16] + m[i2 - 7] + sig0(m[i2 - 15]) + sig1(m[i2 - 2]);
        return T('c', 7, m[i2]);
    }
    uint64_t fn8 ()           { return T('c', 8,  state[0]); }
    uint64_t fn9 (uint64_t v) { a = (uint32_t)v; return T('c', 9,  v, 0); }
    uint64_t fn10()           { return T('c', 10, state[1]); }
    uint64_t fn11(uint64_t v) { b = (uint32_t)v; return T('c', 11, v, 0); }
    uint64_t fn12()           { return T('c', 12, state[2]); }
    uint64_t fn13(uint64_t v) { c = (uint32_t)v; return T('c', 13, v, 0); }
    uint64_t fn14()           { return T('c', 14, state[3]); }
    uint64_t fn15(uint64_t v) { d = (uint32_t)v; return T('c', 15, v, 0); }
    uint64_t fn16()           { return T('c', 16, state[4]); }
    uint64_t fn17(uint64_t v) { e = (uint32_t)v; return T('c', 17, v, 0); }
    uint64_t fn18()           { return T('c', 18, state[5]); }
    uint64_t fn19(uint64_t v) { f = (uint32_t)v; return T('c', 19, v, 0); }
    uint64_t fn20()           { return T('c', 20, state[6]); }
    uint64_t fn21(uint64_t v) { g = (uint32_t)v; return T('c', 21, v, 0); }
    uint64_t fn22()           { return T('c', 22, state[7]); }
    uint64_t fn23(uint64_t v) { h = (uint32_t)v; return T('c', 23, v, 0); }
    uint64_t fn24(uint64_t v) { i3 = (int32_t)v; return T('c', 24, v, 0); }
    uint64_t fn25()           { return T('c', 25, (uint64_t)(int64_t)i3); }
    uint64_t fn26()           { return T('c', 26, (uint32_t)(K[i3] + m[i3] + h + ep1(e) + ch(e, f, g))); }   // sha_ep1, sha_ch VMs
    uint64_t fn27(uint64_t v) { t1 = (uint32_t)v; return T('c', 27, v, 0); }
    uint64_t fn28()           { return T('c', 28, ep0(a)); }                     // sha_ep0 VM
    uint64_t fn29()           { return T('c', 29, maj(a, b, c)); }               // sha_maj VM
    uint64_t fn30(uint64_t v) { t2 = (uint32_t)v; return T('c', 30, v, 0); }
    uint64_t fn31()           { return T('c', 31, g); }
    uint64_t fn32()           { return T('c', 32, h); }
    uint64_t fn33()           { return T('c', 33, f); }
    uint64_t fn34()           { return T('c', 34, e); }
    uint64_t fn35()           { return T('c', 35, d); }
    uint64_t fn36()           { return T('c', 36, t1); }
    uint64_t fn37()           { return T('c', 37, c); }
    uint64_t fn38()           { return T('c', 38, b); }
    uint64_t fn39()           { return T('c', 39, a); }
    uint64_t fn40()           { return T('c', 40, t2); }
    uint64_t fn41()           { state[0] += a; return T('c', 41, state[0]); }
    uint64_t fn42()           { state[1] += b; return T('c', 42, state[1]); }
    uint64_t fn43()           { state[2] += c; return T('c', 43, state[2]); }
    uint64_t fn44()           { state[3] += d; return T('c', 44, state[3]); }
    uint64_t fn45()           { state[4] += e; return T('c', 45, state[4]); }
    uint64_t fn46()           { state[5] += f; return T('c', 46, state[5]); }
    uint64_t fn47()           { state[6] += g; return T('c', 47, state[6]); }
    uint64_t fn48()           { state[7] += h; return T('c', 48, state[7]); }
};

// The virtual program (582 instructions lifted) with the obfuscation folded away.
inline void sha_compress_program(Compress& r) {
    r.fn0(0);                                        // i = 0
    r.fn1(0);                                        // j = 0
    while (s32(r.fn2()) < 16) {                      // load 16 big-endian words
        r.fn3();                                     //   m[i] = be32(data + j)
        r.fn0(r.fn2() + 1);  r.fn2();                //   ++i
        r.fn1((uint64_t)s32(r.fn4() + 4));  r.fn4(); //   j += 4
    }
    r.fn5(16);                                       // i2 = 16
    while (s32(r.fn6()) < 64) {                      // extend the schedule
        r.fn7();                                     //   m[i2] = sig1(m[i2-2]) + m[i2-7] + sig0(m[i2-15]) + m[i2-16]
        r.fn5(r.fn6() + 1);  r.fn6();                //   ++i2
    }
    r.fn9 (z32(r.fn8()));                            // a = state[0]
    r.fn11(z32(r.fn10()));                           // b = state[1]
    r.fn13(z32(r.fn12()));                           // c = state[2]
    r.fn15(z32(r.fn14()));                           // d = state[3]
    r.fn17(z32(r.fn16()));                           // e = state[4]
    r.fn19(z32(r.fn18()));                           // f = state[5]
    r.fn21(z32(r.fn20()));                           // g = state[6]
    r.fn23(z32(r.fn22()));                           // h = state[7]
    r.fn24(0);                                       // i3 = 0
    while (s32(r.fn25()) < 64) {                     // 64 rounds
        r.fn27(z32(r.fn26()));                       //   t1 = h + ep1(e) + ch(e,f,g) + K[i3] + m[i3]
        { uint64_t x = r.fn28(); uint64_t y = r.fn29(); r.fn30(z32(x + y)); }   // t2 = ep0(a) + maj(a,b,c)
        r.fn23(z32(r.fn31()));  r.fn32();            //   h = g
        r.fn21(z32(r.fn33()));  r.fn31();            //   g = f
        r.fn19(z32(r.fn34()));  r.fn33();            //   f = e
        { uint64_t x = r.fn35(); uint64_t y = r.fn36(); r.fn17(z32(z32(x) + z32(y))); }  r.fn34();   // e = d + t1
        r.fn15(z32(r.fn37()));  r.fn35();            //   d = c
        r.fn13(z32(r.fn38()));  r.fn37();            //   c = b
        r.fn11(z32(r.fn39()));  r.fn38();            //   b = a
        { uint64_t x = r.fn36(); uint64_t y = r.fn40(); r.fn9(z32(z32(x) + z32(y))); }   r.fn39();   // a = t1 + t2
        r.fn24(r.fn25() + 1);  r.fn25();             //   ++i3
    }
    r.fn41(); r.fn42(); r.fn43(); r.fn44();          // state[k] += a..h
    r.fn45(); r.fn46(); r.fn47(); r.fn48();
}

// Native wrapper 0x140298930: builds K and a zeroed schedule in its frame, then runs the VM.
inline void sha256_transform(uint32_t state[8], const uint8_t block[64]) {
    Compress r;
    r.data = block;
    r.state = state;
    sha_compress_program(r);
}

// ---------------------------------------------------------------- sha_msg
// Receiver of switch 0x1402834d0, filled by the native wrapper 0x1402831c0.
struct Message {
    uint32_t           datalen = 0;     // +0x00 bytes currently in block
    uint64_t           bitlen = 0;      // +0x08
    const std::string* input;           // +0x10 the username string
    uint64_t           data = 0;        // +0x18 input->data(), held as an integer
    uint64_t           len = 0;         // +0x20 input->size()
    uint64_t           i = 0;           // +0x28 byte index
    uint8_t            block[64] = {};  // +0x30
    uint32_t           state[8] = {0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
                                   0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};   // +0x38, set by the wrapper
    uint64_t           pad = 0;         // +0x40 padding cursor
    int32_t            w = 0;           // +0x48 state word index
    uint8_t            hash[32] = {};   // +0x50
    int32_t            n = 0;           // +0x58 digest byte index
    std::ostringstream os;              // +0x60
    std::string*       result;          // +0x68

    uint64_t fn0 (uint64_t v) { datalen = (uint32_t)v; return T('m', 0, v, 0); }
    uint64_t fn1 (uint64_t v) { bitlen = v;            return T('m', 1, v, 0); }
    uint64_t fn2 ()           { return T('m', 2, (uint64_t)input->data()); }
    uint64_t fn3 (uint64_t v) { data = v;              return T('m', 3, v, 0); }
    uint64_t fn4 ()           { return T('m', 4, input->size()); }
    uint64_t fn5 (uint64_t v) { len = v;               return T('m', 5, v, 0); }
    uint64_t fn6 (uint64_t v) { i = v;                 return T('m', 6, v, 0); }
    uint64_t fn7 ()           { return T('m', 7, i); }
    uint64_t fn8 ()           { return T('m', 8, len); }
    uint64_t fn9 ()           {                                                  // block[datalen++] = data[i]
        block[datalen] = ((const uint8_t*)data)[i];
        uint8_t stored = block[datalen];
        ++datalen;
        return T('m', 9, stored);
    }
    uint64_t fn10()           { return T('m', 10, datalen); }
    uint64_t fn11()           { sha256_transform(state, block); return T('m', 11, 0); }
    uint64_t fn12()           { return T('m', 12, bitlen); }
    uint64_t fn13(uint64_t v) { pad = v;               return T('m', 13, v, 0); }
    uint64_t fn14()           { block[pad] = 0x80; ++pad; return T('m', 14, 0x80); }
    uint64_t fn15()           { return T('m', 15, pad); }
    uint64_t fn16()           { block[pad] = 0; ++pad;    return T('m', 16, 0); }
    uint64_t fn17()           { block[pad] = 0x80; ++pad; return T('m', 17, 0x80); }   // same native body as fn14
    uint64_t fn18()           { block[pad] = 0; ++pad;    return T('m', 18, 0); }      // same native body as fn16
    uint64_t fn19()           { sha256_transform(state, block); return T('m', 19, 0); } // same native body as fn11
    uint64_t fn20()           { std::memset(block, 0, 56); return T('m', 20, (uint64_t)block); }
    uint64_t fn21()           { block[63] = (uint8_t)bitlen;                    return T('m', 21, block[63]); }
    uint64_t fn22()           { block[62] = (uint8_t)((uint32_t)bitlen >> 8);   return T('m', 22, block[62]); }
    uint64_t fn23()           { block[61] = (uint8_t)((uint32_t)bitlen >> 16);  return T('m', 23, block[61]); }
    uint64_t fn24()           { block[60] = (uint8_t)((uint32_t)bitlen >> 24);  return T('m', 24, block[60]); }
    uint64_t fn25()           { block[59] = (uint8_t)(bitlen >> 32);            return T('m', 25, block[59]); }
    uint64_t fn26()           { block[58] = (uint8_t)(bitlen >> 40);            return T('m', 26, block[58]); }
    uint64_t fn27()           { block[57] = (uint8_t)(bitlen >> 48);            return T('m', 27, block[57]); }
    uint64_t fn28()           { block[56] = (uint8_t)(bitlen >> 56);            return T('m', 28, block[56]); }
    uint64_t fn29()           { sha256_transform(state, block); return T('m', 29, 0); } // same native body as fn11
    uint64_t fn30(uint64_t v) { w = (int32_t)v;        return T('m', 30, v, 0); }
    uint64_t fn31()           { return T('m', 31, (uint64_t)(int64_t)w); }
    uint64_t fn32()           { hash[4 * w]     = (uint8_t)(state[w] >> 24); return T('m', 32, hash[4 * w]); }
    uint64_t fn33()           { hash[4 * w + 1] = (uint8_t)(state[w] >> 16); return T('m', 33, hash[4 * w + 1]); }
    uint64_t fn34()           { hash[4 * w + 2] = (uint8_t)(state[w] >> 8);  return T('m', 34, hash[4 * w + 2]); }
    uint64_t fn35()           { hash[4 * w + 3] = (uint8_t)state[w];         return T('m', 35, hash[4 * w + 3]); }
    uint64_t fn36(uint64_t v) { n = (int32_t)v;        return T('m', 36, v, 0); }
    uint64_t fn37()           { return T('m', 37, (uint64_t)(int64_t)n); }
    uint64_t fn38()           { os << std::hex << std::setw(2) << std::setfill('0') << (unsigned)hash[n]; return T('m', 38, 0); }
    uint64_t fn39()           { *result = os.str();    return T('m', 39, 0); }
};

// The virtual program (638 instructions lifted) with the obfuscation folded away.
// Comparisons marked (signed) are the VM's signed 64-bit compares.
inline uint64_t sha_msg_program(Message& r) {
    r.fn0(0);                                        // datalen = 0
    r.fn1(0);                                        // bitlen = 0
    r.fn3(r.fn2());                                  // data = input.data()
    r.fn5(r.fn4());                                  // len = input.size()
    r.fn6(0);                                        // i = 0
    while ((int64_t)r.fn7() < (int64_t)r.fn8()) {    // for each input byte (signed)
        r.fn9();                                     //   block[datalen++] = data[i]
        if (z32(r.fn10()) == 64) {                   //   block full
            r.fn11();                                //     transform
            r.fn1(r.fn12() + 512);  r.fn12();        //     bitlen += 512
            r.fn0(0);  r.fn10();                     //     datalen = 0
        }
        r.fn6(r.fn7() + 1);  r.fn7();                //   ++i
    }

    r.fn13(z32(r.fn10()));                           // pad = datalen
    if ((int64_t)z32(r.fn10()) < 56) {               // room for the length in this block
        r.fn14();                                    //   block[pad++] = 0x80
        while ((int64_t)r.fn15() < 56) r.fn16();     //   zero up to byte 56
    } else {
        r.fn17();                                    //   block[pad++] = 0x80
        while ((int64_t)r.fn15() < 64) r.fn18();     //   zero up to byte 64
        r.fn19();                                    //   transform
        r.fn20();                                    //   memset(block, 0, 56)
    }
    { uint64_t x = r.fn12(); uint64_t y = r.fn10(); r.fn1(x + z32(z32(y) * 8)); }  r.fn12();   // bitlen += datalen * 8
    r.fn21(); r.fn22(); r.fn23(); r.fn24();          // block[63..60] = bitlen bytes 0..3
    r.fn25(); r.fn26(); r.fn27(); r.fn28();          // block[59..56] = bitlen bytes 4..7
    r.fn29();                                        // transform

    r.fn30(0);                                       // w = 0
    while (s32(r.fn31()) < 8) {                      // eight state words, big-endian
        r.fn32(); r.fn33(); r.fn34(); r.fn35();      //   hash[4w .. 4w+3]
        r.fn30(r.fn31() + 1);  r.fn31();             //   ++w
    }
    r.fn36(0);                                       // n = 0
    while (s32(r.fn37()) < 32) {                     // 32 digest bytes as two hex digits each
        r.fn38();
        r.fn36(r.fn37() + 1);  r.fn37();             //   ++n
    }
    r.fn39();                                        // result = os.str()
    return 0;
}

// Native wrapper 0x1402831c0 (main host 8 passes it the username).
inline std::string sha256_hex(const std::string& username) {
    std::string out;
    Message r;
    r.input = &username;
    r.result = &out;
    sha_msg_program(r);
    return out;
}

} // namespace pafet
