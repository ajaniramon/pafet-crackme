// cipher.cpp — readable reconstruction of PAFET's cipher pass (six VMs).
//
// Recovered by JACK XXXVII, following serial_cpp_evidence/serial.cpp and
// sha_cpp_evidence/sha.cpp.
//
//   cipher_buffer    executor 0x1400c0510   callbacks: switch 0x1400c9170 (7 cases)
//   tdes_block       executor 0x1400d3fe0   callbacks: switch 0x14039dd20 (6 cases)
//   des_keyschedule  executor 0x1401e42b0   callbacks: switch 0x1403a0d40 (28 cases)
//   des_block        executor 0x140176950   callbacks: switch 0x14017f790 (29 cases)
//   des_round        executor 0x14018df50   callbacks: switch 0x1403a0f10 (21 cases)
//   cipher_unpad     executor 0x14015faf0   callbacks: switch 0x14039db70 (7 cases)
//
// The fnN members are the cases of the native callback switches. The *_program
// functions call them in the order, with the argument expressions and under the
// conditions of the lifted virtual programs
// (jack_xxxvii_evidence/lifted/NAME.skeleton.txt). Callbacks whose result the
// program discards are kept: they are real calls.
//
// Omitted, as in sha.cpp: the VMs' encoded state, opaque branches, junk register
// traffic and native runtime. This file states what the programs ask the host
// to do, not how the VMs execute.
//
// Validation (scripts/pafet_cipher_cpp_validate_xxxvii.py): the sequence of
// (switch, case, argument, return) produced here equals the sequence observed in
// pafet_pass8.exe under Frida for the same key and data.
//
// Observation: this is textbook DES written one bit at a time, composed as
// D_K1(E_K2(D_K3(block))) over 8-byte blocks, followed by a permissive unpad.
// The tables below are the standard DES tables; the binary's are byte-identical
// (jack_xxxvii_evidence/identification.json).

#include <cstdint>
#include <cstring>
#include <string>
#include <utility>
#include <vector>

#include "../pafet_cpp_evidence/vm_common.h"

namespace pafet {

using namespace vm;   // s32, z32, z8, shl, shr

// ---------------------------------------------------------------- tables (RVA in pafet.bin)
inline const uint8_t IP[64] = {   // 0x3def60
    58, 50, 42, 34, 26, 18, 10, 2, 60, 52, 44, 36, 28, 20, 12, 4, 62, 54, 46, 38, 30, 22, 14, 6, 64, 56, 48, 40, 32, 24, 16, 8,
    57, 49, 41, 33, 25, 17, 9, 1, 59, 51, 43, 35, 27, 19, 11, 3, 61, 53, 45, 37, 29, 21, 13, 5, 63, 55, 47, 39, 31, 23, 15, 7};
inline const uint8_t FP[64] = {   // 0x3e03b0
    40, 8, 48, 16, 56, 24, 64, 32, 39, 7, 47, 15, 55, 23, 63, 31, 38, 6, 46, 14, 54, 22, 62, 30, 37, 5, 45, 13, 53, 21, 61, 29,
    36, 4, 44, 12, 52, 20, 60, 28, 35, 3, 43, 11, 51, 19, 59, 27, 34, 2, 42, 10, 50, 18, 58, 26, 33, 1, 41, 9, 49, 17, 57, 25};
inline const uint8_t E[48] = {    // 0x3eead0
    32, 1, 2, 3, 4, 5, 4, 5, 6, 7, 8, 9, 8, 9, 10, 11, 12, 13, 12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21, 20, 21, 22, 23, 24, 25, 24, 25, 26, 27, 28, 29, 28, 29, 30, 31, 32, 1};
inline const uint8_t P[32] = {    // 0x3ea790
    16, 7, 20, 21, 29, 12, 28, 17, 1, 15, 23, 26, 5, 18, 31, 10, 2, 8, 24, 14, 32, 27, 3, 9, 19, 13, 30, 6, 22, 11, 4, 25};
inline const uint8_t PC1[56] = {  // 0x3ec908
    57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36,
    63, 55, 47, 39, 31, 23, 15, 7, 62, 54, 46, 38, 30, 22, 14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 28, 20, 12, 4};
inline const uint8_t PC2[48] = {  // 0x3ed458
    14, 17, 11, 24, 1, 5, 3, 28, 15, 6, 21, 10, 23, 19, 12, 4, 26, 8, 16, 7, 27, 20, 13, 2,
    41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48, 44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32};
inline const uint8_t SHIFTS[16] = {1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};   // 0x3ec0b0
inline const uint8_t SBOX[512] = { // 0x3f1150, index (box * 4 + row) * 16 + column
    14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7, 0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
    4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0, 15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13,
    15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10, 3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
    0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15, 13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9,
    10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8, 13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
    13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7, 1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12,
    7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15, 13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
    10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4, 3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14,
    2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9, 14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,
    4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14, 11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3,
    12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11, 10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,
    9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6, 4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13,
    4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1, 13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
    1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2, 6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12,
    13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7, 1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,
    7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8, 2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11};

// ---------------------------------------------------------------- des_round
// Receiver built by des_block's callback 17; switch 0x1403a0f10.
struct Round {
    uint64_t e = 0;        // +0x00 expanded right half, then XORed with the subkey
    int32_t  i = 0;        // +0x08 expansion bit index
    uint32_t R;            // +0x10 right half
    uint64_t subkey;       // +0x18 48-bit round key
    uint32_t out = 0;      // +0x20 S-box output
    int32_t  j = 0;        // +0x28 S-box index
    uint8_t  six = 0;      // +0x30 six input bits of the current box
    uint8_t  row = 0;      // +0x38
    uint8_t  col = 0;      // +0x40
    uint32_t p = 0;        // +0x48 permuted output
    int32_t  k = 0;        // +0x50 permutation bit index

