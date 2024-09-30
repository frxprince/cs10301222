cmake_minimum_required(VERSION 3.16)

project(TreeTraverse1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TreeTraverse1 main.cpp)

include(GNUInstallDirs)
install(TARGETS TreeTraverse1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
