#include "pafet_native_writer_xxiii.h"
#include "pafet_h3a50_native.h"
#include <cstring>

namespace pafet_xxiii {
static uint64_t q(const uint8_t* p, size_t n) {
    uint64_t x; std::memcpy(&x,p+n,8); return x;
}
static void putq(uint8_t* p, size_t n, uint64_t x) {
    std::memcpy(p+n,&x,8);
}
static uint64_t mix(uint64_t x) {
    x=(x^(x>>33))*UINT64_C(0xff51afd7ed558ccd);
    x=(x^(x>>33))*UINT64_C(0xc4ceb9fe1a85ec53);
    return x^(x>>33);
}
WriterResult host4(uint8_t* object, uint8_t* heap, uint64_t object_address,
                   uint64_t index) {
    // 48a05..48a26: select MSVC SSO union or heap, then load one byte.
    bool heap_mode=q(object,24)>=16;
    uint8_t* bytes=heap_mode?heap:object;
    uint64_t r9=heap_mode?q(object,0):object_address;
    uint64_t r8=index;
    uint32_t edx=bytes[r8];                     // movzx edx,[r8+r9]
    uint32_t eax=uint8_t(r8);                   // 48a28 movzx eax,r8b
    uint8_t dl=uint8_t(edx)^uint8_t(0x5a);      // 48a2c xor dl,0x5a
    uint8_t al=uint8_t(uint8_t(eax)+uint8_t(eax)); // 48a2f add al,al
    eax=(eax&UINT32_C(0xffffff00))|al;
    dl=uint8_t(dl+uint8_t(7));                  // 48a31 add dl,7
    uint32_t ecx=uint32_t(uint64_t(eax)+r8);    // 48a34 lea ecx,[rax+r8]
    dl=uint8_t(dl+uint8_t(ecx));                // 48a38 add dl,cl
    bytes[r8]=dl;                              // 48a3a actual output store
    uint64_t rax=uint64_t(int64_t(int8_t(dl))); // 48a3e movsx rax,dl
    return {rax,ecx,dl,r8,r9,r9+r8,r9+r8};
}
uint64_t drop_3bea0_core(uint8_t* ctx, uint8_t* encoded_stack) {
    // 3bead..3bf2d writes three dead register-derived values to the native
    // stack. They have no context/heap effect and are outside this core API.
    // 3bf32..3bf8e: update this handler's obfuscation accumulator.
    uint64_t old=q(ctx,0x108);
    putq(ctx,0x108,(old>>3)^mix(old-UINT64_C(0x697be4c6a079954e)));
    // 3bf95: pop and re-encode the native virtual stack. Its decoded return
    // value is discarded by this DROP handler; it is not an output byte.
    pafet::handler_h3a50(ctx,encoded_stack);
    return q(ctx,0x108);                        // 3bf9a, then mode/guard JNS
}
uint64_t drop_14a00_core(uint8_t* ctx, uint8_t* encoded_stack) {
    // 14a88..14ae4: this clone's accumulator differs from 3bea0.
    uint64_t old=q(ctx,0x100);
    putq(ctx,0x100,old+(mix(old>>13)^UINT64_C(0x706e8465dde5e6f3)));
    pafet::handler_h3a50(ctx,encoded_stack);     // 14aee, same verified POP
    return q(ctx,0x100);                        // 14af3, before JNS 14afd
}
} // namespace pafet_xxiii

extern "C" void pafet_host4_xxiii(uint8_t* o,uint8_t* h,uint64_t a,uint64_t i,
                                  pafet_xxiii::WriterResult* r) {
    *r=pafet_xxiii::host4(o,h,a,i);
}
extern "C" uint64_t pafet_drop_core_xxiii(uint8_t* c,uint8_t* s) {
    return pafet_xxiii::drop_3bea0_core(c,s);
}
extern "C" uint64_t pafet_drop14_core_xxiii(uint8_t* c,uint8_t* s) {
    return pafet_xxiii::drop_14a00_core(c,s);
}
