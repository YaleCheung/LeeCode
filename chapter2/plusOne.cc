/*
   Given a non-negative number represented as an array of digits, plus one to the number.
   The digits are stored such that the most significant digit is at the head of the list.
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int i = digits.size() - 1;
        if (i < 0)
            return digits;
        digits[i] += 1;
        do {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
            -- i;
        } while (carry > 0 && i >= 0);
        if (carry > 0 && -1 == i)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    vector<int> ivec;
    Solution s;
    ivec.push_back(9);
    s.plusOne(ivec);
    copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, ""));
    cout << endl;
    return 0;
}
