#include "pafet_canonical_interp_vii.h"
#include <cstdio>
#include <cstring>
#include <fstream>
#include <stdexcept>

int main(int argc,char** argv){
    try{
        if(argc>=4 && !std::strcmp(argv[1],"--dump-bytecode")){
            auto p=pafet_xxiii::load_original_pe(argv[2]);
            std::array<uint8_t,1752> shadow{};
            if(argc>6 && std::string(argv[6])=="nonzero")
                for(size_t i=0;i<shadow.size();++i)shadow[i]=uint8_t(i*37+11);
            uint32_t period=argc>4?uint32_t(std::stoul(argv[4])):0;
            uint32_t current=argc>5?uint32_t(std::stoul(argv[5])):0;
            auto bytes=pafet_xxiii::materialize_all(p,shadow,period,current);
            std::ofstream f(argv[3],std::ios::binary);f.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());
            if(!f)throw std::runtime_error("bytecode dump failed");
            return 0;
        }
        if(argc<3){std::fprintf(stderr,"usage: original_vm PE USER_HEX [TRACE_JSONL] [INITIAL_REGISTERS_BIN]\n");return 2;}
        std::string hex=argv[2];if(hex.size()%2)throw std::runtime_error("odd hex length");
        std::vector<uint8_t> user;
        for(size_t i=0;i<hex.size();i+=2){size_t end=0;auto value=std::stoul(hex.substr(i,2),&end,16);if(end!=2)throw std::runtime_error("bad hex");user.push_back(uint8_t(value));}
        std::array<uint64_t,256> initial{};
        if(argc>4){std::ifstream f(argv[4],std::ios::binary);f.read(reinterpret_cast<char*>(initial.data()),sizeof(initial));if(f.gcount()!=sizeof(initial))throw std::runtime_error("short initial registers");}
        FILE* trace=argc>3?std::fopen(argv[3],"w"):nullptr;
        if(argc>3&&!trace)throw std::runtime_error("trace open failed");
        size_t steps=0;
        auto state=pafet_vii::run_original_pe_xxiii(argv[1],user,steps,
          [&](size_t step,const pafet_xxiii::Instruction& ir,const pafet_xxiii::LogicalState& s){
            if(!trace)return;
            std::fprintf(trace,"{\"step\":%zu,\"opcode_pc\":%u,\"opcode\":%u,\"post_core_pc\":%u,\"next_opcode_pc\":%u,\"stack\":[",step,ir.opcode_pc,unsigned(ir.opcode),s.post_core_pc,s.next_opcode_pc);
            for(size_t i=0;i<s.stack.size();++i)std::fprintf(trace,"%s%llu",i?",":"",(unsigned long long)s.stack[i]);
            std::fprintf(trace,"],\"registers\":[");
            for(size_t i=0;i<s.registers.size();++i)std::fprintf(trace,"%s%llu",i?",":"",(unsigned long long)s.registers[i]);
            std::fprintf(trace,"]}\n");
          },initial);
        if(trace)std::fclose(trace);
        std::printf("OUTPUT ");for(auto b:state.output)std::printf("%02x",unsigned(b));std::printf("\nSTEPS %zu\n",steps);
        return 0;
    }catch(const std::exception& e){std::fprintf(stderr,"%s\n",e.what());return 1;}
}
