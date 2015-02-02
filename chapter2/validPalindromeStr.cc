#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
    	// two pos point to the begin and end;
        int pre = 0;
        int suf = s.size() - 1;	

        for(auto i = 0; i < s.size(); i ++) {
            if(s[i] >= 'a' && s[i] <= 'z')	
            	s[i] -= 32;
        }
        while(1) {
        	// found pre;
        	while (pre < suf) {
        		if((pre < suf) && ((s[pre] >= 'A' && s[pre] <= 'Z') || (s[pre] >='0' && s[pre] <='9')))
				break;
        		++ pre;
        	}
        	while (pre < suf) {
        		if((pre < suf) && ((s[suf ]>= 'A' && s[suf] <= 'Z') || (s[suf] >='0' && s[suf] <='9')))
        			break;
        		-- suf;
        	}
        	if((pre < suf) && (s[pre] == s[suf])) {
        		++ pre;
        		-- suf;
        	} else if((pre < suf) && (s[pre] != s[suf]))
        		return false;
		else if(pre >= suf)
			return true;
        }
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.isPalindrome("ab2a") << endl;
}