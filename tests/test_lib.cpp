#define CATCH_CONFIG_MAIN

#include <catch2/catch_all.hpp>
#include <my_lib/lib.h>
#include <string>

TEST_CASE("Testing lib messages") {
    SECTION("Testing lib") {
        std::string message = "Message from lib";
        REQUIRE(lib::getMessage() == message);
    }
    SECTION("Testing sub_lib") {
        std::string message = "This message is wrong";
        REQUIRE(lib::getSubLibMessage() != message);
    }
}
