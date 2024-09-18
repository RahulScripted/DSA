// Recursively display stack



#include<iostream>
#include<stack>
using namespace std;

void recursivelyDisplay(stack<int>&st){
    if(st.size() == 0) return;
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    recursivelyDisplay(st);
    st.push(x);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    recursivelyDisplay(st);
}