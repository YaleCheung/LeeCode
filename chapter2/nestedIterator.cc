/*
 * =====================================================================================
 *
 *       Filename:  nestedIterator.cc
 *
 *    Description:  
 * // This is the interface that allows for creating nested lists.
 *  * // You should not implement it, or speculate about its implementation
 *   * class NestedInteger {
 *    *   public:
 *     *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *      *     bool isInteger() const;
 *       *
 *        *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *         *     // The result is undefined if this NestedInteger holds a nested list
 *          *     int getInteger() const;
 *           *
 *            *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *             *     // The result is undefined if this NestedInteger holds a single integer
 *              *     const vector<NestedInteger> &getList() const;
 *               * };
 *
 *
 *        Version:  1.0
 *        Created:  05/17/16 05:04:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
class NestedIterator {
  private:
    stack < NestedInteger > num_stack;
    int ret;
  public:
     NestedIterator(vector < NestedInteger > &nestedList) {
	auto iter1 = nestedList.rbegin();
	auto iter2 = nestedList.rend();
	while (iter1 != iter2) {
	    num_stack.push(*iter1);
	    ++iter1;
    }} int next() {
	return ret;
    }

    bool hasNext() {
	while (!num_stack.empty()) {
	    NestedInteger top = num_stack.top();
	    if (top.isInteger()) {
		ret = top.getInteger();
		num_stack.pop();
		return true;
		break;
	    } else {
		num_stack.pop();
		vector < NestedInteger > list = top.getList();
		size_t size = list.size();
		auto iter1 = list.rbegin();
		auto iter2 = list.rend();
		while (iter1 != iter2) {
		    num_stack.push(*iter1);
		    ++iter1;
		}
	    }
	}
	return false;
    }
};

/** 
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 **/
