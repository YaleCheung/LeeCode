/*
 * =====================================================================================
 *
 *       Filename:  kthSmallest.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/23/16 09:47:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// inorder 
//
/* *
 *  * Definition for a binary tree node.
 *   * struct TreeNode {
 *    *     int val;
 *     *     TreeNode *left;
 *      *     TreeNode *right;
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *        * };
 *         
 *   } */

#include <stack>
using std::stack;
class TreeNode;
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> ss;
        int ret;    	
	int count = 0;
        while(root || ! ss.empty()) {
            if(root) {
                ss.push(root);
		root = root -> left;
	    } else {
                root = ss.top();
		ss.pop();
		++ count;
		if (count == k) {
                    return root->val;
		}
		root = root -> right;
		}
	    }

	}
	return -1;

    }
};
