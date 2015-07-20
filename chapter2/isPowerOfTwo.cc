/*
 * =====================================================================================
 *
 *       Filename:  isPowerOfTwo.cc
 *
 *    Description:  Given an integer, write a function to determine if it is a power of two;
 *
 *        Version:  1.0
 *        Created:  07/20/2015 01:58:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1)
            return false;
        int numberOfOne = 0;
        while (n) {
            if (n & 1)
                numberOfOne += 1;
            n = n >> 1;
        }
        return (numberOfOne == 1) ? true : false;
    }
};

int main(int argc, char* argv[]) {
    if (argc != 2)
        exit(-1);   
    Solution s;
    cout << s.isPowerOfTwo(atoi(argv[1])) << endl;
    return 0;
}
