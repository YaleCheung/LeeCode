/*
 * =====================================================================================
 *
 *       Filename:  isAnagram.cc
 *
 *    Description:  Given two strings s and t, write a function to determine if t is an anagram of s.
 *
 *    For example,
 *    s = "anagram", t = "nagaram", return true.
 *    s = "rat", t = "car", return false.
 *
 *        Version:  1.0
 *        Created:  08/01/2015 10:47:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
   bool isAnagram(string s, string t) {
       int sHash[26];
       int tHash[26];
       for(int i = 0; i < 26; ++ i) {
           sHash[i] = 0;
           tHash[i] = 0;
       }
       for(auto& ch : s) {
           sHash[ch - 'a'] += 1;
       }
       for(auto& ch : t) {
           tHash[ch - 'a'] += 1;
       }
       for(int i = 0; i < 26; ++ i) {
           if (sHash[i] != tHash[i])
               return false;
       }
       return true;
   }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.isAnagram("anagram", "nagaram") << endl;
    cout << s.isAnagram("rat", "car") << endl;
    return 0;
}
