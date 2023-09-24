class CustomStack {
public:
    stack<int> st;
    int stackSize;
    
    CustomStack(int maxSize) {
        stackSize = maxSize;
    }
    
    void push(int x) {
        if (st.size() < stackSize) {
            st.push(x);
        }
    }
    
    int pop() {
        if(st.size() == 0) return -1;
        int val = st.top();
        st.pop();
        return val;
    }
    
    void increment(int k, int val) {
        stack<int> temp;

        while(!st.empty()) {
            temp.push(st.top());
            st.pop();
        }

        while(!temp.empty() && k--) {
            st.push(temp.top() + val);
            temp.pop();
        }

        while(!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
    }
};
