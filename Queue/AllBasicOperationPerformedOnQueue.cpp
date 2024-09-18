// Apply all basic operations that can be performed on queue


#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    if(q.empty()) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;
    cout<<"Before insertion : "<<q.size()<<endl;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    if(q.empty()) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;
    cout<<"Before deletion : "<<q.size()<<endl;
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Back element : "<<q.back()<<endl;
    q.pop();
    cout<<"After deletion : "<<q.size()<<endl;
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Back element : "<<q.back()<<endl;
}