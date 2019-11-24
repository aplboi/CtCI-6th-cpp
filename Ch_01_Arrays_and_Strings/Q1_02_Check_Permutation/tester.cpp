#define CATCH_CONFIG_MAIN

#include "../../catch2/catch.hpp"

using namespace std;

TEST_CASE("Case 1")
{
    string s = "apple";
    string t = "epapl";
    REQUIRE(check_permutation(s, t) == true);
}
TEST_CASE("Case 2")
{
    string s = "a";
    string t = "a";
    REQUIRE(check_permutation(s, t) == true);
}
TEST_CASE("Case 3")
{
    string s = "Japan";
    string t = "Japam";
    REQUIRE(check_permutation(s, t) == false);
}
TEST_CASE("Case 4")
{
    string s = "ioewsfsdfo";
    string t = "asdkas";
    REQUIRE(check_permutation(s, t) == false);
}
TEST_CASE("Case 5")
{
    string s = "aabbccddeeffgg";
    string t = "gfbeecadcafgbd";
    REQUIRE(check_permutation(s, t) == true);
}
