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

#include <iostream>
#include <string>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solutionc {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        // pre order traverse.
        string s1 = "";
        string s2 = "";
        binaryTreePaths(root->left);
        binaryTreePaths(root->right);

    }
};
