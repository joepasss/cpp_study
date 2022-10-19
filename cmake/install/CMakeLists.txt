cmake_minimum_required(VERSION 3.24.1)

project(SOFTWARE_INSTALL)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(adder)

target_link_libraries(${PROJECT_NAME} adder)
target_link_directories(${PROJECT_NAME} PUBLIC adder)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR}/adder)