/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
// private:
    stack<NestedInteger>nodes;
public:
    NestedIterator(vector<NestedInteger> &nested) {
        int n=nested.size();
        for(int i=n-1;i>=0;i--){
            nodes.push(nested[i]);
        }
    }
    
    int next() {
        int num=nodes.top().getInteger();
        nodes.pop();
        return num;
    }
    
    bool hasNext() {
        while(!nodes.empty()){
            NestedInteger n1=nodes.top();
            if(n1.isInteger()){
                return true;
            }
            nodes.pop();
            vector<NestedInteger> v=n1.getList();
            int sz=v.size();
            for(int j=sz-1;j>=0;j--){
                nodes.push(v[j]);
            }
        }
        return false;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */