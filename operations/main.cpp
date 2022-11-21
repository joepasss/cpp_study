#include <iostream>
#include <iomanip>
#include <ios>

#include "divider.cpp"

#include "basic_op.cpp"
#include "precedence.cpp"
#include "increment_decrement.cpp"
#include "compound.cpp"
#include "relational_op.cpp"
#include "logical_op.cpp"
#include "output_formattig.cpp"
#include "numeric_limit.cpp"
#include "math_functions.cpp"
#include "weird_integral_types.cpp"
#include "celcius_to_fahernheit.cpp"

// base area = width * length
// volume = base_area * height

int main() {
  double length {0};
  double width {0};
  double height {0};

  std::cout << "Welcome to box calculator. Please type in length, width and height information : " << std::endl;

  std::cout << "length : ";
  std::cin >> length;

  std::cout << "width : ";
  std::cin >> width;

  std::cout << "height : ";
  std::cin >> height;

  double base_area = width * length;
  std::cout << "The base area is : " << base_area << std::endl;

  double volume = base_area * height;
  std::cout << "The volume is : " << volume << std::endl;

  return 0;
}

// 91.76