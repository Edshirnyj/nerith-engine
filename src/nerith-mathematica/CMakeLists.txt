add_library(nerith-mathematica STATIC 
    mathematica.c mathematica.h
)

target_compile_features(nerith-mathematica PRIVATE c_std_17)

target_link_libraries(nerith-mathematica PRIVATE m)

target_include_directories(nerith-mathematica PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(nerith-mathematica PRIVATE nerith-platforma)

