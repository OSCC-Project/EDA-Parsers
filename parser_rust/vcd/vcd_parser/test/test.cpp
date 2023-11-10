#include <cstring>
#include <iostream>

#include "VcdParserRustC.hh"

int main() {
  ieda::RustVcdReader vcd_reader;

  vcd_reader.readVcdFile("test1.vcd");

  return 1;
}