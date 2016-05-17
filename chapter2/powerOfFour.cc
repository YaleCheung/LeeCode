/*
 * =====================================================================================
 *
 *       Filename:  powerOfFour.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/17/16 03:04:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <math.h>
#include <stdlib.h>
#include <iostream>
#define MAGICNUM 4
using std::cout;
using std::endl;
class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num <= 0) return false;
        cout << float(log(num)) / log(MAGICNUM) << endl;
        cout << fabs(float(log(num)) / log(MAGICNUM) - int(log(num) / log(MAGICNUM))) << endl; 

        return fabs(float(log(num)) / log(MAGICNUM) - int(log(num) / log(MAGICNUM))) > 0.0001 ? false : true; 
    }	    
};
int main(int argc, char* argv[]) {
    Solution s;	
    cout << "67108864" << " Ans:" << s.isPowerOfFour(67108864) << endl;
    return 0;
}
