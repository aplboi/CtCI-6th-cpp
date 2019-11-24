#define CATCH_CONFIG_MAIN

#include "../../catch2/catch.hpp"

using namespace std;

TEST_CASE("Case 1")
{
    string str = "Mr John Smith    ";
    int trueLength = 13;
    string answer = "Mr%20John%20Smith";
    REQUIRE(urlify(str, trueLength) == answer);
}
TEST_CASE("Case 2")
{
    string str = "O O  ";
    int trueLength = 3;
    string answer = "O%20O";
    REQUIRE(urlify(str, trueLength) == answer);
}
TEST_CASE("Case 3")
{
    string str = "O   O      ";
    int trueLength = 5;
    string answer = "O%20%20%20O";
    REQUIRE(urlify(str, trueLength) == answer);
}
TEST_CASE("Case 4")
{
    string str = "O   ";
    int trueLength = 2;
    string answer = "O%20";
    REQUIRE(urlify(str, trueLength) == answer);
}
