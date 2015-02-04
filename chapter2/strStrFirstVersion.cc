//Implement strStr().
//
//Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
//
//Update (2014-11-02):
//The signature of the function had been updated to return the index instead of the pointer. If you still see your function signature returns a char * or String, please click the reload button  to reset your code definition.
#include <stdio.h>
class Solution {
public:
    int strStr(char *haystack, char *needle) {
        if (nullptr == needle || nullptr == haystack)
            return -1;
        for(int i = 0; haystack[i] != '\0'; ++ i) {
            int pos = i;
            int j = 0;
            while(haystack[pos] == needle[j] && haystack[pos] != '\0') {
                pos ++;
                ++ j;
            }
            if('\0' == needle[j]) {
                return i;
            }
        }
        return -1;
    }
};

int main(int argc, char* argv[]) {
    Solution s;
    printf("%d\n", s.strStr("zhangyi", "zi"));
    return 0;
}
