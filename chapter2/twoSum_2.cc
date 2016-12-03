/*
 * =====================================================================================
 *
 *       Filename:  twoSum_2.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/03/2016 21:33:06
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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int pre = 0;
        int post = numbers.size() - 1;
        while(pre < post) {
            int sum = numbers.at(pre) + numbers.at(post);
            if (target == sum)
                return {++ pre, ++ post};
            else if (sum < target)
                ++ pre;
            else
                -- post;
        }
        return {};
    }
};

int main(int argc, char* argv[]) {
    vector<int> numbers{2, 7, 11, 15};
    Solution s;
    auto rets = s.twoSum(numbers, 9);
    for(auto ret : rets) {
        cout << ret << '\n';
    }
    return 0;
}

