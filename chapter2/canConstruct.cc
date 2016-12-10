/*
 * =====================================================================================
 *
 *       Filename:  canConstruct.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/2016 11:28:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class Solution {
public:
    bool canConstruct(string randomNote, string magazine) {
        char* note_hash[26] = {0};
        char* magazine_hash[26] = {0};
        for(auto c : randomNote) {
            note_hash[c - 'a'] += 1;
        }
        for(auto s : magazine) {
            magazine_hash[s - 'a'] += 1;
        }
        for(int i = 0; i < 26; ++ i) {
            if(note_hash[i] > magazine_hash[i])
                return false;
        }
        return true;
    }
};
int main(int argc, char* argv[]) {
    Solution s;
    cout << s.canConstruct("a", "b") << endl;
    cout << s.canConstruct("aa", "ab") << endl;
    cout << s.canConstruct("aa", "aab") << endl;
}
