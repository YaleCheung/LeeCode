/*
 * 
 * ============================================================================
 * =========
 * 
 * Filename:  firstUniqChar.cc
 * 
 * Description:
 * 
 * Version:  1.0 Created:  12/10/2016 21:21:59 Revision:  none Compiler:  gcc
 * 
 * Author:  YOUR NAME (), Organization:
 * 
 * =====================================
 * ===============================================
 */
#include <unordered_map>
#include <string>
class		Solution {
	public:
	int		firstUniqChar(string s) {
		map < char     , int >hash;
for             (auto c:		s) {
			hash[c] += 1;
		}
		int		ret = -1;
for             (const auto & c:		s){
			ret++;
			if (hash[c] == 1)
				return ret;
		}
				return       -1;
	}
};
