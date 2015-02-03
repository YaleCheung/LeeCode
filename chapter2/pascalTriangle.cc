#include <iostream>
class Solution {
public:
    vector<int> getRow(int rowIndex) {
    	// bondary check
    	if (rowInex <= 0)
    		return vector<int>();

    	vector<int> rets;
    	int rets_size = rowIndex;
    	int base = rets_size - 1;
    	for(int i = 0; i <= base; i ++)
    		rets.push_back(combination(base, i));
    	return rets;
    }
private:
	int combination(int base, int order) {
		// formula solution
		// in this problem, we can assess that the result is bigger than zero;
		int numerator = 1;
		for(int i = base; i >= base - order + 1; i --)
			numerator *= i;
		int denominator = 1;
		for(int i = 1; i <= order; i ++)
			denominator *= i;
		return numerator / denominator;
	}
};

int main(int argc, char* argv[]) {
	Solution s;
	vector<int> ret;
	ret = s.getRow(0);
	for(auto i : ret)
		cout << i << endl;
	return 0;
}