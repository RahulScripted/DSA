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
        if(helper.empty() || val < helper.top()) helper.push(val);
        else helper.push(helper.top());
    }
    
    void pop() {
        st.pop();
        helper.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return helper.top();
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
