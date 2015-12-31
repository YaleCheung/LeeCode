/*
 * =====================================================================================
 *
 *       Filename:  isValidSudoku.cc
 *
 *    Description:  Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.
 *
 *    The Sudoku board could be partially filled, where empty cells are filled with the character '.'.
 *
 *
 *    A partially filled sudoku which is valid
 *    web site : https://leetcode.com/problems/valid-sudoku/
 *
 *        Version:  1.0
 *        Created:  12/31/15 05:29:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <iostream>
#include <cassert>
using namespace std;


class Solution {
    bool _isValid(vector<vector<char>>& board, const int& m, const int& n) {
        // check row and column, and 9-house;
	// assume the sudoku is 9*9
	for(int j = 0; j < 9; ++ j) { // check row
	    if(j != n && board[m][j] == board[m][n])
                return false;
	}
	for(int i = 0; i < 9; ++ i) { // check row
	    if(i != m && board[i][n] == board[m][n])
                return false;
	}
	for(int i = m / 3 * 3; i < m / 3 * 3 + 3; ++ i) {
            for(int j = n / 3 * 3; j < n / 3 * 3 + 3; ++ j) {
                if (i != m && j != n && board[i][j] == board[m][n])
                    return false;
	    }
	}
	return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int vSize = board.size();
	assert(vSize > 0);
	int hSize = board[0].size();
	assert(vSize == hSize);
        for(int i = 0; i < vSize; ++ i) {
            for (int j = 0; j < hSize; ++ j) {
                if(board[i][j] == '.')
                    continue;
		//check valid num
		if(board[i][j] < '1' || board[i][j] > '9')
                    return false;
		if(! _isValid(board, i, j)){
                    return false;
		}
	    }
	}
	return true;
    }
};
