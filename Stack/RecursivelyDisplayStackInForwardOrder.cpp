// Recursively display stack



#include<iostream>
#include<stack>
using namespace std;

void recursivelyDisplayForwardDirection(stack<int>&st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    recursivelyDisplayForwardDirection(st);
    st.push(x);
    cout<<st.top()<<" ";
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    recursivelyDisplayForwardDirection(st);
}