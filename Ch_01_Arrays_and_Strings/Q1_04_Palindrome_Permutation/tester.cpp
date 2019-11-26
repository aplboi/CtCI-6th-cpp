#define CATCH_CONFIG_MAIN

#include "../../catch2/catch.hpp"

using namespace std;

TEST_CASE("Case 1")
{
    REQUIRE(palindrome_permutation("Tact Coa") == true);
}
TEST_CASE("Case 2")
{
    REQUIRE(palindrome_permutation("I am who am I") == false);
}
TEST_CASE("Case 3")
{
    REQUIRE(palindrome_permutation("I am who whoami") == true);
}
TEST_CASE("Case 4")
{
    REQUIRE(palindrome_permutation("e") == true);
}
TEST_CASE("Case 5")
{
    REQUIRE(palindrome_permutation("e e e e e e") == true);
}
TEST_CASE("Case 6")
{
    REQUIRE(palindrome_permutation("palindromepadomelinr") == true);
}
TEST_CASE("Case 7")
{
    REQUIRE(palindrome_permutation("yeah yeah yeah") == false);
}
TEST_CASE("Case 8")
{
    REQUIRE(palindrome_permutation("yeah yeah") == true);
}
TEST_CASE("Case 9")
{
    REQUIRE(palindrome_permutation("abazzz") == false);
}
