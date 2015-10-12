cmake_minimum_required(VERSION 2.6)
project(l3_cpp_tp3)

add_executable(l3_cpp_tp3 rectangle.cpp triangle.cpp segment.cpp figuregeometrique.cpp point.cpp main.cpp)

install(TARGETS l3_cpp_tp3 RUNTIME DESTINATION bin)
