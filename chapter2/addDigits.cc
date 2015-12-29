#include <iostream>
#include <cstdlib>
using namespace std;

class Solution {
public: 
	int addDigits(int num) {
		return num / 9  + num % 10;
	}
};

int main(int argc, char* argv[]) {
	if (2 != argc) {
		cout << "Wrong Input" << endl;
		cout << "Using:" <<  argv[0] << ' ' << "intVal" << endl;
		return 0;
	}
	Solution s;
	cout << s.addDigits(atoi(argv[1])) << endl;
	return 0;
}
