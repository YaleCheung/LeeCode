/**
 * Remove all elements from a linked list of integers that have value val.
 *
 * Example
 * Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
 * Return: 1 --> 2 --> 3 --> 4 --> 5
 *
 * Credits:
 * Special thanks to @mithmatt for adding this problem and creating all test cases.
 **/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *    int val;
 *    ListNode *next;
 *    ListNode(int x) : val(x), next(NULL) {}
 * };
 **/
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (NULL == head)
            return NULL;
        ListNode* pre = NULL;
	ListNode* cur = head;
	while (cur != NULL) {
             while(NULL != cur && cur->val != val) {
                 pre = cur;
                 cur = cur->next;
	     }
             if (NULL == cur)
                 break;
	     // find the val
	     // case 1: first node is tobe deleted
	     else if (cur == head) {
                 cur = cur->next;
                 head = cur;
	     } else {// case 2: in middle
                 pre->next = cur->next;
		 cur = cur->next;
	     }
	}
        return head;
    }
};
int main(int argc, char* argv[]) {
    ListNode* tree = new ListNode(1);
    Solution s;
    s.removeElements(tree, 2);
    delete tree;
    return 0;
}
