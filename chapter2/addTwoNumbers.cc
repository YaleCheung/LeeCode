/*
 * =====================================================================================
 *
 *       Filename:  addTwoNumbers.cc
 *
 *    Description:  G
 *
 *        Version:  1.0
 *        Created:  07/29/16 00:31:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/* *
 *  * Definition for singly-linked list. */
#include <iostream>
struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode * addTwoNumbers(ListNode * l1, ListNode * l2) {
	ListNode *head = l1;
	ListNode *pre1 = NULL;
	ListNode *pre2 = NULL;

	int carry = 0;
	while (l1 || l2) {
	    if (l1) {
	        l1->val += carry;
		if (l2)
		    l1->val += l2->val;
	        carry = 0;
		if (l1->val > 9) {
		    l1->val -= 10;
		    carry = 1;
		}
	        pre1 = l1;
	        l1 = l1->next;
	        if (l2) {
		   pre2 = l2;
		   l2 = l2->next;
	        }
	    }
	    if (l1 == NULL && l2 == NULL && 1 == carry) {
		l1 = new ListNode(0);
		pre1->next = l1;
	    }
	    else if (NULL == l1 && NULL != l2) {
		l1 = l2;
		pre1 ->next = l1;
		l2 = NULL;
	    }
	}

	return head;
    }
};

int main(int argc, char* argv[]) {
    ListNode* list1 = new ListNode(2);
    ListNode* node1 = new ListNode(4);
    ListNode* node11 = new ListNode(3);
    list1 -> next = node1;
    node1->next = node11;

    // next
    ListNode* list2 = new ListNode(5);
    ListNode* node2 = new ListNode(6);
    ListNode* node21 = new ListNode(4);
    list2 -> next = node2;
    node2->next = node21;

    Solution s;
    ListNode *ret = s.addTwoNumbers(list1, list2);
    while(ret) {
      std::cout << ret->val << std::endl;
      ret= ret ->next;
    }
    return 0;
}
