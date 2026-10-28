# Build the user-VM prototype. Tested with g++ (MinGW on Windows) and
# cl.exe (MSVC). Produces pafet_uservm_test(.exe).
CXX ?= g++
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra -Wno-unused-parameter

all: pafet_uservm_test

pafet_uservm_test: pafet_uservm.cpp main_uservm_test.cpp pafet_uservm.h
	$(CXX) $(CXXFLAGS) -o $@ pafet_uservm.cpp main_uservm_test.cpp

clean:
	rm -f pafet_uservm_test pafet_uservm_test.exe

.PHONY: all clean
