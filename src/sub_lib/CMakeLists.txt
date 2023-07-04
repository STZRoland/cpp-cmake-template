set(LIBRARY_NAME "sub_lib")

file(
    GLOB
    LIBRARY_SOURCE_LIST
    *.cpp
)

file(
    GLOB
    LIBRARY_HEADER_LIST
    *.h
)

add_library(${LIBRARY_NAME}
    ${LIBRARY_SOURCE_LIST} ${LIBRARY_HEADER_LIST}
)

target_include_directories(
  ${LIBRARY_NAME}
  PUBLIC ${CMAKE_CURRENT_LIST_DIR} 
)