/*
 * =====================================================================================
 *
*       Filename:  swapPairs.cc
*
 *    Description:  
 *    Given a linked list, swap every two adjacent nodes and return its head.
 *
 *    For example,
 *    Given 1->2->3->4, you should return the list as 2->1->4->3.
 *
 *    Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
 *
 *        Version:  1.0
 *        Created:  05/12/16 03:06:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
#ifndef NULL
#define NULL 0
#endif

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
	if (NULL == head)
	    return NULL;
        ListNode* first = head;
	ListNode* second = head -> next;
	ListNode* connector = NULL;
	while(second) {
	     first -> next = second -> next;
	     second -> next = first;
	     if (connector != NULL)
                 connector -> next = second;
	     else head = second;
	     connector = first;
	     first = first-> next;
	     if (first)
		 second = first-> next;
	     else
		 second = NULL;
	}
	return head;
    }
};
//  test
int main(int argc, char* argv[]) {
    Solution s;
    // simple link;
    ListNode* first = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    ListNode* tmp = first;
    while(tmp) {
	cout << tmp << endl;
        tmp = tmp -> next; 
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    ListNode* head = s.swapPairs(first);
    while(head) {
	cout << head << endl;
        head = head -> next; 
    }
    return 0;
}
