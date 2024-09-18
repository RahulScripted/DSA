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

    cout<<"Elements : ";
    while(st.size() > 0){
        cout<<st.top()<<" ";
        int x = st.top();
        helper.push(x);
        st.pop();
    }
}