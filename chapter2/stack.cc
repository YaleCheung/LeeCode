class Stack {
    queue<int> q1; // q1 stores the elements comming later;
    queue<int> q2; // q2 stores the elements comming prior
public:
    // Push element x onto stack.
    // pop all elements from q1 to q2; and add the element to q1;
    void push(int x) {
        while(! q1.empty()) {
            int elem = q1.front();
            q2.push(elem);
            q1.pop();
        }
        q1.push(x);
    }

    // Removes the element on top of the stack.
    //  pop all the elem of q2.
    void pop(void) {
        if (q1.empty() && q2.empty())
            return;
        if (! q1.empty()) {
            while (q1.size() > 1) {
                int elem = q1.front();
                q2.push(elem);
                q1.pop();
            }
            q1.pop();
            return;
        } else if (! q2.empty()) {        
            while(q2.size() > 1) {
                int elem = q2.front();
                q1.push(elem);
                q2.pop();
            }
            q2.pop();
        }
    }

    // Get the top element.
    int top(void) {
        if (! q1.empty()) {
            while (q1.size() > 1) {
                int elem = q1.front();
                q2.push(elem);
                q1.pop();
            }
            return q1.front();
        } else if (! q2.empty()) {        
            while(q2.size() > 1) {
                int elem = q2.front();
                q1.push(elem);
                q2.pop();
            }
            return q2.front();;
        }
    }

    // Return whether the stack is empty.
    bool empty(void) {
        return (q1.empty() && q2.empty());
    }
};