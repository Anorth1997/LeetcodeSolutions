#include <string>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int result(0), R(0), L(0);
        for (int i(0); i < s.size(); i++) {
            if (s[i] == 'R') {
                R++;
            } else {
                L++;
            }
            if (R != 0 && L != 0 && R == L) {
                result++;
                R = 0;
                L = 0;
            }
        }
        return result;
    }
};
