#define CATCH_CONFIG_MAIN

#include "../../catch2/catch.hpp"

using namespace std;

TEST_CASE("Case 1")
{
    REQUIRE(one_away("pale", "ple") == true);
}
TEST_CASE("Case 2")
{
    REQUIRE(one_away("pales", "pale") == true);
}
TEST_CASE("Case 3")
{
    REQUIRE(one_away("pale", "bale") == true);
}
TEST_CASE("Case 4")
{
    REQUIRE(one_away("pale", "bae") == false);
}
TEST_CASE("Case 5")
{
    REQUIRE(one_away("pale", "apale") == true);
}
TEST_CASE("Case 6")
{
    REQUIRE(one_away("pale", "ale") == true);
}
TEST_CASE("Case 7")
{
    REQUIRE(one_away("pale", "pal") == true);
}
