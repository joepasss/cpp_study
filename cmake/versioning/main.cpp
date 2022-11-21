#include <iostream>
<<<<<<< HEAD

int main(int argc, char* argv[]) {
  std::cout << "HELLO FROM VERSIONING!" << std::endl;
  
=======
#include <VERSIONINGConfig.h>

int main(int argc, char *argv[])
{
  std::cout << "HELLO FROM VERSIONING!" << std::endl;

  std::cout << argv[0] << " Version " << VERSIONING_VERSION_MAJOR << "." << VERSIONING_VERSION_MINOR << std::endl;

>>>>>>> review
  return 0;
}