/*Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
 *
 * For example, this binary tree is symmetric:
 *
 *     1
 *        / \
 *          2   2
 *           / \ / \
 *           3  4 4  3
 *           But the following is not:
 *               1
 *                  / \
 *                    2   2
 *                       \   \
 *                          3    3
 *                          Note:
 *                          Bonus points if you could solve it both recursively and iteratively.
 *                         */
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
    bool _isSymmetric(const vector<TreeNode*>& vec) {
        int size = vec.size();
        for(int i = 0; i < size / 2; ++ i) {
            if((NULL == vec[i]) && (NULL == vec[size - 1 - i]))
                continue;
            else if(((NULL == vec[i]) && (NULL != vec[size - 1 - i])) ||
                    ((NULL != vec[i]) && (NULL == vec[size - 1 - i])))
                return false;
            else if((vec[i] -> val) != (vec[size - 1 - i] -> val))
                return false;
        }
        return true;
    }
public:
    bool isSymmetric(TreeNode *root) {
        if (NULL == root)
            return true;
        list<TreeNode*> q;
        q.push_back(root);
        while(! q.empty()) {
            vector<TreeNode*> vec;
            int last_level_num = q.size();
            int i = 0;
            for(auto iter = q.begin(); i < last_level_num; ++ i, ++ iter) {
                vec.push_back(*iter);
                if(NULL == (*iter))
                    continue;
                q.push_back((*iter)->left);
                q.push_back((*iter)->right);
            }
            for(int i = 0; i < last_level_num; ++ i)
                q.pop_front();
            // check whether the vec is symmetric
            if(! _isSymmetric(vec))
                return false;
        }
        return true;
    }
};
