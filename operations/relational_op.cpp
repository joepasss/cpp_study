void relation_op() {
  int number1 {45};
  int number2 {60};

  cout << "number1 : " << number1 << endl;
  cout << "number2 : " << number2 << endl;

  divider();

  cout << "Comparing variables!" << endl;

  cout << boolalpha;  // Make bool show up as true/false instead of 1 / 0
  cout << "number1 < number2  : " << (number1 < number2) << endl;
  cout << "number1 <= number2 : " << (number1 <= number2) << endl;
  cout << "number1 == number2 : " << (number1 == number2) << endl;
  cout << "number1 != number2 : " << (number1 != number2) << endl;

  divider();

  bool result = (number1 < number2);
  cout << "boolean value! : " << result;
}