// Deque implementation using STL



#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;

    // Push front
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);

    cout<<"After inserting at front : ";
    for(auto i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    // Push back
    dq.push_back(50);
    dq.push_back(60);
    dq.push_back(70);
    dq.push_back(80);

    cout<<"After inserting at back : ";
    for(auto i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    // Pop front
    dq.pop_front();
    cout<<"After deleting at front : ";
    for(auto i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    // Pop back
    dq.pop_back();
    cout<<"After deleting at back : ";
    for(auto i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    // Pop back
    cout<<"Size : "<<dq.size()<<endl;

    // Accessing front element
    cout<<"Front element : "<<dq.front()<<endl;

    // Accessing back element
    cout<<"Back element : "<<dq.back()<<endl;

    //  Empty or not
    cout<<"Is deque empty : "<<dq.empty()<<endl; // 0 means false 1 means true
}