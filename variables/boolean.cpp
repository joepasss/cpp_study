using namespace std;

void booleans() {
  bool red_light{true};     // boolean size = 1byte;
  bool green_light{false};

  if (!red_light) {
    cout << "STOP!" << endl;
  } else {
    cout << "GO THROUGH!" << endl;
  }
}