cmake_minimun_required(VERSION 3.15)
project(AAI)
set(CMAKE_CXX_STANDARD 17)
set(HOME ${CMAKE_CURRENT_SOURCE_DIR})
set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

include_directories(${HOME}/include)

add_subdirectory(${HOME}/src)

add_excutable(search ${HOME}/src/search.cpp)