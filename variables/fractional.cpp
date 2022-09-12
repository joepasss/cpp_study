// Fractional Number
// 1, 2, 3, -10, ... => integer
// 1.04, 1.002345, 10.5, ... => fractional number
// also called floating Point types
// float (4byte), double (8byte), long double (12byte)
// float => 7 digits
// double => 15
// long double => over 15;

#include <iomanip>

using namespace std;

void fractionalNumber () {
  float number1 {1.12345678901234567890f};
  double number2 {1.12345678901234567890};
  long double number3 {1.12345678901234567890L};

  // print out the sizes
  cout << "Print out the sizes" << endl;
  cout << "float size" << sizeof(float) << endl;
  cout << "double size" << sizeof(double) << endl;
  cout << "long double size" << sizeof(long double) << endl;

  // print out the precision
  cout << setprecision(20);
  cout << "number 1 is : " << number1 << endl;  // 7
  cout << "number 2 is : " << number2 << endl;  // 15
  cout << "number 3 is : " << number3 << endl;  // 15+
}