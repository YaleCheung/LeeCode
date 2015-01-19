/*
 * =====================================================================================
 *
 *       Filename:  next_permutation.cc
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/19/15 22:57:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
   Implement next permutation, which rearranges numbers into the lexicographically next greater permu- tation of numbers.
   If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascend- ing order).
   The replacement must be in-place, do not allocate extra memory.
   Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.
   1,2,3 -> 1,3,2
   */
typedef vector<int>::reverse_iterator iterator;
void NextPermutation (vector<int>& array) {
    iterator iter_beg = array.rbegin();
    iterator iter_end = array.rend();
    NextPermutation(iter_beg, iter_end);
}

void NextPermutation(iterator beg, iterator end) {
    // find the first reverse order num
    iterator pivot = iter_beg;
    for(iterator iter = beg + 1; iter != end; ++ iter) {
        int cur = *iter;
        int pre = *(-- iter)
        if (cur < pre) {
            pivot = iter;
            break;
        }
    }
    if (pivot == end) {
        reverse(beg, end);
        return;
    }
    iterator change_iter;
    for(iterator iter = pivot + 1; iter != end; ++iter) {
        if(*iter < *pivot ) {
            change_iter = iter;
            break;
        }
    }
    int tmp = *pivot;
    *pivot = *change_iter;
    *change_iter = tmp;
    reverse(beg, pivot);
    return;
}
int main(int argc, char *argv[]) {

}
