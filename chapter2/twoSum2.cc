/*
 * =====================================================================================
 *
 *       Filename:  twoSum2.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/25/2016 20:59:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <map>
#include <vector>
#include <utility>
using namespace std;

class Solution {
    public:
            vector<int> twoSum(vector<int>& nums, int target) {
                        multimap<int, unsigned int> hash;
                                int i = 0;
                                        for(auto num : nums)
                                                        hash.insert(std::make_pair(num, i ++));
                                                sort(nums.begin(), nums.end());

                                                        // result;
                                                        //         for(int start = 0, end = nums.size() - 1; start < end;) {
                                                        //                     if (nums.at(start) + nums.at(end) == target) {
                                                        //                                     int num1_pos, num2_pos;
                                                        //                                                     if (nums[start] == nums[end]) {
                                                        //                                                                         num1_pos = find(hash.begin(), hash.end(), target);
                                                        //                                                                                             num2_pos = find(num1_pos + 1, hash.end(), target);
                                                        //                                                                                                             } else {
                                                        //                                                                                                                                 num1_pos = hash.find(hash.find(nums[start]));
                                                        //                                                                                                                                                     num2_pos = hash.find(hash.find(nums[end]));
                                                        //                                                                                                                                                                     }
                                                        //                                                                                                                                                                                     return vector<int> {num1_pos -> second, num2_pos -> second};
                                                        //                                                                                                                                                                                                 }
                                                        //                                                                                                                                                                                                             else if(nums.at(start) + nums.at(end) < target)
                                                        //                                                                                                                                                                                                                             ++ start;
                                                        //                                                                                                                                                                                                                                         else
                                                        //                                                                                                                                                                                                                                                         -- end;
                                                        //                                                                                                                                                                                                                                                                 }
                                                        //                                                                                                                                                                                                                                                                         return vector<int>();
                                                        //                                                                                                                                                                                                                                                                             }
                                                        //                                                                                                                                                                                                                                                                             };
                                                        //                                                                                                             }
                                                        //                                                     }
                                                        //                     }
                                                        //         }
            }
}
