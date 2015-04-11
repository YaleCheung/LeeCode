#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
    string _read_str(const string& in) {
        size_t size = in.size();
        char pre_char = in.at(0);
        int count = 0;
        string ret = "";
        for (auto i = 0; i < size; ++ i) {
            if (in.at(i) == pre_char)
                ++ count;
	    else {
                stringstream ss;
                ss << count;
                string str_count;
                ss >> str_count;
                ret += str_count + pre_char;
                pre_char = in.at(i);
                count = 1;
            }
	    if (i == (size - 1)) {
                stringstream ss;
	        ss << count;
		string str_count;
		ss >> str_count;
		ret += str_count + pre_char;
	    }
        }
        return ret;
    }
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string pre = countAndSay(n - 1);
	cout << "call " << n - 1 << '\t' << pre << endl;
	cout << "read " << n - 1 << '\t' << _read_str(pre) << endl;
        return _read_str(pre);
    }
};

int main(int argc, char* argv[]) {
	Solution s;
    cout << s.countAndSay(4) << endl;;
    return 0;
}
