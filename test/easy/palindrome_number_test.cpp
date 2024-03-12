#include "catch2/catch_test_macros.hpp"
#include "answer_easy.h"

TEST_CASE( "Test palindrome number") {
    REQUIRE( isPalindrome(0) == true );
    REQUIRE( isPalindrome(5) == true );
    REQUIRE( isPalindrome(121) == true );
    REQUIRE( isPalindrome(-121) == false );
    REQUIRE( isPalindrome(10) == false );
    REQUIRE( isPalindrome(2147483647) == false );
    REQUIRE( isPalindrome(-2147483648) == false );
}