    uint64_t fn0 (uint64_t v) { e = v;            return T('r', 0, v, 0); }
    uint64_t fn1 (uint64_t v) { i = (int32_t)v;   return T('r', 1, v, 0); }
    uint64_t fn2 ()           { return T('r', 2, (uint64_t)(int64_t)i); }
    uint64_t fn3 ()           { return T('r', 3, R); }
    uint64_t fn4 ()           { return T('r', 4, E[i]); }
    uint64_t fn5 ()           { return T('r', 5, e); }
    uint64_t fn6 ()           { return T('r', 6, subkey); }
    uint64_t fn7 (uint64_t v) { out = (uint32_t)v; return T('r', 7, v, 0); }
    uint64_t fn8 (uint64_t v) { j = (int32_t)v;   return T('r', 8, v, 0); }
    uint64_t fn9 ()           { return T('r', 9, (uint64_t)(int64_t)j); }
    uint64_t fn10(uint64_t v) { six = (uint8_t)v; return T('r', 10, v, 0); }
    uint64_t fn11()           { return T('r', 11, six); }
    uint64_t fn12(uint64_t v) { row = (uint8_t)v; return T('r', 12, v, 0); }
    uint64_t fn13(uint64_t v) { col = (uint8_t)v; return T('r', 13, v, 0); }
    uint64_t fn14()           { return T('r', 14, out); }
    uint64_t fn15()           { return T('r', 15, SBOX[(((int64_t)j * 4 + row) << 4) + col]); }
    uint64_t fn16(uint64_t v) { p = (uint32_t)v;  return T('r', 16, v, 0); }
    uint64_t fn17(uint64_t v) { k = (int32_t)v;   return T('r', 17, v, 0); }
    uint64_t fn18()           { return T('r', 18, (uint64_t)(int64_t)k); }
    uint64_t fn19()           { return T('r', 19, P[k]); }
    uint64_t fn20()           { return T('r', 20, p); }
};

// The virtual program (647 instructions lifted). Returns f(R, subkey).
inline uint64_t des_round_program(Round& r) {
    r.fn0(0);                                             // e = 0
    r.fn1(0);                                             // i = 0
    while (s32(r.fn2()) < 48) {                           // expansion E
        uint64_t x = r.fn3(), y = r.fn4();
        if ((z32(x) & z32(shl(1, 32 - s32(z8(y))))) != 0) {      // bit E[i] of R
            { uint64_t a = r.fn5(), b = r.fn2(); r.fn0(a | shl(1, 47 - s32(b))); }  r.fn5();   // e |= 1 << (47 - i)
        }
        r.fn1(r.fn2() + 1);  r.fn2();                     //   ++i
    }
    { uint64_t a = r.fn5(), b = r.fn6(); r.fn0(a ^ b); }  r.fn5();   // e ^= subkey
    r.fn7(0);                                             // out = 0
    r.fn8(0);                                             // j = 0
    while (s32(r.fn9()) < 8) {                            // eight S-boxes
        { uint64_t a = r.fn5(), b = r.fn9(); r.fn10(z8(z8(shr(a, 42 - 6 * s32(b)) & 0x3f))); }   // six = (e >> (42 - 6j)) & 63
        { uint64_t a = r.fn11(), b = r.fn11(); r.fn12(z8(z8(shr(s32(z8(a)) & 0x20, 4) | (s32(z8(b)) & 1)))); }   // row = b5,b0
        { uint64_t a = r.fn11(); r.fn13(z8(z8(shr(s32(z8(a)), 1) & 0xf))); }                     // col = b4..b1
        { uint64_t a = r.fn14(), b = r.fn15(), c = r.fn9();
          r.fn7(z32(a | z32(shl(z32(z32(z8(b))), 28 - 4 * s32(c))))); }  r.fn14();               // out |= sbox << (28 - 4j)
        r.fn8(r.fn9() + 1);  r.fn9();                     //   ++j
    }
    r.fn16(0);                                            // p = 0
    r.fn17(0);                                            // k = 0
    while (s32(r.fn18()) < 32) {                          // permutation P
        uint64_t x = r.fn14(), y = r.fn19();
        if ((z32(x) & z32(shl(1, 32 - s32(z8(y))))) != 0) {      // bit P[k] of out
            { uint64_t a = r.fn20(), b = r.fn18(); r.fn16(z32(a | z32(shl(1, 31 - s32(b))))); }  r.fn20();   // p |= 1 << (31 - k)
        }
        r.fn17(r.fn18() + 1);  r.fn18();                  //   ++k
    }
    return z32(r.fn20());
}

// ---------------------------------------------------------------- des_keyschedule
// Receiver built by the native wrapper 0x1401ece80(key8, subkeys); switch 0x1403a0d40.
struct KeySchedule {
    uint64_t       key = 0;    // +0x00 the 8 key bytes as a big-endian integer
    int32_t        i = 0;      // +0x08
    const uint8_t* kb;         // +0x10 key bytes
    uint64_t       perm = 0;   // +0x18 PC-1 output, 56 bits
    int32_t        i2 = 0;     // +0x20
    uint32_t       C = 0;      // +0x28
    uint32_t       D = 0;      // +0x30
    int32_t        r = 0;      // +0x38 round
    uint64_t       cd = 0;     // +0x40 C:D, 56 bits
    uint64_t       sub = 0;    // +0x48 PC-2 output, 48 bits
    int32_t        i3 = 0;     // +0x50
    uint64_t*      subkeys;    // +0x58 sixteen round keys

