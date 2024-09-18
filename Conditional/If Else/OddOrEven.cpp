// Question: Write a program to check whether a given number is even or odd.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num % 2 == 0){
        cout<<num<<" is a even number";
    }
    else{
        cout<<num<<" is a odd number";
    }
}