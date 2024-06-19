option(USE_MYLIB_S2 "Use second string" ON)

add_library(my_lib SHARED my_lib.cpp)
target_include_directories(my_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if (USE_MYLIB_S2)
  target_compile_definitions(my_lib PRIVATE "USE_MYLIB_S2")
endif()