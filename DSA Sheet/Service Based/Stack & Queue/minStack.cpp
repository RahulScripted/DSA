// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time. Implement the MinStack class:

// 1 - MinStack() initializes the stack object.
// 2 - void push(int value) pushes the element value onto the stack.
// 3 - void pop() removes the element on the top of the stack.
// 4 - int top() gets the top element of the stack.
// 5 - int getMin() retrieves the minimum element in the stack.
// 6 - You must implement a solution with O(1) time complexity for each function.






#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    vector<vector<int>> st;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        int min_val = getMin();
        if (st.empty() || min_val > val) min_val = val;
        st.push_back({val, min_val});        
    }
    
    void pop(){
        st.pop_back();
    }
    
    int top(){
        return st.empty() ? -1 : st.back()[0];
    }
    
    int getMin(){
        return st.empty() ? -1 : st.back()[1]; 
    }
};

int main(){
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Minimum Element: " << minStack.getMin() << endl;
    minStack.pop();
    cout << "Top Element: " << minStack.top() << endl;
    cout << "Minimum Element: " << minStack.getMin() << endl;
}