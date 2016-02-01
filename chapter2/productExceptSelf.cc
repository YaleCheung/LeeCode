/*
 * =====================================================================================
 *
 *       Filename:  productExceptSelf.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/16 05:51:45
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
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ret;
	ret.push_back(1);
	for(int i = 1; i < nums.size(); ++ i) 
            ret.push_back(ret[i - 1] * nums[i - 1]);
        for(auto i : ret)
            cout << i << endl;
        cout << "prior ret" << endl;
        int postVal = 1;
        for(int i = nums.size() - 2; i >= 0; -- i) {
            postVal = postVal * nums[i + 1];
	    ret[i] = ret[i] * postVal;
            cout << "postVal" << " " << postVal  << endl;
	}
        for(auto i : ret) {
            cout << i << endl; 
        }
	return ret;
    }
};
int main(int argc, char* argv[]) {
    Solution s;
    vector<int> ivec = {1,2,3,4};
    auto ret = s.productExceptSelf(ivec);
    return 0;
}
