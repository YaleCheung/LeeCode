/*
 * =====================================================================================
 *
 *       Filename:  countNumbersWithUniqueDigits.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/13/16 05:45:06
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
    int countNumbersWithUniqueDigits(int n) {
	if (0 == n)
	    return 1;
	int* tmp = new int[n + 1];
	// init
	for(int i = 0; i < n + 1; ++ i) 
	    tmp[i] = 0;
	int interval = 9;
	for(int i = 2; i < n + 1; ++ i) {
	    interval *= 11 - i;
	    tmp[i] = interval;
	}
	int count = 10;
	for(int i = 0; i < n + 1; ++ i) 
            count += tmp[i];
	delete [] tmp;
	return count;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.countNumbersWithUniqueDigits(3) << endl;
    return 0;
}
