cmake_minimum_required(VERSION 3.26)
project(LibrarySystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(LibrarySystem main.cpp
        LibraryAccount.cpp
        LibraryAccount.h
)
