/*
 * =====================================================================================
 *
 *       Filename:  summaryRanges.cc
 *
 *    Description:  Given a sorted integer array without duplicates, reutrn the summary of its ranges.
 *                  For example, give [0, 1,2,4,5,7], return ["0->2", "4->5", "7"];
 *
 *        Version:  1.0
 *        Created:  07/20/2015 05:50:06 PM
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
#include <string.h>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;


string itoa(const int& pre) {
    stringstream ss;
    ss << pre;
    string str;
    ss >> str;
    return str;
}

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int pre;
        vector<string> ret;
        if (nums.size()) {
            pre = nums[0];
            ret.push_back(itoa(pre));
            int times = 0;
            for(auto i = 1; i < nums.size(); ++ i) {
                int cur = nums[i];
                if (cur > pre + 1) {
                    if (times != 0) {
                        string tmp = *(ret.rbegin());
                        tmp += "->";
                        tmp += itoa(pre);
                        ret[ret.size() - 1] = tmp;
                        times = 0;
                    } 
                    ret.push_back(itoa(cur));
                } else if (cur == pre + 1) {
                    times += 1;
                    if (i == (int(nums.size()) - 1)) {
                        string tmp = *(ret.rbegin());
                        tmp += "->";
                        tmp += itoa(cur);
                        ret[ret.size() - 1] = tmp;
                    }
                }
                pre = cur;
            }
        } 
        return ret;

    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> iVec = {0, 1};
    vector<string> sVec = s.summaryRanges(iVec);
    for_each(sVec.begin(), sVec.end(), [&](string str) {
        cout << str << endl; 
    });
    return 0;
}

