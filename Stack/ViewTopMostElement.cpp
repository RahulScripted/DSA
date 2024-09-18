//  Insertion of value in stack



#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(50);
    cout<<st.top()<<endl;
}