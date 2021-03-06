/*
 * =====================================================================================
 *
 *       Filename:  intersectionTwoLinkedLists.cc
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  01/24/15 09:02:56
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
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (nullptr == headA || nullptr == headB)
            return nullptr;
        // get the length of headA
        ListNode* iterA = headA;
        ListNode* iterB = headB;
        int lengthA = 1;
        int lengthB = 1;
        while (iterA->next != nullptr) {
            iterA = iterA->next;
            ++ lengthA;
        }
        while (iterB->next != nullptr) {
            iterB = iterB->next;
            ++ lengthB;
        }
        if (iterA == iterB) {  				// have insection
            iterA = headA;
            iterB = headB;
            if (lengthA > lengthB) {
                int distance = lengthA - lengthB;
                int i = 0;
                while(i < distance) {
                    ++ i;
                    iterA = iterA ->next;
                }
            } else if(lengthB > lengthA) {
                int distance = lengthB - lengthA;
                int i = 0;
                while (i < distance) {
                    iterB = iterB->next;
                    ++ i;
                }
            }
            for(int i = 0; i < lengthA; ++ i) {
                if (iterA != iterB) {
                    iterA = iterA->next;
                    iterB = iterB->next;
                } else
                    return iterA;
            }
        }
        return nullptr;
    }
};


int main(int argc, char *argv[]) {
    Solution s;
    typedef ListNode List;
    ListNode* node1 = new ListNode(3);
    ListNode* node2 = new ListNode(2);

    List* A = node1;
    List* B = node2;

    node2->next = node1;
    cout << s.getIntersectionNode(node1, node2) << endl;
    return 0;
}
