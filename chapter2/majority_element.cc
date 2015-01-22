/*
 * =====================================================================================
 *
 *       Filename:  majority_element.cc
 *
 *    Description:  Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

 You may assume that the array is non-empty and the majority element always exist in the array.
 *
 *        Version:  1.0
 *        Created:  01/22/15 14:08:00
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
		    int majorityElement(vector<int> &num) {
			    		int count = 0;
							int candidate = 0;
									int size = num.size();
											for(auto i = 0; i < size; ++ i) {
															if (count == 0) {
																				candidate = num[i];
																								count = 1;
																											} else {
																																if(candidate == num[i])
																																						++ count;
																																				else
																																										-- count;				
																																							}
																	}
													return candidate;
													  	}
};
