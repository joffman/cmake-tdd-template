#include <catch2/catch.hpp>

#include <sstream>

#include "mylib/say_hello.h"

using namespace mylib;

TEST_CASE("say_hello function works", "[say_hello]")
{
    std::ostringstream oss;
    say_hello(oss);
    REQUIRE(oss.str() == "Hello World!\n");
}
