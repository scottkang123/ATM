cmake_minimum_required(VERSION 3.22)
project(ATM)

set(CMAKE_CXX_STANDARD 14)

add_executable(ATM main.cpp include/USER.h src/USER.cpp include/ACCOUNT.h src/ACCOUNT.cpp "include/CASHBIN .h" src/CASHBIN.cpp CONSOLE.h)
