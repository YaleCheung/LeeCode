/*reverse a linked list from position m to n. Do it in-place and in one-pass.

For example:
Given:
      1->2->3->4->5->NULL, m = 2 and n = 4,

      return 1->4->3->2->5->NULL.

      Note:
      Given m, n satisfy the following condition:
      1 ≤ m ≤ n ≤ length of list.
*/

// Definition for node struct;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) :
	    val (x), next(NULL);
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        // Judge the bondary;
	if (nullptr == head || 
		m < 0 || n < 0 || 
		m <= n) {
            return nullptr;
	}
	ListNode* pre = head;
	// Find the position m;
	int i = 0;
	while (pre && i < m - 2) {
            pre = pre -> next;
	    ++ i;
	}
	// pre is the m-1 th node;
	Node* break_point = pre;
	Node* cur = pre -> next;
	Node* first = cur;
	Node* last = nullptr;
	++ i;
	if (nullptr == pre || nullptr == cur)
            return nullptr;
	pre = pre -> next;
	cur = pre -> next;
	++ i;
        while (cur && i < n) {
	    if (i == n - 1)
                last = cur;
            ListNode* next = cur -> next; // the next;
            cur -> next = pre;
	    pre = cur;
	    cur = next;
	    ++ i;
                
	}
	if (i < n) {
            break_point->next = last;
	    first_point->next = cur;
	} else
            return nullptr; 
	
	if (0 != m)
            return head;
	else
            return last;
    }
};
