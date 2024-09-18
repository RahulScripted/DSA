// Remove the last k elements of a queue.



#include<iostream>
#include<queue>
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

void removeLastK(int k,queue<int>&q){
    int n = q.size();
    for(int i = 0;i < (n - k);i++){
        q.push(q.front());
        q.pop();
    }
    for(int i = 0;i < k;i++) q.pop();
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"Before reversing : ";
    display(q);
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"After reversing : ";
    removeLastK(k,q);
    display(q);
}