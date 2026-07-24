class MinStack {
public:
    stack<int>st;
    stack<int>minStack;
    MinStack() {
        
    }
    
    void push(int val) {//Main stack me normal push karo. Agar current value minimum hai ya minimum ke equal hai, to minStack me bhi push karo.
        st.push(val);
        if(minStack.empty()||val<=minStack.top()){
            minStack.push(val);
        }
    }
    
    void pop() {
        if(st.top()==minStack.top()){//👉 Agar jo element remove ho raha hai wahi current minimum hai, to minStack se bhi remove karo.
            minStack.pop();
        }
        st.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */