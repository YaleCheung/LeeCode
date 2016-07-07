/*
 * =====================================================================================
 *
 *       Filename:  getSum.cc
 *
 *    Description:  lj
 *
 *        Version:  1.0
 *        Created:  07/07/16 07:59:29
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
    int getSum(int a, int b) {
        int start = 0x01;
	int ret = 0;
	int cover = 0;
        for(int i = 0; i < 32; ++ i) {
            // the sign bit;
            if (31 == i) {
                if((a > 0 && b < 0 && abs(a) < b) || (a < 0 && b > 0 && abs(a) > b))
                    ret |= start;
            }else {
            if ((start & a) != 0 && (start & b) != 0) {
                if(cover) {
                    ret |= start;
		    cover = 1;
		} else 
                    cover = 1;
	    } else if (((start & a) != 0 && cover != 1) || ((start & b) != 0 && cover != 1)) {
                ret |= start;
		cover = 0;
	    }
	    else if (((start & a) != 0 && cover == 1) || ((start & b) != 0 && cover == 1)) {
                cover = 1;
	    } else if (cover == 1) {
                ret |= start;
                cover = 0;
            } else 
                cover = 0;
            }
            start <<= 1;
	}
        return ret;
    }
};


int main(int argc, char* argv[]) {
    Solution s;
    int a, b;
    while(cin >> a >> b) {
        cout << s.getSum(a, b) << endl;
    }
    return 0;
}
