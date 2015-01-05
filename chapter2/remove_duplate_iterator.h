/*
 * =====================================================================================
 *
 *       Filename:  remove_duplate_iterator.h
 *
 *    Description:  Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 Do not allocate extra space for another array, you must do this in place with constant memory.
 For example, Given input array A = [1,1,2],
 Your function should return length = 2, and A is now [1,2].
 *
 *        Version:  1.0
 *        Created:  12/26/14 23:41:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

int RemoveDuplicate(int array[], const int& size) {
    if(size <= 1)
        return size;
    int ret = 0;
    int pre = array[0];
    for(int i = 1; i < size; i ++) {
        int cur = array[i];
	if(pre != cur)
    }
    return ret;
}
