// Pointer Increment & Garbage value

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    cout<<"The address : "<<p<<" and value : "<<*p<<endl;
    p++;
    cout<<"The address : "<<p<<" and value : "<<*p; //This *p will give garbage value
}