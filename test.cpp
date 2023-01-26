#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ( "NthFibonacci properly computed"){
    REQUIRE(NthFibonacci(1) == 1);
    REQUIRE(NthFibonacci(2) == 1);
    REQUIRE(NthFibonacci(5) == 5);
    REQUIRE(NthFibonacci(7) == 13);
    REQUIRE(NthFibonacci(10) == 55);
}

TEST_CASE ( "Sums are computed"){
    std::vector<int> a = {1};
    REQUIRE(Sum(a) == 1);
    std::vector<int> b = { 1, 2, 3, 4};
    REQUIRE(Sum(b) == 10);
    std::vector<int> c = { 1, 2, 3, 4, 5};
    REQUIRE(Sum(c) == 15);
    std::vector<int> d = { 1, 2, 3, 4, 5, 6 };
    REQUIRE(Sum(d) == 21);
}
