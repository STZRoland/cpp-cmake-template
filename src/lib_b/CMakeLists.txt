set(LIBRARY_NAME "lib_b")

# Create a list of all header files in the include/project directory for this
# library
file(
  GLOB
  HEADER_LIST
  ${PROJECT_SOURCE_DIR}/include/${PROJECT_INCLUDE_FOLDER_NAME}/${LIBRARY_NAME}/*.h
)

# Create a list of all .cpp files in the src directory for this library
file(GLOB SOURCE_LIST ${PROJECT_SOURCE_DIR}/src/${LIBRARY_NAME}/*.cpp)

# Create the library
add_library(${LIBRARY_NAME} ${SOURCE_LIST} ${HEADER_LIST})

# Set the include directories for this library
target_include_directories(
  ${LIBRARY_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}/include/${PROJECT_INCLUDE_FOLDER_NAME})

# Link the library to the dependencies target_link_libraries(${LIBRARY_NAME}
# PRIVATE Boost::boost)
