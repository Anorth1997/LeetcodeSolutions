#include <string>

using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string temp(to_string(num));
        for(char &ch: temp)
            if(ch=='6') { ch='9'; break; }
        return stoi(temp);
    }
};
