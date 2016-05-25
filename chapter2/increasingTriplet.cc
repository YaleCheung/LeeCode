/*
 * =====================================================================================
 *
 *       Filename:  increasingTriplet.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/25/16 08:17:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
  public:
    bool increasingTriplet(vector < int >&nums) {
	size_t size = nums.size();
	if (size < 3)
	     return false;
	int first = 0x7fffffff;
	int second = 0x7fffffff;
	for (int i = 0; i < nums.size(); ++i) {
	    if (first >= nums[i])
		first = nums[i];
	    else if (second >= nums[i])
		second = nums[i];
	    else
		return true;
	} return false;
    }
};
