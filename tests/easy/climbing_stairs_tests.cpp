#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"

TEST_CASE( "Test climb stairs") {
    REQUIRE( climbStairs(1) == 1 );
    REQUIRE( climbStairs(2) == 2 );
    REQUIRE( climbStairs(3) == 3 );
    REQUIRE( climbStairs(4) == 5 );
}