/*
 * =====================================================================================
 *
 *       Filename:  maxSubArray.cc
 *
 *    Description:  Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
 *    
 *
 *    For example, given the array [−2,1,−3,4,−1,2,1,−5,4],
 *    the contiguous subarray [4,−1,2,1] has the largest sum = 6.
 *
 *        Version:  1.0
 *        Created:  06/18/2015 02:58:20 PM
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
    int maxSubArray(vector<int>& nums) {
        // assuming the size is positive;
        int size = nums.size();
        int max = 0x80000001;
        cout << max << endl;
        int sum = 0;
        for(int i = 0; i < size; ++ i) {
            sum = sum + nums[i];
            if (sum > max)
                max = sum;
            if (sum < 0)
                sum = 0;
        }
        return max;
    }
};

int main(int argc, char* argv[]) {
    vector<int> ivec = {-2,1,-3,4,-1,2,1,-5,4};
    Solution s;
    cout << s.maxSubArray(ivec) << endl;
    vector<int> ivec2 = {-2,-3,-4,-1,-5};
    cout << s.maxSubArray(ivec2) << endl;
    vector<int> ivec3 = {-2,-3,-4,-1,-5, 1};
    cout << s.maxSubArray(ivec3) << endl;
    return 0;
}
