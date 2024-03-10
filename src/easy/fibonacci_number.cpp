#include <memory>

using namespace std;

int fibonacciNumber(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    auto dp = make_unique<int[]>(n+1);
    dp[0] = 0; dp[1] = 1;

    for(int i = 2 ; i <=n ; i ++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}