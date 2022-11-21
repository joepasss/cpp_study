void compound () {
  int value{35};

  cout << "The value is : " << value << endl;
  divider();

  value += 5;
  cout << "value += 5" << value << endl;
  divider();

  value -= 5;
  cout << "value -= 5" << value << endl;
  divider();

  value *= 5;
  cout << "value *= 5" << value << endl;
  divider();

  value /= 5;
  cout << "value /= 5" << value << endl;
  divider();

  value %= 5;
  cout << "value %= 5" << value << endl;
  divider();
}