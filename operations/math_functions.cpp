// Math Functions
#include <cmath>

/*
 * std::floor();
 * std::ceil();
 * std::abs();    // get absolute value
 * std::cos();
 * std::exp();
 * std::log();
 * std::pow();
 * std::sqrt();
 * std::round();
 * std::sin();
 * std::tan();
 *
 * ...
 *
 */

void mathFunctions () {
  double weight {7.7};

  // Floor
  cout << "Weight rounded to floor is : " << floor(weight) << endl;

  // Ceil
  cout << "Weight rounded to ceil is : " << ceil(weight) << endl;

  // abs
  cout << "ABS of weight is : " << abs(weight) << endl;

  // exp
  double exponential = std::exp(10);
  cout << "The exponential of 10 is : " << exponential << endl;

  // pow
  cout << "3 ^ 4 is : " << pow(3, 4) << endl;
  cout << "9 ^ 3 is : " << pow(9, 3) << endl;

  // log
  cout << "loge(54.19) base e : " << log(5.19) << endl;
  cout << "log10(10000) base 10 : " << log10(10000) << endl;

  // sqrt
  cout << "The square root of 81 is : " << sqrt(81) << endl;

  // round
  cout << "3.654 rounded to : " << round(3.654) << endl;
  cout << "2.5 rounded to : " << round(2.5) << endl;
  cout << "2.4 rounded to : " << round(2.4) << endl;

  // also ...
  // sin, sinf, sinl        computes sine
  // cos, cosf, cosl        computes cosine
  // tan, tanf, tanl        computes tangent
  // asin, asinf, asinl     computes arc sine
  // acos, acosf, asocl     computes arc cosine
  // atan, atanf, atanl     computes arc tangent
  // atan2, atan2f, atan2l  arc tangent, using signs to determine quadrants
}