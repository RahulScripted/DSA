// Print elements in stack 



#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(st.size() > 0){ // Problem: empty stack
        cout<<st.top()<<" ";
        st.pop(); 
    }
}