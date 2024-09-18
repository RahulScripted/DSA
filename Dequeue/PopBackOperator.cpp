// use-case of pop_back operator



#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq = {1,2,3,4,5};
    cout<<"Elements of Dequeue before deletion at back : ";
    for(int i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.pop_back();
    cout<<"Elements of Dequeue after deletion at back : ";
    for(int i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}