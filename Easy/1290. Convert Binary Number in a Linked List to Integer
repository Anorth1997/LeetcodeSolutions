#include <string>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result(0);
        for (; head != NULL; head = head->next) result = result * 2 + head->val;
        return result;
    }
};
