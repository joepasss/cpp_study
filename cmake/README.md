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

##### SUBMODULES

- HOW TO MAKE .sh FILE

```
$ touch ./build.sh, ./configure.sh, ./run.sh
$ chmod -x configure.sh build.sh run.sh
```

1. add submodule from git

```
$ git submodule add ${git repo} ${dir name want to save}
```

```
// ./CMakeLists.txt
...

add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} PUBLIC external/glfw/include)

target_link_directories(${PROJECT_NAME} PUBLIC external/glfw/src)

target_link_libraries(${PROJECT_NAME} glfw)
...
```

2. check submodule and it doesn't exist it pulls from git

```
// ./CMakeLists.txt
// in this case we use glfw

# DOWNLOAD ALL THE SUBMODULES
find_package(Git QUIET)
if(GIR_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")

  #Update submodules as needed
  option(GIT_SUBMODULE "Check submodule during build" ON)
  if (GIT_SUBMODULE)
    message(STATUS "Submodule update")
    execute_process(COMMANT ${GIT_EXCUTABLE} submodule update --init --recursive
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                    RESULRT_VARIABLE GIT_SUBMOD_RESULT)

    if(NOT GIT_SUBMOD_RESULT EQUAL "0")
      message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout")

    endif()
  endif()
endif()

# CHECK ALL THE SUBMODULES
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
  message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turne off or failed. Please try again!")
endif()

```
