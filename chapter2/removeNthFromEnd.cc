/*
 *@ Given linked list: 1->2->3->4->5, and n = 2.
 *@ After removing the second node from the end, the linked list becomes 1->2->3->5.
 */
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode *head, int n) {
        // two pointers, one is n steps before the other;
        int i = 0;
        if (n <= 0 || NULL == head)
            return NULL;
        ListNode* pre_pointer = head;
        ListNode* post_pointer = head;
        while (i < n && NULL != pre_pointer)  {
            pre_pointer = pre_pointer->next;
            ++ i;
        }
        // n is the length of the list;
        if(NULL == pre_pointer) {
            ListNode* tobe_deleted = head;
            head = head->next;
            delete tobe_deleted;
            return head;
        }

        while (NULL != pre_pointer->next) {
            pre_pointer = pre_pointer->next;
            post_pointer = post_pointer->next;
        }
        ListNode* tobe_deleted = post_pointer->next;
        post_pointer->next = tobe_deleted->next;
        delete tobe_deleted;
        tobe_deleted = NULL;
        return head;
    }
};
void print(ListNode* head) {
    while(NULL != head) {
        cout << head->val << endl;
        head = head->next;
    }
}
int main(int argc, char* argv[]) {
    ListNode* head = new ListNode(0);
    ListNode* p = head;
    for(int i = 1; i < 5;  ++ i) {
        ListNode* new_node = new ListNode(i);
        p->next = new_node;
        p = p->next;
    }
    // print orginal list;
    print(head);
    printf("******************************\n");
    // delete Nth
    Solution s;
    ListNode* node = s.removeNthFromEnd(head, 3);

    print(node);
    // destruct the List
    /*while(NULL != head) {
        ListNode* ptr = head;
    delete ptr;
        head = head->next;
    }
    */
    return 0;
}
