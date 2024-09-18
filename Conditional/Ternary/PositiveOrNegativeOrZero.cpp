// Question: Write a program to check whether a given number is positive or negative or zero.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    num > 0 ? cout<<"Positive number" : num == 0 ? cout<<"Zero" : cout<<"Negative number";
}