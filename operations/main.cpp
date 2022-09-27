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

using namespace std;

int main() {
  double cel {0};
  cout << "Please enter a degree value in Celsius : ";
  cin >> cel;

  cout << cel << " Celsius is " << celToFah(cel) << " Fahrenheit" << endl;

  return 0;
}

// 91.76