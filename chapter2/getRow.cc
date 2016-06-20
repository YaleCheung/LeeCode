/*
 * =====================================================================================
 *
 *       Filename:  getRow.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/20/16 08:10:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre = {1};
        if(0 == rowIndex) 
            return pre;
        if(1 == rowIndex) {
            pre.push_back(1);
            return pre;
	}
        for(int i = 1; i <= rowIndex; ++ i) {
            vector<int> cur = {1};
	    size_t size = pre.size();
	    for(int j = 1; j < size; ++ j) {
                int val = pre[j - 1] + pre[j];
		cur.push_back(val);
	    }
	    cur.push_back(1);
	    pre = cur;
	}
	return pre;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    for(int i = 0; i < 5; i ++) {
        auto vec = s.getRow(i + 1);
	for(auto val : vec) {
            cout << val << " ";
	}
	cout << endl;
    }
    return 0;
}
