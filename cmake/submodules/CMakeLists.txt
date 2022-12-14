cmake_minimum_required(VERSION 3.24.1)

project(SUBMODULES)

add_executable(${PROJECT_NAME} main.cpp)

# DOWNLOAD ALL THE SUBMODULES
find_package(Git QUIET)
if(GIR_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")

  #Update submodules as needed
  option(GIT_SUBMODULE "Check submodule during build" ON)
  if (GIT_SUBMODULE)
    message(STATUS "Submodule update")
    execute_process(COMMANT ${GIT_EXCUTABLE} submodule update --init --recursive
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                    RESULRT_VARIABLE GIT_SUBMOD_RESULT)
    
    if(NOT GIT_SUBMOD_RESULT EQUAL "0")
      message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout")

    endif()
  endif()
endif()

# CHECK ALL THE SUBMODULES
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
  message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turne off or failed. Please try again!")
endif()

add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} PUBLIC external/glfw/include)

target_link_directories(${PROJECT_NAME} PUBLIC external/glfw/src)

target_link_libraries(${PROJECT_NAME} glfw)
