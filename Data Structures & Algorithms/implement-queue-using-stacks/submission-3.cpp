class MyQueue {
public:
    stack<int> one;
    stack<int> two;
    MyQueue() {
        
    }
    
    void push(int x) {
        one.push(x);
    }
    
    int pop() {
        int n=one.size();
        if(two.empty()){
            for(int i=0;i<n;i++){
                two.push(one.top());
                one.pop();
            }
            
        }
        int value=two.top();
        two.pop();
        return value;
        
    }
    
    int peek() {
        int n=one.size();
        if(two.empty()){
            for(int i=0;i<n;i++){
                two.push(one.top());
                one.pop();
            }
            
        }
        int value=two.top();
        return value;
        
    }
    
    bool empty() {
        return two.empty() && one.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */