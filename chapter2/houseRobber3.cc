/*
 * =====================================================================================
 *
 *       Filename:  houseRobber3.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/20/16 08:54:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Solution {
public:
    int rob(TreeNode* root) {
        if (NULL == root) {
            return 0;
	} else {
            int val1 = root->val;
	    int val2 = 0 
            if (root->left) {
		    val1 += rob(root->left->left) + rob(root->left->right);
		    val2 += rob(root->right->left);
	    }
            if (root->right){ 
		    val1 += rob(root->right->left) + rob(root->right->right);
		    val2 += rob(root->right);
	    }
	    return val1 > val2 ? val1 : val2;
	}
    }
}