    uint64_t fn0 (uint64_t v) { key = v;           return T('k', 0, v, 0); }
    uint64_t fn1 (uint64_t v) { i = (int32_t)v;    return T('k', 1, v, 0); }
    uint64_t fn2 ()           { return T('k', 2, (uint64_t)(int64_t)i); }
    uint64_t fn3 ()           { return T('k', 3, key); }
    uint64_t fn4 ()           { return T('k', 4, kb[i]); }
    uint64_t fn5 (uint64_t v) { perm = v;          return T('k', 5, v, 0); }
    uint64_t fn6 (uint64_t v) { i2 = (int32_t)v;   return T('k', 6, v, 0); }
    uint64_t fn7 ()           { return T('k', 7, (uint64_t)(int64_t)i2); }
    uint64_t fn8 ()           { return T('k', 8, PC1[i2]); }
    uint64_t fn9 ()           { return T('k', 9, perm); }
    uint64_t fn10(uint64_t v) { C = (uint32_t)v;   return T('k', 10, v, 0); }
    uint64_t fn11(uint64_t v) { D = (uint32_t)v;   return T('k', 11, v, 0); }
    uint64_t fn12(uint64_t v) { r = (int32_t)v;    return T('k', 12, v, 0); }
    uint64_t fn13()           { return T('k', 13, (uint64_t)(int64_t)r); }
    uint64_t fn14()           { return T('k', 14, C); }
    uint64_t fn15()           { return T('k', 15, SHIFTS[r]); }
    uint64_t fn16()           { return T('k', 16, SHIFTS[r]); }       // same native body as fn15
    uint64_t fn17()           { return T('k', 17, D); }
    uint64_t fn18()           { return T('k', 18, SHIFTS[r]); }       // same native body as fn15
    uint64_t fn19()           { return T('k', 19, SHIFTS[r]); }       // same native body as fn15
    uint64_t fn20(uint64_t v) { cd = v;            return T('k', 20, v, 0); }
    uint64_t fn21(uint64_t v) { sub = v;           return T('k', 21, v, 0); }
    uint64_t fn22(uint64_t v) { i3 = (int32_t)v;   return T('k', 22, v, 0); }
    uint64_t fn23()           { return T('k', 23, (uint64_t)(int64_t)i3); }
    uint64_t fn24()           { return T('k', 24, cd); }
    uint64_t fn25()           { return T('k', 25, PC2[i3]); }
    uint64_t fn26()           { return T('k', 26, sub); }
    uint64_t fn27()           { subkeys[r] = sub;  return T('k', 27, subkeys[r]); }
};

// The virtual program (650 instructions lifted).
inline void des_keyschedule_program(KeySchedule& r) {
    r.fn0(0);                                             // key = 0
    r.fn1(0);                                             // i = 0
    while (s32(r.fn2()) < 8) {                            // key = key << 8 | kb[i]
        { uint64_t a = r.fn3(), b = r.fn4(); r.fn0(shl(a, 8) | z8(b)); }  r.fn3();
        r.fn1(r.fn2() + 1);  r.fn2();                     //   ++i
    }
    r.fn5(0);                                             // perm = 0
    r.fn6(0);                                             // i2 = 0
    while (s32(r.fn7()) < 56) {                           // PC-1
        uint64_t x = r.fn3(), y = r.fn8();
        if ((x & shl(1, 64 - s32(z8(y)))) != 0) {         //   bit PC1[i2] of key
            { uint64_t a = r.fn9(), b = r.fn7(); r.fn5(a | shl(1, 55 - s32(b))); }  r.fn9();   // perm |= 1 << (55 - i2)
        }
        r.fn6(r.fn7() + 1);  r.fn7();                     //   ++i2
    }
    r.fn10(z32(z32(z32(shr(r.fn9(), 28)))));              // C = perm >> 28
    r.fn11(z32(z32(z32(r.fn9() & 0xfffffff))));           // D = perm & 0xfffffff
    r.fn12(0);                                            // r = 0
    while (s32(r.fn13()) < 16) {                          // sixteen round keys
        { uint64_t a = r.fn14(), b = r.fn15(), c = r.fn14(), d = r.fn16();                       // C = rotl28(C, SHIFTS[r])
          r.fn10(z32((z32(shl(z32(a), s32(z8(b)))) | shr(z32(c), 28 - s32(z8(d)))) & 0xfffffff)); }  r.fn14();
        { uint64_t a = r.fn17(), b = r.fn18(), c = r.fn17(), d = r.fn19();                       // D = rotl28(D, SHIFTS[r])
          r.fn11(z32((z32(shl(z32(a), s32(z8(b)))) | shr(z32(c), 28 - s32(z8(d)))) & 0xfffffff)); }  r.fn17();
        { uint64_t a = r.fn14(), b = r.fn17(); r.fn20(shl(z32(a), 28) | z32(b)); }               // cd = C << 28 | D
        r.fn21(0);                                        //   sub = 0
        r.fn22(0);                                        //   i3 = 0
        while (s32(r.fn23()) < 48) {                      //   PC-2
            uint64_t x = r.fn24(), y = r.fn25();
            if ((x & shl(1, 56 - s32(z8(y)))) != 0) {     //     bit PC2[i3] of cd
                { uint64_t a = r.fn26(), b = r.fn23(); r.fn21(a | shl(1, 47 - s32(b))); }  r.fn26();   // sub |= 1 << (47 - i3)
            }
            r.fn22(r.fn23() + 1);  r.fn23();              //     ++i3
        }
        r.fn27();                                         //   subkeys[r] = sub
        r.fn12(r.fn13() + 1);  r.fn13();                  //   ++r
    }
}

// Native wrapper 0x1401ece80.
inline void des_keyschedule(const uint8_t* key8, uint64_t* subkeys) {
    KeySchedule r;
    r.kb = key8;
    r.subkeys = subkeys;
    des_keyschedule_program(r);
}

// ---------------------------------------------------------------- des_block
// Receiver built by the native wrapper 0x14017f610(in, out, subkeys, encrypt); switch 0x14017f790.
struct Block {
    uint64_t        block = 0;   // +0x00 the 8 input bytes as a big-endian integer
    int32_t         i = 0;       // +0x08
    const uint8_t*  in;          // +0x10
    uint64_t        ip = 0;      // +0x18 after the initial permutation
    int32_t         i2 = 0;      // +0x20
    uint32_t        L = 0;       // +0x28
    uint32_t        R = 0;       // +0x30
    int32_t         r = 0;       // +0x38 round
    uint32_t        tmp = 0;     // +0x40
    const uint64_t* subkeys;     // +0x48
    bool            encrypt;     // +0x50 0 = subkeys in reverse order
    uint64_t        preout = 0;  // +0x58 R:L after the rounds
    uint64_t        fp = 0;      // +0x60 after the final permutation
    int32_t         i3 = 0;      // +0x68
    int32_t         k = 0;       // +0x70 output byte index
    uint8_t*        out;         // +0x78

