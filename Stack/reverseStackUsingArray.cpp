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

    int arr[st.size()];
    int i = 0;
    while(st.size() > 0){
        arr[i] = st.top();
        st.pop();
        i++;
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    i = 0;
    while(i < size){
        st.push(arr[i]);
        i++;
    }
    cout<<st.top();
}