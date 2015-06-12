/*
 * =====================================================================================
 *
 *       Filename:  climbStairs.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/12/2015 06:21:03 PM
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
    int climbStairs(int n) {
	if (1 == n)
	    return 1;
	if (2 == n)
	    return 2;
	int i = 3;
	int sum = 0;
	int p = 2;
	int pp = 1;
	int val = 0;
	while (i <= n) {
	    val = p + pp;
	    pp = p;
	    p = val;
	    ++i;
	} return val;
    }
};
