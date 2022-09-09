cmake_minimum_required(VERSION 3.8)

project(TTFramework LANGUAGES C CXX)
set(CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

