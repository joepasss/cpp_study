#include <OPTIONAL_LIBSConfig.h>
#include <iostream>

#ifdef USE_ADDER
#include <adder.h>
#endif

using namespace std;

int main() {
  cout << "HELLO from optional libs" << endl;

#ifdef USE_ADDER
  cout << "ADDER: " << adder(3.14, 2.13) << endl;
#else
  cout << "NO ADDER!" << endl;
#endif

  return 0;
}