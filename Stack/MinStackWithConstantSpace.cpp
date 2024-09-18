#include <bits/stdc++.h>

using namespace std;

class MinStack {
public:
    vector<int>v;
    MinStack() {
        
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v[v.size() - 1];
    }
    
    int getMin() {
        int mn = INT_MAX;
        for(int i = 0;i < v.size();i++){
            mn = min(mn,v[i]);
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
