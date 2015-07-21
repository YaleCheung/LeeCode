/*
 * =====================================================================================
 *
 *       Filename:  findPeakElement.cc
 *
 *    Description:  A peak element is an element that is greater than its neighbors.  * *    Given an input array where num[i] ≠ num[i+1], find a peak element and return its index.  * *    The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.
 *
 *    You may imagine that num[-1] = num[n] = -∞.
 *
 *    For example, in array [1, 2, 3, 1], 3 is a peak element and your function should return the index number 2.
 *
 *
 *
 *        Version:  1.0
 *        Created:  07/21/2015 06:08:04 PM
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
    int findPeakElement(const int& p, const int& q, const vector<int>& nums) {
        if (p == q)
            return p;
        if (p < q) {
            int middle = (p + q) / 2;
            int val1 = findPeakElement(p, middle, nums);
            int val2 = findPeakElement(middle + 1, q, nums);
            if (nums[val1] < nums[val2])
                return val2;
            else 
                return val1;
        }
    }
public:
    int findPeakElement(vector<int>& nums) {
        // divide and conquer;
        int size = nums.size();
        int ret = findPeakElement(0, size - 1, nums);
        return ret;
    }

};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> iVec = {1,2,3,1,4, 5,4,6,7,9,12,10,11};
    cout << s.findPeakElement(iVec) << endl;
    return 0;
}
