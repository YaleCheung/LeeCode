/*
 * =====================================================================================
 *
 *       Filename:  reconstructQueue.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/28/2016 22:31:36
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
#include <utility>
using namespace std;

class Solution {
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        using pair = pair<int, int>>;
        auto cmp = [](const pair& p1, const pair& p2) {
            return p1.first > p2.first || ((p1.first == p2.first) && p1.second < p2.second);
        }
        auto ret = sort(people.begin(), people.end(), cmp);
        for(auto person : people) {
            ret.insert(people.begin() + person.second, person);
        }
        return ret;
    }
};
