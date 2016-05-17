/*
 * =====================================================================================
 *
 *       Filename:  wordPattern.cc
 *
 *    Description:  
 *    Given a pattern and a string str, find if str follows the same pattern.
 *
 *    Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.
 *
 *    Examples:
 *    pattern = "abba", str = "dog cat cat dog" should return true.
 *    pattern = "abba", str = "dog cat cat fish" should return false.
 *    pattern = "aaaa", str = "dog cat cat dog" should return false.
 *    pattern = "abba", str = "dog dog dog dog" should return false.
 *
 *        Version:  1.0
 *        Created:  01/02/16 05:53:40
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
#include <vector>
#include <map>
using namespace std;

class Solution {
    void _splitStringWithSpace(const string& str, vector<string>& strings) {
        int size = str.size();
	string word = "";
	for(int i = 0; i < size; ++ i) {
            if (str[i] == ' ') {
                strings.push_back(word);
		word = "";
	    } else {
                word += str[i];
	    }
	}
	strings.push_back(word);
    }
public:
    bool wordPattern(string pattern, string str) {
        vector<string> words;
	map<string, string> pattern_word;
	// get patterns;
	_splitStringWithSpace(str, words);

	int pattern_size = pattern.size();
	int words_size = words.size();
        if(pattern_size != words_size)
            return false;
        for(int i = 0; i < words_size; ++ i) {
            if (!pattern_word.count(pattern[i])) {
                pattern_word[pattern[i]] = words[i];
	    } else {
               if (words[i] != pattern_word[pattern[i]]) {
                   return false;
	       }
	    }
	}
	return true;
    }
};
