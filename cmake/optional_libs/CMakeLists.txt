cmake_minimum_required(VERSION 3.24.1)

project(OPTIONAL_LIBS)

add_executable(${PROJECT_NAME} main.cpp)

# adder use logic
option(USE_ADDER "A simple lib for adding 2 floats." ON)

if(USE_ADDER)
  add_subdirectory(Adder)

  list(APPEND EXTRA_LIB_DIRS "Adder")
  list(APPEND EXTRA_INCLUDES_DIRS "${PROJECT_SOURCE_DIR}/Adder")
  list(APPEND EXTRA_LINKS "adder")

endif()

configure_file(OPTIONAL_LIBSConfig.h.in OPTIONAL_LIBSConfig.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${EXTRA_INCLUDES} ${PROJECT_BINARY_DIR})

target_link_directories(${PROJECT_NAME} PUBLIC ${EXTRA_LIB_DIRS})

target_link_libraries(${PROJECT_NAME} ${EXTRA_LINKS})