//  Deletion of value in stack



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
    cout<<st.size()<<endl;

    // Deletion
    st.pop();
    cout<<st.size()<<endl;
}