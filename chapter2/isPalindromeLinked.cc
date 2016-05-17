/*
 * =====================================================================================
 *
 *       Filename:  isPalindromeLinked.cc
 *
 *    Description:  jjjjjjjjj
 *
 *        Version:  1.0
 *        Created:  01/01/16 15:18:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <stack>
using namespace std;

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
	ListNode* p = head;
	while(p != NULL) {
            s.push(p->val);
            p = p -> next;
	}
	p = head;
	while(! s.empty()) {
            if (s.top() == p -> val) {
                s.pop();
	        p = p -> next;
	    } else
                return false;
	}
	return true;
    }
}
