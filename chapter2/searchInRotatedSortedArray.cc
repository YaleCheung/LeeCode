/*
 * =====================================================================================
 *
 *       Filename:  searchInRotatedSortedArray.cc
 *
 *    Description:  i
 *
 *        Version:  1.0
 *        Created:  01/06/15 23:33:00
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

/*
      problem:
         Suppose a sorted array is rotated at some pivot unknown to you beforehand.
	 (i.e., t become #include <iostream>
	 using namespace std;

	 /*
	    problem:
	       Suppose a sorted array is rotated at some pivot unknown to you beforehand.
	       (i.e., t become #include <iostream>
	       using namespace std;

	       /*
	          problem:
		     Suppose a sorted array is rotated at some pivot unknown to you beforehand.
		     (i.e., i
		     u are given a target value to search. If found in the array return its index, otherwise return -1. You may assume no duplicate exists in the array.
		     */
int Search(int array[], const int& size, const int& value) {
    int beg = 0;
    int end = size;
    while(beg != end) {
        int mid = (beg + end) / 2;
        if(value == array[mid])
            return mid;
        if(array[beg] < array[mid]) {
            if((value >= array[beg]) && (value < array[mid])) {
                end = mid;
            } else {
                beg = mid + 1;
            }
        } else if(array[beg] > array[mid]) {
            if(value <= array[end - 1] && value > array[mid])
                beg = mid + 1;
            else
                end = mid;
        } else
            ++ beg;

    }
    return -1;
}


int main(int argc, char* argv[]) {
    int array[] = {0,1,2};
    cout << Search(array, sizeof(array) / sizeof(int), 2);
    return 0;
}
