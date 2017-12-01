cmake_minimum_required(VERSION 3.7)
project(TECMFS)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp DiskBlock.cpp DiskBlock.h TecMFS_Disk.cpp TecMFS_Disk.h tinyxml2.cpp tinyxml2.h TCPServer.cpp TCPServer.h)
add_executable(TECMFS ${SOURCE_FILES})