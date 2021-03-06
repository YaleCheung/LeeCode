/*
 * =====================================================================================
 *
 *       Filename:  isHappy.cc
 *
 *    Description:  is happy
 *
 *        Version:  1.0
 *        Created:  06/12/2015 04:24:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
  public:
    bool isHappy(int n) {
	int x = n;
	int y = n;
	while (x > 1) {
	    x = _happy(x);
	    y = _happy(_happy(y));
	    if (y == 1)
		return true;
	    if (y == x)
		return false;
	}
	if (x < 0)
	     return false;
	return true;
    }
  private:
    int _happy(const int &n) {
	int sum = 0;
	int x = n;
	while (x) {
	    sum += (x % 10) * (x % 10);
	    x = x / 10;
	}
	return sum;
    }
};
