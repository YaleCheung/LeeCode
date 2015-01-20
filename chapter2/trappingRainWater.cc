/*
 * =====================================================================================
 *
 *       Filename:  trappingRainWater.cc
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/20/15 13:32:53
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
using namespace std;

int TrappingRainWater (vector<int> array) {
    int input_size = array.size();
    int pos_1 = 0;
    int pos_2 = 0;
    int i = 1;
    int water_num = 0;
    while(i < input_size - 1) {
        if((array[i] > array[i - 1])  && (array[i] > array[i + 1])) {
            pos_1 = i;
            // find the second position which meet the condition of i, but the pos is behand i;
            for(int j = pos_1 + 1; j < size; j ++) {
                if(array[j] > array[j - 1] && array[j] > array[j + 1]) {
                    pos_2 =  j;
                    // calculate the watch this block can take;
                    int water_block = 0;
                    // find the height of the minor block;
                    if(array[pos_1] > array[pos_2]) {
                        water_block = array[pos_2] * (pos_2 - pos_1 - 1);
                    }
                    // cal how much block have been filled;
                    int fill_sum = 0;
                    for (int k = pos_1; k < pos_2; k ++) {
                        fill_sum += array[i];
                    }
                    water_num += water_block - fill_sum;
                    if (pos_2 == input_size - 1)
                        return water_num;
                    i = j;
                    break;
                }
            }
        }
    }
    return water_num;
}
    int main(int argc, char *argv[]) {

        return 0;
    }
