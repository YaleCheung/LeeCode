/*
 * =====================================================================================
 *
 *       Filename:  maximalSquare.cc
 *
 *    Description:  
 *    Given a 2D binary matrix filled with 0's and 1's, find the largest square containing all 1's and return its area.
 *
 *    For example, given the following matrix:
 *
 *    1 0 1 0 0
 *    1 0 1 1 1
 *    1 1 1 1 1
 *    1 0 0 1 0
 *    Return 4.
 *
 *        Version:  1.0
 *        Created:  06/16/2015 01:00:01 PM
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

int min(const int& l, const int& r) {
    return l > r ? r : l;
}

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        if (rows <= 0)
            return 0;
        int cols = matrix[0].size();
        int max = 0;
        int** recorder = new int*[rows];
        for(int i = 0; i < rows; ++ i) {
            recorder[i] = new int[cols];
            for(int j = 0; j < cols; ++ j) {
                if ('0' == matrix[i][j])
                    recorder[i][j] = 0;
                else {
                    recorder[i][j] = 1;
                    max = 1;
                }
            }
        }
        for(int i = 1; i < rows; ++ i) {
            for(int j = 1; j < cols; ++ j) {
                if ('1' == matrix[i][j])
                    recorder[i][j] = min(recorder[i - 1][j], min(recorder[i][j - 1], recorder[i - 1][j - 1])) + 1;
                else
                    recorder[i][j] = 0;
                if (recorder[i][j] > max)
                    max = recorder[i][j];
            }
        }
        return max * max;
    }
};


int main(int argc, char* argv[]) {
vector<vector<char> > mat = {{'0'}, {'1'}};
    Solution s;
    cout <<"solution " << s.maximalSquare(mat) << endl;
}
