// Test driver for cipher.cpp.
//   cipher_test <key hex> <data hex> <passes> [--chunk N] [--dump FIRST LAST]
// Runs cipher_pass `passes` times, feeding each result to the next.
// Prints:  out <hex>            result after the last pass
//          len <n> ...          length after each pass
//          count <n>            callback records
//          cp <i> <hash>        running FNV-1a hash after every N records and at the end
//          ev <i> <text>        with --dump, the records FIRST..LAST-1
// A record is "<switch><case>:<arg|->:<ret|P>;" in hex; P marks the one pointer-valued return (b1).
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "cipher.cpp"

static std::string unhex(const std::string& h) {
    std::string out;
    for (size_t i = 0; i + 1 < h.size(); i += 2) out.push_back((char)std::stoi(h.substr(i, 2), nullptr, 16));
    return out;
}

static std::string text(const pafet::Event& e) {
    char buf[96];
    char arg[24] = "-", ret[24] = "P";
    if (e.has_arg) std::snprintf(arg, sizeof arg, "%llx", (unsigned long long)e.arg);
    if (!(e.vm == 'b' && e.fn == 1)) std::snprintf(ret, sizeof ret, "%llx", (unsigned long long)e.ret);
    std::snprintf(buf, sizeof buf, "%c%d:%s:%s;", e.vm, e.fn, arg, ret);
    return buf;
}

int main(int argc, char** argv) {
    if (argc < 4) { std::fprintf(stderr, "usage: cipher_test <key hex> <data hex> <passes> [--chunk N] [--dump A B]\n"); return 2; }
    std::string key = unhex(argv[1]), data = unhex(argv[2]);
    int passes = std::atoi(argv[3]);
    size_t chunk = 100000, d0 = 0, d1 = 0;
    for (int i = 4; i < argc; ++i) {
        if (!std::strcmp(argv[i], "--chunk") && i + 1 < argc) chunk = std::strtoull(argv[++i], nullptr, 10);
        if (!std::strcmp(argv[i], "--dump") && i + 2 < argc) { d0 = std::strtoull(argv[i + 1], nullptr, 10); d1 = std::strtoull(argv[i + 2], nullptr, 10); i += 2; }
    }
    std::vector<pafet::Event> events;
    pafet::g_trace = &events;
    std::printf("len");
    for (int p = 0; p < passes; ++p) { data = pafet::cipher_pass(data, key); std::printf(" %zu", data.size()); }
    std::printf("\nout ");
    for (unsigned char c : data) std::printf("%02x", c);
    std::printf("\ncount %zu\n", events.size());
    uint32_t h = 0x811c9dc5u;
    for (size_t i = 0; i < events.size(); ++i) {
        std::string t = text(events[i]);
        for (unsigned char c : t) { h ^= c; h *= 0x01000193u; }
        if (i >= d0 && i < d1) std::printf("ev %zu %s\n", i, t.c_str());
        if ((i + 1) % chunk == 0 || i + 1 == events.size()) std::printf("cp %zu %08x\n", i + 1, h);
    }
    return 0;
}
