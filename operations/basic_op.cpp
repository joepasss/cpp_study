// Basic OP

// add, subtract, divide, modulus, multiply
using namespace std;

void basicOp() {
  int num1, num2, num3 = 0;

  cout << "input three number!" << endl;
  cin >> num1 >> num2 >> num3;

  // Add
  int sum = num1 + num2;
  int other_sum = num1 + num2 + num3;

  // sub
  int sub = num1 - num2;
  int other_sub = num1 - num2 - num3;

  // divide
  double div = double(num1) / double(num2);
  double other_div = double(num1) / (double(num2) / double(num3));

  // modulus
  int mod = num1 % num2;

  // multiply
  int mul = num1 * num2;
  int other_mul = num1 * num2 * num3;

  divider();
  cout << "ADD" << endl;
  cout << sum << endl;
  cout << other_sum << endl;

  divider();
  cout << "SUB" << endl;
  cout << sub << endl;
  cout << other_sub << endl;

  divider();
  cout << "DIV" << endl;
  cout << div << endl;
  cout << other_div << endl;

  divider();
  cout << "MOD" << endl;
  cout << mod << endl;

  divider();
  cout << "MUL" << endl;
  cout << mul << endl;
  cout << other_mul << endl;
}