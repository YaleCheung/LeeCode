class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = 0;
        while (n) {
            if (n & 1)
                i ++;
            n >>= 1;
        }
        return i;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << s.hammingWeight(11) << endl;
    return 0;
}
