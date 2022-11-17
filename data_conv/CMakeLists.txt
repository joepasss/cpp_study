cmake_minimum_required(VERSION 3.24.1)

set (CMAKE_CXX_STANDARD 20)

project(DATA_CONV)

add_executable(${PROJECT_NAME} main.cpp)

# SUB DIR
add_subdirectory(ImplicitDataConv)
add_subdirectory(ExplicitDataConv)
add_subdirectory(overflow_underflow)

target_link_libraries(${PROJECT_NAME} ImplicitDataConv ExplicitDataConv overflow_underflow)
