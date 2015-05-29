class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> val_pos;
        int size = nums.size();
        for(int i = 0; i < size; ++ i) {
            if (val_pos.count(nums[i])) {
                if (k >= i - val_pos[nums[i]])
                    return true;
            } else
                val_pos[nums[i]] = i;
        }
        return false;
    }
};
