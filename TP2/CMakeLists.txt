cmake_minimum_required(VERSION 3.7)
project(TP2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TP2 main.cpp SQLClientWindow.cpp ButtonsPanel.cpp LabeledTextField.cpp ConfigurationDialog.cpp SQLClientWindow.cpp SQLClientWindow.h LabeledTextField.cpp LabeledTextField.h ConfigurationDialog.cpp ConfigurationDialog.h ButtonsPanel.cpp ButtonsPanel.h)

target_link_libraries(TP2 Qt5::Widgets)
