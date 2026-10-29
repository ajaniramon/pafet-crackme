// Original-bytecode extraction and logical ISA execution. No functional writer
// header, captured IR, recorded output, SHA/RC4/DES primitive or f_user call.
// Native encoded state and runtime guards are outside LogicalState's contract.
#include "pafet_original_vm_xxiii.h"
#include "pafet_native_writer_xxiii.h"
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iterator>
#include <stdexcept>

namespace pafet_xxiii {
static constexpr uint64_t PHI=UINT64_C(0x9e3779b97f4a7c15),
    SPLIT=UINT64_C(0x2545f4914f6cdd1d),MUL=UINT64_C(0xd6e8feb86659fd93),
    M1=UINT64_C(0xff51afd7ed558ccd),M2=UINT64_C(0xc4ceb9fe1a85ec53);
static uint64_t mid(uint64_t x){x=(x^(x>>33))*M1;return (x^(x>>33))*M2;}
static uint64_t mix(uint64_t x){x=mid(x);return x^(x>>33);}
static uint8_t permute(uint8_t x){
    static constexpr uint64_t seeds[]={UINT64_C(0x5cd8585a9977c0d4),UINT64_C(0xfe81d29118a944eb),
        UINT64_C(0x18494ccf9be2c8fe),UINT64_C(0xba32c7061b144c95)};
    uint8_t l=x>>4,r=x&15;
    for(uint64_t seed:seeds){uint64_t a=mid(uint64_t(r)*MUL^seed);uint8_t n=uint8_t((l^(a>>17)^(a>>50))&15);l=r;r=n;}
    return uint8_t((l<<4)|r);
}
static uint32_t position(uint32_t block){
    if(block>=73)throw std::runtime_error("invalid materialization block");
    if(!block)return 0;
    uint8_t v=uint8_t(block-1);
    for(int i=0;i<64;++i){v=permute(v);if(v<72)return (uint32_t(v)+1)*24;}
    return block*24; // Original bounded cycle-walk fallback.
}
std::array<uint8_t,1752> materialize_all(const Program& p,
    const std::array<uint8_t,1752>& shadow,uint32_t period,uint32_t current){
    auto output=p.blob;
    for(uint32_t block=0;block<73;++block){
        uint32_t lo=position(block),hi=lo+24;uint64_t r12=uint64_t(block)*MUL;
        for(uint64_t turn=0;turn<3;++turn){
            uint64_t a=mid(uint64_t(lo)*PHI^r12^UINT64_C(0xdc5ea5a85eb4aabd));
            for(uint32_t pos=lo;pos<hi;++pos){
                uint64_t b=uint64_t(pos)*PHI^(a>>33)^uint32_t(a)^(turn*SPLIT)^r12^UINT64_C(0xdc5ea5a84cb9a2c4);
                uint64_t c=mid(b);output[pos]^=uint8_t((c>>24)^(c>>57));
            }
        }
        uint64_t a=uint64_t(block)*PHI;
        a=(a^(a>>33)^UINT64_C(0x424c4b31))*M1;a=(a^(a>>33))*M2;
        uint64_t seed=a^(a>>33),state=mix(seed^UINT64_C(0xdc5ea5a85fb0a0c6));
        if(!state)state=PHI;
        seed^=UINT64_C(0xdc5ea5a81cf8e18f);
        for(uint32_t pos=lo;pos<hi;++pos){
            uint64_t x=(uint64_t(pos-lo)*UINT64_C(0xac01e240057269a7)+seed)^UINT64_C(0xffcb3f872961faff);
            x*=UINT64_C(0x2001);x^=x>>7;x*=9;x^=x>>17;x+=UINT64_C(0x54be8275f1e8ba97);
            output[pos]^=uint8_t((x>>40)^(x>>24)^(state>>29)^x^0xaa);
            x=(uint64_t(output[pos])^state)*UINT64_C(0xac01e240057269a7)+UINT64_C(0x54be8275f1e8ba97);
            state=x^(x>>31);
        }
        for(uint32_t pos=lo;pos<hi;++pos){
            output[pos]^=shadow[pos];
            if(period && pos/period!=current && pos/period!=uint32_t(current+1)){
                uint64_t x=mix(uint64_t(pos/period)*PHI^UINT64_C(0xdc5ea5a84fbda6c2));
                output[pos]^=uint8_t(x^(x>>16)^(x>>8));
            }
        }
    }
    return output;
}
template<class T> static T little(const std::vector<uint8_t>& b,size_t offset){
    if(offset+sizeof(T)>b.size())throw std::runtime_error("short PE read");
    T result=0;for(size_t i=0;i<sizeof(T);++i)result|=T(b[offset+i])<<(8*i);return result;
}
Program load_original_pe(const std::string& filename){
    std::ifstream f(filename,std::ios::binary);if(!f)throw std::runtime_error("cannot open PE");
    std::vector<uint8_t> file((std::istreambuf_iterator<char>(f)),{});
    auto nt=little<uint32_t>(file,0x3c);
    if(little<uint16_t>(file,0)!=0x5a4d || little<uint32_t>(file,nt)!=0x4550)throw std::runtime_error("not a PE");
    auto sections=little<uint16_t>(file,nt+6),opt=little<uint16_t>(file,nt+20);
    if(little<uint16_t>(file,nt+24)!=0x20b)throw std::runtime_error("not PE64");
    auto read=[&](uint32_t rva,size_t count){
        for(uint16_t i=0;i<sections;++i){size_t s=nt+24+opt+i*40;
            uint32_t va=little<uint32_t>(file,s+12),size=little<uint32_t>(file,s+16),raw=little<uint32_t>(file,s+20);
            if(rva>=va && uint64_t(rva)+count<=uint64_t(va)+size){
                size_t at=raw+(rva-va);if(at+count>file.size())throw std::runtime_error("short section");
                return std::vector<uint8_t>(file.begin()+at,file.begin()+at+count);
            }
        }throw std::runtime_error("unmapped RVA");
    };
    Program p;auto blob=read(0x3e5020,1752);std::copy(blob.begin(),blob.end(),p.blob.begin());
    auto table=read(0x3dfcb0,256);std::copy(table.begin(),table.end(),p.opcode_table.begin());
    for(uint32_t i=0;i<73;++i)p.block_start[i]=position(i);
    for(uint32_t i=0;i<13;++i){uint32_t k=little<uint32_t>(read(0x3dd520+4*i,4),0);
        uint64_t a=little<uint64_t>(read(0x3dd560+8*k,8),0),b=little<uint64_t>(read(0x3dd5d0+8*k,8),0);
        p.constants[i]=k%3==0?b^a:k%3==1?b+a:b-a;
    }
    p.code=materialize_all(p);return p;
}
static uint32_t operand(const Program& p,uint32_t pc,unsigned width){
    if(uint64_t(pc)+width>p.code.size())throw std::runtime_error("operand beyond bytecode");
    uint32_t x=pc*UINT32_C(0x7af13fd3);
    if(width==1)return p.code[pc]^0xad;
    if(width==2){uint32_t v=uint32_t(p.code[pc])|(uint32_t(p.code[pc+1])<<8);
        return uint16_t((v^x^(x>>13)^UINT32_C(0xffff9a10))*UINT32_C(0x1a8d));}
    uint32_t v=(uint32_t(p.code[pc+3])<<24)|(uint32_t(p.code[pc+1])<<16)|
        (uint32_t(p.code[pc+2])<<8)|p.code[pc];
    return (v^x^(x>>13)^UINT32_C(0xb2089a10))*UINT32_C(0x0d936053);
}
Instruction decode(const Program& p,uint32_t pc){
    if(pc>=p.code.size())throw std::runtime_error("opcode beyond bytecode");
    Instruction ir;ir.opcode_pc=pc;ir.operand_pc=pc+1;ir.encoded_opcode=p.code[pc];
    ir.opcode=p.opcode_table[ir.encoded_opcode^0x33]^0xeb;++pc;
    auto take=[&](unsigned w){ir.operands.push_back(operand(p,pc,w));pc+=w;};
    switch(ir.opcode){
        case 1:case 26:case 27:case 28:take(4);break;
        case 4:case 5:take(2);break;
        case 32:take(2);take(1);break;
        case 8:case 21:case 22:case 24:case 29:case 31:case 41:case 44:break;
        default:throw std::runtime_error("unsupported logical opcode "+std::to_string(ir.opcode));
    }ir.fallthrough_pc=pc;return ir;
}
static uint64_t pop(LogicalState& s){if(s.stack.empty())throw std::runtime_error("virtual stack underflow");auto v=s.stack.back();s.stack.pop_back();return v;}
static uint64_t host(LogicalState& s,uint32_t op,const std::vector<uint64_t>& args){
    switch(op){
        case 0:s.working=s.source;return 0;
        case 1:std::reverse(s.working.begin(),s.working.end());return 0;
        case 2:if(args.empty())throw std::runtime_error("host index argument absent");s.index=args[0];return 0;
        case 3:return s.index<s.working.size();
        case 5:return s.index;
        case 6:s.output=s.working;return 0;
        case 4:{
            if(s.index>=s.working.size())throw std::runtime_error("host4 accessible-memory precondition not met");
            // Bind the actual MSVC string representation, then execute the
            // instruction-level writer. No separately computed output byte.
            std::array<uint8_t,32> object{};size_t n=s.working.size();
            uint64_t length=n,capacity=n<16?15:n,address=UINT64_C(0x60000000),heap=UINT64_C(0x60001000);
            std::memcpy(object.data()+16,&length,8);std::memcpy(object.data()+24,&capacity,8);
            if(n<16)std::copy(s.working.begin(),s.working.end(),object.begin());
            else std::memcpy(object.data(),&heap,8);
            auto result=host4(object.data(),s.working.data(),address,s.index);
            if(n<16)std::copy(object.begin(),object.begin()+n,s.working.begin());
            return result.rax;
        }
        default:throw std::runtime_error("unsupported host operation");
    }
}
size_t execute(const Program& p,LogicalState& s,Trace trace,size_t budget){
    size_t steps=0;
    while(!s.halted){
        if(steps>=budget)throw std::runtime_error("logical step budget exceeded");
        auto ir=decode(p,s.next_opcode_pc);auto& a=ir.operands;
        s.next_opcode_pc=ir.fallthrough_pc;s.post_core_pc=ir.fallthrough_pc;
        switch(ir.opcode){
            case 1:s.stack.push_back(p.constants[a[0]<13?a[0]:0]);break;
            case 4:s.stack.push_back(s.registers[a[0]&255]);break;
            case 5:s.registers[a[0]&255]=pop(s);break;
            case 31:pop(s);break;
            case 44:if(s.stack.empty())throw std::runtime_error("NOT underflow");s.stack.back()=~s.stack.back();break;
            case 8:case 21:case 22:case 24:case 41:{
                uint64_t y=pop(s),x=pop(s),v=0;
                if(ir.opcode==8)v=x+y;
                if(ir.opcode==41)v=x^y;
                if(ir.opcode==21)v=x!=y;
                if(ir.opcode==22)v=(x^UINT64_C(0x8000000000000000))<(y^UINT64_C(0x8000000000000000));
                if(ir.opcode==24)v=(x^UINT64_C(0x8000000000000000))>(y^UINT64_C(0x8000000000000000));
                s.stack.push_back(v);break;
            }
            case 26:case 27:case 28:{
                if(a[0]>=73)throw std::runtime_error("branch target beyond block table");
                bool take=ir.opcode==26;
                if(ir.opcode==27)take=pop(s)==0;
                if(ir.opcode==28)take=pop(s)!=0;
                // Native core queues transfer; dispatcher applies it before
                // fetching the next opcode. post_core_pc remains fallthrough.
                if(take)s.next_opcode_pc=p.block_start[a[0]];
                break;
            }
            case 32:{
                auto count=std::min<uint32_t>(a[1],32);
                if(count>s.stack.size())throw std::runtime_error("CALL argument underflow");
                std::vector<uint64_t> args(s.stack.end()-count,s.stack.end());s.stack.resize(s.stack.size()-count);
                s.stack.push_back(host(s,a[0],args));break;
            }
            case 29:s.result=pop(s);s.halted=true;break;
            default:throw std::runtime_error("unreachable opcode");
        }
        ++steps;if(trace)trace(steps,ir,s);
    }return steps;
}
} // namespace pafet_xxiii
