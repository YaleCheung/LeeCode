/*
 * =====================================================================================
 *
 *       Filename:  minStack_mmo.cc
 *
 *    Description:  implement the min stack;
 *
 *        Version:  1.0
 *        Created:  01/24/15 23:04:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;
class MinStack {
public:
    MinStack () :
        length(0) {}
    void push(int x) {
        if (0 == length || (x < min_pos[length - 1])) {    //nothing in the stack;
            min_pos.push_back(x);
        } else
            min_pos.push_back(min_pos[length - 1]);
        data.push_back(x);
        ++ length;
    }

    void pop() {
        if(length > 0) {
            -- length;
        }
    }

    int top() {
        if(length > 0) {
            return data[length - 1];
        }
        return -1;
    }

    int getMin() {
        if(length > 0)
            return min_pos[length - 1];
        return -1;
    }
private:
    int length;
    vector<int> data;
    vector<int> min_pos;
};

int main(int argc, char *argv[]) {
    MinStack s;
    s.push(4);
    cout << s.getMin() << endl;
    s.push(3);
    cout << s.getMin() << endl;
    s.push(2);
    cout << s.getMin() << endl;
    s.push(5);
    cout << s.getMin() << endl;
    s.push(3);
    cout << s.getMin() << endl;

    cout << "pop" << endl;

    s.pop();
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;
    s.pop();
    cout << s.getMin() << endl;
}
