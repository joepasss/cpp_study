### CMAKE INTRODUCTION

1. make file that names CMakeLists.txt it's capital sensitive

```
$touch CMakeLists.txt
```

```
$cmake

Usage

  cmake [options] <path-to-source>
  cmake [options] <path-to-existing-build>
  cmake [options] -S <path-to-source> -B <path-to-build>
```

2. Build output directory (out/build) & move to out/build

```
$mkdir -p out/build
$cd out/build
```

3. run cmake

```
// in out/build directory

$cmake -S ../../ -B .
```

- it makes CMakeFiles, cmake_install.cmake, CMakeCache.txt, Makefile

4. Write cmake & run cmake

```
// in CMakeLists.txt

cmake_minimum_required(VERSION 3.24.1) // whatever version cmake has backword compatibility

// in root directory

$cmake -S . -B out/build
```
