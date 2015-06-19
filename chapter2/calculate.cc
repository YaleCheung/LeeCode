/*
 * =====================================================================================
 *
 *       Filename:  calculate.cc
 *
 *    Description:  
 *        Implement a basic calculator to evaluate a simple expression string.
 *        The expression string may contain open ( and closing parentheses ), the plus + or minus sign -, non-negative integers and empty spaces .
 *
 *        You may assume that the given expression is always valid.
 *
 *        Some examples:
 *        "1 + 1" = 2
 *        " 2-1 + 2 " = 3
 *        "(1+(4+5+2)-3)+(6+8)" = 23
 *        Note: Do not use the eval built-in library function.
 *
 *            Version:  1.0
 *            Created:  06/19/2015 01:27:14 PM
 *           Revision:  none
 *           Compiler:  gcc
 *
 *             Author:  YOUR NAME (), 
 *        Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        // The operation "+" "-" meet change law and combine law.
        int sum = 0;
        bool sign = true; // if positive is true or false;
        for(auto& c : s) {
            if (' ' == c || '+' == c || '(' == c || ')' == c)
                continue;
            if ('-' == c) {
                sign = false;
                continue;
            } 
            if (sign == true)
                sum += c - '0';
            else {
                sum -= c - '0';
                sign = true;
            }
        }
        return sum;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.calculate("(1 + (2 - 1) + (6 + 8)") << endl;
    return 0;
}
