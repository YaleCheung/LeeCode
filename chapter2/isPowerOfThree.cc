/*
 * =====================================================================================
 *
 *       Filename:  isPowerOfThree.cc
 *
 *    Description:  
 *    Given an integer, write a function to determine if it is a power of three.
 *
 *    Follow up:
 *    Could you do it without using any loop / recursion?
 *
 *    Credits:
 *    Special thanks to @dietpepsi for adding this problem and creating all test cases.
 *
 *    Subscribe to see which companies asked this question
 *
 *        Version:  1.0
 *        Created:  01/14/16 04:44:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        // Using transform the bottom of lagarithm of formular
	if (n == 0)
            return false;
	double numerator = log(n);
	double denominator = log(3);
	cout << "numerator " << numerator << endl;
	cout << "denumerator " << denominator << endl;

	double ret = double(numerator) / denominator;
	cout << "ret " << ret << endl;
	int intRet = int(ret);
	cout << "intRet " << intRet << endl;
	double diff = ret - intRet;
	cout << "diff " << abs(diff) << endl;
	if (abs(diff) < 0.0001 || diff == 0)  {
            return true;
	}
	return false;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << " 243 " << s.isPowerOfThree(243) << endl;
    return 0;
}
