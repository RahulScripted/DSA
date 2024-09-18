// Write a C++ program that swaps the values of two variables without third variable

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Before Swap : "<<num1<<" "<<num2<<endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"After Swap : "<<num1<<" "<<num2<<endl;
}