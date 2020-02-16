#include <string>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        string converted = to_string(n);
        int sum = 0;
        int product = 1;
        for (int i = 0; i < converted.size(); i++) {
            int digit = converted[i] - '0';
            sum += digit;
            product *= digit;
        }
        return product - sum;
    }
};
