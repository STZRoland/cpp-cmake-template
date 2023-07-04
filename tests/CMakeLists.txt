Include(FetchContent)

FetchContent_Declare(Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(lib_test test_lib.cpp)

target_link_libraries(lib_test
    PRIVATE "my_lib" Catch2::Catch2WithMain
)

message("Before test")
add_test(NAME lib_test COMMAND lib_test)