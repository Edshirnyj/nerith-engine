cmake_minimum_required(VERSION 3.10.0)
project(nerith-engine VERSION 0.1.0 LANGUAGES C)

# Add modules
add_subdirectory(src/nerith-audio)
add_subdirectory(src/nerith-graphica)
add_subdirectory(src/nerith-graphica-framework)
add_subdirectory(src/nerith-inputs)
add_subdirectory(src/nerith-mathematica)
add_subdirectory(src/nerith-platforma)
add_subdirectory(src/nerith-win-common)
add_subdirectory(src/nerith-win-desktop)
add_subdirectory(src/nerith-core)