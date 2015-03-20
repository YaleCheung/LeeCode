/**
 *@ Definition for binary tree
 *@ struct TreeNode {
 *@     int val;
 *@     TreeNode *left;
 *@     TreeNode *right;
 *@     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *@ };
 **/
class Solution {
    bool _isBalanced(TreeNode* root, int& depth) {
        if (NULL == root) {
            depth = 0;
            return true;
        }
        bool left_bool = _isBalanced(root->left, depth);
        int left_depth = depth;
        bool right_bool = _isBalanced(root->right, depth);
        int right_depth = depth;
        depth = left_depth > right_depth ? left_depth + 1 : right_depth + 1;
        return left_bool && right_bool && abs(left_depth-right_depth) < 2;
    }
public:
    bool isBalanced(TreeNode *root) {
        int depth = 0;
        return _isBalanced(root, depth);
    }
};
