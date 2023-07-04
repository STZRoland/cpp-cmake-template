# Create a list of all header files in the include/project directory for this
# library
file(
  GLOB
  PUBLIC_HEADER_LIST
  ${PROJECT_SOURCE_DIR}/include/${PROJECT_LIBRARY_NAME}/*.h
  # ${PROJECT_SOURCE_DIR}/include/*.h
)

# Create a list of all .cpp files in the src directory for this library
file(GLOB SOURCE_LIST ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Create a list of all .h files in the src directory for this library
file(GLOB SOURCE_HEADER_LIST ${PROJECT_SOURCE_DIR}/src/*.h)

# Create the library
add_library(${PROJECT_LIBRARY_NAME} 
  ${SOURCE_LIST} ${SOURCE_HEADER_LIST} ${PUBLIC_HEADER_LIST})

# Set the include directories for this library
target_include_directories(
  ${PROJECT_LIBRARY_NAME}
  # PUBLIC ${PROJECT_SOURCE_DIR}/include/${PROJECT_LIBRARY_NAME} # for #include<lib.h>
  PUBLIC ${PROJECT_SOURCE_DIR}/include # for #include<my_lib/lib.h>
)

# Ensure that the library headers are written to build/include
# --> You have to use install() from GNUInstallDirs

# Link the library to the dependencies
target_link_libraries(${PROJECT_LIBRARY_NAME} PRIVATE Boost::boost)
