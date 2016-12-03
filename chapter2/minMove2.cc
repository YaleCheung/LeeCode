/*
 * =====================================================================================
 *
 *       Filename:  minMove2.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/03/2016 20:42:53
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
#include <cmath>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        size_t size = nums.size();
        sort(nums.begin(), nums.end());
        int media = nums[size >> 1];
        int ret;
        for(auto num : nums)
            ret += num - media;
        return ret;
    }
};
