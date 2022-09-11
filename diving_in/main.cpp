#include "./dataInput_dataOutput.cpp"
#include "./statements_functions.cpp"
#include "./assignment.cpp"
#include <iostream>

void hello() {
  std::cout << "Hello, world! From function" << std::endl;
}

void printSomething(int printValue) {
  std::cout << printValue << std::endl;
}

int main() {
  inputAndOutput();

  return 0;
}

// Comments
/* Comments two */