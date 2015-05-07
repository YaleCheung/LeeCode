/**Reverse a singly linked list.
   click to show more hints.
   Hint:
   A linked list can be reversed either iteratively or recursively. Could you implement both?
**/
/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
 *        */

class Solution {
    ListNode* reverseList(ListNode* cur, ListNode* pre) {
        if (NULL == cur->next) {
            cur->next = pre;
            return cur;
        }
        ListNode* newHead = reverseList(cur->next, cur);
        cur->next = pre;
        return newHead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        if (NULL == head)
            return head;
        reverseList(head, NULL);
    }
};
