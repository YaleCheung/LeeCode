/*
 * =====================================================================================
 *
 *       Filename:  assign_cookies.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/06/2016 21:28:03
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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int children_num = g.size();
        int cookies_num = s.size();
        
        auto children_iter = g.begin();
        auto children_end = g.end();

        auto cookies_iter = s.begin();
        auto cookies_end = s.end();

        int ret = 0;
        while(children_iter != children_end && cookies_iter != cookies_end) {
            if (*cookies_iter >= *children_iter) {
                ++ ret;
                ++ children_iter;
                ++ cookies_iter;
            } else {
                ++ cookies_iter; 
            }
        }
        return ret;
    }
};

int main(int argc, char* argv[]) {
    vector<int> children{1,2,3};
    vector<int> cookies{1,2};
    cout << Solution().findContentChildren(children, cookies) << endl;
    return 0;
}
