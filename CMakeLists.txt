cmake_minimum_required(VERSION 3.10.0)
project(nerith-engine VERSION 0.1.0 LANGUAGES C)

# Add modules lib
add_subdirectory(lib/nerith-audio)
add_subdirectory(lib/nerith-graphica)
add_subdirectory(lib/nerith-graphica-framework)
add_subdirectory(lib/nerith-inputs)
add_subdirectory(lib/nerith-mathematica)
add_subdirectory(lib/nerith-win-common)
add_subdirectory(lib/nerith-win-desktop)

# Add main project
add_subdirectory(src/nerith-core)