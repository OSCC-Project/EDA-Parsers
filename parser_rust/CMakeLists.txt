add_compile_options(-w)
include_directories(${HOME_PARSER})

add_subdirectory(verilog)
add_subdirectory(liberty)
add_subdirectory(vcd)
add_subdirectory(spef)