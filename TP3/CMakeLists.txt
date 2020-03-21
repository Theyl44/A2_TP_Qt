cmake_minimum_required(VERSION 3.13)
project(TP3)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 14)
add_executable(TP3 main.cpp exo1.cpp exo2.cpp exo1.cpp exo1.h exo2.cpp exo2.h)
target_link_libraries(TP3 Qt5::Widgets)