// Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

// Implement the MyQueue class:

// void push(int x) Pushes element x to the back of the queue.
// int pop() Removes the element from the front of the queue and returns it.
// int peek() Returns the element at the front of the queue.
// boolean empty() Returns true if the queue is empty, false otherwise.





#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
public:
    // Pop efficient method
    stack<int>st;
    stack<int>helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.empty()) st.push(x);
        else{
            while(!st.empty()){
                helper.push(st.top());
                st.pop();
            }
            st.push(x);
            while(!helper.empty()){
                st.push(helper.top());
                helper.pop();
            }
        }
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        int x = st.top();
        return x;
    }
    
    bool empty() {
        return st.empty();
    }
};

int main(){
    MyQueue q;
    q.push(2);
    q.push(8);
    q.push(7);
    q.push(1);
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
}