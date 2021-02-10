cmake_minimum_required(VERSION 3.14)
project(tryme VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)


file(GLOB PROJECT_SOURCES
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
)
include_directories("include")

add_executable(${PROJECT_NAME} main.cpp ${PROJECT_SOURCES})
