/*
 * =====================================================================================
 *
 *       Filename:  countBits.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/19/16 10:47:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <memory>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
	// alarm : should consider 0, because log(0) is -INF;    
	vector<int> ret;
	ret.push_back(0);
	if (0 == num)
	    return ret;
        int bit_size = log(num) + 1;
	int* bitmap = new int[bit_size];
	int bit1num_ = 0;
	// init the bitmap
	for(auto i = 0; i < bit_size; ++ i)
            bitmap[i] = 0;
	// cal the number of bit with value 1;
	for(int i = 1; i <= num; ++ i) {
            ++ bitmap[0];
	    ++ bit1num_;
	    for(int j = 0; j <= log(i) + 1; ++ j) {
                if(2 == bitmap[j]) {
                    bitmap[j] = 0;
		    bitmap[j + 1] += 1;
		    -- bit1num_;
		}
	    }
	    ret.push_back(bit1num_);
	}
	return ret;
    }
};
int main(int argc, char* argv[]) {
    Solution s;
    vector<int> ret = s.countBits(16);
    for_each(ret.begin(), ret.end(), [&](vector<int>::reference r) {
        cout << r << endl;
	    });
    return 0;
}
