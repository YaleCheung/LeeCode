/**
 * Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
 * */

#include <iostream>
#include <vectror>
#include <list>
using namespace std;

class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int>> vecs;
        if(NULL == root)
            return vecs;
        list<TreeNode*> q;
        q.push_back(root);
        while(! q.empty()) {
            vector<int> level_vals;
            // obtain the nodes in a level
            for(auto iter = q.begin(); iter != q.end(); iter ++)
                level_vals.push_back((*iter)->val);

            // store the number of pre level
            int pre_level_num = q.size();
            vecs.push_back(level_vals);

	    // add the nodes of next level
            int i = 0;
            for(auto iter = q.begin(); i < pre_level_num; ++ iter, ++ i) {
                if(NULL != (*iter)->left)
                    q.push_back((*iter)->left);
                if(NULL != (*iter)->right)
                    q.push_back((*iter)->right);
            }

            // delete nodes;
            for(int j = 0; j < pre_level_num; ++ j)
                q.pop_front();
        }
        return vecs;
    }
};
