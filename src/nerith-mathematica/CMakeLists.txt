add_library(nerith-mathematica mathematica.h mathematica.c)

target_link_libraries(nerith-mathematica PUBLIC nerith-platforma)
target_include_directories(nerith-mathematica PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})