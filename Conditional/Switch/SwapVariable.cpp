// Question: Write a program to swap the values of two numbers if the values of both variables are not the same using a switch statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,temp;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Before Swap : "<<num1<<" "<<num2<<endl;
    switch (num1 == num2){
        case 0:
            temp = num1;
            num1  = num2;
            num2 = temp;
            cout<<"After swap : "<<num1<<" "<<num2<<endl;
            break;
        case 1:
        cout<<"Numbers are same";
            break;
    }
}