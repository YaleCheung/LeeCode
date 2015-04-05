#include <iostream>
#include <bitset>
using namespace std;

#define SIZE 32
#define uint32_t unsigned long

class Solution {
public:
    uint32_t reverseBits(uint32_t n ) {
        bitset<SIZE> bitset_1(n);
	bitset<SIZE> bitset_2;
	for(int i = 0; i < SIZE; i ++) 
            bitset_2[SIZE - 1 - i] = bitset_1[i];
	return bitset_2.to_ulong();
    }
};

int main(int argc, char* argv[]) {
    uint32_t n = 43261596;
    Solution s;
    cout << s.reverseBits(n) << endl;
    return 0;
}
