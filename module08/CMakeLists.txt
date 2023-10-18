cmake_minimum_required(VERSION 3.26)
project(module08)

set(CMAKE_CXX_STANDARD 20)

add_executable(zooapp zoo_app.cpp Animal.cpp Animal.h
        Pet.cpp
        Pet.h
        Spider.cpp
        Spider.h
        Cat.cpp
        Cat.h
        Fish.cpp
        Fish.h)
add_executable(module08 main.cpp)
add_executable(exercise01 exercise01.cpp)
