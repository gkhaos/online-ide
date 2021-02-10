cmake_minimum_required(VERSION 3.14)
project(tryme VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

if (EXISTS ${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else ()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, try run `conan install .`")
endif ()
include_directories(CONAN_INCLUDE_DIRS_FMT)

file(GLOB PROJECT_SOURCES
    "${PROJECT_SOURCE_DIR}/include/*.hpp"
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

add_executable(${PROJECT_NAME} main.cpp ${PROJECT_SOURCES})
