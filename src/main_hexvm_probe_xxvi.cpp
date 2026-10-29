#include "pafet_hexvm_core_xxvi.h"
#include <iostream>
using namespace pafet::hexvm;
// Streaming protocol for the independent Unicorn comparator (hex integers).
int main() {
    unsigned op;
    while (std::cin >> std::hex >> op) {
        State s;
        if (op == 0) {
            unsigned h;
            std::cin >> h >> s.k >> s.a >> s.b;
            execute_handler(s,h);
            std::cout << std::hex << s.k << ' ' << s.a << ' ' << s.b << '\n';
        } else if (op == 1) {
            unsigned flag, rotation;
            std::cin >> s.k >> s.a >> s.b >> s.lcg >> s.steps >> s.mult
                     >> s.mask1 >> s.mask2 >> flag >> rotation >> s.length;
            s.additive = flag; initialize_handlers(s, rotation);
            for (unsigned i=0; i<s.length; ++i) std::cin >> s.pending.at(i);
            drain(s);
            std::cout << std::hex << s.k << ' ' << s.a << ' ' << s.b << ' '
                      << s.lcg << ' ' << s.steps << ' ' << s.vpc << ' '
                      << unsigned(s.tag) << ' ' << s.length << '\n';
        } else if (op == 2) {
            Slots slots;
            unsigned index, flag, old_tag;
            uint64_t encoded;
            std::cin >> index >> s.lcg >> s.steps >> slots.bank_parity
                     >> slots.index_multiplier >> slots.tag_multiplier >> slots.mask
                     >> flag >> old_tag >> encoded;
            slots.additive = flag;
            slots.tags.at(index) = static_cast<uint8_t>(old_tag);
            unsigned cell = (((slots.bank_parity + index) & 1) << 8) + index;
            slots.values.at(cell) = encoded;
            auto value = read_slot(s, slots, static_cast<uint8_t>(index));
            std::cout << std::hex << value << ' ' << s.lcg << ' ' << s.steps << ' '
                      << unsigned(slots.tags[index]) << ' ' << slots.values[cell] << '\n';
        } else if (op == 3) {
            std::cin >> s.a;
            auto next = execute_verified_block(s, 0x2d409a);
            std::cout << std::hex << s.a << ' ' << next << '\n';
        } else if (op == 4) {
            uint32_t index, opcode, counter;
            std::cin >> s.a >> s.b >> index >> opcode >> counter;
            auto next = commit_decoded_instruction(s, index, static_cast<uint8_t>(opcode), static_cast<int32_t>(counter));
            std::cout << std::hex << s.a << ' ' << s.b << ' ' << next << '\n';
        } else return 2;
        if (!std::cin) return 3;
    }
}
