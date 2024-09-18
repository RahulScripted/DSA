// use-case of empty operator



#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq = {1,2,3,4,5};
    if(dq.empty()) cout<<"Dequeue is empty"<<endl;
    else cout<<"Dequeue is not empty"<<endl;
}