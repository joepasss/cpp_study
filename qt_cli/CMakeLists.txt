cmake_minimum_required(VERSION 3.24)
project(QT_CLI)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "/Users/mac/programming/cpp/Qt/6.4.0/macos/lib/cmake/Qt6")

find_package(Qt6 COMPONENTS Core REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Qt::Core)

# SUBDIR
add_subdirectory(interfaces)
target_link_libraries(${PROJECT_NAME} "interfaces")