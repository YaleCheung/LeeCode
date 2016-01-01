
#include <iostream>
#include <string>
#include <cassert>
#include <ctype.h>
using namespace std;

class Solution {
        void _lower(string& str) {
                    for(auto &ch : str)
                                    ch = tolower(ch);
                        }
    public:
            bool isIsomorphic(string s, string t) {
                        _lower(s);
                                _lower(t);
                                        int size = s.size();
                                                char tableA[128];
                                                        for(int i = 0; i < 128; ++ i)
                                                                        tableA[i] = -1;
                                                                bool tableMap[128];
                                                                        for(int i = 0; i < 128; ++ i)
                                                                                        tableMap[i] = false;
                                                                                for(int i = 0; i < size; ++ i) {
                                                                                                char chl = s.at(i);
                                                                                                            char chr = t.at(i);
                                                                                                                        int posl = chl - 0;
                                                                                                                                    int posr = chr - 0;
                                                                                                                                                if (tableA[posl] == -1) {
                                                                                                                                                                    if (tableMap[chr - 0] == false) {
                                                                                                                                                                                            tableA[posl] = chr;
                                                                                                                                                                                                                tableMap[chr - 0] = true;
                                                                                                                                                                                                                                } else return false;
                                                                                                                                                                                } else if (tableA[posl] != chr) 
                                                                                                                                                                                                    return false;
                                                                                                                                                                                        }
                                                                                        return true;
                                                                                            }
};
