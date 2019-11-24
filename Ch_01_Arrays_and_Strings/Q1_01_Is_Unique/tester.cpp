#define CATCH_CONFIG_MAIN

#include "../../catch2/catch.hpp"

using namespace std;

TEST_CASE("Case 1")
{
    string str = "apple";
    REQUIRE(is_unique(str) == false);
}
TEST_CASE("Case 2")
{
    string str = "lemon";
    REQUIRE(is_unique(str) == true);
}
TEST_CASE("Case 3")
{
    string str = "banana";
    REQUIRE(is_unique(str) == false);
}
TEST_CASE("Case 4")
{
    string str = "Jamiroquai";
    REQUIRE(is_unique(str) == false);
}
TEST_CASE("Case 5")
{
    string str = "logarithm";
    REQUIRE(is_unique(str) == true);
}
TEST_CASE("Case 6")
{
    string str = "aaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbcccccccccccccccccccccccccccccccccccccccccccccccccc";
    REQUIRE(is_unique(str) == false);
}
TEST_CASE("Case 7")
{
    string str = "a";
    REQUIRE(is_unique(str) == true);
}
