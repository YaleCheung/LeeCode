#include <string>
#include <iostream>
using namespace std;
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
class Solution {
    bool issign(char c) {
        return (c == '+' || c == '-') ? true : false;
    }
public:
    int atoi(string str) {
        int i = 0;
        int sign_pos = -1;
        int size = str.size();
        while(((! isdigit(str[i])) && (!issign(str[i]))) && (i < size)) {
            if(isalpha(str[i]))
		break;
            ++ i;
	}
        long long ret = 0;
        int start = i;
        if (issign(str[i])) {
            sign_pos = i;
            start += 1;
            if ((i + 1) >= size || (! isdigit(str[i + 1])))
                return 0;
        }
        i = start;
        while(i < size && isdigit(str[i])) {
            ret = 10 * ret + str[i] - '0';
            ++ i;
        }
        if (sign_pos != -1 && str[sign_pos] == '-')
            ret *= -1;
        if (ret > INT_MAX)
            return INT_MAX;
        if (ret < INT_MIN)
            return INT_MIN;
        return int(ret);
    }
};

int main() {
    Solution s;
    string str = "1";
    cout << s.atoi(str) << endl;
    return 0;
}
