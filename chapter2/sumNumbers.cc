/*
 * =====================================================================================
 *
 *       Filename:  sumNumbers.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/17/16 14:57:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
ass Solution {
    void sum(TreeNode * root, vector < int >&rets, int s) {
	if (NULL == root) {
	    return;
	}
	s += root->val;
	if (NULL == root->left && NULL == root->right)
	    rets.push_back(s);
	if (root->left)
	    sum(root->left, rets, 10 * s);
	if (root->right)
	    sum(root->right, rets, 10 * s);
    }
  public:
    int sumNumbers(TreeNode * root) {
	if (root == NULL)
	    return 0;
	vector < int >rets;
	int num = 0;
	sum(root, rets, num);
	int sum = 0;
      for (auto s:rets) {
	    sum += s;
	}
	return sum;
    }
};
