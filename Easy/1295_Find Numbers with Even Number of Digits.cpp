#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for (auto i = nums.begin(); i != nums.end(); ++i) {
            if (to_string(*i).size() % 2 == 0) 
                result++;
        }
        return result;
    }
};
