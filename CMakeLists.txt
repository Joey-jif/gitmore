cmake_minimum_required(VERSION 3.10)
project(MovieManager)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include current directory for headers
include_directories(.)

# Add all source AND header files
add_executable(MovieManager 
    main.cpp 
    Movie.cpp 
    MovieManager.cpp
    Movie.h
    MovieManager.h
)