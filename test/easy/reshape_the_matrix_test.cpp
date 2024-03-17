#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"
#include <vector>

using namespace std;

TEST_CASE( "Test reshape the matrix") {
    vector<vector<int>> input1 = {{1,2}, {3,4}};
    vector<vector<int>> expected1 = {{1,2,3,4}};
    REQUIRE(matrixReshape(input1, 1, 4) == expected1);

    vector<vector<int>> input3 = {{1,2,3,4},{5,6,7,8}};
    vector<vector<int>> expected3 = {{1,2},{3,4},{5,6},{7,8}};
    REQUIRE(matrixReshape(input3, 4, 2) == expected3);

    vector<vector<int>> input4 = {{1,2,3,4}, {5,6,7,8}};
    vector<vector<int>> expected4 = {{1},{2},{3},{4},{5},{6},{7},{8}};
    REQUIRE(matrixReshape(input4, 8, 1) == expected4);

    vector<vector<int>> input5 = {{1}};
    vector<vector<int>> expected5 = {{1}};
    REQUIRE(matrixReshape(input5, 1, 1) == expected5);
}

TEST_CASE( "Test reshape the matrix when the new dimension is different from the old one") {
    vector<vector<int>> input2 = {{1,2}, {3,4}};
    vector<vector<int>> expected2 = {{1,2}, {3,4}};
    REQUIRE(matrixReshape(input2, 2, 4) == expected2);
}
