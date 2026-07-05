class MyStack {
public:
    deque<int> one;
    MyStack() {
        
    }
    
    void push(int x) {

        return one.push_front(x);
        
    }
    
    int pop() {
        int top=one.front();
        one.pop_front();
        return top;
        
    }
    
    int top() {
        return one.front();
        
    }
    
    bool empty() {
       return  one.empty();
        
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