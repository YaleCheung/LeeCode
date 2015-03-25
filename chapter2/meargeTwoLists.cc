
#include <iostream>
using namespace std;



// detail of listnode;
struct ListNode {
     int val;
     ListNode* next;
     ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(NULL == l1)
            return l2;
        if(NULL == l2)
            return l1;

        ListNode* root;
        ListNode* pre;
        ListNode* node1 = l1;
        ListNode* node2 = l2;
        if(node1->val > node2->val) {
            root = pre = node2;
            node2 = node2->next;
        } else {
            root = pre = node1;
            node1 = node1->next;
        }
        while(NULL != node1 && NULL != node2) {
            if(node1->val > node2->val) {
                pre->next = node2;
                node2 = node2->next;
            } else {
                pre->next = node1;
                node1 = node1->next;
            }
            pre = pre->next;
        }

        if(NULL == node1)
            pre->next = node2;
        else if(NULL == node2)
            pre->next = node1;
        return root;
    }
    void print(ListNode* node) {
        while(node != NULL) {
            cout << node->val << endl;
	    node = node -> next;
	}
	return;
    }
};

// test 
int main(int argc, char* argv[]) {
    ListNode* pre = new ListNode(2);
    ListNode* post = new ListNode(1);
    Solution s;
    ListNode* root = s.mergeTwoLists(pre, post);
    s.print(root);
    return 0;
}
