cmake_minimum_required(VERSION 3.10)
project(TutorialBasic VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
configure_file(config.h.in config.h)
add_executable(basic basic.cpp)
target_include_directories(basic PUBLIC ${CMAKE_CURRENT_BINARY_DIR})