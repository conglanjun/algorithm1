cmake_minimum_required(VERSION 3.10)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

project(algorithm)
set(CMAKE_CXX_STANDARD 14)

set(SORT_SRC
        ${PROJECT_SOURCE_DIR}/src/sort.cpp)

add_executable(algorithm ${CMAKE_CURRENT_SOURCE_DIR}/src/run_sort.cpp ${SORT_SRC})