/*
 * =====================================================================================
 *
 *       Filename:  isBadVersion.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/05/16 05:27:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <map>
#include <utility>
#include <cstdlib>
#include <ctime>
using namespace std;
map<int, bool> versionMap;
static int count = 0;
bool isBadVersion(int version) {
    count ++;
    return !versionMap[version];
}
class Solution {
  public:
    int firstBadVersion(int n) {
        bool pre_flag = false;
        bool post_flag = false;
        bool pre = false;
        bool post = false;
	int begin = 1;
	int end = n;
	while (begin < end) {
	    int middle = (begin + end) / 2;
	    if (isBadVersion(middle)) {
		if (middle > 1 && isBadVersion(middle - 1))
		    end = middle - 1;
		else
		    return middle;
	    } else {
	        begin = middle + 1; 
	    } 
	    // solution bellow compares too many times.
	    /*  else if (!isBadVersion(middle)) {
		if (middle <= n - 1 && isBadVersion(middle + 1))
		    return middle + 1;
		else
		    begin = middle + 1;
	    */
	    }
	}
	return begin;
    }
};

int main(int argc, char* argv[]) {
    srand(time(NULL));
    bool hasBad = false;
    for(int i = 1; i < 10; ++ i) {
        if (!hasBad) {
	    int randomVal = rand() % 10;
	    bool randombool = false;
	    if (randomVal > 7) {
		randombool = false;
	        hasBad = true;
	    } else {
	        randombool = true;
	    }
	    versionMap.insert(make_pair(i, randombool));
	} else {
	    versionMap.insert(make_pair(i, false));
	}
    }   
    for(auto iter = versionMap.begin(); iter != versionMap.end(); ++ iter) {
        cout << iter -> first << "->" << ((iter-> second == false) ? "false" : "true") << endl;
    }
    Solution s;
    cout << "Answer" << endl;
    cout << s.firstBadVersion(10) << endl;
    cout << "isBadVersion is called by " << count << " time" << endl;
    return 0;
}
