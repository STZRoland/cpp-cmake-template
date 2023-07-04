set(LIBRARY_NAME "lib_a")
message("lib_a binary dir: ${CMAKE_CURRENT_BINARY_DIR}")
# TODO: Make sure the library headers are written to build/include

# Create a list of all header files in the include/project directory for this
# library
file(
  GLOB
  PUBLIC_HEADER_LIST
  ${PROJECT_SOURCE_DIR}/include/${PROJECT_INCLUDE_FOLDER_NAME}/${LIBRARY_NAME}/*.h
)

# Create a list of all .cpp files in the src directory for this library
file(GLOB SOURCE_LIST ${PROJECT_SOURCE_DIR}/src/${LIBRARY_NAME}/*.cpp)

# Create a list of all .h files in the src directory for this library
file(GLOB SOURCE_HEADER_LIST ${PROJECT_SOURCE_DIR}/src/${LIBRARY_NAME}/*.h)

# Create the library
add_library(${LIBRARY_NAME} 
  ${SOURCE_LIST} ${SOURCE_HEADER_LIST} ${PUBLIC_HEADER_LIST})

# Set the include directories for this library
target_include_directories(
  ${LIBRARY_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}/include/${PROJECT_INCLUDE_FOLDER_NAME})

# Ensure that the library headers are written to build/include
# --> You have to use install() from GNUInstallDirs
# set_target_properties(${LIBRARY_NAME} PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADER_LIST}")

# Link the library to the dependencies
target_link_libraries(${LIBRARY_NAME} PRIVATE Boost::boost)
