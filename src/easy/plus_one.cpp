#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    for(int i = (int)digits.size() - 1 ; i >= 0 ; i --) {
        if(digits[i] + 1 < 10) {
            digits[i] += 1;
            break;
        }else{
            digits[i] = 0;
        }
    }

    if(digits[0] == 0) {
        auto newDigits = vector<int>(digits.size() + 1);
        newDigits[0] = 1;
        digits = newDigits;
    }

    return digits;
}