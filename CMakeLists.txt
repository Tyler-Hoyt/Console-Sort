cmake_minimum_required(VERSION 3.10)

project("Coding Practice"
  VERSION 0.0.0
  DESCRIPTION "Console sorting algorithm"
  LANGUAGES CXX)

add_compile_options(-Wall -Wextra -Wpedantic)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main
  main.cpp
  func.cpp)
