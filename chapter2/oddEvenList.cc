/*
 * =====================================================================================
 *
 *       Filename:  oddEvenList.cc
 *
 *    Description:  
 *    Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.
 *
 *    You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.
 *
 *    Example:
 *    Given 1->2->3->4->5->NULL,
 *    return 1->3->5->2->4->NULL.
 *
 *    Note:
 *    The relative order inside both the even and odd groups should remain as it was in the input. 
 *    The first node is considered odd, the second node even and so on ...
 *
 *    Credits:
 *    Special thanks to @aadarshjajodia for adding this problem and creating all test cases.
 *
 *        Version:  1.0
 *        Created:  01/17/16 13:40:54
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

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (! head)
            return NULL;
        ListNode* odd = head;
        ListNode* even = head -> next;       
        ListNode* oddEnd = odd;
        ListNode* evenEnd = even;
        while(evenEnd) {
            if (evenEnd -> next) {
                oddEnd->next = evenEnd -> next;
                oddEnd = oddEnd -> next;
            } else {
                break;
            }
            if (oddEnd -> next) {
                evenEnd->next = oddEnd -> next;
                evenEnd = evenEnd->next;
            } else {
                evenEnd -> next = NULL;
                break;
            }
        }
        oddEnd -> next = even; 
        return head;
    }
};
int main(int argc, char* argv[]) {
    ListNode* root = new ListNode(1);
    ListNode* p = root;
    for (auto i = 2; i < 4; ++ i) {
        ListNode* q = new ListNode(i);
        p->next = q;
        p = q;
    }
    p->next = NULL;
    p = root;
    while(p) {
        printf("%d\n", p->val);
        p = p -> next;
    }
    // begin test;
    cout << "Starting test" << endl;
    Solution s;
    root = s.oddEvenList(root);
    p = root;
    while(p) {
        printf("%d\n", p->val);
        p = p -> next;
    }
    return 0;
}
