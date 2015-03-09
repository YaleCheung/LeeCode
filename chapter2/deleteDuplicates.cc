#include <iostream>
using namespace std;

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (nullptr == head)
             return head;
        // traverse the list
        ListNode* pre = head;
        while(nullptr != pre) {
	// find the next elem
	    int pre_val = pre->val; 
	    ListNode* post = pre->next;
	    while(nullptr != post && post->val == pre_val)
	        post = post->next;
            pre->next = post;
            pre = pre->next;
        }
        return head;
    }
};

int main(int argc, char *argv[]) {
	
    return 0;
}
