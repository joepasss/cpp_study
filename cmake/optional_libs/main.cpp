#include <OPTIONAL_LIBSConfig.h>
#include <iostream>

#ifdef USE_ADDER
#include <adder.h>
#endif

using namespace std;

int main(int argc, char *argv[]) {
#ifdef USE_ADDER
  cout << "use adder " << adder(12.2f, 19.2f) << endl;
#else
  cout << "no use adder" << endl;
#endif

  return 0;
}