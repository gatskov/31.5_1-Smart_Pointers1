cmake_minimum_required (VERSION 3.24)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (SmartPointers1  "main.cpp " " ${MY_INCLUDE_DIR}/dog.h" " ${MY_INCLUDE_DIR}/toy.h")
target_include_directories(SmartPointers1 PUBLIC ${MY_INCLUDE_DIR})
