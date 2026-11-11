// pafet.cpp — readable reconstruction of the whole PAFET program at the callback level.
//
// JACK XXXVII. This file adds the four remaining VMs and ties all twenty together:
//
//   main          executor 0x14038d9d0   callbacks: switch 0x140396990 (24 cases)
//   user          executor 0x14003f540   callbacks: switch 0x140048960 (7 cases)
//   hex           executor 0x1400804c0   callbacks: switch 0x140088a00 (6 cases)
//   serial_outer  executor 0x140264a60   callbacks: adapter 0x14039d740 (3 commands)
//
// and includes
//   ../sha_cpp_evidence/sha.cpp          nine VMs: the username digest
//   ../cipher_cpp_evidence/cipher.cpp    six VMs: one cipher pass
//   ../serial_cpp_evidence/serial.cpp    the inner Serial-VM (JACK XXXVI, unchanged)
//
// As in those files, the fnN members are the cases of the native callback switches and
// the *_program functions follow the lifted virtual programs
// (jack_xxxvii_evidence/lifted/NAME.skeleton.txt). The VMs' encoded state, opaque
// branches, junk register traffic and native runtime are omitted: this is what the
// programs ask the host to do, not how the VMs execute.
//
// Two tails of the main program were not recorded by the dynamic lift (the forced
// traces end early) and are taken from the static decode in
// controller_evidence/decoded_main_program.json: `return 1` after the invalid-username
// message, and `return 0` after the flag is printed.
//
// Validation (scripts/pafet_cpp_validate_xxxvii.py): standard output and the sequence
// of callback records equal those of pafet.bin, and of pafet_pass8.exe when the model
// is run with the same two-byte gate bypass.
//
// This file does not contain or recover the credentials or the flag.

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

#include "vm_common.h"
#include "../sha_cpp_evidence/sha.cpp"
#include "../cipher_cpp_evidence/cipher.cpp"

// serial.cpp declares its own pafet::Receiver, z8 and s32; keep it in a namespace of its own.
namespace jack_xxxvi {
#include "../serial_cpp_evidence/serial.cpp"
}

namespace pafet {

using namespace vm;

// The thirteen strings of the native decoder 0x140380840, by slot
// (semantic_evidence/semantic_tests.json). Slot 7, the Serial key, is empty.
inline const char* const STR[13] = {
    "9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420",
    "==================================\n",
    "   VSEC  - Pafet Challenge\n",
    "==================================\n\n",
    "Username: ",
    "Serial  : ",
    "\n[!] Invalid username\n",
    "",
    "CMO{",
    "\n[+] Correct!\n",
    "[+] Flag: ",
    "\n",
    "\n[!] Wrong credentials\n"};

// The 144 hex characters at RVA 0x3dbbc0.
inline const char* const CIPHERTEXT_HEX =
    "6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3"
    "455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09"
    "abb0a67da54ba93b";

// ---------------------------------------------------------------- user
// Receiver built by main callback 10; switch 0x140048960.
struct User {
    std::string        working;     // +0x00
    const std::string* source;      // +0x08 the username
    uint64_t           index = 0;   // +0x10
    std::string*       output;      // +0x18

    uint64_t fn0()           { working = *source; return T('U', 0, 0); }
    uint64_t fn1()           { std::reverse(working.begin(), working.end()); return T('U', 1, 0); }
    uint64_t fn2(uint64_t v) { index = v; return T('U', 2, v, 0); }
    uint64_t fn3()           { return T('U', 3, index < working.size()); }
    uint64_t fn4()           {                                   // 0x140048a05: xor 0x5a, add 7, add 3*index
        uint8_t b = (uint8_t)working[index];
        b ^= 0x5a;
        b = (uint8_t)(b + 7);
        b = (uint8_t)(b + (uint8_t)((uint8_t)(2 * (uint8_t)index) + index));
        working[index] = (char)b;
        return T('U', 4, (uint64_t)(int64_t)(int8_t)b);
    }
    uint64_t fn5()           { return T('U', 5, index); }
    uint64_t fn6()           { *output = working; return T('U', 6, 0); }
};

// The virtual program (339 instructions; identical to the static decode of JACK XVII/XXIII).
inline uint64_t user_program(User& r) {
    r.fn0();                             // working = username
    r.fn1();                             // reverse it
    r.fn2(0);                            // index = 0
    while (r.fn3()) {                    // index < size
        r.fn4();                         //   working[index] = ((b ^ 0x5a) + 7 + 3*index) & 255
        r.fn2(r.fn5() + 1);  r.fn5();    //   ++index
    }
    r.fn6();                             // output = working
    return 0;
}

inline std::string user_transform(const std::string& username) {
    std::string out;
    User r;
    r.source = &username;
    r.output = &out;
    user_program(r);
    return out;
}

// ---------------------------------------------------------------- serial_outer
// Receiver built by main callback 11; commands of the adapter 0x14039d740.
struct SerialOuter {
    std::string        work;        // +0x08
    const std::string* input;       // +0x10 the serial
    std::string*       key;         // +0x18 decoder slot 7
    std::string*       output;      // +0x20

