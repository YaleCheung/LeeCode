/*
 * =====================================================================================
 *
 *       Filename:  merge.cc
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/21/15 17:41:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i = 0;
        int j = 0;
        int* c_array = new int [m + n]();
        int k = 0;
        while((m > 0) && (n > 0)) {
            if(A[i] < B[j])
                c_array[k ++] = A[i ++];
            else
                c_array[k ++] = B[j ++];
            if (m == i || n == j )
                break;
        }
        if ((i == m) && (j == n))
            return;
        if (i == m) {
            while (j < n)
                c_array[k ++] = B[j ++];
        } else {
            while (i < m)
                c_array[k ++] = A[i ++];
        }
        for (int l = 0; l < m + n; ++ l)
            A[l] = c_array[l];
        delete [] c_array;
    }
};

using namespace std;
int main(int argc, char *argv[]) {
    int A[] = {1,2,3};
    int B[] = {2,5,6};
    Solution s;
    s.merge(A, 5, B, 6);
    for(auto i : A) {
        cout << i << endl;
    }
    return 0;
}
