/*
 * =====================================================================================
 *
 *       Filename:  maxProduct.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/23/16 03:38:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <string>
#include <bitset>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<string>& words) {
	// all the bits stored in the masks;
        vector<bitset<26>> bits;	
	int ret = 0;
        for(size_t i = 0; i < words.size(); ++ i) {
	    bitset<26> bit;
            for(size_t j = 0; j < words[i].size(); ++ j)
                bit.set(words[i][j]);
	    bits.push_back(bit);
	}
	for(auto i = 0; i < words.size(); ++ i) {
            for(int j = 0; j < i; ++ j) {
                if((bits[i] & bits[j]).none())
                    ret = std::max(ret, words[i].size() * words[j].size());
	    }
	}
	return ret;
    }
};
