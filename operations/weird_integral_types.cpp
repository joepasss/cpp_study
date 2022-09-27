// Weird Integral Types

// char -> short int

void weirdInt () {
  short int var1 {10};
  short int var2 {20};

  char var3 {40};
  char var4 {50};

  cout << "size of var 1 : " << sizeof(var1) << endl;
  cout << "size of var 2 : " << sizeof(var2) << endl;
  cout << "size of var 3 : " << sizeof(var3) << endl;
  cout << "size of var 4 : " << sizeof(var4) << endl;

  auto result1 = var1 + var2;   // conversion to int
  auto result2 = var3 + var4;   // conversion to int

  cout << "size of result 1 : " << sizeof(result1) << endl;
  cout << "size of result 2 : " << sizeof(result2) << endl;
}