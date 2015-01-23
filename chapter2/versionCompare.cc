/*
 * =====================================================================================
 *
 *       Filename:  versionCompare.cc
 *
 *    Description: Compare two version numbers version1 and version1.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:

0.1 < 1.1 < 1.2 < 13.37
 *
 *        Version:  1.0
 *        Created:  01/23/15 14:33:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define BUFSIZE 300
class Solution {
	public:
		    	int compareVersion(string version1, string version2) 	{
						vector<int> data1;
								vector<int> data2;
										stringParser(version1, data1);
												stringParser(version2, data2);
														int size1 = data1.size();
																int size2 = data2.size();
																		if (size1 < size2) {
																						int i = size1;
																									while (i < size2) {
																														data1.push_back(0);
																																		++ i;
																																					}
																											} else if(size1 > size2) {
																															int i = size2;
																																		while(i < size1) {
																																							data2.push_back(0);
																																											++ i;
																																														}
																																				}
																				int i = 0;
																						while(i < data1.size()) {
																										if(data1[i] > data2[i])
																															return 1;
																													else if (data1[i] < data2[i])
																																		return -1;
																																++ i;
																																		}
																								return 0;
																									}
				
				void stringParser(const string& str, vector<int>& datas) {
							int size = str.size();
									string tmp = "";
											for(int i = 0; i < size; i ++) {
															if(str[i] != '.') 
																				tmp += str[i];
																		if(str[i] == '.' || i == (size - 1)) {
																							datas.push_back(atoi(tmp.c_str()));
																											tmp = "";
																														}
																				}
												}
};

int main(int argc, char *argv[]) {
		string ver1= "01";
			string ver2 = "1";
				Solution s;
					cout << s.compareVersion(ver1, ver2) << endl;
					    	return 0;
}