    uint64_t fn0 (uint64_t v) { block = v;          return T('d', 0, v, 0); }
    uint64_t fn1 (uint64_t v) { i = (int32_t)v;     return T('d', 1, v, 0); }
    uint64_t fn2 ()           { return T('d', 2, (uint64_t)(int64_t)i); }
    uint64_t fn3 ()           { return T('d', 3, block); }
    uint64_t fn4 ()           { return T('d', 4, in[i]); }
    uint64_t fn5 (uint64_t v) { ip = v;             return T('d', 5, v, 0); }
    uint64_t fn6 (uint64_t v) { i2 = (int32_t)v;    return T('d', 6, v, 0); }
    uint64_t fn7 ()           { return T('d', 7, (uint64_t)(int64_t)i2); }
    uint64_t fn8 ()           { return T('d', 8, IP[i2]); }
    uint64_t fn9 ()           { return T('d', 9, ip); }
    uint64_t fn10(uint64_t v) { L = (uint32_t)v;    return T('d', 10, v, 0); }
    uint64_t fn11(uint64_t v) { R = (uint32_t)v;    return T('d', 11, v, 0); }
    uint64_t fn12(uint64_t v) { r = (int32_t)v;     return T('d', 12, v, 0); }
    uint64_t fn13()           { return T('d', 13, (uint64_t)(int64_t)r); }
    uint64_t fn14()           { return T('d', 14, R); }
    uint64_t fn15(uint64_t v) { tmp = (uint32_t)v;  return T('d', 15, v, 0); }
    uint64_t fn16()           { return T('d', 16, L); }
    uint64_t fn17()           {                                              // runs the des_round VM
        Round f;
        f.R = R;
        f.subkey = subkeys[encrypt ? r : 15 - r];
        return T('d', 17, (uint32_t)des_round_program(f));
    }
    uint64_t fn18()           { return T('d', 18, tmp); }
    uint64_t fn19(uint64_t v) { preout = v;         return T('d', 19, v, 0); }
    uint64_t fn20(uint64_t v) { fp = v;             return T('d', 20, v, 0); }
    uint64_t fn21(uint64_t v) { i3 = (int32_t)v;    return T('d', 21, v, 0); }
    uint64_t fn22()           { return T('d', 22, (uint64_t)(int64_t)i3); }
    uint64_t fn23()           { return T('d', 23, preout); }
    uint64_t fn24()           { return T('d', 24, FP[i3]); }
    uint64_t fn25()           { return T('d', 25, fp); }
    uint64_t fn26(uint64_t v) { k = (int32_t)v;     return T('d', 26, v, 0); }
    uint64_t fn27()           { return T('d', 27, (uint64_t)(int64_t)k); }
    uint64_t fn28()           { out[k] = (uint8_t)fp; return T('d', 28, (uint8_t)fp); }
};

// The virtual program (696 instructions lifted).
inline void des_block_program(Block& r) {
    r.fn0(0);                                             // block = 0
    r.fn1(0);                                             // i = 0
    while (s32(r.fn2()) < 8) {                            // block = block << 8 | in[i]
        { uint64_t a = r.fn3(), b = r.fn4(); r.fn0(shl(a, 8) | z8(b)); }  r.fn3();
        r.fn1(r.fn2() + 1);  r.fn2();                     //   ++i
    }
    r.fn5(0);                                             // ip = 0
    r.fn6(0);                                             // i2 = 0
    while (s32(r.fn7()) < 64) {                           // initial permutation
        uint64_t x = r.fn3(), y = r.fn8();
        if ((x & shl(1, 64 - s32(z8(y)))) != 0) {         //   bit IP[i2] of block
            { uint64_t a = r.fn9(), b = r.fn7(); r.fn5(a | shl(1, 63 - s32(b))); }  r.fn9();   // ip |= 1 << (63 - i2)
        }
        r.fn6(r.fn7() + 1);  r.fn7();                     //   ++i2
    }
    r.fn10(z32(z32(z32(shr(r.fn9(), 32)))));              // L = ip >> 32
    r.fn11(z32(z32(z32(r.fn9() & 0xffffffffffffffffull))));   // R = (uint32) ip
    r.fn12(0);                                            // r = 0
    while (s32(r.fn13()) < 16) {                          // sixteen rounds
        r.fn15(z32(z32(r.fn14())));                       //   tmp = R
        { uint64_t a = r.fn16(), b = r.fn17(); r.fn11(z32(z32(a) ^ b)); }  r.fn14();   // R = L ^ f(R, subkey)
        r.fn10(z32(z32(r.fn18())));  r.fn16();            //   L = tmp
        r.fn12(r.fn13() + 1);  r.fn13();                  //   ++r
    }
    { uint64_t a = r.fn14(), b = r.fn16(); r.fn19(shl(z32(a), 32) | z32(b)); }   // preout = R << 32 | L
    r.fn20(0);                                            // fp = 0
    r.fn21(0);                                            // i3 = 0
    while (s32(r.fn22()) < 64) {                          // final permutation
        uint64_t x = r.fn23(), y = r.fn24();
        if ((x & shl(1, 64 - s32(z8(y)))) != 0) {         //   bit FP[i3] of preout
            { uint64_t a = r.fn25(), b = r.fn22(); r.fn20(a | shl(1, 63 - s32(b))); }  r.fn25();   // fp |= 1 << (63 - i3)
        }
        r.fn21(r.fn22() + 1);  r.fn22();                  //   ++i3
    }
    r.fn26(7);                                            // k = 7
    while (s32(r.fn27()) >= 0) {                          // store big-endian, last byte first
        r.fn28();                                         //   out[k] = (uint8) fp
        r.fn20(shr(r.fn25(), 8));  r.fn25();              //   fp >>= 8
        r.fn26(r.fn27() - 1);  r.fn27();                  //   --k
    }
}

// Native wrapper 0x14017f610.
inline void des_block(const uint8_t* in, uint8_t* out, const uint64_t* subkeys, bool encrypt) {
    Block r;
    r.in = in;
    r.out = out;
    r.subkeys = subkeys;
    r.encrypt = encrypt;
    des_block_program(r);
}

// ---------------------------------------------------------------- tdes_block
// Receiver built by cipher_buffer's callback 4; switch 0x14039dd20.
struct TripleBlock {
    const uint8_t* key;                      // 24 key bytes
    uint64_t       k1[16] = {}, k2[16] = {}, k3[16] = {};
    const uint8_t* src;
    uint8_t        tmp1[8] = {}, tmp2[8] = {};
    uint8_t*       dst;

