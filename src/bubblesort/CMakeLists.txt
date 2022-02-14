get_filename_component(snippet ${CMAKE_CURRENT_SOURCE_DIR} NAME)

cmake_minimum_required(VERSION 3.14)

project(${snippet} CXX)
set (CMAKE_CXX_STANDARD 17)

add_library(${snippet} 
    ${snippet}.cpp 
    ${snippet}.h 
)

target_include_directories(${snippet}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(test)
