#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "Sums are computed"){
    REQUIRE(Sum(std::vector<int> a = {1}) == 1);
    REQUIRE(Sum(std::vector<int> a = std::vector<int> a = { 1, 2, 3, 4}) == 10);
    REQUIRE(Sum(std::vector<int> a = std::vector<int> a = { 1, 2, 3, 4, 5}) == 15);
    REQUIRE(Sum(std::vector<int> a = std::vector<int> a = { 1, 2, 3, 4, 5, 6 }) == 21);
}

TEST_CASE ( "NthFibonacci properly computed"){
    REQUIRE(NthFibonacci(1) == 1);
    REQUIRE(NthFibonacci(2) == 1);
    REQUIRE(NthFibonacci(5) == 5);
    REQUIRE(NthFibonacci(7) == 13);
    REQUIRE(NthFibonacci(10) == 34);
}