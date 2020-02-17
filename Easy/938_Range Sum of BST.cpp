#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root == NULL) {
            return 0;
        }
        
        int self_val = root->val >= L && root->val <= R ? root->val : 0;
        int leftSum = root->val > L ? rangeSumBST(root->left, L, R) : 0;
        int rightSum = root->val < R ? rangeSumBST(root->right, L, R) : 0;
        return leftSum + rightSum + (root->val >= L && root->val <= R ? root->val : 0);
    }
};