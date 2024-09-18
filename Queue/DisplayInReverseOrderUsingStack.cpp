// Display queue in reverse order using stack


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

void displayRev(queue<int>&q){
    stack<int>st;
    int n = q.size();

    // Delete from queue and push into stack
    while(n--){
        int x = q.front();
        q.pop();
        st.push(x);
    }

    // Delete from stack and push into queue
    while(!st.empty()){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    display(q);
    displayRev(q);
    display(q);
}