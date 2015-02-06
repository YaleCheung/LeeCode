//Programming: Given a binary tree, find its minimum depth.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode *root) {
        // use recrusive method; 
        if (root == NULL)
            return -1;
        int left_depth = minDepth(root->left);
        int right_depth = minDepth(root->right);
        return (left_depth > right_depth) ? right_depth + 1 : left_depth + 1;
    }
};
