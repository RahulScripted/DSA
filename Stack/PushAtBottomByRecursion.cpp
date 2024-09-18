// Push at  bottom via recursion



#include<iostream>
#include<stack>
using namespace std;

void print (stack<int>&st,stack<int>&helper){
     while(st.size() > 0){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size() > 0){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    } 
    cout<<endl;
}

void pushAtBottom(stack<int>&st,int n){
    if(st.empty()){
        st.push(n);
        return;
    }

    int x = st.top();
    st.pop();
    pushAtBottom(st,n);
    st.push(x);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int>helper;

    cout<<"Before adding element : ";
    print(st,helper);

    int n;
    cout<<"Give value of the element : ";
    cin>>n;
    
    pushAtBottom(st,n);
    cout<<"After adding element : ";
    print(st,helper);
}