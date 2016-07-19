/*
 * =====================================================================================
 *
 *       Filename:  singleNumber3.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/19/16 15:09:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = 0;
	for(auto num : nums) {
            diff ^= num;
	}
	// find the different bit;
	int bias = 0x01;
	for(int i = 0; i < 31; ++ i) {
            if (diff & bias)
                break;
	    bias <<= 1;
	}
	int a = 0;
	int b = 0; 
	for(auto num : nums) {
            if (num & bias) a ^= num;
	    else b ^= num;
	}
	return {a, b};
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    Solution s;
    auto rets = s.singleNumber(nums);
    for(auto ret : rets)
        cout << ret << endl;
    return 0;
}
