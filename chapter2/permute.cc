/*
 * =====================================================================================
 *
 *       Filename:  permute.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/24/16 15:04:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
    void permute_(vector < vector < int >>&rets, vector < int >&nums,
		  int pos, int size) {
	if (pos == size - 1) {
	    rets.push_back(nums);
	}
	for (auto i = pos; i < size; ++i) {
	    int t = nums[i];
	    nums[i] = nums[pos];
	    nums[pos] = t;
	    permute_(rets, nums, pos + 1, size);
	}
	t = nums[i];
	nums[i] = nums[pos];
	nums[pos] = t;
    }
  public:
    vector < vector < int >>permute(vector < int >&nums) {
	vector < vector < int >>rets;
	size_t size = nums.size();
	permute_(rets, nums, 0, size);
	return rets;
    }
};
