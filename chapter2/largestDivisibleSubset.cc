/*
 * =====================================================================================
 *
 *       Filename:  largestDivisibleSubset.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/30/16 05:39:47
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

class Solution {
    vector<int> largestDivisibleSubset(vector<int>& num, int index, vector<int> ret, int size) {
        if(index == size)
            return ret;
	for(auto iter = ret.begin(); iter != ret.end(); ++ iter) {
            if ()
	}
    }
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
	if (1 == n)
            return nums;
	else {
            vector<int> tmp;
            auto ret = largestDivisibleSubset(nums, 0, tmp, n);
	}	
 
    }
