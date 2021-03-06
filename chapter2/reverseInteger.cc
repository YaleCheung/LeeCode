/*
 * =====================================================================================
 *
 *       Filename:  reverseInteger.cc
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/25/15 20:10:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long tmp = (long long) x;
        //cout  << tmp << endl;
        int flag = 1;
        if (x < 0) {
            flag = -1;
            tmp *= flag;
        }
        long long ret = 0;
        while(tmp != 0) {
            int unit = tmp % 10;
            //cout << unit << endl;
            ret = ret * 10 + unit;
            tmp /= 10;
        }

        ret = ret * flag;
        cout << ret << endl;
        if (ret > int(0x7fffffff)  || ret < int(0x80000001))
            ret = 0;
        return ret;
    }
};

int main(int argc, char *argv[]) {
    Solution s;
    cout << s.reverse(1534236469);
    return 0;
}
