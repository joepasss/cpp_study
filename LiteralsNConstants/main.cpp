#include <iostream>

void literals();
void divider();

int main() {
  std::cout << "Hello from LITERALSNCONSTANTS" << std::endl;

  return 0;
}

void divider() { std::cout << "------------------------" << std::endl; }

void literals() {
  // Literal Types : u and l combinations for unsigned and long.
  unsigned char unsigned_char{53u};

  // 2 bytes
  // no special literal type for short, signed short, unsigned short

  // 4 bytes
  // no special literal type for int, signed int, unsigned int

  // 4 or 8 bytes
  long long_var{33L};
  long int long_int{33L};
  signed long int signed_long_int{44l};
  unsigned long long unsigned_long_long{44ul};

  // Octal literals -> prefix with 0
  int octal_number{0777u};

  // binary literals -> prefix with 0b
  unsigned int binary_literal{0b111111u};

  // other literal
  // char char_literal {"c"};
  // int number_literal {15};
  // float fractional_literal {1.5f};
  // std::string string_literal {"some strings!"};
}