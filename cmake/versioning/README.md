#### Versioning

&nbsp;

##### versioning in cmake

---

```
// in CMakeLists.txt

project(${project name} VERSION 1.0)

configure_file(${project name}Config.in.h ${project name}Congfig.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
```

```
// in ${project name}Congfig.h.in

#define PROJECTNAME_VERSION_MAJOR @PROJECTNAME_VERSION_MAJOR@
#define PROJECTNAME_VERSION_MINOR @PROJECTNAME_VERSION_MINOR@
```

```
// in main.cpp check program version
#include <iostream>
#include <PROJECTNAMEConfig.h>

int main(int argc, char* argv[]) {
  std::cout << argv[0] << " Version " << PROJECTNAME_VERSION_MAJOR << "." << PROJECTNAME_VERSION_MINOR << std::endl;

  return 0;
}
```
