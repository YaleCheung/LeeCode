// Program: Given an integer n, return the number of trailing zeroes in n!.
#include <iostream>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int number = 0;
        while (n) {
            number += n / 5;	
            n /= 5;
        }
        return number;
    }
};

int main(int argc, char* argv[]) {
	Solution s;
    cout << s.trailingZeroes(25);
    return 0;
}