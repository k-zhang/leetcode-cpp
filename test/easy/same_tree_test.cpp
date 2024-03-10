#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"
#include "common.h"

TEST_CASE( "Test same tree") {
    auto tree1 = constructTree(new int[]{1,2,3}, 3);
    auto tree2 = constructTree(new int[]{1,2,3}, 3);
    REQUIRE( isSameTree(tree1, tree2) == true );

    auto tree3 = constructTree(new int[]{1, 2}, 2);
    auto tree4 = constructTree(new int[]{1,EMPTY_NODE,3}, 3);
    REQUIRE( isSameTree(tree3, tree4) == false );

    auto tree5 = constructTree(new int[]{1, 2, 1}, 3);
    auto tree6 = constructTree(new int[]{1, 1, 2}, 3);
    REQUIRE( isSameTree(tree5, tree6) == false );

    auto tree7 = constructTree(new int[]{}, 0);
    auto tree8 = constructTree(new int[]{}, 0);
    REQUIRE( isSameTree(tree7, tree8) == true );

    auto tree9 = constructTree(new int[]{1}, 1);
    auto tree10 = constructTree(new int[]{1}, 1);
    REQUIRE( isSameTree(tree9, tree10) == true );

    auto tree11 = constructTree(new int[]{1, 2, 3, 4, 5, 6, 7,8,9}, 9);
    auto tree12 = constructTree(new int[]{1, 2, 3, 4, 5, 6, 7,8,9}, 9);
    REQUIRE( isSameTree(tree11, tree12) == true );
}