    uint64_t fn0() { des_keyschedule(key,      k1); return T('t', 0, 0); }
    uint64_t fn1() { des_keyschedule(key + 8,  k2); return T('t', 1, 0); }
    uint64_t fn2() { des_keyschedule(key + 16, k3); return T('t', 2, 0); }
    uint64_t fn3() { des_block(src,  tmp1, k3, false); return T('t', 3, 0); }   // decrypt with K3
    uint64_t fn4() { des_block(tmp1, tmp2, k2, true);  return T('t', 4, 0); }   // encrypt with K2
    uint64_t fn5() { des_block(tmp2, dst,  k1, false); return T('t', 5, 0); }   // decrypt with K1
};

// The virtual program (190 instructions lifted): no branch, six calls.
inline void tdes_block_program(TripleBlock& r) {
    r.fn0(); r.fn1(); r.fn2();          // the three key schedules are recomputed for every block
    r.fn3(); r.fn4(); r.fn5();
}

// ---------------------------------------------------------------- cipher_unpad
// Receiver built by cipher_buffer's callback 6; switch 0x14039db70.
struct Unpad {
    const std::string* data;
    std::string*       out;
    uint8_t            p = 0;

    uint64_t fn0()           { return T('u', 0, data->size() == 0); }
    uint64_t fn1()           { *out = *data; return T('u', 1, 0); }
    uint64_t fn2()           { return T('u', 2, (uint8_t)(*data)[data->size() - 1]); }
    uint64_t fn3(uint64_t v) { p = (uint8_t)v; return T('u', 3, v, 0); }
    uint64_t fn4()           { return T('u', 4, p); }
    uint64_t fn5()           { *out = *data; return T('u', 5, 0); }             // same native body as fn1
    uint64_t fn6()           {                                                  // keep size - p bytes; a p larger than size keeps all
        uint64_t size = data->size(), keep = size - p;
        if (size < keep) keep = size;
        *out = data->substr(0, keep);
        return T('u', 6, 0);
    }
};

// The virtual program (337 instructions lifted).
inline uint64_t cipher_unpad_program(Unpad& r) {
    if (r.fn0()) {                       // empty input. Never taken on Windows; reached only by a forced
        r.fn1();                         // run, whose trace ends after this call. What follows is not recorded.
        return 0;
    }
    r.fn3(z8(r.fn2()));                  // p = last byte
    if (s32(z8(r.fn4())) == 0 || s32(z8(r.fn4())) > 8)
        r.fn5();                         // p == 0 or p > 8: copy unchanged
    else
        r.fn6();                         // 1 <= p <= 8: drop p bytes, whatever their values
    return 0;
}

// ---------------------------------------------------------------- cipher_buffer
// Receiver built by the native wrapper called from main host 19; switch 0x1400c9170.
struct Buffer {
    std::string        out;              // +0x00 work buffer
    const std::string* data;             // +0x08 input
    uint8_t            keybuf[24] = {};  // +0x10
    const std::string* key;              // +0x18
    uint64_t           i = 0;            // +0x20 byte offset
    std::string*       result;           // +0x28

