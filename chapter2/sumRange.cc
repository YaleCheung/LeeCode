/*
 * =====================================================================================
 *
 *       Filename:  sumRange.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/06/16 05:55:16
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
using namespace std;
class NumArray {
    vector < int >_array;
    int **_matrix;
    int _size;
  public:
     NumArray(vector < int >&nums) {
	_array = nums;
	_size = nums.size();
	_matrix = new int *[_size];
	for (int i = 0; i < _size; ++i) {
	    _matrix[i] = new int[_size];
	    for (int j = 0; j < _size; ++j)
		 _matrix[i][j] = 0x80000001;
	} for (int i = 0; i < _size; ++i) {
	    _matrix[i][i] = _array[i];
	    for (int j = i + 1; j < _size; ++j)
		_matrix[i][j] = _matrix[i][j - 1] + _array[j];
	}
    }

    int sumRange(int i, int j) {
	return _matrix[i][j];
    }
};

int main(int argc, char* argv[]) {
    vector<int> ivec = {1,2,3,4,5};
    NumArray array(ivec);
    std::cout << array.sumRange(0, 1) << endl;
    cout << array.sumRange(1,1) << endl;
    return 0;
}
