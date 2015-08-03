/*
 * =====================================================================================
 *
 *       Filename:  grayCode.cc
 *
 *    Description:  i
 *    The gray code is a binary numeral system where two successive values differ in only one bit.
 *
 *    Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.
 *
 *    For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:
 *
 *    00 - 0
 *    01 - 1
 *    11 - 3
 *    10 - 2
 *    Note:
 *    For a given n, a gray code sequence is not uniquely defined.
 *
 *    For example, [0,2,3,1] is also a valid gray code sequence according to the above definition.
 *
 *    For now, the judge is able to judge based on one instance of gray code sequence. Sorry about that.
 *
 *        Version:  1.0
 *        Created:  08/03/2015 12:32:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
    // n is the number of bit; val is the value of binary value
    int changeToGray(const int& val, const int& n) {
        int bit_cur = 0x1;
        int bit_post = 0x1 << 1;
        int ret = 0;
        for (int i = 0; i < n; ++ i) {
            if (i == n - 1) {
                if ((val & bit_cur) != 0) {
                    ret += int(pow(2, i));
                }
            }
            else if(((val & bit_cur) == 0 && (val & bit_post) != 0) || 
               ((val & bit_cur) != 0 && (val & bit_post) == 0))
                ret += int(pow(2, i));
            bit_cur = bit_post;
            bit_post <<= 1;
        }
        return ret;
    }
public:
    vector<int> grayCode(int n) {
        vector<int> ret;
        int max = int(pow(2, n));
        for(int i = 0; i < max; ++ i) {
            ret.push_back(changeToGray(i, n));
        }
        return ret;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> ret = s.grayCode(3);
    for_each(ret.begin(), ret.end(), [](int& val) {
        cout << val << endl;
            });
    return 0;
}
