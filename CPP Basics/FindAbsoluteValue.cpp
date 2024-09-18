// Write a program to return the absolute value of a integer.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num < 0){
        cout<<"Absolute value will be : "<<num * (-1);
    }
    else{
        cout<<"Absolute value will be : "<<num;
    }
}