class MinStack {
public:
    stack<int> st;
    stack<int> minSt;

    MinStack() {
        
    }

    void push(int val) {
        st.push(val);

        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    /*st stores every element.
minSt stores only the elements that become a new minimum (including duplicates of the minimum).
When popping, if the popped element is also the current minimum, remove it from minSt too.
Because minSt.top() is always the current minimum, getMin() is just one stack access: O(1).*/


    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};