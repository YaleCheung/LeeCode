/*Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
*/
/**
 *Definition for singly-linked list.
 *struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 **/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (NULL == head)
            return false;
        ListNode* first = head;
        ListNode* second = head;
        while (NULL != second && NULL != second->next) {
            first = first -> next;
            second = second -> next -> next;
            if (second == first && second != NULL)
                return true;
        }
        return false;
    }
};
