class MyStack {
public:
    deque<int>q;
    void push(int x) {
        q.push_back(x);
    }
    
    int pop() {
        int t=q.back();
        q.pop_back();
        return t;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return (q.empty());   
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */