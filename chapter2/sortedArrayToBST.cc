/*
 * =====================================================================================
 *
 *       Filename:  sortedArrayToBST.cc
 *
 *    Description: Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
 *
 *        Version:  1.0
 *        Created:  06/17/2015 01:15:09 PM
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
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* _sortedArrayToBST(const vector<int>& nums, const int& beg, const int& end) {
        if (beg >= end)
	    return NULL;
        int mid = (beg + end) / 2;
	TreeNode* root = new TreeNode(nums[mid]);
	TreeNode* left = _sortedArrayToBST(nums, beg, mid);
	TreeNode* right = _sortedArrayToBST(nums, mid + 1, end);
        root->left = left;
	root->right = right;
	return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        if (size < 0)
	    return NULL;
        return _sortedArrayToBST(nums, 0, size);
    }
};

int main(int argc, char* argv[]) {
    vector<int> ivec = {0,2,3,4,5};
    Solution s;
    TreeNode* root = s.sortedArrayToBST(ivec);
    cout << root->val << endl;

    return 0;   
 }
