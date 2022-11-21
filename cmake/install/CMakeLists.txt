cmake_minimum_required(VERSION 3.24.1)

project(SOFTWARE_INSTALL)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(adder)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/adder ${PROJECT_BINARY_DIR})

target_link_libraries(${PROJECT_NAME} adder)
target_link_directories(${PROJECT_NAME} PUBLIC adder)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
# install(FILES "${PROJECT_BINARY_DIR}/SOFTWARE_INSTALLConfig.h" DESTINATION include)
# & make install