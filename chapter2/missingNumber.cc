/*
 * =====================================================================================
 *
 *       Filename:  missingNumber.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/05/16 08:09:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
using namespace std;
class Solution {
  public:
    int missingNumber(vector <int>& nums) {
        int sum = 0;
	int size = nums.size();
	for(auto i = 0; i < size; ++ i)
	    sum += nums[i];
	return size*(size + 1) / 2 - sum;
    }
};
