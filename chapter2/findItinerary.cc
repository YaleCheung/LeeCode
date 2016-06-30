/*
 * =====================================================================================
 *
 *       Filename:  findItinerary.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/14/16 14:41:37
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
#include <string>
#include <unordered_map>
#include <set>
using namespace std;
typedef string From;
typedef string To;
typedef set<To> Tos;
typedef pair<string, string> aJourney;

class Solution {
    unordered_map<From, Tos> stores;
    vector<string> dfs(const string& str, vector<string> ret,vector<vector<string>>& rets) {
        auto iter = stores.find(str);
        ret.push_back(str);
        if (iter != stores.end()) {
            for(auto iter2 = iter->second.begin(); iter2 != iter->second.end();) {
                dfs(*iter2, ret, rets); 
                if (! iter->second.empty()) {
                    iter2 = iter->second.erase(iter2);
                } else 
                    stores.erase(iter);
                ++ iter2;
            }
        } else {
                rets.push_back(ret);
                return;
        }
        return;
    }
public:
    vector<string> findItinerary(vector<pair<string, string>> tickets) {
        // add elements to the stores;
        for(auto ticket : tickets) {
            From from = ticket.first;
            stores[from].insert(ticket.second);
        }
        // only find from the left side;
        // use dfs
        vector<string> ret;
        vector<vector<string>> rets;
        dfs("JFK", ret, rets);
        for(auto ret : rets) {
            for(auto str : ret) {
                cout << str + " ";
            }
            cout << endl;
        }
        return *rets.begin();
    }
};

//["MUC", "LHR"], ["JFK", "MUC"], ["SFO", "SJC"], ["LHR", "SFO"]j
int main(int argc, char* argv[]) {
    auto test1 = std::make_pair("MUC", "LHR");
    auto test2 = std::make_pair("JFK", "MUC");
    auto test3 = std::make_pair("SFO", "SJC");
    auto test4 = std::make_pair("LHR", "SFO");
    vector<pair<string, string>> tickets;
    tickets.push_back(test1);
    tickets.push_back(test2);
    tickets.push_back(test3);
    tickets.push_back(test4);
    Solution s;
    s.findItinerary(tickets);
    return 0;
}
