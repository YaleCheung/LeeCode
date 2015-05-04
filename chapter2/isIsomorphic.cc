
#include <iostream>
#include <string>
#include <cassert>
#include <ctype.h>
using namespace std;

class Solution {
    void lower(string& str) {
        for(auto &ch : str)
            ch = tolower(ch);
    }
public:
    bool isIsomorphic(string s, string t) {
        // make two string into lower string;
        lower(s);
	lower(t);
	int size = s.size();
	char table[26]={0};
        for(int i = 0; i < 26; ++i)
            table[i] = -1;
        for(int i = 0; i < size; ++ i) {
            char chl = s.at(i);
	    char chr = t.at(i);
	    int posl = chl - 'a';
	    int posr = chr - 'a';
            if (-1 == table[posl] && -1 == table[posr]) {
                table[posl] = chr;
		table[posr] = chl;
	    } else {
                if (table[posl] != -1 )
                if(table[posl] == -1 && table[posr] != chl)
                    return false;
		if(table[posr] == -1 && table[posl] != chr)
		    return false; 
	    }
	}
	return true;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.isIsomorphic("ab", "aa") << endl;
    cout << s.isIsomorphic("foo", "add") << endl;
    cout << s.isIsomorphic("paper", "title") << endl;
    cout << s.isIsomorphic("egg", "add") << endl;
    
    return 0;
}
