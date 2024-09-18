#include <iostream>
#include <stack>
#include <climits>

using namespace std;

class MinStack {
public:
    stack<long long>st;
    long long mn;
    MinStack() {
        mn = LLONG_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mn = val;
        }
        else if(val > mn) st.push(val);
        else{
            st.push((2LL * val) - mn);
            mn = val;
        }
    }
    
    void pop() {
        if(st.top() < mn) mn = (2LL * mn - st.top());
        st.pop();
    }
    
    int top() {
        if(st.top() <= mn) return (int)mn;
        else return (int)st.top();
    }
    
    int getMin() {
        return (int)mn;
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