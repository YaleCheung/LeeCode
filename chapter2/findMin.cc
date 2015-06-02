#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right) {
            if (nums[left] < nums[right])
                return nums[left];
            int mid = (left + right) / 2;
            if (nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid;
        }
        return nums[left];
    }
};
int main(int argc, char* argv[]) {
    Solution s;
    vector<int> ivec = {5, 1,2,3,4}
                       cout << s.findMin(ivec) << endl;
    return 0;
}
