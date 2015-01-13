/*
Given an array of integers, find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, 
where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution. 
Input: numbers = {2, 7, 11, 15}, target = 9;
Output: index1 = 1, index2 = 2 
*/

// by hash, store each value in the input to bool to reduce the find complexity to O(1)

#include <iostream>
using namespace std;

void findMinMaxValue(int *array, const int& size, int* max, int* min) {
    *max = 0x80000001;
    *min = 0x7fffffff;

    for(int i = 0; i < size; i ++) {
         if (array[i] > *max)
         	*max = array[i];
         if (array[i] < *min)
            *min = array[i];   
    }
    return;
}

void twoSum(int* array, const int& size, const int& target, int* p_index1, int* p_index2) {
	// store in to hash array;
    int min, max;
    
    findMinMaxValue(array, size, &max, &min);
    // create hash array;
    int hash_size = max - min + 1;
    int *hash_array = new int[hash_size];
    // init hash
    for (int i = 0; i < hash_size; i ++) {
        hash_array[i] = 0;
    }
    for (int i = 0; i < size; i ++) 
        hash_array[array[i] - min] += 1;
    // two sum
    for (int i = 0; i < size; i ++) {
        *p_index1 = array[i];
        if (hash_array[target - *p_index1 - min] > 0)
        	*p_index2 = array[i];
    }
    // compare *p_index1 and *p_index2
    if(*p_index1 > *p_index2) {
    	int tmp;
    	tmp = *p_index1;
    	*p_index1 = *p_index2;
    	*p_index2 = tmp;
    }
}
