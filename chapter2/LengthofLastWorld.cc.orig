/*
  Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example, 
Given s = "Hello World",
return 5.
*/


class Solution {
public:
    int lengthOfLastWord(const char *s) {
         int size = 0;
         const char* p = s;
         while(*p != '\0') {
	          ++ p;
	          ++ size;
	   }
	   // find the start pos;
	   int i = size - 1;
	   while (i >= 0) {
	          if(*(s + i) != ' ')
	                break;
	          -- i;
	   }
	   int start_pos = i;
	   if (start_pos == -1)
	         return 0;
	   while(i >= 0) {
	          if (*(s + i) == ' ')
	               break;
	          -- i;
	   }
	   int end_pos = i;
	   return start_pos - end_pos;
    }
};

int main(int argc, char *argv[]) {
    const char* name = "       a bcsd";
    Solution s;
    cout << s.lengthOfLastWord(name) << endl;
    return 0;
}
