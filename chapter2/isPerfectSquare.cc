/*
 * =====================================================================================
 *
 *       Filename:  isPerfectSquare.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/17/16 13:44:27
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
    bool isPerfectSquare(int num) {
        int sum = 0;
        for(int i = 1; i <= num; i += 2) {
	    sum += i;
            if(sum == num)
                return true;
	}
	return false;
    }
};
