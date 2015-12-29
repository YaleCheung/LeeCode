#include <iostream>
#include <cstdlib>
using namespace std;
class Solution {
public:
	bool canWinNim(int n) {
		return (n - 1) % 4 != 3;
	}
};

int main(int argc, char* argv[]) {
        if (2 != argc) {
		cout << "wrong input" << endl;
		cout << "Using exe: NUM" << endl;
		return 0;
	}
	Solution s;
	int input = atoi(argv[1]);
        if (s.canWinNim(input) == true)
		cout << "True" << endl;
	else
		cout << "false" << endl;
	return 0;
}
