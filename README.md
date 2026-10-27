# Movie Manager - Team Code Masters

## Project Overview
A C++ application developed by **Code Masters** to help users organize movies they have seen or want to watch by adding, editing, and rating them.

## Environment & Requirements
- **Operating System:** macOS (compatible with Windows and Linux via CMake)
- **Compiler:** Apple Clang / GCC / MSVC supporting **C++17**
- **Build System:** CMake (Version 3.10 or higher)
- **External Dependencies:** None (relies entirely on the C++ Standard Library: `<vector>`, `<memory>`, `<string>`, `<iostream>`)

## Build and Run Instructions
Run the following commands in your terminal from the project root directory:

```bash
# 1. Create and move into a build directory
mkdir build
cd build

# 2. Generate the build files using CMake
cmake ..

# 3. Compile the project
cmake --build .

# 4. Run the executable
./MovieManager
