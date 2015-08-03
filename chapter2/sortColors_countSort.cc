/*
 * =====================================================================================
 *
 *       Filename:  sortColors_countSort.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/03/2015 01:41:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num_red = 0;
        int num_white = 0;
        int num_blue = 0;
        for_each(nums.begin(), nums.end(), [&](int val) {
            switch (val) {
                case 0 : num_red += 1;
                         break;
                case 1 : num_white += 1;
                         break;
                case 2 : num_blue += 1;
                         break;
            }
        });
        std::fill_n(nums.begin(), num_red, 0);
        std::fill_n(nums.begin() + num_red, num_white, 1);
        std::fill_n(nums.begin() + num_red + num_white, num_blue, 2);
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> colors = {0,1,0,2,0};
    s.sortColors(colors);
    for(auto& val : colors) {
        cout << val << endl;
    }
    return 0;
}
