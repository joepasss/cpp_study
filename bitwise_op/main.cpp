#include <bitset>
#include <iostream>

void divider() {
  std::cout << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << std::endl;
}

void print_int_in_binary();
void shift_op();

int main() {
  std::cout << "Hello from BITWISE_OP" << std::endl;
  divider();

  std::cout << "Print integer in Binary" << std::endl;
  print_int_in_binary();
  divider();

  std::cout << "Shift Operators" << std::endl;
  shift_op();

  return 0;
}

void print_int_in_binary() {
  unsigned short int data{0b11111110};

  std::cout << "sizeof unsigned short int: " << sizeof(data)
            << std::endl; // 2 byte (16 bits)

  std::cout << "data (dec): " << std::dec << data << std::endl;
  std::cout << "data (hex): " << std::hex << data << std::endl;
  std::cout << "data (bin): " << std::bitset<16>(data) << std::endl;
}

void shift_op() {
  // >>
  // 001111000010 -> 011110000100
  // <<
  // 001111000010 -> 000111100001

  // if data is lost as a result of you shifting bits left(<<) or right(>>), you
  // can't get the data back just by doing reverse operation. You've just lost
  // the data permanently!

  // bit shifting only supported for integral types like int char, ...

  unsigned short int value{0xff0u};

  std::cout << "value: " << std::bitset<16>(value) << ", dec" << value
            << std::endl;

  std::cout << std::endl;
  std::cout << "Shifting 1bit right (>>)" << std::endl;

  // shift right 1 bit position
  value = static_cast<unsigned short int>(value >> 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec" << value
            << std::endl;

  std::cout << std::endl;
  std::cout << "Shifting 4bit left (<<)" << std::endl;

  // shift right 4 bit position
  value = static_cast<unsigned short int>(value << 4);
  std::cout << "value: " << std::bitset<16>(value) << ", dec" << value
            << std::endl;

  // shifting right divides by 2^n
  // shifting left multiplies by 2^n
}