// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.



#include <iostream>
#include <stack>
#include <climits>

using namespace std;

class MinStack {
public:
    stack<int>st;
    stack<int>helper;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int mn = INT_MAX;
        while(!st.empty()){
            if(st.top() < mn) mn = st.top();
            helper.push(st.top());
            st.pop();
        }
        while(!helper.empty()){
            st.push(helper.top());
            helper.pop();
        }
        return mn;
    }
};

int main() {
    MinStack* obj = new MinStack();
    
    obj->push(3);
    obj->push(5);
    cout << "Minimum: " << obj->getMin() << endl; // Output: 3
    
    obj->push(2);
    obj->push(1);
    cout << "Minimum: " << obj->getMin() << endl; // Output: 1
    
    obj->pop();
    cout << "Minimum: " << obj->getMin() << endl; // Output: 2
    
    obj->pop();
    cout << "Top: " << obj->top() << endl;        // Output: 5
    cout << "Minimum: " << obj->getMin() << endl; // Output: 3
    
    delete obj;
    return 0;
}