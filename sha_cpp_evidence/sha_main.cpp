// Test driver for sha.cpp.
//   sha_test <input as hex> [--trace]
// Prints the digest, then with --trace one line per callback: "<m|c> <case> <arg|-> <ret>" in hex.
#include <cstdio>
#include <cstring>
#include "sha.cpp"

int main(int argc, char** argv) {
    if (argc < 2) { std::fprintf(stderr, "usage: sha_test <hex> [--trace]\n"); return 2; }
    std::string hex = argv[1], input;
    if (hex == "-") hex.clear();                       // "-" is the empty input
    for (size_t i = 0; i + 1 < hex.size(); i += 2) input.push_back((char)std::stoi(hex.substr(i, 2), nullptr, 16));
    std::vector<pafet::Event> events;
    if (argc > 2 && !std::strcmp(argv[2], "--trace")) pafet::g_trace = &events;
    std::string digest = pafet::sha256_hex(input);
    std::printf("%s\n", digest.c_str());
    for (const auto& e : events) {
        if (e.has_arg) std::printf("%c %d %llx %llx\n", e.vm, e.fn, (unsigned long long)e.arg, (unsigned long long)e.ret);
        else           std::printf("%c %d - %llx\n", e.vm, e.fn, (unsigned long long)e.ret);
    }
    return 0;
}
