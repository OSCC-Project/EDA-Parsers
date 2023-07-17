cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 20)

# add include and lib dirs
include_directories(SYSTEM ${HOME_THIRDPARTY})
include_directories(${HOME_UTILITY}/stdBase/include)
include_directories(${HOME_UTILITY}/stdBase/graph)
include_directories(${HOME_UTILITY}/log)
include_directories(${HOME_UTILITY}/string)
include_directories(${HOME_UTILITY})

link_directories(${CMAKE_BINARY_DIR}/lib)

add_subdirectory(log)
add_subdirectory(string)
add_subdirectory(stdBase)
add_subdirectory(solver)