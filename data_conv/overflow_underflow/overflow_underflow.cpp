#include "overflow_underflow.h"

void overflow_underflow() {
  // overflow => we try to feed much more that can fit in variable
  // underflow => we try to feed less that can fit in variable

  // 1byte => 0 ~ 255

  unsigned char char_var{55};

  unsigned char val1{130};
  unsigned char val2{131};

  char_var = val1 + val2; // 130 + 131 = 261 => overflow, 6 more than 255 so
                          // result is 5 (0, 1, 2, 3, 4, 5)

  /*
    1111 1111 (255)

    reset all bits

    0000 0000 (0)
    0000 0001 (1)
  */

  /*
  0000 0000 (0)

  reset all bits

  1111 1111 (255)
  1111 1110 (254)
 */

  cout << "char_var: " << static_cast<int>(char_var) << endl; // 5
}