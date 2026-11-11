// vm_common.h — shared by the readable reconstructions of PAFET's VMs (JACK XXXVII).
//
// Trace records are for validation only: each native callback case logs
// (switch letter, case, argument if any, return value) so that the sequence can be
// compared with the one observed in the binary under Frida.
#ifndef PAFET_VM_COMMON_H
#define PAFET_VM_COMMON_H

#include <cstdint>
#include <vector>

namespace pafet {

struct Event { char vm; int fn; bool has_arg; uint64_t arg; uint64_t ret; };
inline std::vector<Event>* g_trace = nullptr;
inline uint64_t T(char vm, int fn, uint64_t ret) { if (g_trace) g_trace->push_back({vm, fn, false, 0, ret}); return ret; }
inline uint64_t T(char vm, int fn, uint64_t arg, uint64_t ret) { if (g_trace) g_trace->push_back({vm, fn, true, arg, ret}); return ret; }

// Width helpers used by the virtual programs (opcodes 0x3a sign-extend, 0x3b zero-extend).
// They live in pafet::vm because serial_cpp_evidence/serial.cpp defines its own z8 and s32.
namespace vm {
inline int64_t  s32(uint64_t v) { return (int64_t)(int32_t)(uint32_t)v; }
inline uint64_t z32(uint64_t v) { return (uint32_t)v; }
inline uint64_t z8 (uint64_t v) { return (uint8_t)v; }
// The VM's shifts take the count modulo 64.
inline uint64_t shl(uint64_t x, uint64_t n) { return x << (n & 63); }
inline uint64_t shr(uint64_t x, uint64_t n) { return x >> (n & 63); }
}  // namespace vm

}  // namespace pafet

#endif
