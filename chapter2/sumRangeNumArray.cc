/*
 * =====================================================================================
 *
 *       Filename:  sumRangeNumArray.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/02/16 14:21:43
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
private: 
    vector<int> array_;
    size_t size_;
    int** matrix;
public:
    NumArray(vector<int>& nums) {
        array_ = nums;
	size_ = nums.size();
	if (size_ > 0) {
            matrix = new int* [size_];
	    for(int i = 0; i < size_; ++ i) {
                matrix[i] = new int[size_];
                for(int j = 0; j < size_; ++ j) {
                    matrix[i][j] = 
		}
	    }
            
	}
    }
    int sumRange(int i, int j) {
        
    }

};
