# Cpp-CMake-Template

This is a template for a C++ project using CMake.

## Description
There are currently three different templates available:
1. branch `main`: This is the most complete template. It contains a `main.cpp` file that uses a simple library in the `src` folder. This library also uses a private sub-library in the `src` folder.
2. branch `basic`: This is the most basic template. It contains a `main.cpp` file that uses a simple library in the `src` folder.
3. branch `testing`: This template has the same structure as the `main` branch, but it also implements unit tests using the [Catch2](https://github.com/catchorg/Catch2) library.

## Getting Started

### Dependencies
- [CMake](https://cmake.org/) is required to build the project.
- [Boost](https://www.boost.org/) is required, only for the purpose of showing how to use an external library.
    - Install on Ubuntu: `sudo apt install libboost-all-dev`
    - Install on Mac with brew: `brew install boost`
    - Install on Windows: [Boost Getting Started on Windows](https://www.boost.org/users/download/)
- Catch2 is fetched automatically by CMake when using the `testing` branch, so no need to install it manually.

### Installing
Git clone the repository and specify the branch you want to use:
```
git clone <repository_url> -b <branch_name>
```

### Executing program
In the top-level directory type:
1. configure: `cmake -B build`
2. generate: `cmake --build build`
3. run: `./build CMakeTemplate`

## Resources for learning more about CMake
- Basics: https://cliutils.gitlab.io/modern-cmake/chapters/basics.html
- Project structure
  - https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html
  - https://www.siliceum.com/en/blog/post/cmake_01_cmake-basics
- Comprehensive Book: https://crascit.com/professional-cmake/

## License
This project is licensed under the [![MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT) License.
