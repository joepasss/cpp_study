cmake_minimum_required(VERSION 3.24.1)

project(SOFTWARE_INSTALL)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/adder)

target_link_libraries(${PROJECT_NAME} adder)
target_include_directories(adder PUBLIC ${PROJECT_SOURCE_DIR})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)