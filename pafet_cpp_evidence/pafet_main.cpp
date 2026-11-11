// Test driver for pafet.cpp. Reads the username and the serial from standard input and
// writes to standard output, like the original.
//   pafet_test [--bypass-gate] [--trace FILE] [--chunk N] [--dump FIRST LAST]
// --bypass-gate models pafet_pass8.exe. With --trace, FILE receives:
//   count <n>          callback records
//   cp <i> <hash>      running FNV-1a hash after every N records and at the end
//   ev <i> <text>      with --dump, the records FIRST..LAST-1
// A record is "<switch><case>:<arg|->:<ret|P>;" in hex. P marks pointer-valued fields:
// sha_msg case 2 return, case 3 argument, case 20 return, and cipher_buffer case 1 return.
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include "pafet.cpp"

static std::string hex64(uint64_t v) {
    char buf[24];
    std::snprintf(buf, sizeof buf, "%llx", (unsigned long long)v);
    return buf;
}

static std::string text(const pafet::Event& e) {
    bool ptr_arg = e.vm == 'm' && e.fn == 3;
    bool ptr_ret = (e.vm == 'm' && (e.fn == 2 || e.fn == 20)) || (e.vm == 'b' && e.fn == 1);
    std::string t(1, e.vm);
    t += std::to_string(e.fn) + ":";
    t += !e.has_arg ? "-" : ptr_arg ? "P" : hex64(e.arg);
    t += ":";
    t += ptr_ret ? "P" : hex64(e.ret);
    t += ";";
    return t;
}

int main(int argc, char** argv) {
    bool bypass = false;
    const char* trace = nullptr;
    size_t chunk = 50000, d0 = 0, d1 = 0;
    for (int i = 1; i < argc; ++i) {
        if (!std::strcmp(argv[i], "--bypass-gate")) bypass = true;
        else if (!std::strcmp(argv[i], "--trace") && i + 1 < argc) trace = argv[++i];
        else if (!std::strcmp(argv[i], "--chunk") && i + 1 < argc) chunk = std::strtoull(argv[++i], nullptr, 10);
        else if (!std::strcmp(argv[i], "--dump") && i + 2 < argc) { d0 = std::strtoull(argv[i + 1], nullptr, 10); d1 = std::strtoull(argv[i + 2], nullptr, 10); i += 2; }
    }
    std::vector<pafet::Event> events;
    if (trace) pafet::g_trace = &events;
    int rc = pafet::pafet_main(std::cin, std::cout, bypass);
    std::cout.flush();
    if (trace) {
        std::ofstream f(trace);
        if (!f) return 3;
        f << "count " << events.size() << "\n";
        uint32_t h = 0x811c9dc5u;
        for (size_t i = 0; i < events.size(); ++i) {
            std::string t = text(events[i]);
            for (unsigned char c : t) { h ^= c; h *= 0x01000193u; }
            if (i >= d0 && i < d1) f << "ev " << i << " " << t << "\n";
            if ((i + 1) % chunk == 0 || i + 1 == events.size()) {
                char hex[16];
                std::snprintf(hex, sizeof hex, "%08x", h);
                f << "cp " << (i + 1) << " " << hex << "\n";
            }
        }
    }
    return rc;
}
