cmake_minimum_required(VERSION 3.24.1)

project(OPTIONAL_LIBS)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(adder)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/adder" ${PROJECT_BINARY_DIR})

target_link_directories(${PROJECT_NAME} PUBLIC adder)

target_link_libraries(${PROJECT_NAME} adder)