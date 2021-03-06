/*
 * =====================================================================================
 *
 *       Filename:  uniquePaths.cc
 *
 *    Description:  2a07cc13b9a2
 *
 *        Version:  1.0
 *        Created:  01/06/16 08:24:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
ass Solution {
    int **_array;
  public:
    int uniquePaths(int m, int n) {
	_array = new int *[m];
	for (int i = 0; i < m; ++i) {
	    _array[i] = new int[n];
	    for (int j = 0; j < n; ++j)
		 _array[i][j] = 0;
	} for (int i = 0; i < n; ++i) {
	    _array[0][i] = 1;
	}
	for (int i = 0; i < m; ++i) {
	    _array[i][0] = 1;
	}
	for (int i = 1; i < m; ++i) {
	    for (int j = 1; j < n; ++j) {
		_array[i][j] = _array[i - 1][j] + _array[i][j - 1];
	    }
	}
	return _array[m - 1][n - 1];
    }
};
