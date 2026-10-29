#!/bin/sh
set -eu
cd "$(dirname "$0")/.."
mkdir -p jack_xxiii_evidence/build
g++ -std=c++17 -O2 -fno-strict-aliasing -Wall -Wextra \
  src/main_original_vm_xxiii.cpp src/pafet_original_vm_xxiii.cpp \
  src/pafet_canonical_bridge_xxiii.cpp src/pafet_native_writer_xxiii.cpp \
  src/pafet_h3a50_native.cpp -o jack_xxiii_evidence/build/original_vm_xxiii
