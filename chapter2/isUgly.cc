/*
 * =====================================================================================
 *
 *       Filename:  isUgly.cc
 *
 *    Description:  
 *    Write a program to check whether a given number is an ugly number.
 *
 *    Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
 *
 *    Note that 1 is typically treated as an ugly number.
 *
 *    Credits:
 *    Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases.
 *
 *    Subscribe to see which companies asked this question
 *
 *    Show Tags
 *    Show Similar Problems
 *        Version:  1.0
 *        Created:  12/29/15 15:09:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        int ret = num;
	while(ret % 2 == 0) {
            ret /= 2;
	}
	while(ret % 3 == 0) {
            ret /= 3;
	}
	while(ret % 5 == 0) {
            ret /= 5;
	}
	if (ret != 1)
            return false;
	return true;
    }
};
int main(int argc, char* argv[]) {
    Solution s;
    cout << s.isUgly(6) << endl;
    cout << s.isUgly(8) << endl;
    cout << s.isUgly(14) << endl;
    return 0;
}
