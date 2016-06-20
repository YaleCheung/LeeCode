/*
 * =====================================================================================
 *
 *       Filename:  binaryTreePaths.cc
 *
 *    Description:  
 *    Given a binary tree, return all root-to-leaf paths.
 *
 *    For example, given the following binary tree:
 *
 *       1
 *        /   \
 *        2     3
 *         \
 *           5
 *           All root-to-leaf paths are:
 *
 *           ["1->2->5", "1->3"]
 *
 *        Version:  1.0
 *        Created:  01/02/16 07:46:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

class Solution {
    void binaryTreePaths(TreeNode * root, vector < string > &ret,
			 string str) {
	if (!root)
	    return;
	stringstream ss;
	 ss << root->val;
	string tmp;
	 ss >> tmp;
	if (!root->left && !root->right)
	     ret.push_back("" == str ? tmp : str + "->" + tmp);
	if (root->left) {
	    if ("" != str)
		binaryTreePaths(root->left, ret,
				"" == str ? tmp : str + "->" + tmp);
	    else
		binaryTreePaths(root->left, ret, tmp);
	}
	if (root->right) {
	    if ("" != str)
		binaryTreePaths(root->right, ret,
				"" == str ? tmp : str + "->" + tmp);
	    else
		binaryTreePaths(root->right, ret, tmp);
	}
	return;
    }
  public:
    vector < string > binaryTreePaths(TreeNode * root) {
	vector < string > ret;
	string str;
	binaryTreePaths(root, ret, str);
	return ret;
    }
};
