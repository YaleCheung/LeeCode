/*
 * =====================================================================================
 *
 *       Filename:  intersect2.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/20/16 07:43:33
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
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
        vector<int> ret;
        for(auto iter2 = nums2.begin(), iter1 = nums1.begin(); iter2 != nums2.end() &&  iter1 != nums1.end();) {
	    int val1 = *iter1;
	    int val2 = *iter2;
	    if(*iter1 == *iter2) {
	        ret.push_back(*iter1);
	        ++ iter2;
	        ++ iter1;
	    } else if (*iter1 > *iter2) 
	        ++ iter2;
	    else 
	        ++ iter1;
        }
	return ret;
    }
};


int main(int argc, char* argv[]) {
    Solution s;
    vector<int> nums1 = {1,2,3,4,1,2,3,4};
    vector<int> nums2 = {1,2,3,1,2,3,4};
    auto vec = s.intersect(nums1,nums2);
    for(auto val : vec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
