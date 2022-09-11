#include <string>

void inputAndOutput() {
  // variables
  int age{21};
  std::string name;

  // Print data
  //    std::cout << "Hello" << std::endl;
  //    std::cout << "AGE : " << age << std::endl;
  //    std::cerr << "Error Message: " << std::endl;
  //    std::clog << "log Message: " << std::endl;


  std::cout << "Please type your name and age : " << std::endl;
  //    std::cin >> name;
  //    std::cin >> age
  std::cin >> name >> age;

  std::cout << "Hello " << name << " you are " << age << std::endl;
}