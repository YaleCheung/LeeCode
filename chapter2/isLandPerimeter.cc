/*
 * =====================================================================================
 *
 *       Filename:  isLandPerimeter.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/26/2016 15:51:05
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
    int islandPerimeter(vector<vector<int>>& grid) {
        size_t row_num = grid.size();
        if (0 == row_num)
            return 0;
        size_t col_num = grid.begin()->size();
        int ret = 0;
        for(int i = 0; i < row_num; ++ i) {
            for(int j = 0; j < col_num; ++ j) {
                int surround = 0;
                if (grid.at(i).at(j) == 1) {
                    if (i == 0) 
                        ++ surround;
                    if (i == row_num - 1)
                        ++ surround;
                    if (j == 0)
                        ++ surround;
                    if (j == col_num - 1)
                        ++ surround;
                    if (j != 0 && grid.at(i).at(j - 1) == 0)
                        ++ surround;
                    if (j != col_num - 1 && grid.at(i).at(j + 1) == 0)
                        ++ surround;
                    if (i != 0 && grid.at(i - 1).at(j) == 0)
                        ++ surround;
                    if (i != row_num - 1 && grid.at(i + 1).at(j) == 0)
                        ++ surround;
                    ret += surround;
                }
            }
        }
        return ret;
    }

};

int main(int argc, char* argv[]) {
    vector<vector<int>> ivec;    
    ivec.push_back(vector<int>{0,1,0,0});
    ivec.push_back(vector<int>{1,1,1,0});
    ivec.push_back(vector<int>{0,1,0,0});
    ivec.push_back(vector<int>{1,1,0,0});
    Solution s;
    cout << s.islandPerimeter(ivec) << endl;
    return 0;
}

