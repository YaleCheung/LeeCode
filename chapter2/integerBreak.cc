/*
 * =====================================================================================
 *
 *       Filename:  integerBreak.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/18/16 06:53:20
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
    int integerBreak(int n) {
        if (3 == n)
	    return 2;
	if (2 == n)
	    return 1;
	int k = n / 3;
	int ret = 1;
	for (int i = 0; i < k; ++i) 
	    ret *= 3;
	int reminder = n % 3;
	if (1 == reminder )
	    retr = ret / 3 * 4;
	if (reminder == 2)
	    ret *= 2;
	return ret;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.integerBreak(3) << " 3" << endl;
}
