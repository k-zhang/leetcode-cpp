#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"
#include <vector>

TEST_CASE( "Test Best Time To Buy Sell Stock") {
    std::vector<int> input1 = {7,1,5,3,6,4};
    REQUIRE( maxProfit(input1) == 5 );

    std::vector<int> input2 = {7,6,4,3,1};
    REQUIRE( maxProfit(input2) == 0 );

    std::vector<int> input3 = {1};
    REQUIRE( maxProfit(input3) == 0 );

    std::vector<int> input4 = {1,1};
    REQUIRE( maxProfit(input4) == 0 );

    std::vector<int> input5 = {1,0,1};
    REQUIRE( maxProfit(input5) == 1 );
}
