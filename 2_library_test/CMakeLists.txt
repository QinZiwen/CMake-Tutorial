cmake_minimum_required(VERSION 3.10)
project(TutorialBasic VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(sub_lib)

add_executable(library_test library_test.cpp)
target_link_libraries(library_test PUBLIC my_lib)
target_include_directories(library_test PUBLIC "${PROJECT_SOURCE_DIR}/sub_lib")
