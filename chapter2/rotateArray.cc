#include <iostream>
using std::endl;
using std::cout;

class Solution {
public:
    void rotate(int nums[], int n, int k) {
        if(n < 1)
            return;
        int j = 0;
        for(int i = n - k; i < n; ++ i) {
            tmp = nums[j];
            nums[j]= nums[i];
            
        }
    }
};
