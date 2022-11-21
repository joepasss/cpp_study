#include "ExplicitDataConv.h"

void EDC() {
  // implicit cast will add up the doubles
  // then turn result into int for assignment

  double x{12.5};
  double y{34.6};

  int sum = x + y; // 47 (47.1 => 47)

  // static_cast
  double x2 = 12.5;
  double y2 = 34.6;

  sum = static_cast<int>(x2) + static_cast<int>(y2); // 12 + 34 = 46
  sum = static_cast<int>(x2 + y2);                   // 12 + 34 = 46;

  // old style c-cast
  double PI{3.14};
  int int_pi = (int)(PI); // 3

  cout << "int_pi : " << int_pi << endl;

  cout << "The sum is : " << sum << endl;
}