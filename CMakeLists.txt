cmake_minimum_required(VERSION 3.20)

project(MiniDB)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MiniDB
    src/main.cpp
    src/database.cpp
)

target_include_directories(MiniDB
    PRIVATE
        include
)