### HOW TO INIT QT in VSCODE

&nbsp;

#### 1. CMakeLists.txt

```
cmake_minimum_required(VERSION 3.24)
project(TEST)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "/Users/mac/programming/cpp/Qt/6.4.0/macos/lib/cmake/Qt6")

find_package(Qt6 COMPONENTS Core REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Qt::Core)
```

```
cmake_minimum_required(VERSION 3.24)
project(project_name)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "path_to_qt")

find_package(Qt6 COMPONENTS Core REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Qt::Core)

```

#### 2. configure.sh

```
cmake -S ./ -B ./out/build -G Ninja
```

#### 3. run.sh

```
cd ./out/build ; ninja ; ./TEST
```

```
cd ./out/build ; ninja ; ./project_name
```
