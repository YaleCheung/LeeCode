class Solution {
	public:
    int minDepth(TreeNode *root) {
            if(NULL == root)
                return 0;
            int left_depth = minDepth(root->left);
            int right_depth = minDepth(root->right);
            if(0 == left_depth)
                return right_depth + 1;
            else if (0 == right_depth)
                return left_depth + 1;
            else
                return left_depth < right_depth ? left_depth + 1 : right_depth + 1;
        }
};
