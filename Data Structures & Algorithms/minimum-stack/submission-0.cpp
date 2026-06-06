class MinStack {
public:
    MinStack() {
        size = 0;
    }
    
    void push(int val) {
       st.push_back(val);
       minSt.push_back(std::min(val, minSt.empty() ? val : minSt[size - 1]));
       size++;
    }
    
    void pop() {
        if(st.empty())
            return;
        
        st.pop_back();
        minSt.pop_back();
        size--;
    }
    
    int top() {
        if (st.empty())
            return 1;

        return st[size - 1];
    }
    
    int getMin() {
        return minSt[size - 1];
    }
private:
    std::vector<int> st;
    std::vector<int> minSt;
    int size;
};
