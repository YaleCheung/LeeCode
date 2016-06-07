/*
 * =====================================================================================
 *
 *       Filename:  threeSum.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/06/16 14:33:58
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
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	size_t size = nums.size();
        if(size < 3)
            return vector<vector<int>>();
	vector<vector<int>> ret;
	sort(nums.begin(), nums.end());
	for(int i = 0; i < size - 2;) {
            int left = 0 - nums[i];
	    // left two elems
	    for(int j = i + 1, k = size - 1; j < k;) {
                if (nums[j] + nums[k] == left) {
                    vector<int> sol;
	            sol.push_back(nums[i]);
		    sol.push_back(nums[j]);
		    sol.push_back(nums[k]);
                    ret.push_back(sol);
		    while(j < k && nums[j] == nums[j + 1]) ++ j;
		    while(j < k && nums[k] == nums[k - 1]) -- k;
		    -- k;
		    ++ j;
		} else if(nums[j] + nums[k] < left) {
                    ++ j;
		} else 
		    -- k;
	    }
	    while( i + 1 < size -2  && nums[i + 1] == nums[i])
		    ++ i;
	    ++ i;
	}
	return ret;
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums;
    int num = 0;
    while(cin >> num)
	nums.push_back(num);
    Solution s;
    auto ret = s.threeSum(nums);
    for(auto vec : ret)  {
        for(auto val : vec) {
            cout << val << " ";
	}
	cout << endl;
    }
    return 0;
}
