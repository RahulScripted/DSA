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

    cout<<"Print in reverse order : ";
    while(st.size() > 0){
        cout<<st.top()<<" ";
        int x = st.top();
        helper.push(x);
        st.pop();
    }

    cout<<endl<<"Print in original order : ";
    while(helper.size() > 0){
        cout<<helper.top()<<" ";
        int x = helper.top();
        st.push(x);
        helper.pop();
    }
}