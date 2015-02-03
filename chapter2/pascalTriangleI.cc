#include <iostream>
#include <vector>
using std::vector;
using std::endl;
using std::cout;


class Solution {
public:
    vector<vector<int> > generate(int numRows) {
    	vector<vector<int>> rets;
    	if (numRows > 0)
    		rets.push_back(vector<int>(1,1));
  		for(int i = 2; i <= numRows; ++ i) {
  			vector<int> a_row;
  			size_t vectors_size = rets.size();
			for(int j = 0; j < (i + 1) / 2; j ++) {
  				if(j == 0)
  					a_row.push_back(1);
				else
  					a_row.push_back(rets[vectors_size - 1][j - 1] + rets[vectors_size - 1][j]);
  			}
  			// duplicate the reminder elements;
  			int starts = 0;
			int row_size = a_row.size();
			//cout << row_size << endl;
  			if (i % 2)
  				starts = row_size - 2;
  			else
  				starts = row_size - 1;
  			for(int k = starts; k >= 0; -- k) 
  				a_row.push_back(a_row[k]);
  			rets.push_back(std::move(a_row));
  		}
		for(auto vec : rets) {
			for(auto ele : vec) {
				cout << ele << " ";
			}
			cout << endl;
		} 
		return rets;
    }
};



using namespace std;
int main(int argc, char *argv[]) {
	Solution s;
	s.generate(6);
    return 0;
}