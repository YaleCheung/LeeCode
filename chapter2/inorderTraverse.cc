/**
 * Given a binary tree, return the inorder traversal of its nodes' values.
 *
 * For example:
 * Given binary tree {1,#,2,3},
 *    1
 *        \
 *             2
 *                 /
 *                    3
 *                    return [1,3,2].
 *
 *                    Note: Recursive solution is trivial, could you do it iteratively?
 *
 *                    confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ
 *                    */
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 **/
cllution {
    void _inorderTraversal(TreeNode* node, vector<int>& ret) {
        if (NULL == node)
            return;
        if (node -> left)
            _inorderTraversal(node->left, ret);
        ret.push_back(node -> val);
        if (node -> right)
            _inorderTraversal(node -> right, ret);
    }
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> ret;
        _inorderTraversal(root, ret);
        return ret;
    }
};
