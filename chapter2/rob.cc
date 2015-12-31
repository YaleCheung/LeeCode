/*
 * =====================================================================================
 *
 *       Filename:  rob.cc
 *
 *    Description:  You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
 *
 *    Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
 *
 *    Credits:
 *
 *        Version:  1.0
 *        Created:  12/31/15 03:34:05
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
#define max(a, b) ((a)>(b)?(a):(b))
class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if (size == 1)
           return nums[0];
	int maxPre = 0;
	int maxPrePre= 0;
        for(int i = 0; i < size; ++ i) {
            int takeI = maxPrePre + nums[i];
	    int maxPro = max(maxPre, takeI);
	    maxPrePre = maxPre;
	    maxPre = maxPro;
	}
	return maxPre;
    }
};
