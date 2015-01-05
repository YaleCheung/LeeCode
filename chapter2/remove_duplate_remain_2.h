/*
 * =====================================================================================
 *
 *       Filename:  remove_duplate_remain_2.h
 *
 *    Description:  Follow up for ”Remove Duplicates”: What if duplicates are allowed at most twice? For example, Given sorted array n
 *
 *        Version:  1.0
 ur function should return length = 5, and A is now   Follow up for ”Remove Duplicates”: What if duplicates are allowed at most twice? For example, Given sorted array n
 *        Created:  01/05/15 13:25:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangyi
 *   Organization:
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;

int RemoveDuplates(int array[], const int& size) {
    if(size <= 2)
        return size;
    int count = 2;
    for(int i = 2; i < size; i ++) {
        if(array[i] != array[count - 2])
            array[count ++] = array[i];
    }
    return count;
}

