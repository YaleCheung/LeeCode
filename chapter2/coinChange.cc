/*
 * =====================================================================================
 *
 *       Filename:  coinChange.cc
 *
 *    Description:  
 *    You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
 *
 *    Example 1:
 *    coins = [1, 2, 5], amount = 11
 *    return 3 (11 = 5 + 5 + 1)
 *
 *    Example 2:
 *    coins = [2], amount = 3
 *    return -1.
 *
 *    Note:
 *    You may assume that you have an infinite number of each kind of coin.
 *
 *        Version:  1.0
 *        Created:  01/12/16 06:17:45
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
class Solution {
  public:
    int coinChange(vector < int >&coins, int amount) {
	if (amount < 0)
	    return -1;
	sort(coins.begin(), coins.end());
	int *array = new int[amount + 1];
	 array[0] = 0;
	for (auto i = 1; i < amount + 1; ++i)
	     array[i] = -1;
	for (int i = 0; i < amount; ++i) {
	  for (auto coin:coins) {
		if (array[i] != -1 && (i + coin <= amount)) {
		    if (((array[i + coin] != -1) 
			&& (array[i] + 1 < array[i + coin])) || array[i +coin] == -1
			)
			array[i + coin] = array[i] + 1;
		} else if (i + coin > amount)
		     break;
	    }
	}

	int ret = array[amount];
	delete [] array;
	return ret;
    }
};

int main(int argc, char* argv[]) {
    vector<int> ivec = {399, 413, 250, 207, 139};
    Solution s;
    cout << s.coinChange(ivec, 248) << endl;
    return 0;
}
