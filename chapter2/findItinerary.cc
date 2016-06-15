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
public:
    vector<string> findItinerary(vector<pair<string, string>> tickets) {
        // insert tickets to stores whose key is From and value is set<To>;
        for(auto journey : tickets) {
            From from = journey.first;
            To to = journey.second;
            stores[from].insert(to);
        } 
        vector<string> rets;
        // dfs JFK;
        string cur("JFK");
        if (stores.count(cur))
            rets.push_back("JFK");
        while(stores.count(cur) && ! stores.empty()) {
            Tos& tos = stores[cur];
            To to = *tos.begin();
            rets.push_back(to);
            tos.erase(to);
            if(tos.empty())
                stores.erase(cur);
            cur = to;
        }
        return rets;
    }
};

//["MUC", "LHR"], ["JFK", "MUC"], ["SFO", "SJC"], ["LHR", "SFO"]j
int main(int argc, char* argv[]) {
    Solution s;
    aJourney journey1 = std::make_pair("MUC", "LHR");
    aJourney journey2 = std::make_pair("JFK", "MUC");
    aJourney journey3 = std::make_pair("SFO", "SJC");
    aJourney journey4 = std::make_pair("LHR", "SFO");
    vector<aJourney> tickets;
    tickets.push_back(journey1);
    tickets.push_back(journey2);
    tickets.push_back(journey3);
    tickets.push_back(journey4);
    auto rets = s.findItinerary(tickets);
    cout << "test1 ----------------->start" << endl;
    for(auto ret : rets) {
        cout << ret << endl;
    }
    cout << "test1 ------------------->end" << endl;
    
    tickets.clear(); 
    aJourney journey5 = std::make_pair("JFK", "SFO");
    aJourney journey6 = std::make_pair("JFK", "ATL");
    aJourney journey7 = std::make_pair("SFO", "ATL");
    aJourney journey8 = std::make_pair("ATL", "JFK");
    aJourney journey9 = std::make_pair("LHR", "SFO");
    aJourney journey10 = std::make_pair("ATL", "SFO");
    tickets.push_back(journey5);
    tickets.push_back(journey6);
    tickets.push_back(journey7);
    tickets.push_back(journey8);
    tickets.push_back(journey9);
    tickets.push_back(journey10);
    auto rets2 = s.findItinerary(tickets);
    cout << "test2 ----------------->start" << endl;
    for(auto ret : rets2) {
        cout << ret << endl;
    }
    cout << "test2 ------------------->end" << endl;
    return 0;
}
