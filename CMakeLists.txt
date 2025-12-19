cmake_minimum_required(VERSION 3.16)
project(nerith-engine LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Add modules
add_subdirectory(src/nerith-mathematica)
add_subdirectory(src/nerith-platforma)