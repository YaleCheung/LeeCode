/*
 * =====================================================================================
 *
 *       Filename:  isPalindrome.cc
 *
 *    Description:  Determine whether an integer is a palindrome. Do this without extra space.
 *
 *        Version:  1.0
 *        Created:  01/27/15 12:45:58
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
    bool isPalindrome(int x) {
        // need to know the lenght of x
        if(x < 0)
            return false;
        int ten_divisor = 1;
        while(x / ten_divisor >= 10)
            ten_divisor *= 10;
        while (x > 0) {
            int highest = x / ten_divisor;
            int lowest = x % 10;
            if (highest != lowest)
                return false;
            int reminder = x % ten_divisor;
            x = reminder / 10;
            ten_divisor /= 100;
        }
        return true;
    }
};

int main(int argc, char *argv[]) {
    Solution s;
    cout << s.isPalindrome(1234521) << endl;
    return 0;
}
