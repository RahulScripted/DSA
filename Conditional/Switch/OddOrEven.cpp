// Question: Write a Program to check whether a number is odd or even by Switch Statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    switch (num % 2 == 0){
        case 0:
            cout<<"Odd number";
            break;
        case 1:
            cout<<"Even number";
            break;
    }
}