/*
 * =====================================================================================
 *
 *       Filename:  missingNumber2.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/05/16 08:35:27
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
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
	int ret = 0;
	for(int i = 0; i < size; ++ i)
            ret ^= nums[i] ^ i;
	return (ret == 0) ? size : ret;
    }
};
