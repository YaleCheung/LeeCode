/**
 *  * Definition for binary tree
 *   * struct TreeNode {
 *    *     int val;
 *     *     TreeNode *left;
 *      *     TreeNode *right;
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *        * };
 *         */
class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int>> vecs;
        if (NULL == root)
            return vecs;
        list<TreeNode*> q;
        q.push_back(root);
        while(! q.empty()) {
            vector<int> ivec;
            int last_level_num = q.size();
            int i = 0;
            for(auto iter = q.begin(); i < last_level_num; ++ iter, ++ i) {
                ivec.push_back((*iter) -> val);
                if((*iter) -> left)
                    q.push_back((*iter) -> left);
                if((*iter) -> right)
                    q.push_back((*iter) -> right);
            }
            for (int i = 0; i < last_level_num; ++ i)
                q.pop_front();
            vecs.push_back(ivec);
        }
        reverse(vecs.begin(), vecs.end());
        return vecs;
    }
};
