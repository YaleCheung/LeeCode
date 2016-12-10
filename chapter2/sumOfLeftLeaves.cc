/*
 * =====================================================================================
 *
 *       Filename:  sumOfLeftLeaves.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/2016 21:08:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

 // Definition for a binary tree node.
 
#define NULL 0
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL)
                return 0;
        if (root -> left && root -> left -> left == NULL && root -> left -> right == NULL) 
            return root -> left -> val + sumOfLeftLeaves(root->right);
        else
            return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};
