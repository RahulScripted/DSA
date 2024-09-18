// Check if the queue is empty or not


#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    if(q.empty()) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    if(q.empty()) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;
}