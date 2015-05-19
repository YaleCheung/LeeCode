#include <iostream>
#include <vector>
using namespace std;

class Solution {
    int _max(const vector<int>& nums) {
        int MAX = 0x80000001;
	for(auto num : nums) {
            if (MAX < num)
               MAX = num;
	}
	return MAX;
    }
    int _min(const vector<int>& nums) {
        int MIN = 0x7FFFFFFF;
	cout << MIN << endl;
	for(auto num: nums) {
            if (MIN > num)
               MIN = num;
	}
	return MIN;
    }
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int MAX = _max(nums);
	int MIN = _min(nums);
	int length = MAX - MIN + 1;
        vector<bool> hash(length, false);
	vector<int> pos(length, 0);
	vector<int> ivec;
	// traverse the nums
        int i = 1;	
	for(auto num : nums) {
           hash[num - MIN] = true;
	   pos[num - MIN] = i;
	   ++ i;
	}
	for(auto num : nums) {
            int dif = target - num;
	    if (hash[dif - MIN] == true) {
                ivec.push_back(pos[num - MIN]);
		ivec.push_back(pos[dif - MIN]);
		break;
	    }
	}
	return ivec;
    }
};

int main() {
    vector<int> ivec = {2,7,11,15};
    Solution s;
    vector<int> ret = s.twoSum(ivec, 9);
    if (ret.size()) {
        cout << ret[0] << '\t' << ret[1] << endl;
    } else
        cout << "no result" << endl;
    return 0;
}
