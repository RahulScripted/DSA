// Question: Write a program to check whether a given number is even or odd.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    num % 2 == 0 ? cout<<"Even number" : cout<<"Odd number";
}