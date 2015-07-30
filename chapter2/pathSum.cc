/*
 * =====================================================================================
 *
 *       Filename:  pathSum.cc
 *
 *    Description:  
 *    Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
 *
 *    For example:
 *    Given the below binary tree and sum = 22,
 *                  5
 *                               / \
 *                                           4   8
 *                                                      /   / \
 *                                                                11  13  4
 *                                                                         /  \    / \
 *                                                                                 7    2  5   1
 *                                                                                 return
 *                                                                                 [
 *                                                                                    [5,4,11,2],
 *                                                                                       [5,8,4,5]
 *                                                                                       ]
 *
 *        Version:  1.0
 *        Created:  07/30/2015 12:27:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ret;
        vector<TreeNode*> stack; 
        if (NULL == root)
            return ret;
        // preorder traverse;
        int curSum = 0;
        TreeNode* node = root;
        stack.push_back(node);
        while (! stack.empty()) {
            node = stack[stack.size() - 1];
            while (node -> left != NULL) {
                node = node -> left;     
                curSum += node -> val;
                stack.push_back(node);
            }
            if (node -> right) {
                stack.pop_back();
                node = node -> left;
                curSum += node -> val;
                stack.push_back(node);
            }
            if (node->left == node->right && node->left == NULL) {
                if (curSum == sum)
                    ret.push_back(stack);
            }
       }      
   }
}
