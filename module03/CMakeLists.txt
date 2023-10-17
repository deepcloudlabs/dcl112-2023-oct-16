cmake_minimum_required(VERSION 3.26)
project(module03)

set(CMAKE_CXX_STANDARD 20)

add_executable(banking_application banking_application.cpp account.cpp account.h)
