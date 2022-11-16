#include "ImplicitDataConv.h"

void IDC() {
  // conversion going to smaller type to bigger type

  double price{45.6};
  int units{10};

  auto total_price = price * units; // conversion to double

  cout << "Total price: " << total_price << endl;
  cout << "sizeof total_price: " << sizeof(total_price) << endl;

  // implicit conversions in assignments
  int x;
  double y{45.44};
  x = y; // double to int

  cout << "The value of x is: " << x << endl; // 45, decimal point is choped up
  cout << "sizeof x: " << sizeof(x) << endl;  // 4
}
