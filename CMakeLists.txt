cmake_minimum_required(VERSION 3.13)
project(sort_method)

set(CMAKE_CXX_STANDARD 14)



include_directories(./inc )
aux_source_directory(./src SRC)

add_executable(sort_method ${SRC})