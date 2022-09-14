void logicalOp() {
  bool a {true};
  bool b {false};

  cout << boolalpha;
  cout << "default values" << a << b << endl;

  divider();

  cout << "AND OPERATOR &&" << endl;
  cout << "A && B : " << (a && b) << endl;

  cout << endl;

  cout << "OR OPERATOR ||" << endl;
  cout << "A || B : " << (a || b) << endl;

  cout << endl;

  cout << "NOT OPERATOR !" << endl;
  cout << "!A     : " << (!a) << endl;
}