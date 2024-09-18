// Write a program in C to show whether enter number is divisible by 2.

#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter a number : ";
    cin>>num1;
    if(num1 % 2 == 0){
        cout<<"Division is possible";
    }
    else{
        cout<<"Division is not possible";
    }
}