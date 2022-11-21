#include <iostream>

#include "./boolean.cpp"
#include "./fractional.cpp"
#include "./characters.cpp"
#include "./auto.cpp"

/*    Number system
 *  int number1 = 15;         Decimal
 *  int number2 = 017;        Octal
 *  int number3 = 0x0f;       Hexadecimal
 *  int number4 = 0b00001111  Binary - C++14
 */

/*
 *    Variable
 *  A named piece of memory that you use to store specific types of data.
 */

/*
 *    Integer (int)
 *  4bytes
 */

void integer() {
  int elephant_count;// Variable may contain random garbage value . WARNING

  int lion_count{}; // initialized to zero
  int dog_count{10};// initialized to 10
  int cat_count{15};

  // Can use Expression as initializer
  int domesticated_animals{dog_count + cat_count};// 10 + 15 = 25;

  // 2.9 is of type double, with wider range than int.ERROR Or WARNING.
  //  int narrowing_conversion {2.9};
}

// typename variable_name {initializer_value};

void functionalVariableInitialization() {
  int apple_count(5);
  int orange_count(10);
  int fruit_count(apple_count + orange_count);

  // Information lost. less safe than braced initializers
  // int narrowing_conversion_functional(2.9);  // chop off 0.9 it gets 2 for its value use curly braces
}

void getSizeOfInt(int value1 = 0, short int value2 = 0, long int value3 = 0, long long int value4 = 0, const std::string &typesOfInt = "") {
  // how many memory occupied;
  if (value1 != 0) {
    std::cout << "sizeof " << typesOfInt << " : " << sizeof(value1) << std::endl;
  } else if (value2 != 0) {
    std::cout << "sizeof " << typesOfInt << " : " << sizeof(value2) << std::endl;

  } else if (value3 != 0) {
    std::cout << "sizeof " << typesOfInt << " : " << sizeof(value3) << std::endl;
  } else if (value4 != 0) {
    std::cout << "sizeof " << typesOfInt << " : " << sizeof(value4) << std::endl;
  }
}

void modifier() {
  // signed / unsigned modifier
  // unsigned int [0, 4,294,967,295]
  // signed int [-2,147,483,648, 2,147,483,647]
  signed int value1{10};
  signed int value2{-10};

  unsigned int value3{10};

  // long, short
  // long long = 8bytes
  // long = 4bytes or 8 bytes
  // short = 2bytes
  short int value4{1};     // 2byte
  long int value5{10};     // 4 or 8 byte
  long long int value6{12};// 8 byte
}

void getSizeOfmodifiedInt() {
  int value1{10};
  short int value2{10};
  long int value3{1000000000};
  long long int value4{1000000000000000000};

  getSizeOfInt(value1, 0, 0, 0, "int");
  getSizeOfInt(0, value2, 0, 0, "short int");
  getSizeOfInt(0, 0, value3, 0, "long int");
  getSizeOfInt(0, 0, 0, value4, "long long int");
}

void divider() {
  std::cout << "----------------------------------------------------------------------" << std::endl;
}

int main() {
  std::cout << "C++ Variables!" << std::endl;
  divider();

  autos();

  return 0;
}
