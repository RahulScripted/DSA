// Write a C++ program to print memory allocation of an array

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"0th index address: "<<&arr[0]<<endl;
    cout<<"1st index address: "<<&arr[1]<<endl;
    cout<<"2nd index address: "<<&arr[2]<<endl;
    cout<<"3rd index address: "<<&arr[3]<<endl;
    cout<<"4th index address: "<<&arr[4]<<endl;
}