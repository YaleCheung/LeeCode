/*
 * =====================================================================================
 *
 *       Filename:  sortColors_swap.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/03/2015 01:54:53 PM
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
    void _swap(const int& l, const int& r, vector<int>& vec) {
        int tmp = vec[l];
        vec[l] = vec[r];
        vec[r] = tmp;
    }
public:
    void sortColors(vector<int>& nums) {
        int red_end = 0;
        int blue_begin = nums.size() - 1;
        for(int i = 0; i < nums.size(); ++ i) {
            if (nums[i] == 0) {
                if (i > red_end)
                    _swap(i, red_end, nums);
                ++ red_end;
            } else if (nums[i] == 2) {
                if (i < blue_begin) 
                    _swap(i, blue_begin, nums);
                -- blue_begin;
            } else {
                _swap()
            }
        }
    }
};

int main(int argc, char* argv[]) {
    vector<int> colors = {2,0};
    Solution s;
    s.sortColors(colors);
    for(auto& i : colors) {
        cout << i << endl;
    }
    return 0;
}
