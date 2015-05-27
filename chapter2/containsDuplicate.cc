#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> num_set;
        for(auto iter = nums.begin(); iter != nums.end(); ++ iter) {
            int val = * iter;
            if (num_set.count(val)) 
                return true; 
	    num_set.insert(val);
	}
	return false;
    }
};

int main(int argc, char* argv[]) {
     Solution s;
     vector<int> nums = {3,3};
     cout << s.containsDuplicate(nums) << endl;
}
