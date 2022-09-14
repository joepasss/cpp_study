#include "divider.cpp";

void incDec() {
  int value = 5;

  cout << "value default           : " << value << endl;
  cout << "value is(Postfix before): " << value++ << endl;
  cout << "value is(Postfix after) : " << value << endl;

  divider();

  cout << "value default          : " << value << endl;
  cout << "value is(Prefix before): " << --value << endl;
  cout << "value is(Prefix after) : " << value << endl;
}