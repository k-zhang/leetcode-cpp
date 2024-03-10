#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"

TEST_CASE( "Test armstrong number") {
    REQUIRE( isArmstrong(153) == true );
    REQUIRE( isArmstrong(123) == false );
    REQUIRE( isArmstrong(9234567) == false );
}

TEST_CASE( "Test armstrong number with the old string style") {
    REQUIRE(isArmstrongCStyle(153) == true );
    REQUIRE(isArmstrongCStyle(123) == false );
    REQUIRE(isArmstrongCStyle(9234567) == false );
}