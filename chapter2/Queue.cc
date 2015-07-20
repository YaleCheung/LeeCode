/*
 * =====================================================================================
 *
 *       Filename:  Queue.cc
 *
 *    Description:  Implement the following operations of a queue using stacks.
 *
 *    push(x) -- Push element x to the back of queue.
 *    pop() -- Removes the element from in front of queue.
 *    peek() -- Get the front element.
 *    empty() -- Return whether the queue is empty.
 *    Notes:
 *    You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are valid.
 *    Depending on your language, stack may not be supported natively. You may simulate a stack by using a list or deque (double-ended queue), as long as you use only standard operations of a stack.
 *    You may assume that all operations are valid (for example, no pop or peek operations will be called on an empty queue).
 *
 *        Version:  1.0
 *        Created:  07/20/2015 11:30:47 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <stack>
using namespace std;
class Queue {
    stack<int> s1;
    stack<int> s2;
public:
    //push element x to the back of queue;
    void push(int x) {
        s1.push(x); 
    }
    // removes the elements from in front of queue
    void pop() {
        if (s2.empty()) {
                while(!s1.empty()) {
                    int tmp = s1.top();
                    s1.pop();
                    s2.push(tmp); 
            }
        }   
        if (! s2.empty()) 
            s2.pop();
    }
    // get the front element
    int peek() {
         if (s2.empty()) {
                while(!s1.empty()) {
                    int tmp = s1.top();
                    s1.pop();
                    s2.push(tmp); 
            }
        }
        if (! s2.empty()) 
            return s2.top();
    }

    bool empty(void) {
        return (s1.empty() && s2.empty()) ? 0 : 1;
    }
};

int main() {
    Queue q;
    cout << q.empty() << endl;
    cout << "push test" << endl;
    for(int i = 0; i < 5; ++ i) {
        q.push(i);
        cout << q.peek() << endl;
    }
    cout << q.empty() << endl;
    cout << "pop test" << endl;
    for(int i = 0; i < 5; ++ i) {
        cout << q.peek() << endl;
        q.pop();
    }
    cout << q.empty() << endl;
    return 0;
}
