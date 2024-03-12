#include <vector>
#include "answer_easy.h"

using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;

    for( int i = 1 ; i < prices.size() ; i ++) {
        if(prices[i] > prices[i-1]) {
            maxProfit = max(maxProfit, prices[i] - prices[i-1]);
        }

        prices[i] = min(prices[i-1], prices[i]);
    }

    return maxProfit;
}