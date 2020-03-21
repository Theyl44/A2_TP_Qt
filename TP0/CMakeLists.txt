cmake_minimum_required(VERSION 3.13)
project(TP0)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 14)
add_executable(TP0 main.cpp)
target_link_libraries(TP0 Qt5::Widgets)