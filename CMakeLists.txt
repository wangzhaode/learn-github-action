cmake_minimum_required(VERSION 3.0)
project(aone_cpp_test)

# include
include_directories(${CMAKE_CURRENT_LIST_DIR}/include/)

#source file
FILE(GLOB FOO_SRC ${CMAKE_CURRENT_LIST_DIR}/src/foo.cpp)

# target
add_library(FOO STATIC ${FOO_SRC})

# test
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/test)
