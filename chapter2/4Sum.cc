/*
 * =====================================================================================
 *
 *       Filename:  4Sum.cc
 *
 *    Description:  
 *    Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.
 *
 *    Note: The solution set must not contain duplicate quadruplets.
 *
 *    For example, given array S = [1, 0, -1, 0, -2, 2], and target = 0.
 *
 *    A solution set is:
 *    [
 *      [-1,  0, 0, 1],
 *        [-2, -1, 1, 2],
 *          [-2,  0, 0, 2]
 *          ]
 *
 *        Version:  1.0
 *        Created:  06/05/16 03:38:42
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
#include <algorithm>
using namespace std;

class Solution {
    // a versatile solution
    vector<vector<int>> sum_(int index, int k, int target, vector<int>& nums) {
        vector<vector<int>> ret;
        if (index + k > nums.size()) return ret;
	if (2 == k) {
             for(int i = index, j = nums.size() - 1; i < j;) {
		 int sum = nums[i] + nums[j];
                 if (sum == target) {
                     ret.push_back(vector<int>{nums[i], nums[j]});
		     while(i < j && nums[i] == nums[i + 1]) ++ i;
		     while(i < j && nums[j] == nums[j - 1]) ++ j;
		     -- j;
		     ++ i;
		 } else if (sum < target) ++ i;
		 else -- j;
	     }
	     return ret;
	}
	for(int i = index; i + k <= nums.size(); ++ i) {
            auto last_layer_ret = sum_(i + 1, k - 1, target - nums[i], nums);
	    for(auto vec : last_layer_ret) {
                vec.push_back(nums[i]);
                ret.push_back(vec);
	    }
	    while(i < nums.size() - 1 && nums[i] == nums[i + 1])
		++ i;
	}	
	return ret;

    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int k = 4;
	if (nums.size() < k)
            return vector<vector<int>>();
	sort(nums.begin(), nums.end());
	return sum_(0, 4, target, nums);
    }
};

int main(int argc, char* argv[]) {
    vector<int> input{1, 0, -1, 0, -2, 2};
    Solution s;
    auto ret = s.fourSum(input, 0);

    for(auto vec : ret) {
        for(auto val : vec) 
             cout << val << " ";
        cout << endl;
    }
    cout << "--------" << endl;
    cout << ret.size() << endl;
    return 0;
}
