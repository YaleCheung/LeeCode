/*
 * =====================================================================================
 *
 *       Filename:  findTheDifference.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/30/2016 20:02:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        string concate = s + t;
        int ret = 0;
        for(auto c : concate) {
            ret ^= int(c);
        }
        return char(ret);
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.findTheDifference("abc", "abcd");
    return 0;
}
