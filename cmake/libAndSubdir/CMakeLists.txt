cmake_minimum_required(VERSION 3.24.1)

project(LIBANDSUBDIR)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Adder)

target_link_libraries(${PROJECT_NAME} adder)