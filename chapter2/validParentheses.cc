/*
 * =====================================================================================
 *
 *       Filename:  validParentheses.cc
 *
 *    Description:  Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

 The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
 *
 *        Version:  1.0
 *        Created:  01/21/15 13:54:56
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
    bool isValid(string s) {
        stack<char> cache;
        for(auto i = 0; i < s.size(); i ++) {
            cout << i << endl;
            switch (s[i]) {
            case '(':
            case '[':
            case '{':
            {
                cache.push(s[i]);
                break;
            }
            case ')' :
            {
                if((cache.size() > 0) && (i < (s.size() - 1)) && (']' == s[i + 1]) && ('[' == cache.top())) {

                    return false;
                }
                if((cache.size() > 0) && ('(' == cache.top())) {
                    cache.pop();
                    break;
                } else {
                    return false;
                }

            }
            case ']' :
            {
                if ((cache.size() > 0) && ('(' == cache.top()))
                    return false;
                if ((cache.size() > 0) && ('[' == cache.top())) {
                    cache.pop();
                    break;
                } else
                    return false;
            }
            case '}':
            {
                if((cache.size() > 0) && ('{' == cache.top())) {
                    cache.pop();
                    break;
                } else
                    return false;
            }
            default:
                ;
            }
        }
        return cache.size() ? false : true;
    }
};

int main (int argc, char* argv[]) {
    Solution s;
    cout << s.isValid("[({(())}[()])]") << endl;
    return 0;
}

