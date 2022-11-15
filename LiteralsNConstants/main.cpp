#include <iostream>

void literals();
void divider();
void constantExp();
void constinitEx();

int main() {
  constinitEx();

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

void constantExp() {
  // constexpr = constant that may be evaluated at compile time or runtime

  constexpr int SOME_LIB_MAJOR_VERSION{123};

  constexpr int eye_count{2};

  constexpr double PI{3.14};

  std::cout << "eye count: " << eye_count << std::endl;
  std::cout << "PI: " << PI << std::endl;

  int leg_count{2}; // leg_count is not known at compile time

  // constexpr int arm_count {leg_count}

  constexpr int room_count{10};
  constexpr int door_count{room_count};
  constexpr int door_count2{room_count * 2};

  static_assert(SOME_LIB_MAJOR_VERSION == 123); // it gets only const

  std::cout << "APP DOING WORK ..." << std::endl;
}

void constinitEx() {
  // that a variable should be initalized at compile time
  // before main function runs
  // local variables cannot be declared constinit => set constinit in globaly

  const int val1{33};
  constexpr int val2{34};
  int val3{35};

  constinit int age = 88;
  const constinit int age1{val1}; // const and constinit can be combined
  constinit int age2{
      age1}; // initalizing with age would leadto a compiler error
  constinit int age3{
      age3}; // val3 is evaluated at run time, can't const initialize age3

  const constinit double weight{33.33};
  constexpr constinit double scale_factor{
      3.11}; // can't combine constexpr and constinit

  /*
    int main() {
      constinit int age4 {41};  // compiler error: not static or thread local
    storage return 0;
    }
  */
}