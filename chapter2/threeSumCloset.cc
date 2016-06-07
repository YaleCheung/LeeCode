/*
 * =====================================================================================
 *
 *       Filename:  threeSumCloset.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  06/07/16 01:45:17
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
#include <stdlib.h>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::sort;

#define MAGIC 3
class Solution {
public:
    int threeSumCloset(vector<int>& nums, int target) {
        size_t size = nums.size();
	if (size < 3)
            return -1;
	int abs_closet = 0x7fffffff;
	int closet_sum = 0;
	//int closet = 0x7fffffff;
	sort(nums.begin(), nums.end());
	//for(auto val : nums) {
         //   cout << val << " " ;
	//}
	cout << endl;
	for(int i = 0; i < size - 2; ++ i) {
             for(int j = i + 1; j < size - 1; ++ j) {
		 for (int k = j + 1; k < size; ++ k) {
		     int sum = nums[i] + nums[j] + nums[k];
		     int abs_left = abs(target - sum);
		     if (abs_left == 0) return target;
		     else if (abs_left < abs_closet) {
			 abs_closet = abs_left;
			 closet_sum = sum;
		     }
		     //cout << i << " " << j << " " << k << endl; 
		     while(nums[k] == nums[k + 1]) ++ k;
		 }
		 while(nums[j] == nums[j + 1]) ++ j;
	     }
	     while(nums[i + 1] == nums[i]) ++ i;
	}
	return closet_sum;
    }
};

int main(int argc, char* argv[]) {
    int val;
    vector<int> ivec;
    while(cin >> val) 
	ivec.push_back(val);
    Solution s;
    cout << s.threeSumCloset(ivec, 2) << endl;
    return 0;
}
