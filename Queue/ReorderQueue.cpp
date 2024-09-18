// Reorder Queue (Interleave 1st Half with 2nd Half) [Do this by using one Stack only]




#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>&q){
    int n = q.size();
    for(int i = 0;i < n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverseLastK(int k,queue<int>&q){
    int n = q.size();
    stack<int>st;
    for(int i = 0;i < (n - k);i++){
        q.push(q.front());
        q.pop();
    }
    for(int i = 0;i < k;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void reorderQueue(queue<int>& q){
    stack<int>st;
    int n = q.size();

    // 1st reverse 1st half
    for(int i = 0;i < (n / 2);i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    // 1st reverse 2nd half which is now 1st half
    for(int i = 0;i < (n / 2);i++){
        st.push(q.front());
        q.pop();
    }

    // Interleave
    while(!st.empty()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // Now reverse our whole queue
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<"Before Interleave : ";
    display(q);
    
    cout<<"After Interleave : ";
    reorderQueue(q);
    display(q);
}