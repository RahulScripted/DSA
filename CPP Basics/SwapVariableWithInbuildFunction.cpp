// Write a C++ program that swaps the values of two variables with in-build function

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Before Swap : "<<num1<<" "<<num2<<endl;
    swap(num1,num2);
    cout<<"After Swap : "<<num1<<" "<<num2<<endl;
}