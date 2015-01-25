/*
 * =====================================================================================
 *
 *       Filename:  excelSheetColumnTitle.cc
 *
 *    Description:  Given a positive integer, return its corresponding column title as appear in an Excel sheet.

 For example:

     1 -> A
         2 -> B
	     3 -> C
	         ...
		     26 -> Z
		         27 -> AA
			     28 -> AB
 *
 *        Version:  1.0
 *        Created:  01/24/15 23:30:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <string>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
        string ret="";
        while(n > 0) {
            ret = (char)(--n % 26 + 'A') + ret;
            n /=26;
        }
        return ret;
    }
};
