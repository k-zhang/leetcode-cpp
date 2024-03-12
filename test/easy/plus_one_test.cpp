#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"
#include <vector>

TEST_CASE( "Test plus one") {
    std::vector<int> input1 = {0};
    REQUIRE( plusOne(input1) == std::vector<int>{1} );

    std::vector<int> input2 = {1,2,3};
    REQUIRE( plusOne(input2) == std::vector<int>{1,2,4} );

    std::vector<int> input3 = {4,3,2,1};
    REQUIRE( plusOne(input3) == std::vector<int>{4,3,2,2} );

    std::vector<int> input4 = {4,3,2,9};
    REQUIRE( plusOne(input4) == std::vector<int>{4,3,3,0} );

    std::vector<int> input5 = {4,3,9,9};
    REQUIRE( plusOne(input5) == std::vector<int>{4,4,0,0} );

    std::vector<int> input6 = {4,9,9,9};
    REQUIRE( plusOne(input6) == std::vector<int>{5,0,0,0} );

    std::vector<int> input7 = {9,9,9,9};
    REQUIRE( plusOne(input7) == std::vector<int>{1,0,0,0,0} );
}
