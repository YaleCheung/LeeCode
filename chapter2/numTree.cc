/*
 * =====================================================================================
 *
 *       Filename:  numTree.cc
 *
 *    Description:  G
 *
 *        Version:  1.0
 *        Created:  07/19/16 15:34:42
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
    int numTrees(int n) {
        // dp; let g(n) means the number of BST;
	// and f(i, n) means that using i^th element as root
	// then g(n) = f(1, n) + f(2, n) + ...
	// f(1, n) = g(0) * g(n - 1);
	// f(i, n) = g(i - 1) * g(n - i);
	// g(n) = g(0) * g(n - 1) + g(1) * g(n - 2) + ... + g(n - 1) * g(0);
	int* ret = new int[n + 1];
        ret[0] = 1;
	ret[1] = 1;
	for(int i = 2; i < n + 1; ++ i) {
            int sum = 0;
            for(int j = 0; j < i; ++ j) {
                sum += ret[j] * ret[i - j - 1];
	    }    
	    ret[i] = sum;
	}
	return ret[n];
    }
};


int main(int argc, char* argv[]) {
    Solution s;
    cout << s.numTrees(3) << '\n';
    cout << s.numTrees(4) << '\n';
    cout << s.numTrees(5) << '\n';
    cout << s.numTrees(18) << '\n';
    cout << endl;
    return 0;
}
