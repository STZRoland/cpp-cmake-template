cmake_minimum_required(VERSION 3.2)

# Define the project
project(
  CMakeTemplate
  VERSION 0.1.0
  LANGUAGES CXX)

# Define the name of the subfolder where the project's include files are located
set(PROJECT_INCLUDE_FOLDER_NAME "cpp-cmake-template")

# Specify the required libraries
find_package(Boost REQUIRED)

# The compiled library code is here
add_subdirectory(src)

# Append the cmake directory to the module path list
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# Define the executable (move to a subfolder along with the main.cpp file)
add_executable(CMakeTemplate main.cpp)
target_compile_features(CMakeTemplate PRIVATE cxx_std_17)
target_link_libraries(CMakeTemplate PRIVATE "lib_a" "lib_b")
