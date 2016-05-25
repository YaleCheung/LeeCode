/*
 * =====================================================================================
 *
 *       Filename:  findKthLargest.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/25/16 12:54:25
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
    int findKthLargest(vector < int >&nums, int k) {
	priority_queue < int >heap;
	for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
	    heap.push(*iter);
	} for (auto i = 0; i < k - 1; ++i) {
	    heap.pop();
	}
	return heap.top();
    }
};
