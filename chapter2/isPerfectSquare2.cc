/*
 * =====================================================================================
 *
 *       Filename:  isPerfectSquare2.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/17/16 13:50:04
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
    bool isPerfectSquare(int num) {
        int l= 1;
	int r = num;
	while(r > l + 1) {
            int mid = l + (r - l) / 2;
            if (abs(float(num) / mid - mid) < 0.00001)
                return true;
	    else if (mid > float(num) / mid)
                r = mid - 1;
	    else
                l = mid + 1;
	}
	return false;
    }
};
