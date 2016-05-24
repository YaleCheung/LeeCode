/*
 * =====================================================================================
 *
 *       Filename:  generateParenthesis.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  05/23/16 05:46:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class Solution {
    void generateParenthesis_(vector<string>& ret, string str, int l, int r, int n) {
        if (0 == l && 0 == r) {
            ret.push_back(str);
	    return;
	}
	if (l > 0) {
	    generateParenthesis_(ret, str + "(", l - 1, r, n);
	}
	if (r > 0 && r > l) {
	    generateParenthesis_(ret, str + ")", l, r - 1, n);
	}
    }
public:
    vector<string> generateParenthesis(int n) {
	vector<string> ret;
	string str = "";
	generateParenthesis_(ret, str, n, n, n);
	return ret;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<string> ret = s.generateParenthesis(200);
    for(auto s : ret) {
        cout << s << endl;
    }
    return 0;
}
