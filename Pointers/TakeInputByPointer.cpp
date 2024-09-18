// Take Input By Pointer

#include<iostream>
using namespace std;
int main(){
    int num1;
    int *n1 = &num1;
    cout<<"Enter first number : ";
    cin>>*n1;
    cout<<"Address : "<<n1<<" and value : "<<*n1;
}