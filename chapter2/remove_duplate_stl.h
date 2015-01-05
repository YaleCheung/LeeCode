/*
 * =====================================================================================
 *
 *       Filename:  remove_duplate.cc
 *
 *    Description:   Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 Do not allocate extra space for another array, you must do this in place with constant memory.
 For example, Given input array A = [1,1,2],
 Your function should return length = 2, and A is now [1,2].
 *
 *        Version:  1.0
 *        Created:  12/26/14 23:18:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangyi
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>
#include <algorithm>

int RemoveDuplicate(int array[], const int& size) {
    return std::distance(array, std::unique(array, array+size));
}


