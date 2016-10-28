/*
 * =====================================================================================
 *
 *       Filename:  fizzBuzz.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/28/2016 23:42:48
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
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        if(0 == n)
            return ret;
        for(int i = 0; i < n; ++ i) {
            string str;
            if (0 == i % 3 || 0 == i % 5) {
                if (0 == i % 3)
                    str += "Fizz";
                if (0 == i % 5)
                    str += "Buzz";
            } else {
                stringstream ss;
                ss << i;
                ss >> str;
            }
            ret.push_back(str);
        }
        return ret;
    }
};

