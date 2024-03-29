#include <memory>
#include "answer_easy.h"

using namespace std;

int climbStairs(int n) {
    if(n == 1) return 1;

    auto dp = std::make_unique<int[]>(n);
    dp[0] = 1; dp[1] = 2;

    for(int i = 2 ; i < n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n-1];
}
