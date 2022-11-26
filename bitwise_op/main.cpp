#include <bitset>
#include <iostream>

void divider() {
  std::cout << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << std::endl;
}

void print_int_in_binary() {
  unsigned short int data{0b11111110};

  std::cout << "sizeof unsigned short int: " << sizeof(data)
            << std::endl; // 2 byte (16 bits)

  std::cout << "data (dec): " << std::dec << data << std::endl;
  std::cout << "data (hex): " << std::hex << data << std::endl;
  std::cout << "data (bin): " << std::bitset<16>(data) << std::endl;
}

int main() {
  std::cout << "Hello from BITWISE_OP" << std::endl;
  divider();

  std::cout << "Print integer in Binary" << std::endl;
  print_int_in_binary();

  divider();

  return 0;
}