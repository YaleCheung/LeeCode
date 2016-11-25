/*
 * =====================================================================================
 *
 *       Filename:  numberOfArithmeticSlices.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/25/2016 21:12:25
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
    int numberOfArithmeticSlices(vector<int>& A) {
        int size = A.size();
        int ret = 0;
        int count = 0;
        for(int i = 2; i < size; ++ i) {
            if (A[i] - A[i - 1] == A[i - 1] - A[i - 2])
                ++ count;
            ret += count;
        }
        return ret;
    }
};
