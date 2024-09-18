// reverse stack


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
    stack<int>helper2;

    while(st.size() > 0){
        helper.push(st.top()); // 5 4 3 2 1
        st.pop();
    }

    while(helper.size() > 0){
        helper2.push(helper.top()); // 1 2 3 4 5
        helper.pop();
    }

    while(helper2.size() > 0){
        st.push(helper2.top());  // 5 4 3 2 1
        helper2.pop();
    }

    cout<<st.top()<<endl; // 1
}