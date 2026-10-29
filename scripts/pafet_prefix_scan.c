/* Bounded offline dictionary search against Pafet's exact first block.
 * Build: gcc -O3 -Wno-deprecated-declarations pafet_prefix_scan.c -lcrypto -o pafet_prefix_scan
 * Run: ./pafet_prefix_scan usernames.txt
 * This tests only the fixed serial candidates below, not all serials.
 * Output matches are candidates; the SHA-256 username gate is not bypassed.
 */
#define _GNU_SOURCE
#include <openssl/des.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const unsigned char stream[24]={0xde,0x18,0x89,0x41,0xa3,0x37,0x5d,0x3a,0x8a,0x06,0x1e,0x67,0x57,0x6e,0x92,0x6d,0xc7,0x1a,0x7f,0xa3,0xf0,0xcc,0xeb,0x97};
static const char *serials[]={"","serial01","12345678","123456","1234","password","1337-C0DE-FACE-B00B","1337","VSEC","vsec","admin","0123456789ABCDEF"};
static void hexout(const unsigned char *b,size_t n){for(size_t i=0;i<n;i++)printf("%02x",b[i]);}
static void prefix(const unsigned char key[24],unsigned char out[8]){
    DES_key_schedule ks[3];DES_cblock block={0x6f,0x56,0xf7,0x9c,0x3e,0x34,0x88,0x35},next;
    for(int i=0;i<3;i++)DES_set_key_unchecked((const_DES_cblock*)(key+8*i),&ks[i]);
    for(int i=0;i<3;i++){DES_ecb3_encrypt(&block,&next,&ks[0],&ks[1],&ks[2],DES_DECRYPT);memcpy(block,next,8);}
    memcpy(out,block,8);
}
int main(int argc,char **argv){
    if(argc==2&&!strcmp(argv[1],"--self-test")){
        unsigned char zero[24]={0},key[24]={0x46,0x43,0x40,0x46,0x4e,0xad,0x7d,0xfb,0x28,0xc2,0x5b,0x6d,0x0b},out[8];
        unsigned char expected_zero[8]={0x35,0x10,0x36,0x6f,0xbf,0xf5,0xcb,0x69},expected_alice[8]={0xfd,0x20,0x77,0xa1,0x01,0xac,0xdf,0xae};
        prefix(zero,out);if(memcmp(out,expected_zero,8))return 1;
        prefix(key,out);if(memcmp(out,expected_alice,8))return 1;
        puts("PASS: first blocks match recorded empty and alice/serial01 captures");return 0;
    }
    if(argc!=2){fprintf(stderr,"Usage: %s usernames.txt\n",argv[0]);return 2;}
    FILE *f=fopen(argv[1],"rb");if(!f){perror(argv[1]);return 2;}
    char *line=NULL;size_t cap=0;ssize_t nr;unsigned long words=0,tests=0,hits=0;clock_t start=clock();
    while((nr=getline(&line,&cap,f))>=0){
        size_t n=(size_t)nr;if(n&&line[n-1]=='\n')--n;if(n&&line[n-1]=='\r')--n;
        unsigned char base[24]={0};size_t count=n<24?n:24;
        for(size_t i=0;i<count;i++)base[i]=(unsigned char)(((unsigned char)line[n-1-i]^0x5a)+7+3*i);
        size_t num=n>=24?1:sizeof(serials)/sizeof(serials[0]);
        for(size_t j=0;j<num;j++){
            unsigned char key[24],out[8];memcpy(key,base,24);size_t sn=strlen(serials[j]);
            for(size_t i=0;i<sn&&n+i<24;i++)key[n+i]=(unsigned char)serials[j][i]^stream[i];
            prefix(key,out);++tests;
            if(!memcmp(out,"CMO{",4)){
                ++hits;printf("{\"user_hex\":\"");hexout((unsigned char*)line,n);printf("\",\"serial_hex\":\"");hexout((unsigned char*)serials[j],sn);printf("\",\"key_hex\":\"");hexout(key,24);printf("\",\"prefix_hex\":\"");hexout(out,8);puts("\"}");fflush(stdout);
            }
        }
        ++words;
        if(words%250000==0)fprintf(stderr,"words=%lu key_tests=%lu elapsed_cpu=%.2f\n",words,tests,(double)(clock()-start)/CLOCKS_PER_SEC);
    }
    fprintf(stderr,"DONE words=%lu key_tests=%lu hits=%lu elapsed_cpu=%.2f\n",words,tests,hits,(double)(clock()-start)/CLOCKS_PER_SEC);free(line);fclose(f);return 0;
}
