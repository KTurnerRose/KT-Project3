cmake_minimum_required(VERSION 3.8)
project(KT-Project3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Werror=return-type")

add_executable(KT-Project3 makeup.h makeup.cpp consumer.h consumer.cpp foundation.h foundation.cpp brand.h brand.cpp main.cpp)
add_executable(KT-Project3-Testing makeup.h makeup.cpp consumer.h consumer.cpp foundation.h foundation.cpp brand.h brand.cpp testing.cpp)