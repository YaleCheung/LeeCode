#include <iosream>
#include <string>
using namespace std;


class Solution {
public:
	// can be figured out by divide conquer method;
    string longestCommonPrefix(vector<string> &strs) {
    	if (strs.empty())
    		return string(""); 
    	//must be less than the minimum length	
        int max_pos = strs[1].size();   
        for (auto str : strs) {
        	size_t size = str.size();
        	if (size < max_pos)
        		max_pos = size; 
        }
        if (0 == max_pos)
        	return string("");

        // find the minimum string by enumerating method;
        for(int i = 0; i < strs.size(); ++ i) {
        	string pre = strs.at(i);
        	for(int j = i + 1; j < strs.size(); ++ j) {
        		string cur = strs.at(j);
        		for(int k = 0; k <= max_pos; ++ k) {
        			if (pre.at(k) != cur.at(k)) {
        				max_pos = k - 1;
                        if (max_pos < 0)
                            return "";
        			}
        		}
        	}
        }
        return strs.substr(max_pos + 1);
    }
};
