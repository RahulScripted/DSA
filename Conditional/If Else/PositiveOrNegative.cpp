// Question: Write a program to check whether a given number is positive or negative or zero.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num > 0){
        cout<<num<<" is a positive number";
    }
    else if(num == 0){
        cout<<"Enter number is zero";
    }
    else{
        cout<<num<<" is a negative number";
    }
}