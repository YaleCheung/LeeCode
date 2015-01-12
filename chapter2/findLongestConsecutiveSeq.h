/*
 * =====================================================================================
 *
 *       Filename:  findLongestConsecutiveSeq.cc
 *
 *    Description: Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
 For example, Given 
 *
 *        Version:  1.0
 ngest consecutive elements sequence is  Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
 For example, Given 
 *        Created:  01/12/15 23:54:11
 ngest consecutive elements sequence is  Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
 For example, Given 
eturn its length: 4.
Your algorithm should run in O(n) complexity.

 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

// the current time complexity is O(n). but the  space coplexity is O(n) too;
/*
       find max and min, not the best
           because need n steps;
	       however, we can compare the two neighbours, to cal the max
	           and min. the complexity is n / 2;
		   */
void FindMinMax(int *array, const int& size, int* max, int* min) {
    *max = 0x80000001;
    *min = 0x7fffffff;
    for(int i = 0; i < size; i ++) {
        if (array[i] < *min)
            *min = array[i];
        if (array[i] > *max)
            *max = array[i];
    }
    return;
}

int FindLongestConsecutiveSeq(int* array, const int& size) {
    int max;
    int min;
    FindMinMax(array, size, &max, &min);
    cout << max << ' ' << min << endl;
    int *tmp = new int[max - min + 1];
    // heap intialization
    for(int i = 0; i < max-min+1; i ++)
        tmp[i] = 0;
    //construct hash array;
    for (int i = 0; i < max-min + 1; i ++) {
        tmp[array[i] - min] += 1;
    }
    //
    //for(int i = 0; i < max-min+1; i ++)
    //  cout << tmp[i] << endl;
    //cal the max seq
    int max_seq = 0;
    int continous_seq = 1;
    for(int i = 1; i < max - min + 1; i ++) {
        if ((tmp[i] > 0) && (tmp[i - 1] > 0)) {
            continous_seq += 1;
        } else {
            if(continous_seq > max_seq)
                max_seq = continous_seq;
            continous_seq = 1;
        }
    }
    return max_seq;
}

