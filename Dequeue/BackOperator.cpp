// use-case of back operator



#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq = {1,2,3,4,5};
    cout<<"Elements at back of Dequeue: "<<dq.back()<<endl;
}