/**
 * Given a binary tree, return the preorder traversal of its nodes' values.

 * For example:
 * Given binary tree {1,#,2,3},
   1
    \
     2
     /
    3
    return [1,2,3].
    Note: Recursive solution is trivial, could you do it iteratively?
**/

/**
 *Definition for binary tree
 *struct TreeNode {
 *    int val;
 *    TreeNode *left;
 *    TreeNode *right;
 *    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */
class Solution {
    void _preorderTraversal(TreeNode* root, vector<int>& ret) {
            if (NULL == root) 
                return;
            ret.push_back(root->val);
            if (NULL != root->left)
                _preorderTraversal(root->left, ret);
            if (NULL != root -> right)
                _preorderTraversal(root->right, ret);
        }
	public:
    vector<int> preorderTraversal(TreeNode *root) {
            vector<int> ret;
            _preorderTraversal(root, ret);
            return ret;
        }
};
