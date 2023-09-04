cmake_minimum_required(VERSION 3.2)

# Define the project
project(
  CMakeTemplate
  VERSION 0.1.0
  LANGUAGES CXX
)

enable_testing()

# Include standard CMake modules
include(CTest)

# Define the name of the subfolder where the project's include files are located
# set(PROJECT_INCLUDE_FOLDER_NAME "my_lib")
set(PROJECT_LIBRARY_NAME "my_lib")

# Specify the required libraries
find_package(Boost REQUIRED)

# The compiled library code is here
add_subdirectory(src)
add_subdirectory(tests)

# Append the cmake directory to the module path list
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# Ensure that the libraries are shared
# set(BUILD_SHARED_LIBS ON)

# Define the executable (move to a subfolder along with the main.cpp file)
add_executable(CMakeTemplate main.cpp)
target_compile_features(CMakeTemplate PRIVATE cxx_std_17)
target_link_libraries(CMakeTemplate PRIVATE ${PROJECT_LIBRARY_NAME})
