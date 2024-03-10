#include <string>
#include <iostream>
#include "answer_easy.h"

using namespace std;

bool isArmstrong(int n) {
    string s = to_string(n);
    auto power = s.length();

    int sum = 0;
    for(int i = 0 ; i < power; i++) {
        auto numStr = s.substr(i, 1);
        auto num = stoi(numStr, nullptr, 10);
        sum += pow(num, power);
    }

    return sum == n;
}