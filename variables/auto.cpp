// Auto
// let the compiler deduce the type

using namespace std;

void autos() {
  auto var1{12};   // int
  auto var2{13.0}; // double
  auto var3{14.0f};// float
  auto var4{15.0}; // double
  auto var5{"e"};  // char

  // int modifier suffixes
  auto var6{123u}; // unsigned int
  auto var7{123ul};// unsigned long
  auto var8{123ll};// long long
}