    uint64_t fn0() { work = *input; return T('S', 0, 0); }
    uint64_t fn1() { jack_xxxvi::pafet::run_serial(work, *key); return T('S', 1, 0); }   // runs the inner Serial-VM
    uint64_t fn2() { *output = work; return T('S', 2, 0); }
};

// The virtual program (189 instructions): no branch, three calls.
inline uint64_t serial_outer_program(SerialOuter& r) {
    r.fn0(); r.fn1(); r.fn2();
    return 0;
}

inline std::string serial_transform(const std::string& serial, std::string key) {
    std::string out;
    SerialOuter r;
    r.input = &serial;
    r.key = &key;
    r.output = &out;
    serial_outer_program(r);
    return out;
}

// ---------------------------------------------------------------- hex
// Receiver built by main callback 16; switch 0x140088a00.
struct Hex {
    uint64_t           pos = 0;     // +0x00
    const std::string* src;         // +0x08
    unsigned           value = 0;   // +0x10
    std::string        out;         // +0x18
    std::string*       result;      // +0x20

    uint64_t fn0(uint64_t v) { pos = v; return T('H', 0, v, 0); }
    uint64_t fn1()           { return T('H', 1, pos < src->size()); }
    uint64_t fn2()           {                                   // at most two characters through a hex stream
        std::istringstream in(src->substr(pos, 2));
        in >> std::hex >> value;
        return T('H', 2, 0);
    }
    uint64_t fn3()           { out.push_back((char)(uint8_t)value); return T('H', 3, 0); }
    uint64_t fn4()           { return T('H', 4, pos); }
    uint64_t fn5()           { *result = out; return T('H', 5, 0); }
};

// The virtual program (357 instructions lifted).
inline uint64_t hex_program(Hex& r) {
    r.fn0(0);                            // pos = 0
    while (r.fn1()) {                    // pos < size
        r.fn2();                         //   value = hex(src[pos .. pos+2))
        r.fn3();                         //   out += low byte of value
        r.fn0(r.fn4() + 2);  r.fn4();    //   pos += 2
    }
    r.fn5();                             // result = out
    return 0;
}

inline std::string hex_decode(const std::string& text) {
    std::string out;
    Hex r;
    r.src = &text;
    r.result = &out;
    hex_program(r);
    return out;
}

// ---------------------------------------------------------------- main
// Receiver built by native main 0x1403967a0; switch 0x140396990.
struct Main {
    std::istream& in;
    std::ostream& out;
    bool          gate_bypass;      // models pafet_pass8.exe, see fn8

    std::string target;             // +0x00 digest the username must have
    std::string username;           // +0x08
    std::string serial;             // +0x10
    std::string fuser;              // +0x18
    std::string gserial;            // +0x20
    std::string concat;             // +0x28
    std::string key;                // +0x30
    std::string data;               // +0x38 ciphertext, then each pass's output
    int32_t     counter = 0;        // +0x40

    Main(std::istream& i, std::ostream& o, bool bypass) : in(i), out(o), gate_bypass(bypass) {}

    uint64_t say(int fn, int slot) { out << STR[slot]; return T('M', fn, 0); }

