/*
 * =====================================================================================
 *
 *       Filename:  minSubArrayLen.cc
 *
 *    Description:  Given an array of n positive integers and a positive integer s, find the minimal length of a subarray of which the sum ≥ s. If there isn't one, return 0 instead.
 *
 *    For example, given the array [2,3,1,2,4,3] and s = 7,
 *    the subarray [4,3] has the minimal length under the problem constraint.
 *
 *        Version:  1.0
 *        Created:  07/21/2015 06:51:51 PM
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
    int minSubArrayLen(int s, vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a1, int a2) {return a1 > a2;});
        int sum = 0;
        for(int i = 0; i < nums.size(); ++ i) {
            sum += nums[i];
            if (sum >= s)
                return i + 1;
        }
        if (sum < s)
            return 0;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> iVec = {2,3,1,2,4,3};
    cout << s.minSubArrayLen(7, iVec) << endl;
    return 0;
}
