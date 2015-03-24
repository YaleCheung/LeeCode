#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int* p = remove(A, A + n, elem);
        return p - A;
    }
    void print(int* A, int n) {
        for(int i = 0; i < n; ++ i) {
            cout << A[i] << endl;
	}
    }
};


int main(int argc, char* argv[]) {
	Solution s;
	int A[] = {1,2,2,2,3,4};
	cout << s.removeElement(A, sizeof(A) / sizeof(int), 2) << endl;
	s.print(A, 6);
	return 0;
}
