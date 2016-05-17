/*
 * =====================================================================================
 *
 *       Filename:  maxProfit.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/06/16 04:58:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 0x7fffffff;
	int maxProfit = 0;
	for(auto& price: prices) {
            if(minPrice > price) minPrice = price;
            maxProfit = maxProfit > (price - minPrice) ? maxProfit : price - minPrice;
	}
	return maxProfit;
    }
};
