#include <iostream>
using std::endl;
using std::cout;

class Solution {
public:
    void rotate(int nums[], int n, int k) {
        int pre_val = nums[0];
        int post_val = nums[0];
        int cur_pos = 0;
        int j = 0;
        for (int i = 0; i < n; ++ i) {
            pre_val = post_val;
            cur_pos = (cur_pos + k) % n;
            post_val = nums[cur_pos];
            nums[cur_pos] = pre_val;
            if (cur_pos == j) {
                cur_pos = ++ j;
                post_val = nums[cur_pos];
            }
        }
        return;
    }
};

int main() {
    int nums[] = {1,2};
    Solution s;
    s.rotate(nums, 2, 1);
    for(auto i : nums)
        cout << i << endl;
    return 0;
}
