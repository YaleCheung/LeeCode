#include <iostream>
#include <stack>
using std::stack;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) :
        val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        // binary tree post-order traverse;
        stack<TreeNode *> s;
        TreeNode* p = root;
        TreeNode* last_visit = NULL;
        int s_sum = 0;
        while(p || ! s.empty()) {
            while(p) {
                s_sum += p->val;
                s.push(p);
                p = p->left;
            }
            if ((! s.empty())) {
                p = s.top();
                if ((NULL == p->left && NULL == p->right) || 
                   (p->right != NULL && p->right == last_visit) || 
                   (p->right == NULL && p->left != NULL && p->left == last_visit)) {
                    if ((NULL == p->left && NULL == p->right) && (s_sum == sum))
		        return true;
                    last_visit = p;
                    s_sum -= p->val;
                    s.pop();
                    p = NULL;
                } else 
                    // has right node
                    p = p->right;
            }
        }
        return false;
    }
};
