#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"

TEST_CASE( "Test fibonacci number") {
    REQUIRE( fibonacciNumber(2) == 1 );
    REQUIRE( fibonacciNumber(3) == 2 );
    REQUIRE( fibonacciNumber(4) == 3 );
    REQUIRE( fibonacciNumber(5) == 5 );
    REQUIRE( fibonacciNumber(6) == 8 );
    REQUIRE( fibonacciNumber(7) == 13 );
    REQUIRE( fibonacciNumber(8) == 21 );
}