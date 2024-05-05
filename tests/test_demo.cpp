#include <catch2/catch_test_macros.hpp>

#include "demo.h"

TEST_CASE("Fibonacci")
{
    REQUIRE(demo::fibonacci(0) == 0);
    REQUIRE(demo::fibonacci(1) == 1);
    REQUIRE(demo::fibonacci(2) == 1);
    REQUIRE(demo::fibonacci(3) == 2);
    REQUIRE(demo::fibonacci(4) == 3);
    REQUIRE(demo::fibonacci(5) == 5);
    REQUIRE(demo::fibonacci(6) == 8);
    REQUIRE(demo::fibonacci(7) == 13);
    REQUIRE(demo::fibonacci(8) == 21);
    REQUIRE(demo::fibonacci(9) == 34);
    REQUIRE(demo::fibonacci(10) == 55);
}

TEST_CASE("Factorial")
{
    REQUIRE(demo::factorial(0) == 1);
    REQUIRE(demo::factorial(1) == 1);
    REQUIRE(demo::factorial(2) == 2);
    REQUIRE(demo::factorial(3) == 6);
    REQUIRE(demo::factorial(4) == 24);
    REQUIRE(demo::factorial(5) == 120);
    REQUIRE(demo::factorial(6) == 720);
    REQUIRE(demo::factorial(7) == 5040);
    REQUIRE(demo::factorial(8) == 40320);
    REQUIRE(demo::factorial(9) == 362880);
    REQUIRE(demo::factorial(10) == 3628800);
}
