cmake_minimum_required(VERSION 3.20)
project(cPlusPlusRecipes CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH
  ${CMAKE_MODULE_PATH}
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(include)

add_subdirectory(code)
add_subdirectory(test)

enable_testing()
