### LIBRARIES AND SUBDIRECTORIES

---

##### 1. Add file

```
// console
$touch whatever.cpp

// CMakeList.txt
...

add_executable(${PROJECT_NAME} main.cpp whatever.cpp)

...
```

```
// RUN
$cmake -S . -B out/build
$make -C out/build
$out/build/{filename}
```

##### 2. Add Library

```
// CMakeLists.txt
...
add_subdirectory(path_to_add)

target_link_libraries(${PROJECT_NAME} libray name to add)
...

// ${pathToAdd}/CMakeLists.txt
add_library(library name fileName.cpp)
```
