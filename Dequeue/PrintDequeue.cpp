// Print a dequeue



#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq = {1,2,3,4,5};
    cout<<"Elements of Dequeue : ";
    for(int i = 0;i < dq.size();i++){
        cout<<dq[i]<<" ";
    }
}