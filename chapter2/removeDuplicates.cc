#include <iostream>
using namespace std;
class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n < 1)
            return 0;
        int i = 0;
        int j = 1;
        while(j < n) {
            if (A[j] != A[i])
                A[++ i] = A[j];
            ++ j;
        }
        return ++ i;
    }

    void print(int A[], int n) {
        cout << "arrya length is " << '\t' << n << endl;
        for(int i = 0; i < n; ++ i) {
            cout << A[i] << endl;
        }
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    int array[] = {1};
    int length = s.removeDuplicates(array, sizeof(array) / sizeof(int));
    s.print(array, length);
    return 0;
}
