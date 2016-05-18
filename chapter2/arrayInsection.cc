/*
 * =====================================================================================
 *
 *       Filename:  arrayInsection.cc
 *
 *    Description:  GG
 *
 *        Version:  1.0
 *        Created:  05/18/16 05:09:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using std::vector;
using std::endl;
using std::cout;
using std::map;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        vector<int>::iterator end_iter1 = unique(nums1.begin(), nums1.end());
        cout << "nums1" << endl;
        for(auto num : nums1)
            cout << num << endl;
        sort(nums2.begin(), nums2.end());
        vector<int>::iterator end_iter2 = unique(nums2.begin(), nums2.end());
        cout << "difference"<< nums2.end() - end_iter2 << endl;
        cout << "nums2" << endl;
        for(auto num : nums2)
            cout << num << endl;
        map<int ,int> hash;
        for(auto iter = nums1.begin(); iter != end_iter1; ++ iter)
            hash[*iter] = 1;
        for(auto iter = nums2.begin(); iter != end_iter2; ++ iter)
            hash[*iter] += 1;
        vector<int> ret;
        for_each(hash.begin(), hash.end(), [&ret](map<int, int>::reference r) {
            if (r.second >= 2) {
                ret.push_back(r.first);
            }
            });
        return ret;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    vector<int> num1 = {9,3,7};
    cout << "nums1" << endl;
    for(auto num : num1)
        cout << num << endl;
    vector<int> num2 = {6,4,1,0,0,4,4,8,7};
    cout << "nums2" << endl;
    for(auto num : num2)
        cout << num << endl;
    auto ret = s.intersection(num1, num2);
    cout << "ret" <<endl;
    for_each(ret.begin(), ret.end(), [&ret](vector<int>::reference r) {
        cout << r << endl;
        });
    return 0;

}