    uint64_t fn0 ()           { target = STR[0]; return T('M', 0, 0); }
    uint64_t fn1 ()           { return say(1, 1); }
    uint64_t fn2 ()           { return say(2, 2); }
    uint64_t fn3 ()           { return say(3, 3); }
    uint64_t fn4 ()           { return say(4, 4); }
    uint64_t fn5 ()           { std::getline(in, username); return T('M', 5, 0); }
    uint64_t fn6 ()           { return say(6, 5); }
    uint64_t fn7 ()           { std::getline(in, serial); return T('M', 7, 0); }
    uint64_t fn8 ()           {                                   // 0 when the digest equals the target
        std::string digest = sha256_hex(username);
        bool same = digest.size() == target.size();
        // pafet_pass8.exe replaces the `jne` after the memcmp (RVA 0x396afb) with two NOPs,
        // so only the size comparison remains.
        if (same && !gate_bypass) same = std::memcmp(digest.data(), target.data(), digest.size()) == 0;
        return T('M', 8, same ? 0 : 1);
    }
    uint64_t fn9 ()           { return say(9, 6); }
    uint64_t fn10()           { fuser = user_transform(username); return T('M', 10, 0); }
    uint64_t fn11()           { gserial = serial_transform(serial, STR[7]); return T('M', 11, 0); }
    uint64_t fn12()           { concat = fuser + gserial; return T('M', 12, 0); }
    uint64_t fn13()           { key = concat.substr(0, concat.size() < 24 ? concat.size() : 24); return T('M', 13, 0); }
    uint64_t fn14()           { return T('M', 14, key.size() < 24); }
    uint64_t fn15()           { key.append(24 - key.size(), '\0'); return T('M', 15, 0); }
    uint64_t fn16()           { data = hex_decode(CIPHERTEXT_HEX); return T('M', 16, 0); }
    uint64_t fn17(uint64_t v) { counter = (int32_t)v; return T('M', 17, v, 0); }
    uint64_t fn18()           { return T('M', 18, (uint64_t)(int64_t)counter); }
    uint64_t fn19()           { data = cipher_pass(data, key); return T('M', 19, 0); }
    uint64_t fn20()           {                                   // more than four bytes, starts with slot 8, ends with '}'
        bool ok = data.size() > 4 && std::memcmp(data.data(), STR[8], 4) == 0 && data[data.size() - 1] == '}';
        return T('M', 20, ok);
    }
    uint64_t fn21()           { return say(21, 9); }
    uint64_t fn22()           {
        out << STR[10];
        out.write(data.data(), (std::streamsize)data.size());
        out << STR[11];
        return T('M', 22, 0);
    }
    uint64_t fn23()           { return say(23, 12); }
};

// The virtual program (482 instructions in the static decode; 431 reachable).
inline uint64_t main_program(Main& r) {
    r.fn0();                             // target digest
    r.fn1(); r.fn2(); r.fn3();           // banner
    r.fn4();  r.fn5();                   // "Username: ", read it
    r.fn6();  r.fn7();                   // "Serial  : ", read it
    if (r.fn8()) {                       // digest differs
        r.fn9();                         //   "[!] Invalid username"
        return 1;                        //   (tail from the static decode)
    }
    r.fn10();                            // fuser = user VM(username)
    r.fn11();                            // gserial = serial VM(serial)
    r.fn12();                            // concat = fuser + gserial
    r.fn13();                            // key = first 24 bytes
    if (r.fn14()) r.fn15();              // shorter than 24: pad with zero bytes
    r.fn16();                            // data = hex VM(embedded text)
    r.fn17(0);                           // counter = 0
    while (s32(r.fn18()) < 3) {          // three cipher passes
        r.fn19();                        //   data = cipher pass(data, key)
        r.fn17(r.fn18() + 1);  r.fn18(); //   ++counter
    }
    if (r.fn20()) {                      // CMO{ ... }
        r.fn21();                        //   "[+] Correct!"
        r.fn22();                        //   "[+] Flag: " data
        return 0;                        //   (tail from the static decode)
    }
    r.fn23();                            // "[!] Wrong credentials"
    return 1;
}

// What native main 0x1403967a0 does around the VM: build the receiver, run it, return its value.
inline int pafet_main(std::istream& in, std::ostream& out, bool gate_bypass = false) {
    Main r(in, out, gate_bypass);
    return (int)main_program(r);
}

} // namespace pafet
