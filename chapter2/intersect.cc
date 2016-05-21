/*
 * =====================================================================================
 *
 *       Filename:  intersect.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/21/16 13:46:52
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
		    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
			            vector<int>::iterator end_iter1 = unique(nums1.begin(), nums1.end());
				              vector<int>::iterator end_iter2 = unique(nums2.begin(), nums2.end());
					                map<int ,int> hash;
							        for(auto iter = nums1.begin(); iter != end_iter1; ++ iter)
									              hash[*iter] = 1;
								        for(auto iter = nums2.begin(); iter != end_iter2; ++ iter)
										              hash[*iter] += 1;
									          vector<int> ret;
										            for_each(hash.begin(), hash.end(), [&ret](map<int, int>::reference r) {
													                  if (r.second >= 2) {
															                    ret.push_back(r.first);
																	                  }
																			              });
											              return ret;
												          }
};
