// use-case of push_front operator



#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
    cout<<"Elements of Dequeue before insertion at front : ";
    for(int i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    cout<<"Elements of Dequeue after insertion at front : ";
    for(int i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}