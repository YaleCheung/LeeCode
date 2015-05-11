#include <iostream>
using namespace std;
class Solution {
    inline int findNext(const int& start, const int& end, bool* nums) {
        for(int i = start; i < end; ++ i) {
            if (true == nums[i])
                return i;
	}
	return -1;
    }
public:
    int countPrimes(int n) {
        bool* nums = new bool[n];
	// init the state;
        for(int i = 2; i < n; ++ i)
            nums[i] = true;
	int i = 2;
	// label nonprimer to false;
        while(i < n) {
           for(int j = 2; j < n; ++ j) {
               int ret = i * j;
	       if (ret >= n)
                   break;
	       nums[ret] = false;
	   }
           // find next i;
	   i = findNext(i + 1, n, nums);
	   if (-1 == i)
               break;
	}
	// count the array
	int count = 0;
	for(int i = 2; i < n; ++ i) {
            if (true == nums[i])
                ++ count;
	}
	delete nums;
	return count;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    cout << "2" << endl;
    cout << s.countPrimes(2) << endl;
    cout << "10" << endl;
    cout << s.countPrimes(10) << endl;
    cout << "20" << endl;
    cout << s.countPrimes(20) << endl;
    return 0;
}
