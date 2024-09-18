// use-case of push_back operator



#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
    cout<<"Elements of Dequeue before insertion at back : ";
    for(int i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    cout<<"Elements of Dequeue after insertion at back : ";
    for(int i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}