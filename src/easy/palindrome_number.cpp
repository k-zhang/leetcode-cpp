#include <limits>

using namespace std;

bool isPalindrome(int x) {
    if(x<0) return false;

    int rev = 0;
    int y = x;
    while(y != 0) {
        int pop = y % 10;
        y = y / 10;

        if((rev > numeric_limits<int>::max() / 10) || (rev == numeric_limits<int>::max() / 10 && pop > 7)) return false;

        rev = rev * 10 + pop;
    }

    return rev == x;
}
