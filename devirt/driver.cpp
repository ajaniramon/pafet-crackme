// Generic I/O adapter for generated code; contains no VM instruction semantics.
#include "runtime.hpp"
#include <cstdio>
#include <fstream>
#include <string>

static void bytes(FILE* f, const std::vector<uint8_t>& data) {
    std::fputc('"',f);
    for (auto b:data) std::fprintf(f,"%02x",unsigned(b));
    std::fputc('"',f);
}
static void dump(FILE* f, const pafet_devirt::State& s) {
    std::fprintf(f,"{\"step\":%zu,\"opcode_pc\":%u,\"opcode\":%u,\"pc\":%u,\"post_core_pc\":%u,\"index\":%llu,\"result\":%llu,\"halted\":%s,\"stack\":[",
        s.steps,s.opcode_pc,s.opcode,s.pc,s.post_core_pc,(unsigned long long)s.index,(unsigned long long)s.result,s.halted?"true":"false");
    for (size_t i=0;i<s.stack.size();++i) std::fprintf(f,"%s%llu",i?",":"",(unsigned long long)s.stack[i]);
    std::fprintf(f,"],\"registers\":[");
    for (size_t i=0;i<s.registers.size();++i) std::fprintf(f,"%s%llu",i?",":"",(unsigned long long)s.registers[i]);
    std::fprintf(f,"],\"working\":"); bytes(f,s.working);
    std::fprintf(f,",\"output\":"); bytes(f,s.output);
    std::fprintf(f,"}\n");
}
int main(int argc, char** argv) {
    try {
        if(argc<2) throw std::runtime_error("usage: generated USER_HEX [INITIAL_REGISTERS_BIN|-] [TRACE_JSONL]");
        pafet_devirt::State s;
        const bool region=argc==4 && std::string(argv[1])=="--host4";
        std::string hex=argv[region?3:1];
        if(hex.size()%2) throw std::runtime_error("odd hex length");
        for(size_t i=0;i<hex.size();i+=2) {
            auto token=hex.substr(i,2);size_t end=0; auto n=std::stoul(token,&end,16);
            if(end!=2) throw std::runtime_error("bad hex");
            s.source.push_back(uint8_t(n));
        }
        if(region) {
            s.working=s.source; s.index=std::stoull(argv[2]);
            s.result=pafet_devirt::host_4(s); dump(stdout,s); return 0;
        }
        if(argc>2 && std::string(argv[2])!="-") {
            std::ifstream f(argv[2],std::ios::binary);
            f.read(reinterpret_cast<char*>(s.registers.data()),sizeof(s.registers));
            if(f.gcount()!=sizeof(s.registers)) throw std::runtime_error("short initial registers");
        }
        FILE* trace=argc>3?std::fopen(argv[3],"w"):nullptr;
        if(argc>3 && !trace) throw std::runtime_error("trace open failed");
        pafet_devirt::execute_generated(s,[&](const auto& state){if(trace)dump(trace,state);});
        if(trace) std::fclose(trace);
        dump(stdout,s); return 0;
    } catch(const std::exception& e) { std::fprintf(stderr,"%s\n",e.what()); return 1; }
}
