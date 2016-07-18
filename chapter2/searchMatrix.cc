/*
 * =====================================================================================
 *
 *       Filename:  searchMatrix.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/18/16 02:51:12
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
using std::cout;
using std::endl;
using std::vector;
class Solution {
    bool searchMatrix(vector<vector<int>>& matrix, int start_x, int start_y,
		    int end_x, int end_y, int target) {
        cout << start_x << " " << start_y << " " << end_x << " " << end_y << endl;
        if (end_x < start_x || end_y < start_y)
            return false;
        int pos_x = end_x;
	int pos_y = end_y;
        while(pos_x >= start_x && pos_y >= start_y) {
            cout << pos_x << " " << pos_y << " " << endl;
            if (target == matrix[pos_y][pos_x])
                return true;
            else if (start_x == end_x && start_y == end_y)
               return false;
	    else if (target < matrix[pos_y][pos_x]) {
                if (pos_x == start_x)
                    return searchMatrix(matrix, start_x, start_y, end_x, pos_y - 1, target);
                else if (pos_y == start_y)
                    return searchMatrix(matrix, start_x, start_y, pos_x - 1, end_y, target);
                else if(pos_x > start_x)
                    -- pos_x;
                else if(pos_y > start_y)
                    -- pos_y;
            }
	    else if (target > matrix[pos_y][pos_x]) {
                return searchMatrix(matrix, start_x, pos_y + 1, pos_x, end_y, target)|| searchMatrix(matrix, pos_x + 1, start_y, end_x, pos_y, target);
	    }
	}
	return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        size_t size_row = matrix.size();
        size_t size_col = matrix.begin()->size();
	return searchMatrix(matrix, 0, 0, size_col - 1, size_row - 1, target);
    }
};


int main(int argc, char* argv[]) {
    Solution s;
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {6, 7, 8 ,20},{9,10,11, 21}, {16, 18, 20, 29}, {31, 32, 33 ,34}};
    cout << s.searchMatrix(matrix, 5) << endl;
    return 0;
}
