// Charaters
// using "char"
// char character1 {a};
// it gets 1byte;
// using ASCII encoding

using namespace std;

void characters() {
  char value = 65;      // ASCII character code for 'A';

  // another language and emojis using unicode system;

  cout << "value : " << value << endl;
  cout << "value(int) : " << static_cast<int>(value) << std::endl;
}