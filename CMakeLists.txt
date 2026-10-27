cmake_minimum_required(VERSION 3.10)
project(MovieManagerApp)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add header files directory
include_directories(include)

# Add source and header files to the executable target
add_executable(MovieManager 
    src/main.cpp 
    src/Movie.cpp 
    src/MovieManager.cpp
)
