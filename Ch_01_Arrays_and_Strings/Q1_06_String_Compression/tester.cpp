#define CATCH_CONFIG_MAIN

#include "../../catch2/catch.hpp"

using namespace std;

TEST_CASE("Case 1")
{
    REQUIRE(string_compression("aabcccccaaa") == "a2b1c5a3");
}
TEST_CASE("Case 2")
{
    REQUIRE(string_compression("abc") == "abc");
}
TEST_CASE("Case 3")
{
    REQUIRE(string_compression("abbccc") == "abbccc");
}
TEST_CASE("Case 4")
{
    REQUIRE(string_compression("aabbccc") == "a2b2c3");
}
TEST_CASE("Case 5")
{
    REQUIRE(string_compression("aaaaaaaaaaaaaaaaaaaaaa") == "a22");
}
