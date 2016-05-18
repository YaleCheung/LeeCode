/*
 * =====================================================================================
 *
 *       Filename:  integerNested.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/18/16 03:36:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include <memory>
#include <queue>

using std::vector;
using std::shared_ptr;
using std::queue;

class NestedInteger{
public:
    bool isInteger() const;
    int getInteger() const;
    const vector<NestedInteger>& getList() const;
};

class NestIterator {
private:
    shared_ptr<queue<NestedInteger>> num_stack;
public:
    NestIterator(vector<NestedInteger>& nestedList) : num_stack(new queue<NestedInteger>) {
         
    }
    int next() {

    }
    bool hasNest() {

    }
};

