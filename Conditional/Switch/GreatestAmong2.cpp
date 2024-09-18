// Question: Write a Program to find the maximum between two numbers. Using the switch statement

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    switch (num1 > num2){
        case 0:
            cout<<num2<<" is greater than "<<num1;
            break;
        case 1:
            cout<<num1<<" is greater than "<<num2;
            break;
    }
}