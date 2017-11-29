cmake_minimum_required(VERSION 3.7)
project(TECMFS)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp DiskNode.cpp DiskNode.h DiskBlock.cpp DiskBlock.h LinkedList.cpp LinkedList.h LLNode.cpp LLNode.h TecMFS_Disk.cpp TecMFS_Disk.h)
add_executable(TECMFS ${SOURCE_FILES})