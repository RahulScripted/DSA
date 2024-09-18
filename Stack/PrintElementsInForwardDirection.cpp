// how to print elements without emptying stack


#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int>helper;

    while(st.size() > 0){
        helper.push(st.top());
        st.pop();
    }

    cout<<"Print in original order : ";
    while(helper.size() > 0){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    }
}