    uint64_t fn0()           { out.assign(data->size(), '\0'); return T('b', 0, 0); }
    uint64_t fn1()           {                                                  // at most 24 key bytes
        std::memcpy(keybuf, key->data(), key->size() < 24 ? key->size() : 24);
        return T('b', 1, (uint64_t)keybuf);
    }
    uint64_t fn2(uint64_t v) { i = v; return T('b', 2, v, 0); }
    uint64_t fn3()           { return T('b', 3, i < data->size()); }
    uint64_t fn4()           {                                                  // runs the tdes_block VM on data[i .. i+8)
        // The original always reads and writes eight bytes at data + i and out + i, even when
        // fewer than eight remain. Past the terminator it reads whatever the heap holds. Here the
        // missing input bytes are zero and the surplus output bytes are dropped, so this model
        // agrees with the binary only when the size is a multiple of eight.
        uint8_t in[8] = {}, res[8];
        uint64_t have = data->size() - i < 8 ? data->size() - i : 8;
        std::memcpy(in, data->data() + i, have);
        TripleBlock t;
        t.key = keybuf;
        t.src = in;
        t.dst = res;
        tdes_block_program(t);
        std::memcpy(&out[i], res, have);
        return T('b', 4, 0);
    }
    uint64_t fn5()           { return T('b', 5, i); }
    uint64_t fn6()           {                                                  // runs the cipher_unpad VM
        std::string trimmed;
        Unpad u;
        u.data = &out;
        u.out = &trimmed;
        cipher_unpad_program(u);
        *result = std::move(trimmed);
        return T('b', 6, 0);
    }
};

// The virtual program (316 instructions lifted).
inline uint64_t cipher_buffer_program(Buffer& r) {
    r.fn0();                             // out = size zero bytes
    r.fn1();                             // keybuf = key[0:24]
    r.fn2(0);                            // i = 0
    while (r.fn3()) {                    // i < size
        r.fn4();                         //   out[i..i+8) = D_K1(E_K2(D_K3(data[i..i+8))))
        r.fn2(r.fn5() + 8);  r.fn5();    //   i += 8
    }
    r.fn6();                             // result = unpad(out)
    return 0;
}

// One cipher pass, as main host 19 runs it. The main program calls it three times.
inline std::string cipher_pass(const std::string& data, const std::string& key) {
    std::string result;
    Buffer r;
    r.data = &data;
    r.key = &key;
    r.result = &result;
    cipher_buffer_program(r);
    return result;
}

} // namespace pafet
