/*
 * =====================================================================================
 *
 *       Filename:  countBattleShips.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/22/2016 21:39:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int column = board.size();
        int ret = 0;
        if (0 == column)
            return ret;
        int row = board.begin()->size();
        if (0 == row)
            return ret;
        for(int i = 0; i < column; ++ i) {
            for(int j = 0; j < row; ++ j) {
                if (board.at(i).at(j) == 'X') {
                    ret += 1;
                    for(int k = j + 1; k < row; ++ k) {
                        if (board.at(i).at(k) != 'X')
                            break;
                        else
                            board.at(i).at(k) = '.';
                    }
                    for(int k = i + 1; k < column; ++ k) {
                        if (board.at(k).at(j) != 'X')
                            break;
                        else
                            board.at(k).at(j) = '.';
                    }
                }
            }
        }
        return ret;
    }
};

