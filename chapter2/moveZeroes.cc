/*
 * =====================================================================================
 *
 *       Filename:  moveZeroes.cc
 *
 *    Description:  Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 *
 *    For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
 *
 *    Note:
 *    You must do this in-place without making a copy of the array.
 *    Minimize the total number of operations.
 *    Credits:
 *    Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
 *
 *    Subscribe to see which companies asked this question
 *
 *    Show Tags
 *    Show Similar Problems
 *    Have
 *
 *        Version:  1.0
 *        Created:  11/13/2015 03:32:32 PM
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
    void moveZeroes(vector<int>& nums) {
        int j = 0; // the number of zeros before j;
        int i = 0;
        int size = nums.size();
        while(j < size) {
            if (nums[j] != 0) {
                if(i > 0) 
                    nums[j - i] = nums[j];
            } else 
                ++ i;
            ++ j;
        }
        cout << "the number of zeros is " << i << endl;
        while(i < size && i > 0) {
            nums[size - i] = 0;
            -- i;
        }
    }
};

int main(int argc, char* argv[]) {
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution s;
    s.moveZeroes(nums);
    for_each(nums.begin(), nums.end(), [&](int& elem) {
           cout << elem <<endl; 
            });
    return 0;
}
