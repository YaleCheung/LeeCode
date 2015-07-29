/*
 * =====================================================================================
 *
 *       Filename:  detectCycle.cc
 *
 *    Description:  Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
 *
 *
 *        Version:  1.0
 *        Created:  07/29/2015 09:48:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/* *
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
 *        */
class Solution {
  public:
    ListNode * detectCycle(ListNode * head) {
	ListNode *fast;
	ListNode *slow;
	 slow = fast = head;
	while (fast && fast->next) {
	    slow = slow->next;
	    fast = fast->next->next;
	    if (fast == slow) {
		slow = head;
		while (slow != fast) {
		    slow = slow->next;
		    fast = fast->next;
		} return fast;
	    }
	}
	return NULL;
    }
};
