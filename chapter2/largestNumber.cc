/*
 * =====================================================================================
 *
 *       Filename:  largestNumber.cc
 *
 *    Description:  
 *
 *    Given a list of non negative integers, arrange them such that they form the largest number.
 *
 *    For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.
 *
 *    Note: The result may be very large, so you need to return a string instead of an integer.
 *
 *
 *        Version:  1.0
 *        Created:  07/31/2015 01:19:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int s1, int s2) ->bool {
            stringstream ss;
            ss << s1 << s2;
            string str1;
            ss >> str1;
            ss.clear();
            ss << s2 << s1;
            string str2;
            ss >> str2;
            int size = str1.size();
            for(int i = 0; i < size; ++ i) {
                if (str1[i] > str2[i])
                    return true;
                else if (str1[i] < str2[i])
                    return false;
            }
        });
        
        string ret;
        for_each(nums.begin(), nums.end(), [&ret](int val){
            stringstream ss;
            ss << val;
            string tmp;
            ss >> tmp;
            ret += tmp;
        });
        string ret_fix;
        int i = 0;
        for(; i < ret.size(); ++ i) {
            if (ret[i] != '0') {
                break;
            }
        }
        if (i == (ret.size())) {
            ret_fix = "0";
        } else {
            for(int j = i; j < ret.size(); ++ j)
                ret_fix += ret[j];
        }
        return ret_fix;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums = {128, 12};
    cout << s.largestNumber(nums) << endl;
    vector<int> nums2 = {824, 8248};
    cout << s.largestNumber(nums2) << endl;
    return 0;
}
