cmake_minimum_required(VERSION 3.27)
project(somename0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO) # for maximum portability

add_executable(${PROJECT_NAME} bruhtest.cpp)

add_library(somelib STATIC bruh.cpp)

target_link_libraries(${PROJECT_NAME} somelib)