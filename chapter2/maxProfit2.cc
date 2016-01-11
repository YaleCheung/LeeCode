/*
 * =====================================================================================
 *
 *       Filename:  maxProfit2.cc
 *
 *    Description:  
 *    Say you have an array for which the ith element is the price of a given stock on day i.
 *
 *    Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
 *
 *    Subscribe to see which companies asked this question
 *
 *    Show Tags
 *    Show Similar Problems
 *
 *
 *        Version:  1.0
 *        Created:  01/11/16 05:11:22
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
class Solution {
public:
    int maxProfit(vector<int>& prices) {
	int size = prices.size();
        if (size == 0)
            return 0;
        int maxProfit = 0; 
	int begin = 0;
        for(int i = 1; i < size; ++ i) {
	     if (i == size - 1 || prices[i] < prices[i - 1]){
		 maxProfit += prices[i - 1] - prices[begin];
                 begin = i;
	     } else if (i == size - 1) {
                 maxProfit += prices[i] - prices[begin];
	     }
	}
	return maxProfit;
    }
};
