cmake_minimum_required(VERSION 3.24.1)
<<<<<<< HEAD

project(VERSIONING VERSION 1.0)

add_executable(${PROJECT_NAME} main.cpp)
=======
project(VERSIONING VERSION 1.0)

configure_file(VERSIONINGConfig.h.in VERSIONINGConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
>>>>>>> review
