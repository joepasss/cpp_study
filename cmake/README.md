### CMAKE REFERENCE

&nbsp;

##### MAKEFILE

---

```
// in makefile

default:
	g++ main.cpp -o output

// in console
$make
```

&nbsp;

##### CMAKE INTRODUCTION

---

1. make file that names "CMakeLists.txt" (it's capital sensitive)

```
// in root dir

$touch CMakeList.txt
```

2. Usage

```
  cmake [options] <path-to-source>
  cmake [options] <path-to-existing-build>
  cmake [options] -S <path-to-source> -B <path-to-build>
```

3. Build output dir

```
$mkdir -p out/build
$cd out/build
```

4. run cmake

```
// in out/build directory
$cmake -S ../../ -B .

// or root dir
$cmake -S . -B out/build
```

5. run makefile

```
// in root dir
$make -C out/build
```

6. run binary

```
// in root dir
$out/build/INTRO
```

&nbsp;

##### LIBARARY AND SUBDIRECTORIES

---

1. Add file

```
$whatever.cpp

// CMakeLists.txt
...
add_excutable(${PROJCET_NAME} main.cpp whatever.cpp)
...
```

2. Add Library

```
// CMakeLists.txt
...
add_subdirectory(path_to_add)

target_link_libraries(${PROJECT_NAME} path_to_add)
```

```
// subdir/CMakeLists.txt
target_link_libraries(${PROJECT_NAME} name_to_add.cpp)
```
