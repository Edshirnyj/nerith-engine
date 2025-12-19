add_library(nerith-platforma INTERFACE)

target_compile_features(nerith-platforma INTERFACE c_std_17)

target_include_directories(nerith-platforma INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

