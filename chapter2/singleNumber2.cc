/*
 * =====================================================================================
 *
 *       Filename:  singleNumber2.cc
 *
 *    Description:  
 *        Given an array of integers, every element appears three times except for one. Find that single one.
 *
 *        Note:
 *        Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
 *
 *        Version:  1.0
 *        Created:  08/04/2015 12:32:13 PM
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
    int singleNumber(vector<int>& nums) {
        int oneTime = 0;
        int twoTime = 0;
        int threeTime = 0;
        for(auto& val : nums)  {
            twoTime |= oneTime & val;
            oneTime ^= val;
            threeTime = oneTime & twoTime;
            oneTime &= ~threeTime;
            twoTime &= ~threeTime;
        }       
        return oneTime;
    }
};
int main(int argc, char* argv[]) {
    vector<int> vec = {1,2,1,3,1,2,2};
    Solution s;
    cout << s.singleNumber(vec);
    return 0;
}
