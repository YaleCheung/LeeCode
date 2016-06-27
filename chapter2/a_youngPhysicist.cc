/*
 * =====================================================================================
 *
 *       Filename:  a_youngPhysicist.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/27/16 08:19:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    int sumcol1 = 0;
    int sumcol2 = 0;
    int sumcol3 = 0;

    int col1 = 0;
    int col2 = 0;
    int col3 = 0;
    for(int i = 0; i <  n; ++ i) {
        cin >> col1 >> col2 >> col3;
	sumcol1 += col1;
	sumcol2 += col2;
	sumcol3 += col3;
    }
    if (sumcol1 == 0 && 
        sumcol2 == 0 &&
	0 == sumcol3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
