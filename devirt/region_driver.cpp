#include "runtime.hpp"
#include <cstdio>
#include <string>
int main(int argc,char** argv) {
    try {
        if(argc!=2) throw std::runtime_error("usage: blob_seed INPUT_HEX (nonempty)");
        std::string hex=argv[1]; pafet_devirt::State s;
        if(hex.empty() || hex.size()%2) throw std::runtime_error("nonempty even hex required");
        for(size_t i=0;i<hex.size();i+=2) {
            size_t end=0;auto v=std::stoul(hex.substr(i,2),&end,16);
            if(end!=2) throw std::runtime_error("bad hex");
            s.source.push_back(uint8_t(v));
        }
        pafet_devirt::execute_generated(s,[](const auto& v) {
            if(v.opcode_pc==1) std::printf("T %llx %llu %llu %llu\n",(unsigned long long)v.registers[0],
                (unsigned long long)v.registers[1],(unsigned long long)(v.registers[2]-v.registers[1]),(unsigned long long)v.registers[1]);
        },200000);
        std::printf("R %llx %llu\n",(unsigned long long)s.result,(unsigned long long)s.registers[1]);
        return 0;
    } catch(const std::exception& e) {std::fprintf(stderr,"%s\n",e.what());return 1;}
}
